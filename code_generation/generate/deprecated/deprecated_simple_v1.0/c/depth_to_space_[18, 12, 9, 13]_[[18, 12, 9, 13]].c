void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 54; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 26; ++i3) {
        depth_to_space[(((i0_i1_fused * 468) + (i2 * 26)) + i3)] = data[(((((((i0_i1_fused / 3) * 1404) + ((i2 % 2) * 702)) + ((i3 % 2) * 351)) + ((i0_i1_fused % 3) * 117)) + ((i2 / 2) * 13)) + (i3 / 2))];
      }
    }
  }
}
