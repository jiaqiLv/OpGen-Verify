void default_function_kernel(float* DilatedInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        for (int32_t i3 = 0; i3 < 9; ++i3) {
          DilatedInput[((((i0 * 819) + (i1 * 63)) + (i2 * 9)) + i3)] = data[((((i0 * 819) + (i1 * 63)) + (i2 * 9)) + i3)];
        }
      }
    }
  }
}
