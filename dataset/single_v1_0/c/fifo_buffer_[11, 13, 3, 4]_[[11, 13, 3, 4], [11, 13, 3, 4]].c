void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i_j_fused_k_fused = 0; i_j_fused_k_fused < 429; ++i_j_fused_k_fused) {
    for (int32_t l = 0; l < 4; ++l) {
      new_buffer[((i_j_fused_k_fused * 4) + l)] = data[((i_j_fused_k_fused * 4) + l)];
    }
  }
}

