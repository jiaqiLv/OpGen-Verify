void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 22; ++i1) {
      PadInput[((i0 * 22) + i1)] = (((((1 <= i0) && (i0 < 14)) && (2 <= i1)) && (i1 < 21)) ? data[(((i0 * 19) + i1) - 21)] : 0.000000e+00f);
    }
  }
}
