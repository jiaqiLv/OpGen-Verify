void default_function_kernel(float* T_add, float* T_add_1, float* T_mod, float* T_multiply, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* compute_7, float* compute_8, float* compute_9, float* compute_10, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 306; ++i0_i1_fused_i2_fused) {
    compute_7[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 306; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 306; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 306; ++i0_i1_fused_i2_fused_1) {
    compute_10[i0_i1_fused_i2_fused_1] = asinhf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 306; ++i0_i1_fused_i2_fused_2) {
    compute_9[i0_i1_fused_i2_fused_2] = cosf(fabsf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 306; ++ax0_ax1_fused_ax2_fused_2) {
    T_add_1[ax0_ax1_fused_ax2_fused_2] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_2])) + fabsf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 306; ++i0_i1_fused_i2_fused_3) {
    compute_8[i0_i1_fused_i2_fused_3] = asinhf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 306; ++i0_i1_fused_i2_fused_4) {
    compute[i0_i1_fused_i2_fused_4] = acosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 306; ++i0_i1_fused_i2_fused_5) {
    compute_6[i0_i1_fused_i2_fused_5] = cosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 306; ++ax0_ax1_fused_ax2_fused_3) {
    T_multiply[ax0_ax1_fused_ax2_fused_3] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_3])) * fabsf(ph_0[ax0_ax1_fused_ax2_fused_3]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 306; ++i0_i1_fused) {
    compute_5[i0_i1_fused] = cosf(fabsf(asinhf(ph_0[i0_i1_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_6 = 0; i0_i1_fused_i2_fused_6 < 306; ++i0_i1_fused_i2_fused_6) {
    compute_4[i0_i1_fused_i2_fused_6] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_6])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_7 = 0; i0_i1_fused_i2_fused_7 < 306; ++i0_i1_fused_i2_fused_7) {
    compute_3[i0_i1_fused_i2_fused_7] = atanhf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_7])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_8 = 0; i0_i1_fused_i2_fused_8 < 306; ++i0_i1_fused_i2_fused_8) {
    compute_2[i0_i1_fused_i2_fused_8] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_8])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_9 = 0; i0_i1_fused_i2_fused_9 < 306; ++i0_i1_fused_i2_fused_9) {
    compute_1[i0_i1_fused_i2_fused_9] = asinf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_9])) * ph_0[i0_i1_fused_i2_fused_9]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_4 = 0; ax0_ax1_fused_ax2_fused_4 < 306; ++ax0_ax1_fused_ax2_fused_4) {
    T_mod[ax0_ax1_fused_ax2_fused_4] = fmodf((fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_4])) * ph_0[ax0_ax1_fused_ax2_fused_4]), fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_4])));
  }
}

