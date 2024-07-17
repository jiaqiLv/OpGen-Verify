void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 28; ++i1) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        space_to_depth[(((i0 * 84) + (i1 * 3)) + i3)] = data[(((((i0 * 84) + ((i1 % 7) * 12)) + ((i1 / 14) * 6)) + (i3 * 2)) + ((i1 % 14) / 7))];
      }
    }
  }
}

