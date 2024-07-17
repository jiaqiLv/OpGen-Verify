void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 23; ++i1) {
      PadInput[((i0 * 23) + i1)] = (((((1 <= i0) && (i0 < 7)) && (2 <= i1)) && (i1 < 22)) ? data[(((i0 * 20) + i1) - 22)] : 0.000000e+00f);
    }
  }
}

