void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3477; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 85; ++i2) {
      for (int32_t i3 = 0; i3 < 39; ++i3) {
        compute[(((i0_i1_fused * 3315) + (i2 * 39)) + i3)] = expf(data[(((i0_i1_fused * 3315) + (i2 * 39)) + i3)]);
      }
    }
  }
}

