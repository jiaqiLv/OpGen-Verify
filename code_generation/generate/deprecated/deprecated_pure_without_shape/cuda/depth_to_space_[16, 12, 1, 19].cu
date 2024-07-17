extern "C" __global__ void __launch_bounds__(57) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) >> 2) * 228) + (((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 19)) & 3) >> 1) * 114)) + (((((((int)blockIdx.x) * 19) + ((int)threadIdx.x)) % 38) % 2) * 57)) + (((((((int)blockIdx.x) & 3) * 3) + (((int)threadIdx.x) / 19)) >> 2) * 19)) + ((((((int)blockIdx.x) * 19) + ((int)threadIdx.x)) % 38) / 2))];
}

