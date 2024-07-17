extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  MirrorPadInput[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = data[((((21 <= ((int)blockIdx.x)) ? (26 - (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) / 3)) : ((((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) < 3) ? 0 : ((((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) / 3) - 1))) * 9) + (((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12) == 11) ? (19 - (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12)) : (((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) % 6) < 1) ? (1 - (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12)) : ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12) - 2))))];
}

