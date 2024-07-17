extern "C" __global__ void __launch_bounds__(20) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) / 96) * 2040) + ((((((((int)blockIdx.x) % 24) * 5) + (((int)threadIdx.x) >> 2)) / 6) % 2) * 960)) + (((((((int)blockIdx.x) * 20) + ((int)threadIdx.x)) % 24) % 2) * 480)) + (((((int)blockIdx.x) % 96) / 24) * 120)) + ((((((((int)blockIdx.x) % 24) * 5) + (((int)threadIdx.x) >> 2)) / 6) / 2) * 12)) + ((((((int)blockIdx.x) * 20) + ((int)threadIdx.x)) % 24) / 2))];
}

