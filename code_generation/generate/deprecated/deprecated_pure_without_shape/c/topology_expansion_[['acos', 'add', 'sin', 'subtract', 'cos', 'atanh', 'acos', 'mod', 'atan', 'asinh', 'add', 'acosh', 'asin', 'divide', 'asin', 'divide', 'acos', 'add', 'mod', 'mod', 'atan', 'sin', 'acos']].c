void default_function_kernel(float* T_add, float* T_add_1, float* T_divide, float* T_divide_1, float* T_mod, float* T_mod_1, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* compute_7, float* compute_8, float* compute_9, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 385; ++i0_i1_fused_i2_fused) {
    compute_5[i0_i1_fused_i2_fused] = atanhf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 385; ++i0_i1_fused_i2_fused_1) {
    compute_9[i0_i1_fused_i2_fused_1] = acosf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 385; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 385; ++i0_i1_fused_i2_fused_2) {
    compute_8[i0_i1_fused_i2_fused_2] = atanf(acosf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 385; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (asinhf(acosf(ph_0[ax0_ax1_fused_ax2_fused_1])) + acosf(ph_0[ax0_ax1_fused_ax2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 385; ++i0_i1_fused_i2_fused_3) {
    compute_7[i0_i1_fused_i2_fused_3] = acoshf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 385; ++i0_i1_fused_i2_fused_4) {
    compute_6[i0_i1_fused_i2_fused_4] = asinf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 385; ++ax0_ax1_fused_ax2_fused_2) {
    T_divide[ax0_ax1_fused_ax2_fused_2] = (asinhf(acosf(ph_0[ax0_ax1_fused_ax2_fused_2])) / acosf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 385; ++i0_i1_fused_i2_fused_5) {
    compute[i0_i1_fused_i2_fused_5] = asinf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 385; ++ax0_ax1_fused_ax2_fused_3) {
    T_subtract[ax0_ax1_fused_ax2_fused_3] = (ph_0[ax0_ax1_fused_ax2_fused_3] - sinf((ph_0[ax0_ax1_fused_ax2_fused_3] + acosf(ph_0[ax0_ax1_fused_ax2_fused_3]))));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 35; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
      T_divide_1[((ax0_ax1_fused * 11) + ax2)] = (sinf((ph_0[((ax0_ax1_fused * 11) + ax2)] + acosf(ph_0[((ax0_ax1_fused * 11) + ax2)]))) / ph_0[((ax0_ax1_fused * 11) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_6 = 0; i0_i1_fused_i2_fused_6 < 385; ++i0_i1_fused_i2_fused_6) {
    compute_4[i0_i1_fused_i2_fused_6] = acosf(sinf((ph_0[i0_i1_fused_i2_fused_6] + acosf(ph_0[i0_i1_fused_i2_fused_6]))));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_4 = 0; ax0_ax1_fused_ax2_fused_4 < 385; ++ax0_ax1_fused_ax2_fused_4) {
    T_add_1[ax0_ax1_fused_ax2_fused_4] = (sinf((ph_0[ax0_ax1_fused_ax2_fused_4] + acosf(ph_0[ax0_ax1_fused_ax2_fused_4]))) + ph_0[ax0_ax1_fused_ax2_fused_4]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_5 = 0; ax0_ax1_fused_ax2_fused_5 < 385; ++ax0_ax1_fused_ax2_fused_5) {
    T_mod_1[ax0_ax1_fused_ax2_fused_5] = fmodf(sinf((ph_0[ax0_ax1_fused_ax2_fused_5] + acosf(ph_0[ax0_ax1_fused_ax2_fused_5]))), ph_0[ax0_ax1_fused_ax2_fused_5]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_7 = 0; i0_i1_fused_i2_fused_7 < 385; ++i0_i1_fused_i2_fused_7) {
    compute_3[i0_i1_fused_i2_fused_7] = atanf(fmodf(sinf((ph_0[i0_i1_fused_i2_fused_7] + acosf(ph_0[i0_i1_fused_i2_fused_7]))), ph_0[i0_i1_fused_i2_fused_7]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_8 = 0; i0_i1_fused_i2_fused_8 < 385; ++i0_i1_fused_i2_fused_8) {
    compute_2[i0_i1_fused_i2_fused_8] = sinf(fmodf(sinf((ph_0[i0_i1_fused_i2_fused_8] + acosf(ph_0[i0_i1_fused_i2_fused_8]))), ph_0[i0_i1_fused_i2_fused_8]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_9 = 0; i0_i1_fused_i2_fused_9 < 385; ++i0_i1_fused_i2_fused_9) {
    compute_1[i0_i1_fused_i2_fused_9] = acosf(fmodf(sinf((ph_0[i0_i1_fused_i2_fused_9] + acosf(ph_0[i0_i1_fused_i2_fused_9]))), ph_0[i0_i1_fused_i2_fused_9]));
  }
}

