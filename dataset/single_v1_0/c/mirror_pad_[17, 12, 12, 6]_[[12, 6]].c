void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 135; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((117 <= i0_i1_fused) ? (24 - (i0_i1_fused / 9)) : ((i0_i1_fused < 9) ? 0 : ((i0_i1_fused / 9) - 1))) * 6) + (((i0_i1_fused % 9) == 8) ? 5 : (((i0_i1_fused % 9) < 2) ? (1 - (i0_i1_fused % 9)) : ((i0_i1_fused % 9) - 2))))];
  }
}

