extern "C" __global__ void __launch_bounds__(42) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 42) + ((int)threadIdx.x)) < 299) {
    MirrorPadInput[((((int)blockIdx.x) * 42) + ((int)threadIdx.x))] = data[((((13 <= ((((int)blockIdx.x) * 2) + (((int)threadIdx.x) / 21))) ? (40 - (((((int)blockIdx.x) * 42) + ((int)threadIdx.x)) / 13)) : ((((((int)blockIdx.x) * 42) + ((int)threadIdx.x)) < 13) ? 0 : ((((((int)blockIdx.x) * 42) + ((int)threadIdx.x)) / 13) - 1))) * 10) + (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 13) == 12) ? (21 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 13)) : (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 13) < 2) ? (1 - (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 13)) : ((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 13) - 2))))];
  }
}

