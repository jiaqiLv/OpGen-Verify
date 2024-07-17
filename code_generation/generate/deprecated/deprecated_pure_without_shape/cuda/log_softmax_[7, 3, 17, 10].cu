extern "C" __global__ void __launch_bounds__(4) default_function_kernel_1(float* __restrict__ T_softmax_maxelem, float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 357) {
    compute[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int k = 0; k < 10; ++k) {
    if (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) < 357) {
      compute[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = (compute[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] + __expf((data[(((((int)blockIdx.x) * 40) + (((int)threadIdx.x) * 10)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))])));
    }
  }
}

extern "C" __global__ void __launch_bounds__(17) default_function_kernel_2(float* __restrict__ T_softmax_maxelem, float* __restrict__ compute, float* __restrict__ compute_1, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 17) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 17) + ((int)threadIdx.x))] - T_softmax_maxelem[(((((int)blockIdx.x) * 17) + ((int)threadIdx.x)) / 10)]) - __logf(compute_1[(((((int)blockIdx.x) * 17) + ((int)threadIdx.x)) / 10)]));
}

extern "C" __global__ void __launch_bounds__(2) default_function_kernel(float* __restrict__ T_softmax_maxelem, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + ((int)threadIdx.x)) < 357) {
    T_softmax_maxelem[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))] = -3.402823e+38f;
  }
  for (int k = 0; k < 10; ++k) {
    if (((((int)blockIdx.x) * 2) + ((int)threadIdx.x)) < 357) {
      T_softmax_maxelem[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))] = max(T_softmax_maxelem[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))], data[(((((int)blockIdx.x) * 20) + (((int)threadIdx.x) * 10)) + k)]);
    }
  }
}
