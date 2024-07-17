void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 35; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 3; ++ax3) {
        T_add[(((ax0_ax1_fused * 51) + (ax2 * 3)) + ax3)] = (sqrtf(data[(((ax0_ax1_fused * 51) + (ax2 * 3)) + ax3)]) + cosf(data_1[(((ax0_ax1_fused * 51) + (ax2 * 3)) + ax3)]));
      }
    }
  }
}

