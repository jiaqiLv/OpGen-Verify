void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 105; ++ax0_ax1_fused) {
    float pad_temp[2805];
    for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 15; ++ax3) {
        for (int32_t ax4 = 0; ax4 < 17; ++ax4) {
          pad_temp[(((ax2 * 255) + (ax3 * 17)) + ax4)] = ((((((1 <= ax2) && (ax2 < 10)) && (1 <= ax3)) && (ax3 < 14)) && (1 <= ax4)) ? data[(((((ax0_ax1_fused * 1872) + (ax2 * 208)) + (ax3 * 16)) + ax4) - 225)] : -3.402823e+38f);
        }
      }
    }
    for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        for (int32_t ax4_1 = 0; ax4_1 < 8; ++ax4_1) {
          pool_max[((((ax0_ax1_fused * 280) + (ax2_1 * 56)) + (ax3_1 * 8)) + ax4_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              for (int32_t rv2 = 0; rv2 < 3; ++rv2) {
                pool_max[((((ax0_ax1_fused * 280) + (ax2_1 * 56)) + (ax3_1 * 8)) + ax4_1)] = max(pool_max[((((ax0_ax1_fused * 280) + (ax2_1 * 56)) + (ax3_1 * 8)) + ax4_1)], pad_temp[((((((ax2_1 * 510) + (rv0 * 255)) + (ax3_1 * 34)) + (rv1 * 17)) + (ax4_1 * 2)) + rv2)]);
              }
            }
          }
        }
      }
    }
  }
}

