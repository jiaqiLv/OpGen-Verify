void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 138; ++i0_i1_fused) {
    PadInput[i0_i1_fused] = (((((6 <= i0_i1_fused) && (i0_i1_fused < 126)) && (2 <= (i0_i1_fused % 6))) && ((i0_i1_fused % 6) < 5)) ? data[((((i0_i1_fused / 6) * 3) + (i0_i1_fused % 6)) - 5)] : 0.000000e+00f);
  }
}

