void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    float tensor[6];
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 6; ++ax3) {
          tensor[ax3] = 0.000000e+00f;
          tensor[ax3] = (tensor[ax3] + (data[((((ax0 * 936) + (ax1 * 78)) + (ax2 * 6)) + ax3)] * data[((((ax0 * 936) + (ax1 * 78)) + (ax2 * 6)) + ax3)]));
        }
        for (int32_t ax3_1 = 0; ax3_1 < 6; ++ax3_1) {
          T_divide[((((ax0 * 936) + (ax1 * 78)) + (ax2 * 6)) + ax3_1)] = (data[((((ax0 * 936) + (ax1 * 78)) + (ax2 * 6)) + ax3_1)] / powf((2.000000e+00f + (1.000000e-04f * tensor[ax3_1])), 7.500000e-01f));
        }
      }
    }
  }
}

