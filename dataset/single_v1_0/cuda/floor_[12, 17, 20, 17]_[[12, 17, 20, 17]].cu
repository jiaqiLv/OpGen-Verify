extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = floorf(data[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))]);
}
