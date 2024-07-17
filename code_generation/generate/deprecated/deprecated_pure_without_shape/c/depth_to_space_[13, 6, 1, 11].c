void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 26; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 22; ++i3) {
      depth_to_space[((i0_i1_fused_i2_fused * 22) + i3)] = data[(((((i0_i1_fused_i2_fused >> 1) * 66) + ((i0_i1_fused_i2_fused & 1) * 22)) + ((i3 % 2) * 11)) + (i3 / 2))];
    }
  }
}

