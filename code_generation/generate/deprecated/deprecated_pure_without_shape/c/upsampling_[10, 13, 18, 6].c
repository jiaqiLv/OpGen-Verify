void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 224640; ++i0_i1_fused_i2_fused_i3_fused) {
    resize[i0_i1_fused_i2_fused_i3_fused] = data[((((i0_i1_fused_i2_fused_i3_fused / 1728) * 432) + ((((i0_i1_fused_i2_fused_i3_fused % 1728) / 24) / 2) * 12)) + ((i0_i1_fused_i2_fused_i3_fused % 24) / 2))];
  }
}

