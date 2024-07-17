void default_function_kernel(float* T_add, float* T_add_1, float* T_add_2, float* T_mod, float* T_mod_1, float* T_multiply, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* compute_5, float* compute_6, float* compute_7, float* compute_8, float* compute_9, float* compute_10, float* compute_11, float* compute_12, float* compute_13, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 48; ++i0_i1_fused_i2_fused) {
    compute_8[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 48; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 48; ++ax0_ax1_fused_ax2_fused_1) {
    T_add_1[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 48; ++i0_i1_fused_i2_fused_1) {
    compute_13[i0_i1_fused_i2_fused_1] = asinhf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 48; ++i0_i1_fused_i2_fused_2) {
    compute_12[i0_i1_fused_i2_fused_2] = cosf(fabsf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 48; ++ax0_ax1_fused_ax2_fused_2) {
    T_add_2[ax0_ax1_fused_ax2_fused_2] = (acoshf(fabsf(ph_0[ax0_ax1_fused_ax2_fused_2])) + fabsf(ph_0[ax0_ax1_fused_ax2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 48; ++i0_i1_fused_i2_fused_3) {
    compute_11[i0_i1_fused_i2_fused_3] = asinhf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_4 = 0; i0_i1_fused_i2_fused_4 < 48; ++i0_i1_fused_i2_fused_4) {
    compute_10[i0_i1_fused_i2_fused_4] = acosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_5 = 0; i0_i1_fused_i2_fused_5 < 48; ++i0_i1_fused_i2_fused_5) {
    compute_9[i0_i1_fused_i2_fused_5] = cosf(acoshf(fabsf(ph_0[i0_i1_fused_i2_fused_5])));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 2; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
        T_multiply[(((ax0 * 24) + (ax1 * 3)) + ax2)] = (acoshf(fabsf(ph_0[(((ax0 * 24) + (ax1 * 3)) + ax2)])) * fabsf(ph_0[(((ax0 * 24) + (ax1 * 3)) + ax2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_6 = 0; i0_i1_fused_i2_fused_6 < 48; ++i0_i1_fused_i2_fused_6) {
    compute[i0_i1_fused_i2_fused_6] = cosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_6])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_7 = 0; i0_i1_fused_i2_fused_7 < 48; ++i0_i1_fused_i2_fused_7) {
    compute_7[i0_i1_fused_i2_fused_7] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_7])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_8 = 0; i0_i1_fused_i2_fused_8 < 48; ++i0_i1_fused_i2_fused_8) {
    compute_6[i0_i1_fused_i2_fused_8] = atanhf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_8])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_9 = 0; i0_i1_fused_i2_fused_9 < 48; ++i0_i1_fused_i2_fused_9) {
    compute_5[i0_i1_fused_i2_fused_9] = acosf(fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_9])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_10 = 0; i0_i1_fused_i2_fused_10 < 48; ++i0_i1_fused_i2_fused_10) {
    compute_4[i0_i1_fused_i2_fused_10] = asinf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_10])) * ph_0[i0_i1_fused_i2_fused_10]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 48; ++ax0_ax1_fused_ax2_fused_3) {
    T_mod_1[ax0_ax1_fused_ax2_fused_3] = fmodf((fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_3])) * ph_0[ax0_ax1_fused_ax2_fused_3]), fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_3])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_11 = 0; i0_i1_fused_i2_fused_11 < 48; ++i0_i1_fused_i2_fused_11) {
    compute_3[i0_i1_fused_i2_fused_11] = fabsf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_11])) * ph_0[i0_i1_fused_i2_fused_11]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_4 = 0; ax0_ax1_fused_ax2_fused_4 < 48; ++ax0_ax1_fused_ax2_fused_4) {
    T_mod[ax0_ax1_fused_ax2_fused_4] = fmodf((fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_4])) * ph_0[ax0_ax1_fused_ax2_fused_4]), fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_4])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_12 = 0; i0_i1_fused_i2_fused_12 < 48; ++i0_i1_fused_i2_fused_12) {
    compute_2[i0_i1_fused_i2_fused_12] = acosf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_12])) * ph_0[i0_i1_fused_i2_fused_12]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_13 = 0; i0_i1_fused_i2_fused_13 < 48; ++i0_i1_fused_i2_fused_13) {
    compute_1[i0_i1_fused_i2_fused_13] = cosf((fabsf(asinhf(ph_0[i0_i1_fused_i2_fused_13])) * ph_0[i0_i1_fused_i2_fused_13]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_5 = 0; ax0_ax1_fused_ax2_fused_5 < 48; ++ax0_ax1_fused_ax2_fused_5) {
    T_add[ax0_ax1_fused_ax2_fused_5] = ((fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_5])) * ph_0[ax0_ax1_fused_ax2_fused_5]) + fabsf(asinhf(ph_0[ax0_ax1_fused_ax2_fused_5])));
  }
}

