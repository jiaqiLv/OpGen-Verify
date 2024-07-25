void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 180; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3_s = 0; i3_s < 15; ++i3_s) {
        compute[(((i0_i1_fused * 90) + (i2 * 15)) + i3_s)] = atanf(data[(((i0_i1_fused * 90) + (i2 * 15)) + i3_s)]);
      }
    }
  }
}

