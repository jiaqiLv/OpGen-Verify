void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 60; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 14; ++i3) {
        compute[(((i0_i1_fused * 84) + (i2 * 14)) + i3)] = max(data[(((i0_i1_fused * 84) + (i2 * 14)) + i3)], 0.000000e+00f);
      }
    }
  }
}

