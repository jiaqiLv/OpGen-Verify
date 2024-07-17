void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 64; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      T_mod[((ax0_ax1_fused * 9) + ax2)] = fmodf(ph_0[((ax0_ax1_fused * 9) + ax2)], ph_3[((ax0_ax1_fused * 9) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 576; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 64; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      compute_1[((i0_i1_fused * 9) + i2)] = expf(acoshf(ph_0[((i0_i1_fused * 9) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 9; ++i2_1) {
        compute_2[(((i0 * 72) + (i1 * 9)) + i2_1)] = asinf(acoshf(ph_0[(((i0 * 72) + (i1 * 9)) + i2_1)]));
      }
    }
  }
}

