void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6264; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 76; ++i2) {
      for (int32_t i3 = 0; i3 < 98; ++i3) {
        compute[(((i0_i1_fused * 7448) + (i2 * 98)) + i3)] = log2f(data[(((i0_i1_fused * 7448) + (i2 * 98)) + i3)]);
      }
    }
  }
}

