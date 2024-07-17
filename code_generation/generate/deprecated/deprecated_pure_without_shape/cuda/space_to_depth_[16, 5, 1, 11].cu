extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = data[((((((((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) / 55) * 220) + ((((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 220) / 11) % 5) * 44)) + ((((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 220) / 11) / 10) * 22)) + ((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 11) * 2)) + ((((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 220) / 11) % 10) / 5))];
}

