# import tvm
from tvm import (te,
                 auto_scheduler,
                 runtime,
                 topi)

if __name__ == '__main__':
    data = te.placeholder((2,3,10), name='data', dtype='float32')
    kernel = te.placeholder((5,3,3), name='kernel', dtype='float32')
    out = topi.nn.conv1d(data, kernel, strides=2, padding='VALID', dilation=1, data_layout='NCW')
    print(out)