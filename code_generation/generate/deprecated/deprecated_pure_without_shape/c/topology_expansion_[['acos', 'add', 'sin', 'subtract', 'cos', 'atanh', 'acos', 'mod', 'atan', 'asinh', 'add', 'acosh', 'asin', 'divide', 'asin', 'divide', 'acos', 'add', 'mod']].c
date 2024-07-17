void default_function_kernel(float* T_add, float* T_add_1, float* T_divide, float* T_divide_1, float* T_mod, float* T_mod_1, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 864; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 864; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 864; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 864; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = atanf(acosf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 864; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (asinhf(acosf(ph_0[ax0_ax1_fused_ax2_fused_1])) + acosf(ph_0[ax0_ax1_fused_ax2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 864; ++i0_i1_fused_i2_fused_3) {
    compute_3[i0_i1_fused_i2_fused_3] = acoshf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 864; ++i0_i1_fused_i2_fused_4) {
    compute_4[i0_i1_fused_i2_fused_4] = asinf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 864; ++ax0_ax1_fused_ax2_fused_2) {
    T_divide[ax0_ax1_fused_ax2_fused_2] = (asinhf(acosf(ph_0[ax0_ax1_fused_ax2_fused_2])) / acosf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 864; ++i0_i1_fused_i2_fused_5) {
    compute_5[i0_i1_fused_i2_fused_5] = asinf(asinhf(acosf(ph_0[i0_i1_fused_i2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 864; ++ax0_ax1_fused_ax2_fused_3) {
    T_subtract[ax0_ax1_fused_ax2_fused_3] = (ph_0[ax0_ax1_fused_ax2_fused_3] - sinf((ph_0[ax0_ax1_fused_ax2_fused_3] + acosf(ph_0[ax0_ax1_fused_ax2_fused_3]))));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
        T_divide_1[(((ax0 * 48) + (ax1 * 6)) + ax2)] = (sinf((ph_0[(((ax0 * 48) + (ax1 * 6)) + ax2)] + acosf(ph_0[(((ax0 * 48) + (ax1 * 6)) + ax2)]))) / ph_0[(((ax0 * 48) + (ax1 * 6)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_6 = 0; i0_i1_fused_i2_fused_6 < 864; ++i0_i1_fused_i2_fused_6) {
    compute_6[i0_i1_fused_i2_fused_6] = acosf(sinf((ph_0[i0_i1_fused_i2_fused_6] + acosf(ph_0[i0_i1_fused_i2_fused_6]))));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_4 = 0; ax0_ax1_fused_ax2_fused_4 < 864; ++ax0_ax1_fused_ax2_fused_4) {
    T_add_1[ax0_ax1_fused_ax2_fused_4] = (sinf((ph_0[ax0_ax1_fused_ax2_fused_4] + acosf(ph_0[ax0_ax1_fused_ax2_fused_4]))) + ph_0[ax0_ax1_fused_ax2_fused_4]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_5 = 0; ax0_ax1_fused_ax2_fused_5 < 864; ++ax0_ax1_fused_ax2_fused_5) {
    T_mod_1[ax0_ax1_fused_ax2_fused_5] = fmodf(sinf((ph_0[ax0_ax1_fused_ax2_fused_5] + acosf(ph_0[ax0_ax1_fused_ax2_fused_5]))), ph_0[ax0_ax1_fused_ax2_fused_5]);
  }
}

