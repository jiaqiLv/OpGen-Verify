extern "C" __global__ void __launch_bounds__(55) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 55) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) / 320) * 17600) + ((((((int)blockIdx.x) % 320) >> 2) % 20) * 880)) + (((((((int)blockIdx.x) & 3) * 11) + (((int)threadIdx.x) / 5)) >> 2) * 80)) + ((((((int)blockIdx.x) % 320) >> 2) / 40) * 40)) + ((((((int)blockIdx.x) * 15) + ((int)threadIdx.x)) % 20) * 2)) + ((((((int)blockIdx.x) % 320) >> 2) % 40) / 20))];
}

