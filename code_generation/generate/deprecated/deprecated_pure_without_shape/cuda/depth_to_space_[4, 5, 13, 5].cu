extern "C" __global__ void __launch_bounds__(26) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 26) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) / 10) * 325) + ((((((((int)blockIdx.x) % 10) * 13) + (((int)threadIdx.x) >> 1)) / 5) % 2) * 130)) + (((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 10) % 2) * 65)) + ((((((((int)blockIdx.x) % 10) * 13) + (((int)threadIdx.x) >> 1)) / 5) / 2) * 5)) + ((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 10) / 2))];
}

