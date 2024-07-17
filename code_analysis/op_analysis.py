import tvm
from tvm import te,topi
import numpy as np

import tvm.topi


if __name__ == '__main__':
    data = te.placeholder(shape=(10,12,14),dtype='float32',name='data')
    weight = te.placeholder(shape=(10,12,14),dtype='float32',name='weight')
    # out = topi.argsort(data=data)
    # out = topi.argmax(data,axis=1)
    # out = topi.nn.adaptive_pool(data,output_size=(8,10),pool_type='max')
    # out = topi.nn.adaptive_pool3d(data,output_size=(8,10,12),pool_type='max')
    # out = topi.nn.flatten(data=data)
    # out = topi.nn.prelu(data,weight)
    func_call = getattr(eval('tvm.topi.nn'),'relu')
    out = func_call(data)
    # out = topi.nn.relu(data)
    # out = te.sum(data,axis=1)
    # out = topi.argmax(data=data,axis=1)
    # out = topi.divide(data,weight)
    # out = topi.equal(data,weight)
    out = topi.transpose(data,(1,0,2))
    print(data,out)
    print(len(out.shape))
    """Real Execute"""
    input_tensor = np.random.uniform(-1,1,size=(10,12,14)).astype('float32')
    
