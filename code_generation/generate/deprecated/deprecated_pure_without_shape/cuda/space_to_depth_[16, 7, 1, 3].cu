extern "C" __global__ void __launch_bounds__(21) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 21) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) >> 2) * 84) + ((((int)threadIdx.x) / 3) * 12)) + (((((((int)blockIdx.x) & 3) * 7) + (((int)threadIdx.x) / 3)) / 14) * 6)) + ((((int)threadIdx.x) % 3) * 2)) + (((((((int)blockIdx.x) & 3) * 7) + (((int)threadIdx.x) / 3)) % 14) / 7))];
}

