void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3960; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(data[i0_i1_fused_i2_fused]);
  }
}

