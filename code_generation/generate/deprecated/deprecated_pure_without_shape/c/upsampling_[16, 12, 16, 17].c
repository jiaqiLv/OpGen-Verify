void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 12288; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 68; ++i3) {
      resize[((i0_i1_fused_i2_fused * 68) + i3)] = data[((((i0_i1_fused_i2_fused >> 6) * 1088) + (((i0_i1_fused_i2_fused & 63) / 2) * 34)) + (i3 / 2))];
    }
  }
}

