extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = data[((((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 20)) >> 6) * 2240) + ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 2)) % 320) >> 3) % 2) * 640)) + (((((((int)blockIdx.x) * 28) + ((int)threadIdx.x)) & 31) % 2) * 320)) + ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 2)) % 320) >> 3) / 2) * 16)) + ((((((int)blockIdx.x) * 28) + ((int)threadIdx.x)) & 31) / 2))];
}

