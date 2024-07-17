void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 32; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 20; ++i3) {
        depth_to_space[(((i0_i1_fused * 360) + (i2 * 20)) + i3)] = data[(((((((i0_i1_fused >> 1) * 990) + ((i2 % 2) * 360)) + ((i3 % 2) * 180)) + ((i0_i1_fused & 1) * 90)) + ((i2 / 2) * 10)) + (i3 / 2))];
      }
    }
  }
}

