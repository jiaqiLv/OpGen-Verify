void default_function_kernel(float* T_mod, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2176; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    float compute_1[17];
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        compute_1[i2] = expf(ph_0[(((ax0 * 136) + (ax1 * 17)) + i2)]);
      }
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        T_mod[(((ax0 * 136) + (ax1 * 17)) + ax2)] = fmodf(ph_0[(((ax0 * 136) + (ax1 * 17)) + ax2)], (ph_0[(((ax0 * 136) + (ax1 * 17)) + ax2)] + (compute_1[ax2] / ph_0[(((ax0 * 136) + (ax1 * 17)) + ax2)])));
      }
    }
  }
}
