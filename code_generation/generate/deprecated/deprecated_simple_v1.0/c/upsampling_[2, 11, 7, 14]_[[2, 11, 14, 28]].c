void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 28; ++i2) {
        for (int32_t i3 = 0; i3 < 56; ++i3) {
          resize[((((i0 * 17248) + (i1 * 1568)) + (i2 * 56)) + i3)] = data[((((i0 * 4312) + (i1 * 392)) + ((i2 / 2) * 28)) + (i3 / 2))];
        }
      }
    }
  }
}
