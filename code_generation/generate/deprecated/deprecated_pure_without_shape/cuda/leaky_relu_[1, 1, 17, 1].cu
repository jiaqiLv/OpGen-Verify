extern "C" __global__ void __launch_bounds__(17) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((int)threadIdx.x)] = ((0.000000e+00f < data[((int)threadIdx.x)]) ? data[((int)threadIdx.x)] : (data[((int)threadIdx.x)] * 5.000000e-01f));
}

