void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 112; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 17; ++i3) {
      space_to_depth[((i0_i1_fused_i2_fused * 17) + i3)] = data[((((((i0_i1_fused_i2_fused >> 3) * 136) + (((i0_i1_fused_i2_fused & 7) % 2) * 68)) + (((i0_i1_fused_i2_fused & 7) / 4) * 34)) + (i3 * 2)) + (((i0_i1_fused_i2_fused & 7) % 4) / 2))];
    }
  }
}

