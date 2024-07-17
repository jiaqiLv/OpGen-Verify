import numpy as np
from scipy.linalg import det
from math import factorial
from OpNode import OpNode
import copy
from sklearn.decomposition import PCA

def adjacency_list_to_matrix(G):
        nodes = list(G.keys())
        num_nodes = len(nodes)
        # 创建初始的全零邻接矩阵
        adj_matrix = np.zeros((num_nodes, num_nodes), dtype=int)
        # 遍历邻接表,填充邻接矩阵
        for node, neighbors in G.items():
            node_idx = nodes.index(node)
            for neighbor in neighbors:
                neighbor_idx = nodes.index(neighbor)
                adj_matrix[node_idx, neighbor_idx] = 1
        return adj_matrix

def count_spanning_trees(G):
    # (1) undirected graph
    n = len(G)
    L = np.diag(np.sum(G, axis=1)) - G  # 计算拉普拉斯矩阵
    return int(np.abs(det(L[:-1, :-1])))  # 计算任意 (n-1) x (n-1) 主子式的行列式的绝对值
    # (2) directed graph
    # n = len(G)
    # k = np.linalg.matrix_rank(G)  # 计算图的秩
    # # 计算 Tutte 多项式的系数
    # coeff = 0
    # for i in range(n):
    #     coeff += (-1)**i * factorial(n-i) * (n-i)**(n-1-i)
    # # 计算生成树个数
    # spanning_arborescences = coeff / factorial(n)
    # return int(spanning_arborescences)

def graph_conversion(G):
    undirected_graph = G + G.T
    undirected_graph[undirected_graph > 1] = 1
    return undirected_graph

def calculate_node_score(op_graph,cal_method='page_rank'):
    """
    r_i = 1 - \tao(G-v_i) / \tao(G)
    """
    node_type_score_list = []
    """Get the adjacency matrix of the entire graph """
    G = copy.deepcopy(op_graph)
    adj_matrix_G = adjacency_list_to_matrix(G.adjacency_list)

    if cal_method == 'node_del':
        # BUG: op_graph should be a directed graph
        score_list = []
        adj_matrix_G = graph_conversion(adj_matrix_G)
        print(adj_matrix_G)
        tao_G = count_spanning_trees(adj_matrix_G) # \tao(G)
        print('tao_G:', tao_G)
        node_num = len(G.node_list)
        for i in range(node_num):
            sub_graph = remove_vertex(G,node_idx=i)
            adj_matrix_sub_graph = adjacency_list_to_matrix(sub_graph.adjacency_list)
            adj_matrix_sub_graph = graph_conversion(adj_matrix_sub_graph)
            print(adj_matrix_sub_graph)
            tao_sub_G = count_spanning_trees(adj_matrix_sub_graph) # \tao(G-v_i)
            score_list.append(1-tao_sub_G/tao_G)
    elif cal_method == 'page_rank':
        score_list = page_rank(adj_matrix_G)
        for _node in G.node_list:
            if _node.op_name == 'ph':
                node_type_score_list.append(0.5)
            else:
                node_type_score_list.append(1)
    print('node_type_score_list:', node_type_score_list)
    print('score_list:', score_list)
    return score_list

def page_rank(adj_matrix, damping_factor=0.85, max_iterations=100, tolerance=1e-6):
    n = adj_matrix.shape[0]  # 节点数量
    # 初始化 PageRank 值为均匀分布
    page_ranks = np.ones(n) / n
    for _ in range(max_iterations):
        new_page_ranks = np.zeros(n)
        for i in range(n):
            # 计算节点 i 的 PageRank 值
            for j in range(n):
                if adj_matrix[j, i] > 0:  # 如果节点 j 指向节点 i
                    new_page_ranks[i] += page_ranks[j] / np.sum(adj_matrix[j, :])
            
            new_page_ranks[i] = (1 - damping_factor) / n + damping_factor * new_page_ranks[i]
        # 检查是否收敛
        if np.sum(np.abs(new_page_ranks - page_ranks)) < tolerance:
            break
        page_ranks = new_page_ranks
    return page_ranks

def remove_vertex(op_graph, node_idx):
    _op_graph = copy.deepcopy(op_graph)
    removed_node = _op_graph.node_list[node_idx]
    for node, neighbors in _op_graph.adjacency_list.items():
        if removed_node in neighbors:
            neighbors.remove(removed_node)
            if removed_node in _op_graph.leaf_list:
                _op_graph.leaf_list.remove(removed_node)
            if removed_node in _op_graph.node_list:
                _op_graph.node_list.remove(removed_node)
            if len(neighbors)==0:
                _op_graph.leaf_list.append(node)
    del _op_graph.adjacency_list[removed_node]
    return _op_graph