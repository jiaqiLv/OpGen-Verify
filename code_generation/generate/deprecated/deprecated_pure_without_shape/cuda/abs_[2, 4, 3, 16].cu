extern "C" __global__ void __launch_bounds__(12) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = fabsf(data[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))]);
}

