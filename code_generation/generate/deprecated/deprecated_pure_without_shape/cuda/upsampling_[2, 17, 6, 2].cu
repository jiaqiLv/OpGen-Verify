extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = data[((((((int)blockIdx.x) >> 3) * 48) + (((((((int)blockIdx.x) & 7) * 3) + (((int)threadIdx.x) >> 3)) / 2) * 4)) + ((((int)threadIdx.x) & 7) / 2))];
}

