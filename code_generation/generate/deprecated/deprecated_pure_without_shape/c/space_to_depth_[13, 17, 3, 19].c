void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2652; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 19; ++i3) {
      space_to_depth[((i0_i1_fused_i2_fused * 19) + i3)] = data[(((((((i0_i1_fused_i2_fused / 204) * 3876) + ((((i0_i1_fused_i2_fused % 204) / 3) % 17) * 228)) + ((i0_i1_fused_i2_fused % 3) * 76)) + ((((i0_i1_fused_i2_fused % 204) / 3) / 34) * 38)) + (i3 * 2)) + ((((i0_i1_fused_i2_fused % 204) / 3) % 34) / 17))];
    }
  }
}

