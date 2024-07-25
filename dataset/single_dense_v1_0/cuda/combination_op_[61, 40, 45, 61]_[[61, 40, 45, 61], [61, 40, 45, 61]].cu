extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ T_add, float* __restrict__ data, float* __restrict__ data_1) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 3)) < 837225) {
    T_add[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (sqrtf(data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]) + __cosf(data_1[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]));
  }
}

