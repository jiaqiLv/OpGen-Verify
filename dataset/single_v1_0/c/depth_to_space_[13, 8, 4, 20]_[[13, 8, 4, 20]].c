void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        for (int32_t i3 = 0; i3 < 40; ++i3) {
          depth_to_space[((((i0 * 640) + (i1 * 320)) + (i2 * 40)) + i3)] = data[((((((i0 * 640) + ((i2 % 2) * 320)) + ((i3 % 2) * 160)) + (i1 * 80)) + ((i2 / 2) * 20)) + (i3 / 2))];
        }
      }
    }
  }
}

