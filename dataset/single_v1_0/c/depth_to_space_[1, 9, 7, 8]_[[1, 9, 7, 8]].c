void default_function_kernel(float* data, float* depth_to_space) {
  for (int32_t i1 = 0; i1 < 2; ++i1) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        depth_to_space[(((i1 * 224) + (i2 * 16)) + i3)] = data[((((((i2 % 2) * 224) + ((i3 % 2) * 112)) + (i1 * 56)) + ((i2 / 2) * 8)) + (i3 / 2))];
      }
    }
  }
}

