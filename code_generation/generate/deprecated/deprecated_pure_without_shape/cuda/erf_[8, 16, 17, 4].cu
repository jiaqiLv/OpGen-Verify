extern "C" __global__ void __launch_bounds__(17) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 17) + ((int)threadIdx.x))] = erff(data[((((int)blockIdx.x) * 17) + ((int)threadIdx.x))]);
}

