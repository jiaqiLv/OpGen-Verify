void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 22; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      PadInput[((i0 * 9) + i1)] = (((((1 <= i0) && (i0 < 20)) && (2 <= i1)) && (i1 < 8)) ? data[(((i0 * 6) + i1) - 8)] : 0.000000e+00f);
    }
  }
}
