void default_function_kernel(float* output_unpack, float* packed_out) {
  #pragma omp parallel for
  for (int32_t n_c_fused = 0; n_c_fused < 16; ++n_c_fused) {
    for (int32_t h = 0; h < 17; ++h) {
      for (int32_t w = 0; w < 2; ++w) {
        output_unpack[(((n_c_fused * 34) + (h * 2)) + w)] = packed_out[(((((n_c_fused >> 1) * 68) + (h * 4)) + (w * 2)) + (n_c_fused & 1))];
      }
    }
  }
}

