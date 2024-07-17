void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 204; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3_s = 0; i3_s < 16; ++i3_s) {
        compute[(((i0_i1_fused * 160) + (i2 * 16)) + i3_s)] = atanhf(data[(((i0_i1_fused * 160) + (i2 * 16)) + i3_s)]);
      }
    }
  }
}

