void default_function_kernel(float* DilatedInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i3 = 0; i3 < 11; ++i3) {
        DilatedInput[(((i0 * 220) + (i1 * 11)) + i3)] = data[(((i0 * 220) + (i1 * 11)) + i3)];
      }
    }
  }
}

