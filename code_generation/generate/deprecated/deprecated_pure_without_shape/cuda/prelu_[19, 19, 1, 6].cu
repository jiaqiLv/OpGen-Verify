extern "C" __global__ void __launch_bounds__(20) default_function_kernel(float* __restrict__ Scale, float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 10) + (((int)threadIdx.x) >> 1)) < 1083) {
    compute[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] = ((0.000000e+00f < data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))]) ? data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] : (data[((((int)blockIdx.x) * 20) + ((int)threadIdx.x))] * Scale[(((((int)blockIdx.x) * 2) + ((int)threadIdx.x)) % 6)]));
  }
}

