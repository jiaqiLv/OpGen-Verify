void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 132; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 17; ++i3) {
        compute[(((i0_i1_fused * 34) + (i2 * 17)) + i3)] = atanf(data[(((i0_i1_fused * 34) + (i2 * 17)) + i3)]);
      }
    }
  }
}

