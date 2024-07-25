extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) % 7565) * 36) + ((int)threadIdx.x)) + 19608480) - ((((int)blockIdx.x) / 7565) * 272340))];
}

