extern "C" __global__ void __launch_bounds__(38) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 38) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) / 80) * 760) + ((((((int)blockIdx.x) % 80) >> 1) / 2) * 38)) + ((((int)blockIdx.x) & 1) * 19)) + (((int)threadIdx.x) / 2))];
}

