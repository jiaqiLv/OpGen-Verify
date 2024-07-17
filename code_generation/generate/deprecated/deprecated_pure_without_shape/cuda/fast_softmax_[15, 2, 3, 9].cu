extern "C" __global__ void __launch_bounds__(9) default_function_kernel_2(float* __restrict__ T_softmax_expsum, float* __restrict__ T_softmax_maxelem, float* __restrict__ T_softmax_norm, float* __restrict__ data) {
    int v_ = ((int)(floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
  T_softmax_norm[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] = (max(((*(float *)(&(v_))) * ((((((((((((((1.987569e-04f * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f)), (data[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] - T_softmax_maxelem[((int)blockIdx.x)])) / T_softmax_expsum[((int)blockIdx.x)]);
}

extern "C" __global__ void default_function_kernel(float* __restrict__ T_softmax_maxelem, float* __restrict__ data) {
  T_softmax_maxelem[((int)blockIdx.x)] = -3.402823e+38f;
  for (int k = 0; k < 9; ++k) {
    T_softmax_maxelem[((int)blockIdx.x)] = max(T_softmax_maxelem[((int)blockIdx.x)], data[((((int)blockIdx.x) * 9) + k)]);
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_softmax_expsum, float* __restrict__ T_softmax_maxelem, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 45) {
    T_softmax_expsum[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int k = 0; k < 9; ++k) {
    if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 45) {
        int v_ = ((int)(floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
      T_softmax_expsum[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (T_softmax_expsum[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + max(((*(float *)(&(v_))) * ((((((((((((((1.987569e-04f * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f)), (data[(((((int)blockIdx.x) * 288) + (((int)threadIdx.x) * 9)) + k)] - T_softmax_maxelem[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
    }
  }
}

