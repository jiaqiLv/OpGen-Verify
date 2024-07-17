void default_function_kernel(float* T_subtract, float* T_subtract_1, float* compute, float* ph_0, float* ph_3) {
  float compute_1[5320];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 5320; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 5320; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] / compute_1[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 5320; ++i0_i1_fused_i2_fused_1) {
    compute[i0_i1_fused_i2_fused_1] = atanf((ph_0[i0_i1_fused_i2_fused_1] / compute_1[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 280; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      T_subtract_1[((ax0_ax1_fused * 19) + ax2)] = (fmodf(ph_0[((ax0_ax1_fused * 19) + ax2)], ph_3[((ax0_ax1_fused * 19) + ax2)]) - ph_0[((ax0_ax1_fused * 19) + ax2)]);
    }
  }
}

