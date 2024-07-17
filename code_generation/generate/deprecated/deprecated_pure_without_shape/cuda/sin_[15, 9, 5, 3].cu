extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) / 3)) < 675) {
    compute[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = __sinf(data[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))]);
  }
}

