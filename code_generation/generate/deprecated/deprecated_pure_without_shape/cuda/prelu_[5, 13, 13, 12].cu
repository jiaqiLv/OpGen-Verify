extern "C" __global__ void __launch_bounds__(52) default_function_kernel(float* __restrict__ Scale, float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 52) + ((int)threadIdx.x))] = ((0.000000e+00f < data[((((int)blockIdx.x) * 52) + ((int)threadIdx.x))]) ? data[((((int)blockIdx.x) * 52) + ((int)threadIdx.x))] : (data[((((int)blockIdx.x) * 52) + ((int)threadIdx.x))] * Scale[(((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 12)]));
}

