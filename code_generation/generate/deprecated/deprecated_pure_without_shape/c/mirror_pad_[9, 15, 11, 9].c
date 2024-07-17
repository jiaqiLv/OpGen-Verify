void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 168; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((144 <= i0_i1_fused) ? (22 - (i0_i1_fused / 12)) : ((i0_i1_fused < 12) ? 0 : ((i0_i1_fused / 12) - 1))) * 9) + (((i0_i1_fused % 12) == 11) ? 8 : (((i0_i1_fused % 12) < 2) ? (1 - (i0_i1_fused % 12)) : ((i0_i1_fused % 12) - 2))))];
  }
}

