void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 80; ++i1) {
      for (int32_t i2 = 0; i2 < 11; ++i2) {
        for (int32_t i3 = 0; i3 < 20; ++i3) {
          space_to_depth[((((i0 * 17600) + (i1 * 220)) + (i2 * 20)) + i3)] = data[((((((i0 * 17600) + ((i1 % 20) * 880)) + (i2 * 80)) + ((i1 / 40) * 40)) + (i3 * 2)) + ((i1 % 40) / 20))];
        }
      }
    }
  }
}

