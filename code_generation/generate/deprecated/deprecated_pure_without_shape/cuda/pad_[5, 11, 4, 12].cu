extern "C" __global__ void __launch_bounds__(4) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 105) {
    PadInput[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = (((((15 <= ((((int)blockIdx.x) * 4) + ((int)threadIdx.x))) && (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 75)) && (2 <= (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 15))) && ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 15) < 14)) ? data[((((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) / 15) * 12) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 15)) - 14)] : 0.000000e+00f);
  }
}

