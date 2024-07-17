extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ data, float* __restrict__ new_buffer) {
  new_buffer[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = data[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))];
}

