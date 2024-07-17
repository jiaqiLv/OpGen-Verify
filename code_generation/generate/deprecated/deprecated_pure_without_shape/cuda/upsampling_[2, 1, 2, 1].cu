extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((int)threadIdx.x)] = data[((((((int)threadIdx.x) >> 5) * 8) + ((((((int)threadIdx.x) & 31) >> 2) / 2) * 2)) + ((((int)threadIdx.x) & 3) / 2))];
}

