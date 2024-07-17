extern "C" __global__ void __launch_bounds__(22) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  MirrorPadInput[((((int)blockIdx.x) * 22) + ((int)threadIdx.x))] = data[((((6 <= ((int)blockIdx.x)) ? (10 - ((int)blockIdx.x)) : ((((int)blockIdx.x) < 1) ? (0 - ((int)blockIdx.x)) : (((int)blockIdx.x) - 1))) * 19) + ((((int)threadIdx.x) == 21) ? 18 : ((((int)threadIdx.x) < 2) ? (1 - ((int)threadIdx.x)) : (((int)threadIdx.x) - 2))))];
}

