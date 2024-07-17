extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 2)) < 12597) {
    space_to_depth[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[(((((((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 2)) / 969) * 3876) + ((((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) % 3876) / 57) % 17) * 228)) + (((((((int)blockIdx.x) * 7) + ((int)threadIdx.x)) % 57) / 19) * 76)) + ((((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) % 3876) / 57) / 34) * 38)) + ((((((int)blockIdx.x) * 7) + ((int)threadIdx.x)) % 19) * 2)) + ((((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) % 3876) / 57) % 34) / 17))];
  }
}

