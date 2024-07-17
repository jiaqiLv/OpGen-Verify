void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    float tensor[38];
    for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
          tensor[((ax2 * 2) + ax3)] = 0.000000e+00f;
          tensor[((ax2 * 2) + ax3)] = (tensor[((ax2 * 2) + ax3)] + (data[((((ax0 * 608) + (ax1 * 38)) + (ax2 * 2)) + ax3)] * data[((((ax0 * 608) + (ax1 * 38)) + (ax2 * 2)) + ax3)]));
        }
      }
      for (int32_t ax2_1 = 0; ax2_1 < 19; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 2; ++ax3_1) {
          T_divide[((((ax0 * 608) + (ax1 * 38)) + (ax2_1 * 2)) + ax3_1)] = (data[((((ax0 * 608) + (ax1 * 38)) + (ax2_1 * 2)) + ax3_1)] / powf((2.000000e+00f + (1.000000e-04f * tensor[((ax2_1 * 2) + ax3_1)])), 7.500000e-01f));
        }
      }
    }
  }
}

