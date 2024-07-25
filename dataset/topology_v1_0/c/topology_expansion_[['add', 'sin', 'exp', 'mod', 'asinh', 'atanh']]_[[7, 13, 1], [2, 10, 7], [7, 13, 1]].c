void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float compute_3[91];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 91; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 91; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 91; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(compute_3[ax0_ax1_fused_ax2_fused], ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 91; ++i0_i1_fused_i2_fused_2) {
    compute_1[i0_i1_fused_i2_fused_2] = asinhf(compute_3[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 91; ++i0_i1_fused) {
    compute_2[i0_i1_fused] = atanhf((ph_0[i0_i1_fused] + ph_3[i0_i1_fused]));
  }
}
