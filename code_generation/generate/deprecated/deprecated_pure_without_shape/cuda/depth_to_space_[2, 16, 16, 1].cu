extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) >> 3) * 256) + (((((int)threadIdx.x) >> 1) % 2) * 128)) + ((((int)threadIdx.x) & 1) * 64)) + ((((int)blockIdx.x) & 7) * 8)) + ((((int)threadIdx.x) >> 1) / 2))];
}

