void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 323; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      compute[((i0_i1_fused * 15) + i2)] = fabsf(ph_0[((i0_i1_fused * 15) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 19; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 15; ++i2_1) {
        compute_1[(((i0 * 285) + (i1 * 15)) + i2_1)] = fabsf(asinhf(ph_0[(((i0 * 285) + (i1 * 15)) + i2_1)]));
      }
    }
  }
}

