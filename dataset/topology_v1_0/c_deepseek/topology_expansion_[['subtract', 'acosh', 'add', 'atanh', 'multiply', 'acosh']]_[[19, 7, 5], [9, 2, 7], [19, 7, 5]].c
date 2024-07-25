void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 133; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      compute[((i0_i1_fused * 5) + i2)] = atanhf((ph_0[((i0_i1_fused * 5) + i2)] + acoshf(ph_0[((i0_i1_fused * 5) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 665; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] + acoshf(ph_0[ax0_ax1_fused_ax2_fused])) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 133; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
      compute_1[((i0_i1_fused_1 * 5) + i2_1)] = acoshf((ph_0[((i0_i1_fused_1 * 5) + i2_1)] - ph_3[((i0_i1_fused_1 * 5) + i2_1)]));
    }
  }
}

