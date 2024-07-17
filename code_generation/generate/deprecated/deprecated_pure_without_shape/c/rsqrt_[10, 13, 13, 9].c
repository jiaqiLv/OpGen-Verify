void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 130; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 13; ++i2) {
      for (int32_t i3_s = 0; i3_s < 9; ++i3_s) {
        compute[(((i0_i1_fused * 117) + (i2 * 9)) + i3_s)] = (1.000000e+00f / sqrtf(data[(((i0_i1_fused * 117) + (i2 * 9)) + i3_s)]));
      }
    }
  }
}

