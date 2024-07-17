extern "C" __global__ void __launch_bounds__(55) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 55) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) * 11) + (((int)threadIdx.x) / 5)) / 288) * 360) + ((((((((int)blockIdx.x) * 11) + (((int)threadIdx.x) / 5)) % 288) / 12) / 2) * 30)) + ((((((int)blockIdx.x) * 55) + ((int)threadIdx.x)) % 60) / 2))];
}

