void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute[(((i0 * 196) + (i1 * 14)) + i2)] = (1.000000e+00f / sqrtf(data[(((i0 * 196) + (i1 * 14)) + i2)]));
      }
    }
  }
}
