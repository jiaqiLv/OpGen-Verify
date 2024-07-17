void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 20736; ++i0_i1_fused_i2_fused_i3_fused) {
    resize[i0_i1_fused_i2_fused_i3_fused] = data[((((i0_i1_fused_i2_fused_i3_fused / 192) * 48) + ((((i0_i1_fused_i2_fused_i3_fused % 192) / 48) / 2) * 24)) + ((i0_i1_fused_i2_fused_i3_fused % 48) / 2))];
  }
}

