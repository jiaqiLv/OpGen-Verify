void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    float tensor[49];
    for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        tensor[((ax1 * 7) + ax3)] = 0.000000e+00f;
        tensor[((ax1 * 7) + ax3)] = (tensor[((ax1 * 7) + ax3)] + (data[(((ax0 * 49) + (ax1 * 7)) + ax3)] * data[(((ax0 * 49) + (ax1 * 7)) + ax3)]));
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 7; ++ax1_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        T_divide[(((ax0 * 49) + (ax1_1 * 7)) + ax3_1)] = (data[(((ax0 * 49) + (ax1_1 * 7)) + ax3_1)] / powf((2.000000e+00f + (1.000000e-04f * tensor[((ax1_1 * 7) + ax3_1)])), 7.500000e-01f));
      }
    }
  }
}

