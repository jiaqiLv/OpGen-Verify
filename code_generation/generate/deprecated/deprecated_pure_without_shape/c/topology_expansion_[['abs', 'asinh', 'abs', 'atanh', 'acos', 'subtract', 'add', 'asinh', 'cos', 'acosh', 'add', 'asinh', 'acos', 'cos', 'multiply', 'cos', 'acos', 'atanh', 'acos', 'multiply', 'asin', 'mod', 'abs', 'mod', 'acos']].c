void default_function_kernel(float* T_add, float* T_add_1, float* T_mod, float* T_mod_1, float* T_multiply, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* compute_7, float* compute_8, float* compute_9, float* compute_10, float* compute_11, float* compute_12, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4760; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4760; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 4760; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4760; ++i0_i1_fused_i2_fused_1) {
    compute_12[i0_i1_fused_i2_fused_1] = asinhf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 4760; ++i0_i1_fused_i2_fused_2) {
    compute_11[i0_i1_fused_i2_fused_2] = cosf(fabsf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 4760; ++ax0_ax1_fused_ax2_fused_2) {
    T_add_1[ax0_ax1_fused_ax2_fused_2] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_2])) + fabsf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 4760; ++i0_i1_fused_i2_fused_3) {
    compute_10[i0_i1_fused_i2_fused_3] = asinhf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 4760; ++i0_i1_fused_i2_fused_4) {
    compute_9[i0_i1_fused_i2_fused_4] = acosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 4760; ++i0_i1_fused_i2_fused_5) {
    compute_8[i0_i1_fused_i2_fused_5] = cosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 4760; ++ax0_ax1_fused_ax2_fused_3) {
    T_multiply[ax0_ax1_fused_ax2_fused_3] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_3])) * fabsf(ph_0[ax0_ax1_fused_ax2_fused_3]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_6 = 0; i0_i1_fused_i2_fused_6 < 4760; ++i0_i1_fused_i2_fused_6) {
    compute_7[i0_i1_fused_i2_fused_6] = cosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_6])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_7 = 0; i0_i1_fused_i2_fused_7 < 4760; ++i0_i1_fused_i2_fused_7) {
    compute_6[i0_i1_fused_i2_fused_7] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_7])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_8 = 0; i0_i1_fused_i2_fused_8 < 4760; ++i0_i1_fused_i2_fused_8) {
    compute_5[i0_i1_fused_i2_fused_8] = atanhf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_8])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_9 = 0; i0_i1_fused_i2_fused_9 < 4760; ++i0_i1_fused_i2_fused_9) {
    compute_4[i0_i1_fused_i2_fused_9] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_9])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute_3[(((i0 * 280) + (i1 * 14)) + i2)] = asinf((fabsf(asinhf(ph_0[(((i0 * 280) + (i1 * 14)) + i2)])) * ph_0[(((i0 * 280) + (i1 * 14)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_4 = 0; ax0_ax1_fused_ax2_fused_4 < 4760; ++ax0_ax1_fused_ax2_fused_4) {
    T_mod_1[ax0_ax1_fused_ax2_fused_4] = fmodf((fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_4])) * ph_0[ax0_ax1_fused_ax2_fused_4]), fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_10 = 0; i0_i1_fused_i2_fused_10 < 4760; ++i0_i1_fused_i2_fused_10) {
    compute_2[i0_i1_fused_i2_fused_10] = fabsf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_10])) * ph_0[i0_i1_fused_i2_fused_10]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_5 = 0; ax0_ax1_fused_ax2_fused_5 < 4760; ++ax0_ax1_fused_ax2_fused_5) {
    T_mod[ax0_ax1_fused_ax2_fused_5] = fmodf((fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_5])) * ph_0[ax0_ax1_fused_ax2_fused_5]), fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_11 = 0; i0_i1_fused_i2_fused_11 < 4760; ++i0_i1_fused_i2_fused_11) {
    compute[i0_i1_fused_i2_fused_11] = acosf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_11])) * ph_0[i0_i1_fused_i2_fused_11]));
  }
}

