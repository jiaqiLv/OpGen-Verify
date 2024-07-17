void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 70; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((60 <= i0_i1_fused) ? (22 - (i0_i1_fused / 5)) : ((i0_i1_fused < 5) ? 0 : ((i0_i1_fused / 5) - 1))) * 2) + (((i0_i1_fused % 5) == 4) ? 1 : (((i0_i1_fused % 5) < 2) ? (1 - (i0_i1_fused % 5)) : ((i0_i1_fused % 5) - 2))))];
  }
}

