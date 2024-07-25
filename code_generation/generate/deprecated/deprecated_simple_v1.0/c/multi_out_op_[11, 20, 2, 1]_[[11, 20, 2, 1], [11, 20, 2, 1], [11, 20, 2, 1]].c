void default_function_kernel(float* compute, float* compute_1, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        compute[(((i0 * 40) + (i1 * 2)) + i2)] = sqrtf((data[(((i0 * 40) + (i1 * 2)) + i2)] + data_1[(((i0 * 40) + (i1 * 2)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 440; ++i0_i1_fused_i2_fused_i3_fused) {
    compute_1[i0_i1_fused_i2_fused_i3_fused] = cosf((data[i0_i1_fused_i2_fused_i3_fused] + data_1[i0_i1_fused_i2_fused_i3_fused]));
  }
}

