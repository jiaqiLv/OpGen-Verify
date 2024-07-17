extern "C" __global__ void __launch_bounds__(54) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 18)) / 80) * 360) + ((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 18)) % 80) >> 2) / 2) * 36)) + ((((((int)blockIdx.x) * 54) + ((int)threadIdx.x)) % 72) / 2))];
}

