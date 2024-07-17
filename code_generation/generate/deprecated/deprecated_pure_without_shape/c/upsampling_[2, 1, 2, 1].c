void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 64; ++i0_i1_fused_i2_fused_i3_fused) {
    resize[i0_i1_fused_i2_fused_i3_fused] = data[((((i0_i1_fused_i2_fused_i3_fused >> 5) * 8) + ((((i0_i1_fused_i2_fused_i3_fused & 31) >> 2) / 2) * 2)) + ((i0_i1_fused_i2_fused_i3_fused & 3) / 2))];
  }
}

