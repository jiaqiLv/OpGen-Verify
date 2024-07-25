import os
import json
from os.path import join,exists


if __name__ == '__main__':
    BASIC_PATH = '/code/OpGen-Verify/code_generation/generate/deprecated/deprecated_pure_without_shape'
    # GET file name list
    c_files = os.listdir(join(BASIC_PATH,'c'))
    print(c_files)