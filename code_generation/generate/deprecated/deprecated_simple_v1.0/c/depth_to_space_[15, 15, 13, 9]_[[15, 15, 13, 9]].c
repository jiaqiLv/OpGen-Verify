void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 26; ++i2) {
        for (int32_t i3 = 0; i3 < 18; ++i3) {
          depth_to_space[((((i0 * 1404) + (i1 * 468)) + (i2 * 18)) + i3)] = data[((((((i0 * 1755) + ((i2 % 2) * 702)) + ((i3 % 2) * 351)) + (i1 * 117)) + ((i2 / 2) * 9)) + (i3 / 2))];
        }
      }
    }
  }
}
