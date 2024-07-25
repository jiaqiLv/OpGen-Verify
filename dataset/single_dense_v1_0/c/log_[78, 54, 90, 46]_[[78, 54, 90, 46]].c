void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4212; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 90; ++i2) {
      for (int32_t i3 = 0; i3 < 46; ++i3) {
        compute[(((i0_i1_fused * 4140) + (i2 * 46)) + i3)] = logf(data[(((i0_i1_fused * 4140) + (i2 * 46)) + i3)]);
      }
    }
  }
}
