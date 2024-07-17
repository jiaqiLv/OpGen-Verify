extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) / 24) * 990) + ((((((((int)blockIdx.x) % 12) * 3) + (((int)threadIdx.x) / 10)) >> 1) % 2) * 360)) + (((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 20) % 2) * 180)) + (((((int)blockIdx.x) % 24) / 12) * 90)) + ((((((((int)blockIdx.x) % 12) * 3) + (((int)threadIdx.x) / 10)) >> 1) / 2) * 10)) + ((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 20) / 2))];
}

