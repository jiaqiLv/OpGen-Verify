void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 22; ++i2) {
        for (int32_t i3 = 0; i3 < 8; ++i3) {
          depth_to_space[((((i0 * 528) + (i1 * 176)) + (i2 * 8)) + i3)] = data[((((((i0 * 660) + ((i2 % 2) * 264)) + ((i3 % 2) * 132)) + (i1 * 44)) + ((i2 / 2) * 4)) + (i3 / 2))];
        }
      }
    }
  }
}

