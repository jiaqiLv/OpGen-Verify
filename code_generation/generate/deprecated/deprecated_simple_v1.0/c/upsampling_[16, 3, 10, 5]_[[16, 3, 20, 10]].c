void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 38400; ++i0_i1_fused_i2_fused_i3_fused) {
    resize[i0_i1_fused_i2_fused_i3_fused] = data[((((i0_i1_fused_i2_fused_i3_fused / 800) * 200) + ((((i0_i1_fused_i2_fused_i3_fused % 800) / 20) / 2) * 10)) + ((i0_i1_fused_i2_fused_i3_fused % 20) / 2))];
  }
}
