void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2; ++ax0_ax1_fused) {
    T_subtract[ax0_ax1_fused] = (ph_0[ax0_ax1_fused] - ph_3[ax0_ax1_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 2; ++ax0) {
    T_divide[ax0] = (ph_0[ax0] / ph_3[ax0]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(acoshf(ph_0[i0_i1_fused_i2_fused]));
  }
}

