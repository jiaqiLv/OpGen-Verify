void default_function_kernel(float* T_add, float* T_add_1, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        compute[(((i0 * 16) + (i1 * 8)) + i2)] = fabsf(asinhf(ph_0[(((i0 * 16) + (i1 * 8)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 176; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 176; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 176; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 176; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinhf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 176; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = cosf(fabsf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
        T_add_1[(((ax0 * 16) + (ax1 * 8)) + ax2)] = (acoshf(fabsf(ph_0[(((ax0 * 16) + (ax1 * 8)) + ax2)])) + fabsf(ph_0[(((ax0 * 16) + (ax1 * 8)) + ax2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 176; ++i0_i1_fused_i2_fused_3) {
    compute_4[i0_i1_fused_i2_fused_3] = asinhf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 176; ++i0_i1_fused_i2_fused_4) {
    compute_5[i0_i1_fused_i2_fused_4] = acosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 176; ++i0_i1_fused_i2_fused_5) {
    compute_6[i0_i1_fused_i2_fused_5] = cosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_5])));
  }
}

