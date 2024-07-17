void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_3) {
  float compute_4[462];
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 42; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 11; ++i2) {
      compute_4[((i0_i1_fused * 11) + i2)] = expf(ph_0[((i0_i1_fused * 11) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 462; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(compute_4[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 462; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = expf(compute_4[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 462; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 462; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = ceilf(fmodf(ph_0[i0_i1_fused_i2_fused_2], ph_3[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 462; ++i0_i1_fused_i2_fused_3) {
    compute_3[i0_i1_fused_i2_fused_3] = sinf(fmodf(ph_0[i0_i1_fused_i2_fused_3], ph_3[i0_i1_fused_i2_fused_3]));
  }
}
