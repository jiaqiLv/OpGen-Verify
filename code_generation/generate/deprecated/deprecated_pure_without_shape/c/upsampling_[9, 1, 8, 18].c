void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 9; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 32; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        resize[(((i0_i1_fused * 2304) + (i2 * 72)) + i3)] = data[(((i0_i1_fused * 576) + ((i2 / 2) * 36)) + (i3 / 2))];
      }
    }
  }
}

