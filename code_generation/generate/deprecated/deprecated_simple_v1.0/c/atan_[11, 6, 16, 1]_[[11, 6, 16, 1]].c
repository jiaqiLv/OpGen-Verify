void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1056; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(data[i0_i1_fused_i2_fused]);
  }
}
