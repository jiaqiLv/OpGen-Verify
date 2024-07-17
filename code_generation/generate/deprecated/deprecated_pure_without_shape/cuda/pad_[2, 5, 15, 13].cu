extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (((((1 <= ((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4))) && (((int)blockIdx.x) < 8)) && (2 <= (((int)threadIdx.x) & 15))) && ((((int)threadIdx.x) & 15) < 15)) ? data[((((((int)blockIdx.x) * 26) + ((((int)threadIdx.x) >> 4) * 13)) + (((int)threadIdx.x) & 15)) - 15)] : 0.000000e+00f);
}

