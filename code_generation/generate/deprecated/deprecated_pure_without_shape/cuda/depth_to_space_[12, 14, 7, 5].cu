extern "C" __global__ void __launch_bounds__(35) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 35) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) / 12) * 490) + ((((((((int)blockIdx.x) & 3) * 7) + (((int)threadIdx.x) / 5)) >> 1) % 2) * 210)) + (((((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 10) % 2) * 105)) + (((((int)blockIdx.x) % 12) >> 2) * 35)) + ((((((((int)blockIdx.x) & 3) * 7) + (((int)threadIdx.x) / 5)) >> 1) / 2) * 5)) + ((((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 10) / 2))];
}

