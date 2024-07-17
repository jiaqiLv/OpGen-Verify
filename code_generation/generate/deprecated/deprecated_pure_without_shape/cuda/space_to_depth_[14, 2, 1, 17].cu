extern "C" __global__ void __launch_bounds__(28) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] = data[((((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 2)) / 34) * 136) + ((((((((int)blockIdx.x) * 28) + ((int)threadIdx.x)) % 136) / 17) % 2) * 68)) + ((((((((int)blockIdx.x) * 28) + ((int)threadIdx.x)) % 136) / 17) / 4) * 34)) + ((((((int)blockIdx.x) * 11) + ((int)threadIdx.x)) % 17) * 2)) + ((((((((int)blockIdx.x) * 28) + ((int)threadIdx.x)) % 136) / 17) % 4) / 2))];
}

