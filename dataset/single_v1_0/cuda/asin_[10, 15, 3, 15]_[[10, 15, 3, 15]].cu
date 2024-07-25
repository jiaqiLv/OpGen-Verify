extern "C" __global__ void __launch_bounds__(45) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 45) + ((int)threadIdx.x))] = asinf(data[((((int)blockIdx.x) * 45) + ((int)threadIdx.x))]);
}
