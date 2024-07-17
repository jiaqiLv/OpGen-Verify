extern "C" __global__ void __launch_bounds__(57) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) >> 5) * 456) + ((((((((int)blockIdx.x) & 31) * 3) + (((int)threadIdx.x) / 19)) >> 2) / 2) * 38)) + ((((((int)blockIdx.x) * 57) + ((int)threadIdx.x)) % 76) / 2))];
}

