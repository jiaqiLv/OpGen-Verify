void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4032; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 28; ++i3) {
      resize[((i0_i1_fused_i2_fused * 28) + i3)] = data[((((i0_i1_fused_i2_fused >> 6) * 448) + (((i0_i1_fused_i2_fused & 63) / 2) * 14)) + (i3 / 2))];
    }
  }
}

