void default_function_kernel(float* T_add, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 98; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute[((i0_i1_fused * 8) + i2)] = acosf(ph_0[((i0_i1_fused * 8) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 98; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      T_add[((ax0_ax1_fused * 8) + ax2)] = (ceilf(ph_0[((ax0_ax1_fused * 8) + ax2)]) + ph_0[((ax0_ax1_fused * 8) + ax2)]);
    }
  }
}

