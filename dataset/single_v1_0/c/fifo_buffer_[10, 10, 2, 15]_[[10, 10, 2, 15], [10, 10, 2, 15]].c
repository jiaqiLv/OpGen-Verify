void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i_j_fused = 0; i_j_fused < 100; ++i_j_fused) {
    for (int32_t k = 0; k < 2; ++k) {
      for (int32_t l = 0; l < 15; ++l) {
        new_buffer[(((i_j_fused * 30) + (k * 15)) + l)] = data[(((i_j_fused * 30) + (k * 15)) + l)];
      }
    }
  }
}
