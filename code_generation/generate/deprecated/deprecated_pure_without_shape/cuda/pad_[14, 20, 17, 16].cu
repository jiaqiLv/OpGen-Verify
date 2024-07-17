extern "C" __global__ void __launch_bounds__(10) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 10) + ((int)threadIdx.x))] = (((((19 <= ((((int)blockIdx.x) * 10) + ((int)threadIdx.x))) && (((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 1)) < 171)) && (2 <= (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 19))) && ((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 19) < 18)) ? data[((((((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) / 19) * 16) + (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 19)) - 18)] : 0.000000e+00f);
}

