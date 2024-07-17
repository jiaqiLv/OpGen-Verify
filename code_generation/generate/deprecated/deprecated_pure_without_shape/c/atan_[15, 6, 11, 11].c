void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 90; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 11; ++i2) {
      for (int32_t i3_s = 0; i3_s < 11; ++i3_s) {
        compute[(((i0_i1_fused * 121) + (i2 * 11)) + i3_s)] = atanf(data[(((i0_i1_fused * 121) + (i2 * 11)) + i3_s)]);
      }
    }
  }
}

