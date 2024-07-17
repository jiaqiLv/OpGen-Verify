void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 17; ++ax0) {
    float tensor[256];
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
          tensor[((ax2 * 16) + ax3)] = 0.000000e+00f;
          tensor[((ax2 * 16) + ax3)] = (tensor[((ax2 * 16) + ax3)] + (data[((((ax0 * 3328) + (ax1 * 256)) + (ax2 * 16)) + ax3)] * data[((((ax0 * 3328) + (ax1 * 256)) + (ax2 * 16)) + ax3)]));
        }
      }
      for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 16; ++ax3_1) {
          T_divide[((((ax0 * 3328) + (ax1 * 256)) + (ax2_1 * 16)) + ax3_1)] = (data[((((ax0 * 3328) + (ax1 * 256)) + (ax2_1 * 16)) + ax3_1)] / powf((2.000000e+00f + (1.000000e-04f * tensor[((ax2_1 * 16) + ax3_1)])), 7.500000e-01f));
        }
      }
    }
  }
}

