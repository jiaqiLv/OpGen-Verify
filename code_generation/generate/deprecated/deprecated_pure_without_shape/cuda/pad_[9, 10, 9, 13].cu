extern "C" __global__ void __launch_bounds__(12) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = (((((4 <= ((((int)blockIdx.x) * 3) + (((int)threadIdx.x) >> 2))) && (((((int)blockIdx.x) * 3) + (((int)threadIdx.x) >> 2)) < 40)) && (1 <= (((((int)blockIdx.x) * 6) + (((int)threadIdx.x) >> 1)) & 7))) && ((((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) & 15) < 15)) ? data[((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) >> 2)) >> 2) * 13) + (((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) & 15)) - 15)] : 0.000000e+00f);
}

