extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ T_fast_tanh, float* __restrict__ data) {
  T_fast_tanh[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = ((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * -2.760768e-16f) + 2.000188e-13f)) + -8.604672e-11f)) + 5.122297e-08f)) + 1.485722e-05f)) + 6.372619e-04f)) + 4.893525e-03f)) / (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]))) * 1.198258e-06f) + 1.185347e-04f)) + 2.268435e-03f)) + 4.893525e-03f));
}

