extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_reverse_sequence, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 495) {
    T_reverse_sequence[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[(((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 198) + 792) - ((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 99) * 198))];
  }
}

