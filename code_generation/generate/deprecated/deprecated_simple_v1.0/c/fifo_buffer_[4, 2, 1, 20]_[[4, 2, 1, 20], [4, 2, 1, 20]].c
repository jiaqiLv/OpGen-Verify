void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i_j_fused_k_fused = 0; i_j_fused_k_fused < 8; ++i_j_fused_k_fused) {
    for (int32_t l = 0; l < 20; ++l) {
      new_buffer[((i_j_fused_k_fused * 20) + l)] = data[((i_j_fused_k_fused * 20) + l)];
    }
  }
}
