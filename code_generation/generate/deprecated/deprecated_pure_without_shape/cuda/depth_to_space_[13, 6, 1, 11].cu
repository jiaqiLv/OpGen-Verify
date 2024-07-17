extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) < 143) {
    depth_to_space[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) / 11) * 66) + (((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) % 22) / 11) * 22)) + (((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 22) % 2) * 11)) + ((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 22) / 2))];
  }
}

