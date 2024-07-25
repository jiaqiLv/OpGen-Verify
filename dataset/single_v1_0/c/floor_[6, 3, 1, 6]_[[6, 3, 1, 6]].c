void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i3 = 0; i3 < 6; ++i3) {
        compute[(((i0 * 18) + (i1 * 6)) + i3)] = floorf(data[(((i0 * 18) + (i1 * 6)) + i3)]);
      }
    }
  }
}
