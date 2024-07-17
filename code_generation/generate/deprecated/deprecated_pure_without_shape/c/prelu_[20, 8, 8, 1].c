void default_function_kernel(float* Scale, float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        compute[(((i0 * 64) + (i1 * 8)) + i2)] = ((0.000000e+00f < data[(((i0 * 64) + (i1 * 8)) + i2)]) ? data[(((i0 * 64) + (i1 * 8)) + i2)] : (data[(((i0 * 64) + (i1 * 8)) + i2)] * Scale[0]));
      }
    }
  }
}

