void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        compute[(((i0 * 88) + (i1 * 8)) + i3)] = (1.000000e+00f / sqrtf(data[(((i0 * 88) + (i1 * 8)) + i3)]));
      }
    }
  }
}

