void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 110; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 13; ++i2) {
      compute[((i0_i1_fused * 13) + i2)] = coshf(data[((i0_i1_fused * 13) + i2)]);
    }
  }
}

