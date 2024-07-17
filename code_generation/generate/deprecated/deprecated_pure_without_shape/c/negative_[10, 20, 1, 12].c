void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i3 = 0; i3 < 12; ++i3) {
        compute[(((i0 * 240) + (i1 * 12)) + i3)] = (data[(((i0 * 240) + (i1 * 12)) + i3)] * -1.000000e+00f);
      }
    }
  }
}

