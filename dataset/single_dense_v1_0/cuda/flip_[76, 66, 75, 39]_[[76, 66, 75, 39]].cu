extern "C" __global__ void __launch_bounds__(54) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) % 3575) * 54) + ((int)threadIdx.x)) + 14478750) - ((((int)blockIdx.x) / 3575) * 193050))];
}

