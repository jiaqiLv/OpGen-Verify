void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 238; ++ax0_ax1_fused) {
    float tensor[117];
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 13; ++ax3) {
        tensor[((ax2 * 13) + ax3)] = 0.000000e+00f;
        tensor[((ax2 * 13) + ax3)] = (tensor[((ax2 * 13) + ax3)] + (data[(((ax0_ax1_fused * 117) + (ax2 * 13)) + ax3)] * data[(((ax0_ax1_fused * 117) + (ax2 * 13)) + ax3)]));
      }
    }
    for (int32_t ax2_1 = 0; ax2_1 < 9; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 13; ++ax3_1) {
        T_divide[(((ax0_ax1_fused * 117) + (ax2_1 * 13)) + ax3_1)] = (data[(((ax0_ax1_fused * 117) + (ax2_1 * 13)) + ax3_1)] / powf((2.000000e+00f + (1.000000e-04f * tensor[((ax2_1 * 13) + ax3_1)])), 7.500000e-01f));
      }
    }
  }
}

