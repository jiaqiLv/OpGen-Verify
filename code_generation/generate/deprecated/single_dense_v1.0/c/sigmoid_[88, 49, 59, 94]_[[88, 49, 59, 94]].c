void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 254408; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 94; ++i3) {
      compute[((i0_i1_fused_i2_fused * 94) + i3)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - data[((i0_i1_fused_i2_fused * 94) + i3)]))));
    }
  }
}
