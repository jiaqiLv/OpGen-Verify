void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 240; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 15; ++i3) {
      compute[((i0_i1_fused_i2_fused * 15) + i3)] = ((0.000000e+00f < data[((i0_i1_fused_i2_fused * 15) + i3)]) ? data[((i0_i1_fused_i2_fused * 15) + i3)] : (data[((i0_i1_fused_i2_fused * 15) + i3)] * 5.000000e-01f));
    }
  }
}
