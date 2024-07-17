extern "C" __global__ void __launch_bounds__(4) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 119) {
    PadInput[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = (((((17 <= ((((int)blockIdx.x) * 4) + ((int)threadIdx.x))) && (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 85)) && (2 <= (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 17))) && ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 17) < 16)) ? data[((((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) / 17) * 14) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 17)) - 16)] : 0.000000e+00f);
  }
}

