void default_function_kernel(float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 17; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_multiply[((ax0_ax1_fused * 20) + ax2)] = (ph_0[((ax0_ax1_fused * 20) + ax2)] * ph_3[((ax0_ax1_fused * 20) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      compute[((i0 * 20) + i2)] = expf(fmodf(ph_0[((i0 * 20) + i2)], asinf(ph_0[((i0 * 20) + i2)])));
    }
  }
}

