void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 7; ++i1) {
    for (int32_t i3 = 0; i3 < 5; ++i3) {
      compute[((i1 * 5) + i3)] = roundf(data[((i1 * 5) + i3)]);
    }
  }
}

