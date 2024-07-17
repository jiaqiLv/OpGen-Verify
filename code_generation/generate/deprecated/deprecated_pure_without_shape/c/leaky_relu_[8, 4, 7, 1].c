void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 32; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      compute[((i0_i1_fused * 7) + i2)] = ((0.000000e+00f < data[((i0_i1_fused * 7) + i2)]) ? data[((i0_i1_fused * 7) + i2)] : (data[((i0_i1_fused * 7) + i2)] * 5.000000e-01f));
    }
  }
}

