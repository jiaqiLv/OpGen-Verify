extern "C" __global__ void __launch_bounds__(20) default_function_kernel(signed char* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 10) + (((int)threadIdx.x) >> 1)) < 1001) {
    compute[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] = ((signed char)(data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] != data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))]));
  }
}

