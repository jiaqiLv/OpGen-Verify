void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 5; ++i) {
    for (int32_t j = 0; j < 96; ++j) {
      compute[((i * 96) + j)] = data[((i * 96) + j)];
    }
  }
}

