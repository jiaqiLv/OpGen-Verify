void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 45; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 14; ++i3) {
        depth_to_space[(((i0_i1_fused * 112) + (i2 * 14)) + i3)] = data[(((((((i0_i1_fused / 3) * 392) + ((i2 % 2) * 168)) + ((i3 % 2) * 84)) + ((i0_i1_fused % 3) * 28)) + ((i2 / 2) * 7)) + (i3 / 2))];
      }
    }
  }
}
