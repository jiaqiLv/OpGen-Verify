void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 12; ++i3) {
        depth_to_space[(((i0_i1_fused * 216) + (i2 * 12)) + i3)] = data[(((((i0_i1_fused * 378) + ((i2 % 2) * 108)) + ((i3 % 2) * 54)) + ((i2 / 2) * 6)) + (i3 / 2))];
      }
    }
  }
}

