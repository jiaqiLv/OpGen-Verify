void default_function_kernel(float* T_add, float* T_add_1, float* T_multiply, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* compute_7, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 5054; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 5054; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 5054; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 5054; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 5054; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = cosf(fabsf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 5054; ++ax0_ax1_fused_ax2_fused_2) {
    T_add_1[ax0_ax1_fused_ax2_fused_2] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_2])) + fabsf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 5054; ++i0_i1_fused_i2_fused_3) {
    compute_3[i0_i1_fused_i2_fused_3] = asinhf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 5054; ++i0_i1_fused_i2_fused_4) {
    compute_4[i0_i1_fused_i2_fused_4] = acosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 5054; ++i0_i1_fused_i2_fused_5) {
    compute_5[i0_i1_fused_i2_fused_5] = cosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        T_multiply[(((ax0 * 266) + (ax1 * 19)) + ax2)] = (acoshf(fabsf(ph_0[(((ax0 * 266) + (ax1 * 19)) + ax2)])) * fabsf(ph_0[(((ax0 * 266) + (ax1 * 19)) + ax2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_6 = 0; i0_i1_fused_i2_fused_6 < 5054; ++i0_i1_fused_i2_fused_6) {
    compute_6[i0_i1_fused_i2_fused_6] = cosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_6])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_7 = 0; i0_i1_fused_i2_fused_7 < 5054; ++i0_i1_fused_i2_fused_7) {
    compute_7[i0_i1_fused_i2_fused_7] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_7])));
  }
}

