void default_function_kernel(float* T_add, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 280; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      compute_1[((i0 * 20) + i2)] = asinf(asinhf(ph_0[((i0 * 20) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 14; ++i0_1) {
    for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
      compute_2[((i0_1 * 20) + i2_1)] = cosf(ph_0[((i0_1 * 20) + i2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 14; ++ax0) {
    float compute_3[20];
    for (int32_t i2_2 = 0; i2_2 < 20; ++i2_2) {
      compute_3[i2_2] = expf(ph_0[((ax0 * 20) + i2_2)]);
    }
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_add[((ax0 * 20) + ax2)] = (compute_3[ax2] + ph_0[((ax0 * 20) + ax2)]);
    }
  }
}
