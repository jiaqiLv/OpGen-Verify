extern "C" __global__ void __launch_bounds__(6) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 6) + ((int)threadIdx.x))] = (((((1 <= ((int)blockIdx.x)) && (((int)blockIdx.x) < 21)) && (2 <= ((int)threadIdx.x))) && (((int)threadIdx.x) < 5)) ? data[(((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) - 5)] : 0.000000e+00f);
}

