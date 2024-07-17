extern "C" __global__ void __launch_bounds__(16) default_function_kernel(signed char* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 3)) < 27) {
    compute[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = ((signed char)(data[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] != data[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]));
  }
}

