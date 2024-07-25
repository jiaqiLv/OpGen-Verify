void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i3 = 0; i3 < 17; ++i3) {
        compute[(((i0 * 51) + (i1 * 17)) + i3)] = log10f(data[(((i0 * 51) + (i1 * 17)) + i3)]);
      }
    }
  }
}

