void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 112; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      for (int32_t i3_s = 0; i3_s < 5; ++i3_s) {
        compute[(((i0_i1_fused * 95) + (i2 * 5)) + i3_s)] = ((int8_t)(data[(((i0_i1_fused * 95) + (i2 * 5)) + i3_s)] != data[(((i0_i1_fused * 95) + (i2 * 5)) + i3_s)]));
      }
    }
  }
}

