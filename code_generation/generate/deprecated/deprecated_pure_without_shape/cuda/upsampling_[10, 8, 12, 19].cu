extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) / 57) * 912) + ((((((((int)blockIdx.x) % 57) * 16) + (((int)threadIdx.x) >> 2)) / 19) / 2) * 38)) + ((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) % 76) / 2))];
}

