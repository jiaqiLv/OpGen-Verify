void default_function_kernel(float* T_strided_slice, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    float T_reshape[6840];
    float T_reshape_1[190];
    float T_transpose[1];
    for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
      for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
        for (int32_t ax4 = 0; ax4 < 5; ++ax4) {
          for (int32_t ax5 = 0; ax5 < 19; ++ax5) {
            T_reshape_1[(((ax1_1 * 95) + (ax4 * 19)) + ax5)] = data[(((((((ax1 & 1) * 13680) + (ax1_1 * 6840)) + (ax0 * 1710)) + ((ax1 >> 1) * 95)) + (ax4 * 19)) + ax5)];
          }
        }
      }
      for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 19; ++ax3) {
          T_transpose[0] = T_reshape_1[((((ax2 & 1) * 95) + ((ax2 >> 1) * 19)) + ax3)];
          T_reshape[(((ax1 * 190) + (ax2 * 19)) + ax3)] = T_transpose[0];
        }
      }
    }
    for (int32_t ax1_2 = 0; ax1_2 < 36; ++ax1_2) {
      for (int32_t ax2_1 = 0; ax2_1 < 10; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 19; ++ax3_1) {
          T_strided_slice[((((ax0 * 6840) + (ax1_2 * 190)) + (ax2_1 * 19)) + ax3_1)] = T_reshape[(((ax1_2 * 190) + (ax2_1 * 19)) + ax3_1)];
        }
      }
    }
  }
}

