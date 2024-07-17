extern "C" __global__ void __launch_bounds__(56) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 3)) / 40) * 80) + ((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 3)) % 40) / 10) / 2) * 40)) + ((((((int)blockIdx.x) * 56) + ((int)threadIdx.x)) % 80) / 2))];
}

