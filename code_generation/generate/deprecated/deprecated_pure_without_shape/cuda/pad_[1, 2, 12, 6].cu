extern "C" __global__ void default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((int)blockIdx.x)] = (((((9 <= ((int)blockIdx.x)) && (((int)blockIdx.x) < 117)) && (2 <= (((int)blockIdx.x) % 9))) && ((((int)blockIdx.x) % 9) < 8)) ? data[((((((int)blockIdx.x) / 9) * 6) + (((int)blockIdx.x) % 9)) - 8)] : 0.000000e+00f);
}

