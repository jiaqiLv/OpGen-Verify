void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 960; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 960; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acoshf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 960; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = asinhf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        T_divide[(((ax0 * 60) + (ax1 * 5)) + ax2)] = (atanf(ph_0[(((ax0 * 60) + (ax1 * 5)) + ax2)]) / ph_0[(((ax0 * 60) + (ax1 * 5)) + ax2)]);
      }
    }
  }
}
