void default_function_kernel(float* DilatedInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 270; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 19; ++i3) {
      DilatedInput[((i0_i1_fused_i2_fused * 19) + i3)] = data[((i0_i1_fused_i2_fused * 19) + i3)];
    }
  }
}
