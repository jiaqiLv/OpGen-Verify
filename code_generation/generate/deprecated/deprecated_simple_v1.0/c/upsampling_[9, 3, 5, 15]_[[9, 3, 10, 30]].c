void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        for (int32_t i3 = 0; i3 < 60; ++i3) {
          resize[((((i0 * 3600) + (i1 * 1200)) + (i2 * 60)) + i3)] = data[((((i0 * 900) + (i1 * 300)) + ((i2 / 2) * 30)) + (i3 / 2))];
        }
      }
    }
  }
}
