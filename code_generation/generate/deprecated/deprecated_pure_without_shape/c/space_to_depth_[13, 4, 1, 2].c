void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 416; ++i0_i1_fused_i2_fused_i3_fused) {
    space_to_depth[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused >> 5) * 32) + ((((i0_i1_fused_i2_fused_i3_fused & 31) >> 1) % 4) * 8)) + ((((i0_i1_fused_i2_fused_i3_fused & 31) >> 1) / 8) * 4)) + ((i0_i1_fused_i2_fused_i3_fused & 1) * 2)) + ((((i0_i1_fused_i2_fused_i3_fused & 31) >> 1) % 8) / 4))];
  }
}

