void default_function_kernel(float* DilatedInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 3762; ++i0_i1_fused_i2_fused_i3_fused) {
    DilatedInput[i0_i1_fused_i2_fused_i3_fused] = data[i0_i1_fused_i2_fused_i3_fused];
  }
}

