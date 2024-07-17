void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 12; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t k = 0; k < 4; ++k) {
        for (int32_t l = 0; l < 5; ++l) {
          new_buffer[((((i * 80) + (j * 20)) + (k * 5)) + l)] = data[((((i * 80) + (j * 20)) + (k * 5)) + l)];
        }
      }
    }
  }
}

