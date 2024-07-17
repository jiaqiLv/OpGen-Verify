extern "C" __global__ void default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((int)blockIdx.x)] = acosf(data[((int)blockIdx.x)]);
}

