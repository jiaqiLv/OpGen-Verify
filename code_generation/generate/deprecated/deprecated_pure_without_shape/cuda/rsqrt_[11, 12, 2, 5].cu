extern "C" __global__ void __launch_bounds__(15) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 15) + ((int)threadIdx.x))] = (1.000000e+00f / sqrtf(data[((((int)blockIdx.x) * 15) + ((int)threadIdx.x))]));
}

