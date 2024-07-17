extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) / 56) * 560) + ((((((int)blockIdx.x) % 56) >> 1) / 2) * 40)) + ((((int)blockIdx.x) & 1) * 20)) + (((int)threadIdx.x) / 2))];
}

