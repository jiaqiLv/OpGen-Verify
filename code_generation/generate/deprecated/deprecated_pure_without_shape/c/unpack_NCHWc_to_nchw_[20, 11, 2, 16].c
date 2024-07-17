void default_function_kernel(float* output_unpack, float* packed_out) {
  #pragma omp parallel for
  for (int32_t n_c_fused = 0; n_c_fused < 440; ++n_c_fused) {
    for (int32_t h = 0; h < 2; ++h) {
      for (int32_t w = 0; w < 16; ++w) {
        output_unpack[(((n_c_fused * 32) + (h * 16)) + w)] = packed_out[(((((n_c_fused >> 1) * 64) + (h * 32)) + (w * 2)) + (n_c_fused & 1))];
      }
    }
  }
}

