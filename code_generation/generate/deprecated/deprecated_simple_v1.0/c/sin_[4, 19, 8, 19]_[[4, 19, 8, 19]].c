void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 11552; ++i0_i1_fused_i2_fused_i3_fused) {
    compute[i0_i1_fused_i2_fused_i3_fused] = sinf(data[i0_i1_fused_i2_fused_i3_fused]);
  }
}

