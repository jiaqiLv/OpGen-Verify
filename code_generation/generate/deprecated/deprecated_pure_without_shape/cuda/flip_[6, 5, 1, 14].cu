extern "C" __global__ void __launch_bounds__(6) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 6) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 70) + 350) - ((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) >> 1)) / 35) * 70))];
}

