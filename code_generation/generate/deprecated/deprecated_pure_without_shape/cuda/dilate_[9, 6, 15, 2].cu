extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ DilatedInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) < 405) {
    DilatedInput[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = data[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))];
  }
}

