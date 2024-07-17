extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ PadInput, float* __restrict__ data) {
  PadInput[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (((((1 <= ((int)blockIdx.x)) && (((int)blockIdx.x) < 10)) && (2 <= ((int)threadIdx.x))) && (((int)threadIdx.x) < 15)) ? data[(((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) - 15)] : 0.000000e+00f);
}

