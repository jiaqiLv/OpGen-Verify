extern "C" __global__ void __launch_bounds__(33) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 33) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) >> 4) * 660) + ((((((((int)blockIdx.x) * 33) + ((int)threadIdx.x)) % 176) >> 3) % 2) * 264)) + ((((((int)blockIdx.x) + ((int)threadIdx.x)) & 7) % 2) * 132)) + (((((((int)blockIdx.x) & 15) * 3) + (((int)threadIdx.x) / 11)) >> 4) * 44)) + ((((((((int)blockIdx.x) * 33) + ((int)threadIdx.x)) % 176) >> 3) / 2) * 4)) + (((((int)blockIdx.x) + ((int)threadIdx.x)) & 7) / 2))];
}

