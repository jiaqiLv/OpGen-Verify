extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ T_fast_erf, float* __restrict__ data) {
  T_fast_erf[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = ((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * -2.726142e-10f) + 2.770681e-08f)) + -2.101024e-06f)) + -5.692506e-05f)) + -7.349906e-04f)) + -2.954600e-03f)) + -1.609603e-02f)) / (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f) * max(min(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))], 4.000000e+00f), -4.000000e+00f)) * -1.456607e-05f) + -2.133740e-04f)) + -1.682827e-03f)) + -7.373329e-03f)) + -1.426474e-02f));
}
