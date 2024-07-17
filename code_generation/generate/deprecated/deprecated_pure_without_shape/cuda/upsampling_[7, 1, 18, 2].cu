extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) >> 4) * 144) + ((((((((int)blockIdx.x) & 15) * 9) + (((int)threadIdx.x) >> 2)) >> 1) / 2) * 4)) + ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) & 7) / 2))];
}

