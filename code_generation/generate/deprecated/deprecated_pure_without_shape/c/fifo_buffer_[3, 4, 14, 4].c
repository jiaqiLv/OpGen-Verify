void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 3; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t k = 0; k < 14; ++k) {
        for (int32_t l = 0; l < 4; ++l) {
          new_buffer[((((i * 224) + (j * 56)) + (k * 4)) + l)] = data[((((i * 224) + (j * 56)) + (k * 4)) + l)];
        }
      }
    }
  }
}

