void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 396; ++i0_i1_fused_i2_fused_i3_fused) {
    compute[i0_i1_fused_i2_fused_i3_fused] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - data[i0_i1_fused_i2_fused_i3_fused]))));
  }
}

