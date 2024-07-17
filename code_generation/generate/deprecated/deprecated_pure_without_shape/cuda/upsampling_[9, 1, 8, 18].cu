extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) / 36) * 576) + ((((((((int)blockIdx.x) % 36) * 8) + (((int)threadIdx.x) >> 3)) / 9) / 2) * 36)) + ((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) % 72) / 2))];
}

