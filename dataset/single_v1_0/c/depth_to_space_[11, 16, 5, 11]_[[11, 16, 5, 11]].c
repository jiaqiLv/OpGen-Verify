void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 10; ++i2) {
        for (int32_t i3 = 0; i3 < 22; ++i3) {
          depth_to_space[((((i0 * 880) + (i1 * 220)) + (i2 * 22)) + i3)] = data[((((((i0 * 880) + ((i2 % 2) * 440)) + ((i3 % 2) * 220)) + (i1 * 55)) + ((i2 / 2) * 11)) + (i3 / 2))];
        }
      }
    }
  }
}
