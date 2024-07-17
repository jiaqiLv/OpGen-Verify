extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 207) {
    MirrorPadInput[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[((((189 <= ((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1))) ? (40 - (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 9)) : ((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 9) ? 0 : ((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 9) - 1))) * 15) + (((((((int)blockIdx.x) * 14) + ((int)threadIdx.x)) % 18) == 17) ? (31 - (((((int)blockIdx.x) * 14) + ((int)threadIdx.x)) % 18)) : (((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 1)) % 9) < 1) ? (1 - (((((int)blockIdx.x) * 14) + ((int)threadIdx.x)) % 18)) : ((((((int)blockIdx.x) * 14) + ((int)threadIdx.x)) % 18) - 2))))];
  }
}

