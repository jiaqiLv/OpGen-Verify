extern "C" __global__ void __launch_bounds__(56) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) * 56) + ((int)threadIdx.x)) % 2660) + 18620) - ((((((int)blockIdx.x) * 2) + (((int)threadIdx.x) / 28)) / 95) * 2660))];
}

