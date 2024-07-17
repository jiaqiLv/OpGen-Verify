void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 40; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        depth_to_space[(((i0_i1_fused * 1280) + (i2 * 32)) + i3)] = data[(((((i0_i1_fused * 2240) + ((i2 % 2) * 640)) + ((i3 % 2) * 320)) + ((i2 / 2) * 16)) + (i3 / 2))];
      }
    }
  }
}

