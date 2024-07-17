void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i3 = 0; i3 < 2; ++i3) {
      compute[((i0 * 2) + i3)] = logf(data[((i0 * 2) + i3)]);
    }
  }
}

