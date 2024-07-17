void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
        T_add[(((ax0 * 224) + (ax1 * 16)) + ax2)] = (ph_0[(((ax0 * 224) + (ax1 * 16)) + ax2)] + ph_3[(((ax0 * 224) + (ax1 * 16)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1344; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 84; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      compute_1[((i0_i1_fused * 16) + i2)] = cosf(cosf(ph_0[((i0_i1_fused * 16) + i2)]));
    }
  }
}

