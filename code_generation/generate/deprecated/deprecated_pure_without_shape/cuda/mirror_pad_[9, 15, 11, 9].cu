extern "C" __global__ void __launch_bounds__(2) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  MirrorPadInput[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))] = data[((((72 <= ((int)blockIdx.x)) ? (22 - (((int)blockIdx.x) / 6)) : ((((int)blockIdx.x) < 6) ? 0 : ((((int)blockIdx.x) / 6) - 1))) * 9) + (((((((int)blockIdx.x) % 6) * 2) + ((int)threadIdx.x)) == 11) ? ((19 - ((int)threadIdx.x)) - ((((int)blockIdx.x) % 6) * 2)) : (((((int)blockIdx.x) % 6) < 1) ? ((1 - ((int)threadIdx.x)) - ((((int)blockIdx.x) % 6) * 2)) : ((((((int)blockIdx.x) % 6) * 2) + ((int)threadIdx.x)) - 2))))];
}

