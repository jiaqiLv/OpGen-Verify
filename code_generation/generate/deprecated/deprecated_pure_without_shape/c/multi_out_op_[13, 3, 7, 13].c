void default_function_kernel(float* compute, float* compute_1, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 39; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 13; ++i3) {
        compute[(((i0_i1_fused * 91) + (i2 * 13)) + i3)] = sqrtf((data[(((i0_i1_fused * 91) + (i2 * 13)) + i3)] + data_1[(((i0_i1_fused * 91) + (i2 * 13)) + i3)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 273; ++i0_i1_fused_i2_fused) {
    for (int32_t i3_1 = 0; i3_1 < 13; ++i3_1) {
      compute_1[((i0_i1_fused_i2_fused * 13) + i3_1)] = cosf((data[((i0_i1_fused_i2_fused * 13) + i3_1)] + data_1[((i0_i1_fused_i2_fused * 13) + i3_1)]));
    }
  }
}

