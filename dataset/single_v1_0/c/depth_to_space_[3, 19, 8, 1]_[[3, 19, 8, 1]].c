void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 384; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused >> 7) * 152) + ((((i0_i1_fused_i2_fused_i3_fused & 31) >> 1) % 2) * 64)) + ((i0_i1_fused_i2_fused_i3_fused & 1) * 32)) + (((i0_i1_fused_i2_fused_i3_fused & 127) >> 5) * 8)) + (((i0_i1_fused_i2_fused_i3_fused & 31) >> 1) / 2))];
  }
}
