void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 2016; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused / 112) * 140) + ((((i0_i1_fused_i2_fused_i3_fused % 112) >> 3) % 2) * 56)) + (((i0_i1_fused_i2_fused_i3_fused & 7) % 2) * 28)) + ((((i0_i1_fused_i2_fused_i3_fused % 112) >> 3) / 2) * 4)) + ((i0_i1_fused_i2_fused_i3_fused & 7) / 2))];
  }
}

