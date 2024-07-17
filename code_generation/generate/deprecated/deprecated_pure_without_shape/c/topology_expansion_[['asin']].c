void default_function_kernel(float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 323; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      compute[((i0_i1_fused * 5) + i2)] = asinf(ph_0[((i0_i1_fused * 5) + i2)]);
    }
  }
}

