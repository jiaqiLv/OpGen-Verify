extern "C" __global__ void __launch_bounds__(12) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) / 18) * 378) + (((((int)blockIdx.x) % 18) % 2) * 108)) + ((((int)threadIdx.x) % 2) * 54)) + (((((int)blockIdx.x) % 18) / 2) * 6)) + (((int)threadIdx.x) / 2))];
}

