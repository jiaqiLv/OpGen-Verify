extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ Scale, float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) < 189) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((0.000000e+00f < data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]) ? data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] : (data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] * Scale[(((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12)]));
  }
}

