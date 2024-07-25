void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i_j_fused = 0; i_j_fused < 14; ++i_j_fused) {
    for (int32_t k = 0; k < 18; ++k) {
      for (int32_t l = 0; l < 16; ++l) {
        new_buffer[(((i_j_fused * 288) + (k * 16)) + l)] = data[(((i_j_fused * 288) + (k * 16)) + l)];
      }
    }
  }
}

