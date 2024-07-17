extern "C" __global__ void __launch_bounds__(20) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) / 5)) < 1377) {
    compute[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] = ((0.000000e+00f < data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))]) ? data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] : (data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] * 5.000000e-01f));
  }
}

