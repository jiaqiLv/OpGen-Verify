extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = (((((3 <= ((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2))) && (((int)blockIdx.x) < 24)) && (1 <= (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) % 6))) && ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12) < 11)) ? data[((((((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) / 3) * 9) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 12)) - 11)] : 0.000000e+00f);
}

