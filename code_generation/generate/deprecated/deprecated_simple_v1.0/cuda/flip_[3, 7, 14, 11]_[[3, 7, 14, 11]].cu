extern "C" __global__ void __launch_bounds__(49) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 49) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) % 22) * 49) + ((int)threadIdx.x)) + 2156) - ((((int)blockIdx.x) / 22) * 1078))];
}

