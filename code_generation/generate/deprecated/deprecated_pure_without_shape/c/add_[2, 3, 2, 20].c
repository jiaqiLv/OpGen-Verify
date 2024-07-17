void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        T_add[(((ax0_ax1_fused * 40) + (ax2 * 20)) + ax3)] = (data[(((ax0_ax1_fused * 40) + (ax2 * 20)) + ax3)] + data_1[(((ax0_ax1_fused * 40) + (ax2 * 20)) + ax3)]);
      }
    }
  }
}

