void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 238; ++j) {
      compute[((i * 238) + j)] = data[((i * 238) + j)];
    }
  }
}
