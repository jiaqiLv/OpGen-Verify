void default_function_kernel(float* T_divide, float* T_mod, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 300; ++ax0_ax1_fused) {
    T_divide[ax0_ax1_fused] = (ph_0[ax0_ax1_fused] / ph_3[ax0_ax1_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 300; ++ax0_ax1_fused_1) {
    T_mod[ax0_ax1_fused_1] = fmodf(ph_0[ax0_ax1_fused_1], ph_3[ax0_ax1_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 300; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(atanf(ph_0[i0_i1_fused_i2_fused]));
  }
}
