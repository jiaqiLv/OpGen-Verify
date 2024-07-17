extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) / 96) * 1152) + ((((((((int)blockIdx.x) % 96) * 3) + (((int)threadIdx.x) >> 4)) >> 2) / 2) * 32)) + ((((((int)blockIdx.x) * 48) + ((int)threadIdx.x)) & 63) / 2))];
}

