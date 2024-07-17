void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    float pad_temp[209];
    for (int32_t ax1 = 0; ax1 < 19; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
        for (int32_t ax3_s = 0; ax3_s < 19; ++ax3_s) {
          pad_temp[((ax2 * 19) + ax3_s)] = (((1 <= ax2) && (1 <= ax3_s)) ? data[(((((ax0 * 3420) + (ax1 * 180)) + (ax2 * 18)) + ax3_s) - 19)] : -3.402823e+38f);
        }
      }
      for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
        for (int32_t ax3 = 0; ax3 < 9; ++ax3) {
          pool_max[((((ax0 * 855) + (ax1 * 45)) + (ax2_1 * 9)) + ax3)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 855) + (ax1 * 45)) + (ax2_1 * 9)) + ax3)] = max(pool_max[((((ax0 * 855) + (ax1 * 45)) + (ax2_1 * 9)) + ax3)], pad_temp[((((ax2_1 * 38) + (rv0 * 19)) + (ax3 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

