void default_function_kernel(float* output_unpack, float* packed_out) {
  #pragma omp parallel for
  for (int32_t n_c_fused_h_fused_w_fused = 0; n_c_fused_h_fused_w_fused < 1400; ++n_c_fused_h_fused_w_fused) {
    output_unpack[n_c_fused_h_fused_w_fused] = packed_out[((((n_c_fused_h_fused_w_fused / 200) * 200) + ((n_c_fused_h_fused_w_fused % 100) * 2)) + ((n_c_fused_h_fused_w_fused % 200) / 100))];
  }
}

