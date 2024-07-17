extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 4)) < 3825) {
    depth_to_space[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[(((((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 4)) / 255) * 4335) + ((((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) % 510) / 15) % 2) * 2040)) + (((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 30) % 2) * 1020)) + (((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 2)) % 1020) / 255) * 255)) + ((((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) % 510) / 15) / 2) * 15)) + ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 30) / 2))];
  }
}

