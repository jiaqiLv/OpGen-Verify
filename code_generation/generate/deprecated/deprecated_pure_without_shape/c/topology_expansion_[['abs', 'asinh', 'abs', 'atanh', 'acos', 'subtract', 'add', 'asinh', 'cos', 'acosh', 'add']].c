void default_function_kernel(float* T_add, float* T_add_1, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        compute[(((i0 * 52) + (i1 * 13)) + i2)] = fabsf(asinhf(ph_0[(((i0 * 52) + (i1 * 13)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 8; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 13; ++i2_1) {
        compute_1[(((i0_1 * 52) + (i1_1 * 13)) + i2_1)] = atanhf(ph_0[(((i0_1 * 52) + (i1_1 * 13)) + i2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 416; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 416; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 416; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = asinhf(fabsf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 416; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = cosf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 416; ++ax0_ax1_fused_ax2_fused_2) {
    T_add_1[ax0_ax1_fused_ax2_fused_2] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_2])) + fabsf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
}

