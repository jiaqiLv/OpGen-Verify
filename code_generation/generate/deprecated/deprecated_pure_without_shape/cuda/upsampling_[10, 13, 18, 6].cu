extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 12)) / 144) * 432) + ((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 12)) % 144) >> 1) / 2) * 12)) + ((((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) % 24) / 2))];
}

