void default_function_kernel(float* T_add, float* T_multiply, float* T_subtract, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 14; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_multiply[(((ax0 * 99) + (ax1 * 9)) + ax2)] = ((ph_0[(((ax0 * 99) + (ax1 * 9)) + ax2)] + (ph_0[(((ax0 * 99) + (ax1 * 9)) + ax2)] - ph_3[(((ax0 * 99) + (ax1 * 9)) + ax2)])) * ph_0[(((ax0 * 99) + (ax1 * 9)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1386; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1386; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf((ph_0[i0_i1_fused_i2_fused] / ph_3[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1386; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acoshf((ph_0[i0_i1_fused_i2_fused_1] / ph_3[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 14; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 11; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 9; ++ax2_1) {
        T_add[(((ax0_1 * 99) + (ax1_1 * 9)) + ax2_1)] = (((ph_0[(((ax0_1 * 99) + (ax1_1 * 9)) + ax2_1)] / ph_3[(((ax0_1 * 99) + (ax1_1 * 9)) + ax2_1)]) * ph_0[(((ax0_1 * 99) + (ax1_1 * 9)) + ax2_1)]) + (ph_0[(((ax0_1 * 99) + (ax1_1 * 9)) + ax2_1)] / ph_3[(((ax0_1 * 99) + (ax1_1 * 9)) + ax2_1)]));
      }
    }
  }
}

