void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute[(((i0 * 119) + (i1 * 7)) + i2)] = asinhf(ph_0[(((i0 * 119) + (i1 * 7)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 10; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 17; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
        compute_1[(((i0_1 * 119) + (i1_1 * 7)) + i2_1)] = asinhf(atanf(ph_0[(((i0_1 * 119) + (i1_1 * 7)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 170; ++i0_i1_fused) {
    for (int32_t i2_2 = 0; i2_2 < 7; ++i2_2) {
      compute_2[((i0_i1_fused * 7) + i2_2)] = ceilf((ph_0[((i0_i1_fused * 7) + i2_2)] + sinf(ph_0[((i0_i1_fused * 7) + i2_2)])));
    }
  }
}
