void default_function_kernel(float* T_add, float* T_divide, float* T_mod, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 48; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 48; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 48; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - sinf((ph_0[ax0_ax1_fused_ax2_fused] + acosf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 48; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod[ax0_ax1_fused_ax2_fused_1] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused_1]), ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute_2[((i0_i1_fused * 8) + i2)] = atanf(acosf(ph_0[((i0_i1_fused * 8) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 48; ++ax0_ax1_fused_ax2_fused_2) {
    T_add[ax0_ax1_fused_ax2_fused_2] = (asinhf(acosf(ph_0[ax0_ax1_fused_ax2_fused_2])) + acosf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 48; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = acoshf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_2])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 48; ++i0_i1_fused_i2_fused_3) {
    compute_4[i0_i1_fused_i2_fused_3] = asinf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 48; ++ax0_ax1_fused_ax2_fused_3) {
    T_divide[ax0_ax1_fused_ax2_fused_3] = (asinhf(acosf(ph_0[ax0_ax1_fused_ax2_fused_3])) / acosf(ph_0[ax0_ax1_fused_ax2_fused_3]));
  }
}

