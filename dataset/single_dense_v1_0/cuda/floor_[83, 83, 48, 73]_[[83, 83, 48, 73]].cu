extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = floorf(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))]);
}

