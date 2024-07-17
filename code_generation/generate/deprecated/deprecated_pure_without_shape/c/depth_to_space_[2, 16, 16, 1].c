void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 512; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused >> 8) * 256) + ((((i0_i1_fused_i2_fused_i3_fused & 63) >> 1) % 2) * 128)) + ((i0_i1_fused_i2_fused_i3_fused & 1) * 64)) + (((i0_i1_fused_i2_fused_i3_fused & 255) >> 6) * 16)) + (((i0_i1_fused_i2_fused_i3_fused & 63) >> 1) / 2))];
  }
}

