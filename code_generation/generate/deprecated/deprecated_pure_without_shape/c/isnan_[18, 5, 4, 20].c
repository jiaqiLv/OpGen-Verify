void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 360; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 20; ++i3) {
      compute[((i0_i1_fused_i2_fused * 20) + i3)] = ((int8_t)(data[((i0_i1_fused_i2_fused * 20) + i3)] != data[((i0_i1_fused_i2_fused * 20) + i3)]));
    }
  }
}

