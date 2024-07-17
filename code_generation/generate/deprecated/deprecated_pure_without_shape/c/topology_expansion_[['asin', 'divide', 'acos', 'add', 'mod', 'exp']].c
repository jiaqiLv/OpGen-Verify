void default_function_kernel(float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 48; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      compute[((i0_i1_fused * 15) + i2)] = expf(fmodf(ph_0[((i0_i1_fused * 15) + i2)], (ph_0[((i0_i1_fused * 15) + i2)] + acosf((ph_0[((i0_i1_fused * 15) + i2)] / asinf(ph_0[((i0_i1_fused * 15) + i2)]))))));
    }
  }
}

