void default_function_kernel(float* MirrorPadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 23; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      MirrorPadInput[((i0 * 18) + i1)] = data[((((21 <= i0) ? (40 - i0) : ((i0 < 1) ? (0 - i0) : (i0 - 1))) * 15) + ((i1 == 17) ? (31 - i1) : ((i1 < 2) ? (1 - i1) : (i1 - 2))))];
    }
  }
}

