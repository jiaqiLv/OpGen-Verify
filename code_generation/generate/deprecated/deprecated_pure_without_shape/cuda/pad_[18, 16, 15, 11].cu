extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = (((((7 <= ((((int)blockIdx.x) * 18) + (((int)threadIdx.x) >> 1))) && (((((int)blockIdx.x) * 9) + (((int)threadIdx.x) >> 2)) < 56)) && (1 <= (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) % 7))) && ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 14) < 13)) ? data[((((((((int)blockIdx.x) * 18) + (((int)threadIdx.x) >> 1)) / 7) * 11) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 14)) - 13)] : 0.000000e+00f);
}

