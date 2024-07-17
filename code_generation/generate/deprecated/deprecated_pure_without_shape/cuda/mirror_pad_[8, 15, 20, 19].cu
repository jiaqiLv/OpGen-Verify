extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 253) {
    MirrorPadInput[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[((((231 <= ((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1))) ? (40 - (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 11)) : ((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 11) ? 0 : ((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 11) - 1))) * 19) + (((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 22) == 21) ? (39 - (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 22)) : (((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 1)) % 11) < 1) ? (1 - (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 22)) : ((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 22) - 2))))];
  }
}

