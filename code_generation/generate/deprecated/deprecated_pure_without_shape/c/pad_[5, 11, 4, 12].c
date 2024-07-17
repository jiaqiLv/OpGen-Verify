void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 105; ++i0_i1_fused) {
    PadInput[i0_i1_fused] = (((((15 <= i0_i1_fused) && (i0_i1_fused < 75)) && (2 <= (i0_i1_fused % 15))) && ((i0_i1_fused % 15) < 14)) ? data[((((i0_i1_fused / 15) * 12) + (i0_i1_fused % 15)) - 14)] : 0.000000e+00f);
  }
}

