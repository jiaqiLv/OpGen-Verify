void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 12; ++i0) {
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      PadInput[((i0 * 16) + i1)] = (((((1 <= i0) && (i0 < 10)) && (2 <= i1)) && (i1 < 15)) ? data[(((i0 * 13) + i1) - 15)] : 0.000000e+00f);
    }
  }
}

