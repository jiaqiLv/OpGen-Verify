extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  T_reverse_sequence[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) % 480) + 8160) - ((((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 5)) / 15) * 480))];
}

