void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 100; ++i0_i1_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      compute[((i0_i1_fused * 10) + i3)] = erff(data[((i0_i1_fused * 10) + i3)]);
    }
  }
}

