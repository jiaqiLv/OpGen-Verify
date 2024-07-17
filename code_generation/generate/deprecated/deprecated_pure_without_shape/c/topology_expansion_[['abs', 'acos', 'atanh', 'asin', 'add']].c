void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 6; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      compute_1[((i0 * 3) + i1)] = atanhf(acosf(ph_0[((i0 * 3) + i1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 2; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      T_add[((ax0 * 3) + ax1)] = (ph_0[((ax0 * 3) + ax1)] + asinf(ph_0[((ax0 * 3) + ax1)]));
    }
  }
}

