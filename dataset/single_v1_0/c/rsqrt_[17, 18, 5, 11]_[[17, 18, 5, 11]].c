void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 306; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3_s = 0; i3_s < 11; ++i3_s) {
        compute[(((i0_i1_fused * 55) + (i2 * 11)) + i3_s)] = (1.000000e+00f / sqrtf(data[(((i0_i1_fused * 55) + (i2 * 11)) + i3_s)]));
      }
    }
  }
}
