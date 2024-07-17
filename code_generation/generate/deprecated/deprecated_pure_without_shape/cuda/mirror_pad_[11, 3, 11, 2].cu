extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) < 35) {
    MirrorPadInput[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = data[((((15 <= ((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2))) ? (22 - (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) / 5)) : ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) < 5) ? 0 : ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) / 5) - 1))) * 2) + (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 5) == 4) ? (5 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 5)) : (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 5) < 2) ? (1 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 5)) : ((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 5) - 2))))];
  }
}

