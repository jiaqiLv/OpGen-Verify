void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4800; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 20; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
        T_multiply[(((ax0 * 320) + (ax1 * 16)) + ax2)] = (atanf(ph_0[(((ax0 * 320) + (ax1 * 16)) + ax2)]) * ph_0[(((ax0 * 320) + (ax1 * 16)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 16; ++i2) {
        compute_1[(((i0 * 320) + (i1 * 16)) + i2)] = sinf(atanf(ph_0[(((i0 * 320) + (i1 * 16)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4800; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = cosf((ph_0[i0_i1_fused_i2_fused_1] - ph_3[i0_i1_fused_i2_fused_1]));
  }
}
