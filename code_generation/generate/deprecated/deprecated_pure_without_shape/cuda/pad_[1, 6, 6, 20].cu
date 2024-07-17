extern "C" __global__ void __launch_bounds__(4) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 207) {
    PadInput[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = (((((23 <= ((((int)blockIdx.x) * 4) + ((int)threadIdx.x))) && (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 161)) && (2 <= (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 23))) && ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 23) < 22)) ? data[((((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) / 23) * 20) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 23)) - 22)] : 0.000000e+00f);
  }
}

