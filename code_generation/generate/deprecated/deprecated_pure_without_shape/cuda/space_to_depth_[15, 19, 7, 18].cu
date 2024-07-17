extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = data[(((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 12)) / 798) * 9576) + ((((((((int)blockIdx.x) * 10) + (((int)threadIdx.x) / 6)) % 1596) / 21) % 19) * 504)) + (((((((int)blockIdx.x) * 10) + (((int)threadIdx.x) / 6)) % 21) / 3) * 72)) + ((((((((int)blockIdx.x) * 10) + (((int)threadIdx.x) / 6)) % 1596) / 21) / 38) * 36)) + ((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 18) * 2)) + ((((((((int)blockIdx.x) * 10) + (((int)threadIdx.x) / 6)) % 1596) / 21) % 38) / 19))];
}

