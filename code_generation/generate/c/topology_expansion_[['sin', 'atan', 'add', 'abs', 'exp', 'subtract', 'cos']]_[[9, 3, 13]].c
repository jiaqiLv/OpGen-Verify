void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  float compute_3[351];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 351; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 9; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
        T_add[(((ax0 * 39) + (ax1 * 13)) + ax2)] = (atanf(ph_0[(((ax0 * 39) + (ax1 * 13)) + ax2)]) + ph_0[(((ax0 * 39) + (ax1 * 13)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 351; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = fabsf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 351; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = expf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 351; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (compute_3[ax0_ax1_fused_ax2_fused] - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        compute_2[(((i0 * 39) + (i1 * 13)) + i2)] = cosf(compute_3[(((i0 * 39) + (i1 * 13)) + i2)]);
      }
    }
  }
}

