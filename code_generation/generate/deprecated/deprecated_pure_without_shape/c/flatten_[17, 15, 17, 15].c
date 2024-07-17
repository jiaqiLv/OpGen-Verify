void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 17; ++i) {
    for (int32_t j = 0; j < 3825; ++j) {
      compute[((i * 3825) + j)] = data[((i * 3825) + j)];
    }
  }
}

