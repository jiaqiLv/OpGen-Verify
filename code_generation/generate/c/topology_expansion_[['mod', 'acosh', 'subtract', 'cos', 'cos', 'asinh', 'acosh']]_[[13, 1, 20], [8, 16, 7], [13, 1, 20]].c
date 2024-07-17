void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 260; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf((ph_0[i0_i1_fused_i2_fused] - acoshf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 260; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = cosf((ph_0[i0_i1_fused_i2_fused_1] - acoshf(ph_0[i0_i1_fused_i2_fused_1])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 13; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      compute_2[((i0_i1_fused * 20) + i2)] = asinhf(fmodf(ph_0[((i0_i1_fused * 20) + i2)], ph_3[((i0_i1_fused * 20) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 260; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = acoshf(fmodf(ph_0[i0_i1_fused_i2_fused_2], ph_3[i0_i1_fused_i2_fused_2]));
  }
}

