extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) / 15) * 240) + ((((((((int)blockIdx.x) % 15) * 4) + (((int)threadIdx.x) >> 4)) / 3) / 2) * 24)) + ((((((int)blockIdx.x) * 16) + ((int)threadIdx.x)) % 48) / 2))];
}

