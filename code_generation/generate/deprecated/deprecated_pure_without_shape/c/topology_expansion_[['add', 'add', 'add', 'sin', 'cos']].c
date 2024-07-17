void default_function_kernel(float* T_add, float* T_add_1, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 56; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      T_add[((ax0_ax1_fused * 19) + ax2)] = (ph_0[((ax0_ax1_fused * 19) + ax2)] + (ph_0[((ax0_ax1_fused * 19) + ax2)] + ph_3[((ax0_ax1_fused * 19) + ax2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1064; ++ax0_ax1_fused_ax2_fused) {
    T_add_1[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute[((i0_i1_fused * 19) + i2)] = sinf(ph_0[((i0_i1_fused * 19) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1064; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
}

