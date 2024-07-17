void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        compute[(((i0 * 48) + (i2 * 3)) + i3)] = atanf(data[(((i0 * 48) + (i2 * 3)) + i3)]);
      }
    }
  }
}

