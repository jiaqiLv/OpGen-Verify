void default_function_kernel(float* Scale, float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 98; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 11; ++i3) {
        compute[(((i0_i1_fused * 33) + (i2 * 11)) + i3)] = ((0.000000e+00f < data[(((i0_i1_fused * 33) + (i2 * 11)) + i3)]) ? data[(((i0_i1_fused * 33) + (i2 * 11)) + i3)] : (data[(((i0_i1_fused * 33) + (i2 * 11)) + i3)] * Scale[i3]));
      }
    }
  }
}

