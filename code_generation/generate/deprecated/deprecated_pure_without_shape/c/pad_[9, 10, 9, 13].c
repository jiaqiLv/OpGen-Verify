void default_function_kernel(float* PadInput, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 192; ++i0_i1_fused) {
    PadInput[i0_i1_fused] = (((((16 <= i0_i1_fused) && (i0_i1_fused < 160)) && (2 <= (i0_i1_fused & 15))) && ((i0_i1_fused & 15) < 15)) ? data[((((i0_i1_fused >> 4) * 13) + (i0_i1_fused & 15)) - 15)] : 0.000000e+00f);
  }
}

