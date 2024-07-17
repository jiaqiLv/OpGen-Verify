extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) < 1755) {
    T_reverse_sequence[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 1170) + 5850) - ((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 585) * 1170))];
  }
}

