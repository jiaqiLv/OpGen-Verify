void default_function_kernel(float* DilatedInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 20; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 6; ++i3) {
        DilatedInput[(((i0_i1_fused * 96) + (i2 * 6)) + i3)] = data[(((i0_i1_fused * 96) + (i2 * 6)) + i3)];
      }
    }
  }
}

