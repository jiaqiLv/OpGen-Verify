extern "C" __global__ void __launch_bounds__(55) default_function_kernel(float* __restrict__ output_unpack, float* __restrict__ packed_out) {
  output_unpack[((((int)blockIdx.x) * 55) + ((int)threadIdx.x))] = packed_out[(((((((((int)blockIdx.x) * 55) + ((int)threadIdx.x)) >> 6) * 64) + (((((((int)blockIdx.x) * 23) + ((int)threadIdx.x)) & 31) >> 4) * 32)) + ((((((int)blockIdx.x) * 7) + ((int)threadIdx.x)) & 15) * 2)) + ((((((int)blockIdx.x) * 55) + ((int)threadIdx.x)) & 63) >> 5))];
}

