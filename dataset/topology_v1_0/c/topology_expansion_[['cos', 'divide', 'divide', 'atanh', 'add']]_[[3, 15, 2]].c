void default_function_kernel(float* T_add, float* T_divide, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 15; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
        T_divide[(((ax0 * 30) + (ax1 * 2)) + ax2)] = ((ph_0[(((ax0 * 30) + (ax1 * 2)) + ax2)] / cosf(ph_0[(((ax0 * 30) + (ax1 * 2)) + ax2)])) / ph_0[(((ax0 * 30) + (ax1 * 2)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 90; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + atanhf(ph_0[ax0_ax1_fused_ax2_fused]));
  }
}
