void default_function_kernel(float* output_unpack, float* packed_out) {
  #pragma omp parallel for
  for (int32_t n_c_fused = 0; n_c_fused < 144; ++n_c_fused) {
    for (int32_t w = 0; w < 10; ++w) {
      output_unpack[((n_c_fused * 10) + w)] = packed_out[((((n_c_fused >> 1) * 20) + (w * 2)) + (n_c_fused & 1))];
    }
  }
}

