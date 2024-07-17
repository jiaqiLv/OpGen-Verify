extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ data) {
  T_strided_slice[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = data[(((((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 10)) % 38) / 19) * 13680) + (((((((int)blockIdx.x) * 30) + ((int)threadIdx.x)) % 38) / 19) * 6840)) + ((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 10)) / 38) * 95)) + (((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) % 95) / 19) * 19)) + (((((int)blockIdx.x) * 11) + ((int)threadIdx.x)) % 19))];
}

