void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 112; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((96 <= i0_i1_fused) ? (22 - (i0_i1_fused >> 3)) : ((i0_i1_fused < 8) ? 0 : ((i0_i1_fused >> 3) - 1))) * 5) + (((i0_i1_fused & 7) == 7) ? 4 : (((i0_i1_fused & 7) < 2) ? (1 - (i0_i1_fused & 7)) : ((i0_i1_fused & 7) - 2))))];
  }
}

