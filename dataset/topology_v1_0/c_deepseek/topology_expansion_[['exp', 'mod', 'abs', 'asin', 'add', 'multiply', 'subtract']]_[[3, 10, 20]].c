void default_function_kernel(float* T_multiply, float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 30; ++i0_i1_fused) {
    float compute_1[20];
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      compute_1[i2] = expf(ph_0[((i0_i1_fused * 20) + i2)]);
    }
    for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
      compute[((i0_i1_fused * 20) + i2_1)] = fabsf(fmodf(ph_0[((i0_i1_fused * 20) + i2_1)], compute_1[i2_1]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 30; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_multiply[((ax0_ax1_fused * 20) + ax2)] = ((ph_0[((ax0_ax1_fused * 20) + ax2)] + asinf(ph_0[((ax0_ax1_fused * 20) + ax2)])) * ph_0[((ax0_ax1_fused * 20) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 600; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = asinf(ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
