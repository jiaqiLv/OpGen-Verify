void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i3 = 0; i3 < 18; ++i3) {
        compute[(((i0 * 36) + (i1 * 18)) + i3)] = cosf(data[(((i0 * 36) + (i1 * 18)) + i3)]);
      }
    }
  }
}

