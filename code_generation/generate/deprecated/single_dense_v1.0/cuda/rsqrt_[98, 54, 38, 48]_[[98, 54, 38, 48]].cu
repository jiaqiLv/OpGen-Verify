extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (1.000000e+00f / sqrtf(data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]));
}
