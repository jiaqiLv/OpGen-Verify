extern "C" __global__ void __launch_bounds__(13) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))] = sqrtf(data[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))]);
}

