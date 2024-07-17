void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 15; ++i) {
    for (int32_t j = 0; j < 1890; ++j) {
      compute[((i * 1890) + j)] = data[((i * 1890) + j)];
    }
  }
}

