extern "C" __global__ void __launch_bounds__(46) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 46) + ((int)threadIdx.x)) < 7315) {
    compute[((((int)blockIdx.x) * 46) + ((int)threadIdx.x))] = erff(data[((((int)blockIdx.x) * 46) + ((int)threadIdx.x))]);
  }
}

