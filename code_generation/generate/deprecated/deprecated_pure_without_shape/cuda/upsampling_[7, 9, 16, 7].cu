extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) / 28) * 448) + ((((((((int)blockIdx.x) % 28) * 16) + (((int)threadIdx.x) >> 2)) / 7) / 2) * 14)) + ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 28) / 2))];
}

