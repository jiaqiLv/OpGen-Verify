void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1620; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 135; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      T_add[((ax0_ax1_fused * 12) + ax2)] = (acoshf(ph_0[((ax0_ax1_fused * 12) + ax2)]) + ph_0[((ax0_ax1_fused * 12) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 135; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute_1[((i0_i1_fused * 12) + i2)] = asinhf((ph_0[((i0_i1_fused * 12) + i2)] - cosf(ph_0[((i0_i1_fused * 12) + i2)])));
    }
  }
}
