void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 187; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3_s = 0; i3_s < 3; ++i3_s) {
        compute[(((i0_i1_fused * 18) + (i2 * 3)) + i3_s)] = erff(data[(((i0_i1_fused * 18) + (i2 * 3)) + i3_s)]);
      }
    }
  }
}

