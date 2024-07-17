void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 180; ++i0_i1_fused) {
    MirrorPadInput[i0_i1_fused] = data[((((140 <= i0_i1_fused) ? (12 - (i0_i1_fused / 20)) : ((i0_i1_fused < 20) ? 0 : ((i0_i1_fused / 20) - 1))) * 17) + (((i0_i1_fused % 20) == 19) ? 16 : (((i0_i1_fused % 20) < 2) ? (1 - (i0_i1_fused % 20)) : ((i0_i1_fused % 20) - 2))))];
  }
}

