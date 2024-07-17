void default_function_kernel(float* compute, float* compute_1, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 1360; ++i0_i1_fused_i2_fused_i3_fused) {
    compute[i0_i1_fused_i2_fused_i3_fused] = sqrtf((data[i0_i1_fused_i2_fused_i3_fused] + data_1[i0_i1_fused_i2_fused_i3_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 170; ++i0_i1_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      compute_1[((i0_i1_fused * 8) + i3)] = cosf((data[((i0_i1_fused * 8) + i3)] + data_1[((i0_i1_fused * 8) + i3)]));
    }
  }
}

