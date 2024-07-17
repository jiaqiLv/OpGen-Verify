void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 80; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 48; ++i2) {
      for (int32_t i3 = 0; i3 < 76; ++i3) {
        resize[(((i0_i1_fused * 3648) + (i2 * 76)) + i3)] = data[(((i0_i1_fused * 912) + ((i2 / 2) * 38)) + (i3 / 2))];
      }
    }
  }
}

