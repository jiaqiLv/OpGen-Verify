extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ new_buffer) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 3)) < 9025) {
    new_buffer[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))];
  }
}

