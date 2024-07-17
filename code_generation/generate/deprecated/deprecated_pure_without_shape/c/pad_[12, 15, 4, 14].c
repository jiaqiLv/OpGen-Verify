void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      PadInput[((i0 * 17) + i1)] = (((((1 <= i0) && (i0 < 5)) && (2 <= i1)) && (i1 < 16)) ? data[(((i0 * 14) + i1) - 16)] : 0.000000e+00f);
    }
  }
}

