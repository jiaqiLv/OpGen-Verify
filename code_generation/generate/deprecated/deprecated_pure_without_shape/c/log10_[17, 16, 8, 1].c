void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 272; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute[((i0_i1_fused * 8) + i2)] = log10f(data[((i0_i1_fused * 8) + i2)]);
    }
  }
}

