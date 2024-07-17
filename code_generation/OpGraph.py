from ast import List
from collections import defaultdict
from OpNode import OpNode,op_info_list
import random
import tvm
from tvm import (
    te,
    auto_scheduler,
    topi
)
from utils_complex import ArgsGen
import networkx as nx
import numpy as np
import copy
import matplotlib.pyplot as plt
from scipy.linalg import det
from math import factorial
from graph_utils import (
    count_spanning_trees,
    graph_conversion,
    calculate_node_score
    )

input_shape_list = []
output_shape_list = []

class OpGraph:
    def __init__(self) -> None:
        self.counter = 0
        self.adjacency_list = defaultdict(list)
        self.in_degree = {}
        self.leaf_list = [] # (output)
        self.node_list = [] # all operators
        self.input_list = [] # te.placehoder(input)
        """init OpGraph"""
        self.add_vertex('ph')
    
    def __str__(self) -> str:
        result = ""
        for node, neighbors in self.adjacency_list.items():
            neighbors_name = []
            for neighbor in neighbors:
                neighbors_name.append(neighbor.node_id)
            result += f"{node}: {neighbors_name}\n"
        return result
    
    def adjacency_list_to_matrix(self):
        nodes = list(self.adjacency_list.keys())
        num_nodes = len(nodes)
        # 创建初始的全零邻接矩阵
        adj_matrix = np.zeros((num_nodes, num_nodes), dtype=int)
        # 遍历邻接表,填充邻接矩阵
        for node, neighbors in self.adjacency_list.items():
            node_idx = nodes.index(node)
            for neighbor in neighbors:
                neighbor_idx = nodes.index(neighbor)
                adj_matrix[node_idx, neighbor_idx] = 1
        return adj_matrix
    
    def cal_criteria(self):
        adj_list = {}
        for _node in self.adjacency_list:
            if _node.node_id not in adj_list:
                adj_list[_node.node_id] = []
                for _next_node in self.adjacency_list[_node]:
                    adj_list[_node.node_id].append(_next_node.node_id)
        # adj_list = copy.deepcopy(self.adjacency_list)
        G = nx.DiGraph()
        G.add_nodes_from(adj_list.keys())
        for node, neighbors in adj_list.items():
            if len(neighbors) == 0:
                continue
            G.add_edges_from([(node, neighbor) for neighbor in neighbors])

        """Visualize the graph"""
        pos = nx.spring_layout(G)
        nx.draw_networkx_nodes(G, pos, node_color='lightblue')
        nx.draw_networkx_edges(G, pos, edge_color='gray', arrowsize=20)
        nx.draw_networkx_labels(G, pos)
        plt.show()
        plt.savefig('graph.png')

        # 计算网络指标
        N = G.number_of_nodes()  # 总节点数
        E = G.number_of_edges()  # 总边数
        avg_degree = 2 * E / N   # 平均度
        # 计算聚集系数
        clustering = nx.clustering(G)
        avg_clustering = sum(clustering.values()) / N  # 平均聚集系数
        # 计算最短路径长度
        shortest_paths = nx.shortest_path_length(G)
        path_lengths = []
        for _, distances in shortest_paths:
            path_lengths.extend(distances.values())
        avg_path_length = np.mean(path_lengths)  # 平均最短路径长度
        # 输出结果
        # print(f"节点数 (N): {N}")
        # print(f"边数 (E): {E}")
        # print(f"平均度 (<k>): {avg_degree:.2f}")
        # print(f"平均聚集系数 (<c>): {avg_clustering:.2f}")
        # print(f"平均最短路径长度 (L): {avg_path_length:.2f}")
        return N,E,avg_degree,avg_clustering,avg_path_length
    
    def add_vertex(self, op_name, shape=None):
        # print('self.counter:', self.counter)
        _node = OpNode(op_name=op_name,node_id=self.counter)
        # print('node(init):', _node)
        if shape is None:
            # Generate Args
            shape = self.generate_args(_node,dim=3)
        self.counter += 1
        self.adjacency_list[_node] = []
        self.in_degree[_node] = 0
        self.node_list.append(_node)
        self.leaf_list.append(_node)

        # Fill with real data
        if op_name == 'ph':
            self.input_list.append(_node)
            # print('node.node_id:', node.node_id)
            data = te.placeholder(shape,name=f'{_node.node_id}')
            # print('data:', data)
            # print('node:', _node)
            _node.set_input(data)
            _node.set_output(data)
            # for next_step in self.adjacency_list[node]:
            #     next_step.set_input(data)
        else:
            if _node.is_input_ready():
                _tensor_list = []
                for _tensor in _node.input_tensors:
                    _tensor_list.append(_tensor['value'])
                out = _node.func_call(*_tensor_list)
                _node.set_output(out)
                # for next_node in self.adjacency_list[node]:
                #     next_node.set_input(out)
        # print('node information:', node, node.node_id)
        return _node

    def add_edge(self,source_node:OpNode,target_node:OpNode):
        def op_exec(_source_node):
            self.adjacency_list[_source_node].append(target_node)
            self.in_degree[target_node] += 1
            if _source_node in self.leaf_list:
                self.leaf_list.remove(_source_node)
            if target_node.is_input_ready():
                _tensor_list = []
                for _tensor in target_node.input_tensors:
                    _tensor_list.append(_tensor['value'])
                # print('_tensor_list(ready to compute):', _tensor_list)
                out = target_node.func_call(*_tensor_list)
                target_node.set_output(out)
        # Fill with real data
        # print('@@@@@---->',source_node.node_id,target_node.node_id)
        set_input_result = target_node.set_input(source_node.output_tensors[0]['value'])
        # print('source_node,target_node:', source_node,target_node)
        if not set_input_result:
            # print('target_node:',target_node)
            # print('target_node.variable_dict:', target_node.variable_dict)
            """Generate legal shape for target node"""
            next_input_shape = target_node.get_next_input_shape()
            # print('next_input_shape:', next_input_shape)
            _input_shape = []
            for key in next_input_shape:
                if key in target_node.variable_dict:
                    _input_shape.append(target_node.variable_dict[key])
                else:
                    _input_shape.append(random.randint(1,10))
            # print('tuple(_input_shape):', tuple(_input_shape))
            # print('!!!!!(1)---->',self)
            spare_source_node = self.add_vertex('ph',tuple(_input_shape)) # BUG
            # print('!!!!!(2)---->',self)
            # print('spare_source_node:', spare_source_node)
            target_node.set_input(spare_source_node.output_tensors[0]['value'])
            # print('spare_source_node,target_node:', spare_source_node,target_node)
            op_exec(spare_source_node)
        else:
            op_exec(source_node)

    def show_node_list_info(self,node_list):
        node_id_list = []
        for _node in node_list:
            node_id_list.append(_node.node_id)
        return node_id_list
    
    def generate_args(self,node:OpNode,dim=None):
        shape_info = []
        for _input in node.input_tensors:
            if 'value' not in _input:
                shape_info = _input['shape']
                break
        args_gen = ArgsGen(shape_info)
        op_args = args_gen.get_param_values()
        op_args = op_args[:dim]
        return tuple(op_args)

    def extend_graph(self, op_name):
        # print('self.node_list:', self.show_node_list_info(self.node_list))
        # print('self.leaf_list:', self.show_node_list_info(self.leaf_list))
        new_node = self.add_vertex(op_name)
        """1. add te.placehoder(input)"""
        if len(new_node.input_tensors) > len(self.node_list)-1:
            for _ in range(len(new_node.input_tensors)-len(self.node_list)+1):
                self.add_vertex('ph')
        random.seed(42)
        # TODO: Check whether selected node can form legal computation step
        sub_node_list = [_node for _node in self.node_list if _node != new_node]
        # selected_nodes = sub_node_list[:len(new_node.input_tensors)]
        selected_nodes = random.sample(sub_node_list,len(new_node.input_tensors))
        # print('#####---->selected_nodes:', self.show_node_list_info(selected_nodes))
        for _ in selected_nodes:
            self.add_edge(_,new_node)

    def topological_sort(self):
        queue = [vertex for vertex in self.in_degree if self.in_degree[vertex] == 0]
        topological_order = []

        while queue:
            vertex = queue.pop(0)
            topological_order.append(vertex)

            for neighbor in self.adjacency_list[vertex]:
                self.in_degree[neighbor] -= 1
                if self.in_degree[neighbor] == 0:
                    queue.append(neighbor)

        if len(topological_order) != len(self.in_degree):
            return None  # 存在环,无法求出拓扑序列
        else:
            return topological_order
    
    def extract_op_name(self):
        topo_order = self.topological_sort()
        if topo_order:
            print("Topological order:", self.show_node_list_info(topo_order))
        else:
            print("Graph contains a cycle, no topological order exists.")
        op_name = ''
        for i,step in enumerate(topo_order):
            if i != 0:
                op_name += '-'
            op_name += step.node_id
        print('op_name:', op_name)
        return op_name
    
def add_calculation_steps(op_graph,op_list):
    # (1) select directly from op_info_list
    # for i in range(5):
    #     select_op = random.sample(op_info_list,1)
    #     if select_op[0]['op_name'] == 'ph':
    #         continue
    #     op_graph.extend_graph(select_op[0]['op_name'])

    # (2) load from fixed op_list
    for _op in op_list:
        op_graph.extend_graph(_op)
        calculate_node_score(op_graph=op_graph)

        # print('self.node_list:', op_graph.show_node_list_info(op_graph.node_list))
        # print('self.leaf_list:', op_graph.show_node_list_info(op_graph.leaf_list))
        # print('===================================')

    # op_graph.extend_graph('cos')
    # print('******---->',op_graph)
    # op_graph.extend_graph('add')
    # print('******---->',op_graph)
    # op_graph.extend_graph('batch_matmul')
    # print('******---->',op_graph)
    # op_graph.extend_graph('sin')
    # print('******---->',op_graph)

@auto_scheduler.register_workload
def topology_expansion(op_list:List):
    """1. Init op graph"""
    op_graph = OpGraph()

    """2. Add calculation steps"""
    add_calculation_steps(op_graph,op_list) # check if the step is legal at the same time

    global input_shape_list
    if len(input_shape_list) == 0:
        for _node in op_graph.input_list:
            if _node.op_name != 'ph':
                raise ValueError(f'Input op should be placeholder, but get {_node.op_name}')
            input_shape_list.append(_node.input_tensors[0]['value'].shape)
    global output_shape_list
    if len(output_shape_list) == 0:
        for _node in op_graph.leaf_list:
            output_shape_list.append(_node.output_tensors[0]['value'].shape)

    print('op_graph.node_list:', op_graph.node_list)
    calculate_node_score(op_graph)

    print('op_graph.adjacency_list:', op_graph.adjacency_list)
    adjacency_matrix = op_graph.adjacency_list_to_matrix()
    adjacency_matrix = graph_conversion(adjacency_matrix)
    print(adjacency_matrix)
    spanning_trees_num = count_spanning_trees(adjacency_matrix)
    print('spanning_trees_num:', spanning_trees_num)

    op_graph.cal_criteria()

    """3. Get topology order"""
    topo_order = op_graph.topological_sort()
    op_graph.extract_op_name()
    if topo_order:
        print("Topological order:", op_graph.show_node_list_info(topo_order))
    else:
        print("Graph contains a cycle, no topological order exists.")
    print('op_graph:', op_graph)
    print('op_graph.leaf_list:', op_graph.show_node_list_info(op_graph.leaf_list))
    print('op_graph.input_list:', op_graph.show_node_list_info(op_graph.input_list))
    """5. Extract input and output tensor"""
    # Eliminate independent node
    for _node in op_graph.input_list:
        if _node in op_graph.leaf_list:
            op_graph.input_list.remove(_node)
            op_graph.leaf_list.remove(_node)

    ret = []
    for _node in op_graph.input_list:
        # print(_node.input_tensors[0]['value'])
        ret.append(_node.input_tensors[0]['value'])
    for _node in op_graph.leaf_list:
        # print(_node.output_tensors[0]['value'])
        ret.append(_node.output_tensors[0]['value'])
    print(ret)
    return ret

if __name__ == '__main__':
    op_list = []
    for i in range(2):
            select_op = random.sample(op_info_list,1)
            if select_op[0]['op_name'] == 'ph':
                continue
            else:
                op_list.append(select_op[0]['op_name'])
    topology_expansion(op_list)
    