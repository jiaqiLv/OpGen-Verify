void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 21; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      MirrorPadInput[((i0 * 17) + i1)] = data[((((19 <= i0) ? (36 - i0) : ((i0 < 1) ? (0 - i0) : (i0 - 1))) * 14) + ((i1 == 16) ? (29 - i1) : ((i1 < 2) ? (1 - i1) : (i1 - 2))))];
    }
  }
}
