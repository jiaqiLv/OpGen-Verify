extern "C" __global__ void __launch_bounds__(23) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  MirrorPadInput[((((int)blockIdx.x) * 23) + ((int)threadIdx.x))] = data[((((378 <= ((((int)blockIdx.x) * 23) + ((int)threadIdx.x))) ? (40 - (((((int)blockIdx.x) * 23) + ((int)threadIdx.x)) / 18)) : ((((((int)blockIdx.x) * 23) + ((int)threadIdx.x)) < 18) ? 0 : ((((((int)blockIdx.x) * 23) + ((int)threadIdx.x)) / 18) - 1))) * 15) + (((((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 18) == 17) ? (31 - (((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 18)) : (((((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 18) < 2) ? (1 - (((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 18)) : ((((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 18) - 2))))];
}

