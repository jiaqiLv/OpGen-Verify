void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 5814; ++i0_i1_fused_i2_fused_i3_fused) {
    compute[i0_i1_fused_i2_fused_i3_fused] = ((int8_t)(data[i0_i1_fused_i2_fused_i3_fused] != data[i0_i1_fused_i2_fused_i3_fused]));
  }
}
