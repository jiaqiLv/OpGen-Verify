void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i_j_fused_k_fused_l_fused = 0; i_j_fused_k_fused_l_fused < 1620; ++i_j_fused_k_fused_l_fused) {
    new_buffer[i_j_fused_k_fused_l_fused] = data[i_j_fused_k_fused_l_fused];
  }
}

