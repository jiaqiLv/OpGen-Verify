extern "C" __global__ void __launch_bounds__(13) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))] = data[((((((((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) >> 5) * 32) + ((((((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) & 31) >> 1) % 4) * 8)) + ((((((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) & 31) >> 1) / 8) * 4)) + (((((int)blockIdx.x) + ((int)threadIdx.x)) & 1) * 2)) + ((((((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) & 31) >> 1) % 8) / 4))];
}

