void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 104; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      depth_to_space[((i0_i1_fused_i2_fused * 10) + i3)] = data[((((((i0_i1_fused_i2_fused / 26) * 325) + (((i0_i1_fused_i2_fused % 26) % 2) * 130)) + ((i3 % 2) * 65)) + (((i0_i1_fused_i2_fused % 26) / 2) * 5)) + (i3 / 2))];
    }
  }
}

