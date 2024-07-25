void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i_j_fused = 0; i_j_fused < 255; ++i_j_fused) {
    for (int32_t k = 0; k < 7; ++k) {
      for (int32_t l = 0; l < 18; ++l) {
        new_buffer[(((i_j_fused * 126) + (k * 18)) + l)] = data[(((i_j_fused * 126) + (k * 18)) + l)];
      }
    }
  }
}
