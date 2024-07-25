void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 4; ++i2) {
        for (int32_t i3 = 0; i3 < 24; ++i3) {
          depth_to_space[((((i0 * 384) + (i1 * 96)) + (i2 * 24)) + i3)] = data[((((((i0 * 456) + ((i2 % 2) * 192)) + ((i3 % 2) * 96)) + (i1 * 24)) + ((i2 / 2) * 12)) + (i3 / 2))];
        }
      }
    }
  }
}
