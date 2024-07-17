void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 19; ++i1) {
      PadInput[((i0 * 19) + i1)] = (((((1 <= i0) && (i0 < 18)) && (2 <= i1)) && (i1 < 18)) ? data[(((i0 * 16) + i1) - 18)] : 0.000000e+00f);
    }
  }
}

