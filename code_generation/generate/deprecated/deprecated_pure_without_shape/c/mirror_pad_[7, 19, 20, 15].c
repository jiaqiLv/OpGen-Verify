void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 414; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((378 <= i0_i1_fused) ? (40 - (i0_i1_fused / 18)) : ((i0_i1_fused < 18) ? 0 : ((i0_i1_fused / 18) - 1))) * 15) + (((i0_i1_fused % 18) == 17) ? 14 : (((i0_i1_fused % 18) < 2) ? (1 - (i0_i1_fused % 18)) : ((i0_i1_fused % 18) - 2))))];
  }
}

