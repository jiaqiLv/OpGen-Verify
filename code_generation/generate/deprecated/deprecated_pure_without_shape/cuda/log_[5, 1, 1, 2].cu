extern "C" __global__ void __launch_bounds__(10) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((int)threadIdx.x)] = __logf(data[((int)threadIdx.x)]);
}
