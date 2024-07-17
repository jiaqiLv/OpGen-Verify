extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) / 7) * 140) + ((((int)threadIdx.x) >> 3) * 56)) + (((((int)threadIdx.x) & 7) % 2) * 28)) + ((((int)blockIdx.x) % 7) * 4)) + ((((int)threadIdx.x) & 7) / 2))];
}

