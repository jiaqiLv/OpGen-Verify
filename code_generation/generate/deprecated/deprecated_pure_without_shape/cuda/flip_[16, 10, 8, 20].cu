extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) % 50) * 32) + ((int)threadIdx.x)) + 24000) - ((((int)blockIdx.x) / 50) * 1600))];
}

