void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 204; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 12; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      T_divide[((ax0_ax1_fused * 17) + ax2)] = (atanf(ph_0[((ax0_ax1_fused * 17) + ax2)]) / ph_0[((ax0_ax1_fused * 17) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 204; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = ceilf(fmodf(ph_0[i0_i1_fused_i2_fused_1], sinf(ph_0[i0_i1_fused_i2_fused_1])));
  }
}

