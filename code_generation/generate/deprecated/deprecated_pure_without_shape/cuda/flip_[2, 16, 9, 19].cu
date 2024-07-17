extern "C" __global__ void __launch_bounds__(19) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) % 144) * 19) + ((int)threadIdx.x)) + 2736) - ((((int)blockIdx.x) / 144) * 2736))];
}

