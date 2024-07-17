extern "C" __global__ void __launch_bounds__(20) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) * 10) + (((int)threadIdx.x) >> 1)) % 42) * 2) + (((int)threadIdx.x) & 1)) + 336) - ((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 2)) / 21) * 84))];
}

