extern "C" __global__ void __launch_bounds__(12) default_function_kernel(float* __restrict__ data, float* __restrict__ new_buffer) {
  new_buffer[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = data[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))];
}

