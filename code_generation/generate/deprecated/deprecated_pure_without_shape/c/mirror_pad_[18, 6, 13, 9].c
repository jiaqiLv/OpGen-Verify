void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      MirrorPadInput[((i0 * 12) + i1)] = data[((((14 <= i0) ? (26 - i0) : ((i0 < 1) ? (0 - i0) : (i0 - 1))) * 9) + ((i1 == 11) ? (19 - i1) : ((i1 < 2) ? (1 - i1) : (i1 - 2))))];
    }
  }
}

