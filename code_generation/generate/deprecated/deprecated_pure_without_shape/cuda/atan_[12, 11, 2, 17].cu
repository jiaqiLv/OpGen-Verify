extern "C" __global__ void __launch_bounds__(33) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 33) + ((int)threadIdx.x))] = atanf(data[((((int)blockIdx.x) * 33) + ((int)threadIdx.x))]);
}

