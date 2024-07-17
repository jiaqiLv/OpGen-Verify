void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 396; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((352 <= i0_i1_fused) ? (30 - (i0_i1_fused / 22)) : ((i0_i1_fused < 22) ? 0 : ((i0_i1_fused / 22) - 1))) * 19) + (((i0_i1_fused % 22) == 21) ? 18 : (((i0_i1_fused % 22) < 2) ? (1 - (i0_i1_fused % 22)) : ((i0_i1_fused % 22) - 2))))];
  }
}

