void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 39; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      compute[((i0_i1_fused * 17) + i2)] = floorf(data[((i0_i1_fused * 17) + i2)]);
    }
  }
}
