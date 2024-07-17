extern "C" __global__ void __launch_bounds__(3) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  MirrorPadInput[((((int)blockIdx.x) * 3) + ((int)threadIdx.x))] = data[((((140 <= ((((int)blockIdx.x) * 3) + ((int)threadIdx.x))) ? (12 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) / 20)) : ((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) < 20) ? 0 : ((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) / 20) - 1))) * 17) + (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 20) == 19) ? (35 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 20)) : (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 20) < 2) ? (1 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 20)) : ((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 20) - 2))))];
}

