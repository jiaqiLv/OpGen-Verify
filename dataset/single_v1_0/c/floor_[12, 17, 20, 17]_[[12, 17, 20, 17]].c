void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 204; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      for (int32_t i3 = 0; i3 < 17; ++i3) {
        compute[(((i0_i1_fused * 340) + (i2 * 17)) + i3)] = floorf(data[(((i0_i1_fused * 340) + (i2 * 17)) + i3)]);
      }
    }
  }
}

