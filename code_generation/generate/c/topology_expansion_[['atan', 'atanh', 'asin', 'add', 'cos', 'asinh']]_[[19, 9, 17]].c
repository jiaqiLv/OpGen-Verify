void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2907; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        T_add[(((ax0 * 153) + (ax1 * 17)) + ax2)] = (ph_0[(((ax0 * 153) + (ax1 * 17)) + ax2)] + asinf(atanhf(ph_0[(((ax0 * 153) + (ax1 * 17)) + ax2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        compute_1[(((i0 * 153) + (i1 * 17)) + i2)] = asinhf(cosf(ph_0[(((i0 * 153) + (i1 * 17)) + i2)]));
      }
    }
  }
}
