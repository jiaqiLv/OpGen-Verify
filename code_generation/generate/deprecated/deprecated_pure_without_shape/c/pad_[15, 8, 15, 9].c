void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      PadInput[((i0 * 12) + i1)] = (((((1 <= i0) && (i0 < 16)) && (2 <= i1)) && (i1 < 11)) ? data[(((i0 * 9) + i1) - 11)] : 0.000000e+00f);
    }
  }
}

