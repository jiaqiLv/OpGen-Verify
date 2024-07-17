void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 672; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 12; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        compute_1[(((i0 * 56) + (i1 * 8)) + i2)] = acoshf(asinhf(ph_0[(((i0 * 56) + (i1 * 8)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 672; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 12; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
        compute_2[(((i0_1 * 56) + (i1_1 * 8)) + i2_1)] = asinhf(fmodf(ph_0[(((i0_1 * 56) + (i1_1 * 8)) + i2_1)], ph_3[(((i0_1 * 56) + (i1_1 * 8)) + i2_1)]));
      }
    }
  }
}

