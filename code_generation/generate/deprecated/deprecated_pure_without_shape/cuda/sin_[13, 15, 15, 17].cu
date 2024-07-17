extern "C" __global__ void __launch_bounds__(62) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 62) + ((int)threadIdx.x)) < 49725) {
    compute[((((int)blockIdx.x) * 62) + ((int)threadIdx.x))] = __sinf(data[((((int)blockIdx.x) * 62) + ((int)threadIdx.x))]);
  }
}

