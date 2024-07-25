void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 204; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      T_mod[((ax0_ax1_fused * 5) + ax2)] = fmodf(ph_0[((ax0_ax1_fused * 5) + ax2)], ph_3[((ax0_ax1_fused * 5) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 204; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      compute[((i0_i1_fused * 5) + i2)] = acoshf(ph_0[((i0_i1_fused * 5) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1020; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
}
