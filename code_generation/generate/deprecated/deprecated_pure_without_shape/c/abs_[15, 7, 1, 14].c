void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i3 = 0; i3 < 14; ++i3) {
        compute[(((i0 * 98) + (i1 * 14)) + i3)] = fabsf(data[(((i0 * 98) + (i1 * 14)) + i3)]);
      }
    }
  }
}

