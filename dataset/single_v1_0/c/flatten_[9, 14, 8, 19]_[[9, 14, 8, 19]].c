void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i_j_fused = 0; i_j_fused < 19152; ++i_j_fused) {
    compute[i_j_fused] = data[i_j_fused];
  }
}
