void default_function_kernel(float* data, float* new_buffer) {
  #pragma omp parallel for
  for (int32_t i = 0; i < 3; ++i) {
    for (int32_t j = 0; j < 3; ++j) {
      for (int32_t k = 0; k < 18; ++k) {
        for (int32_t l = 0; l < 10; ++l) {
          new_buffer[((((i * 540) + (j * 180)) + (k * 10)) + l)] = data[((((i * 540) + (j * 180)) + (k * 10)) + l)];
        }
      }
    }
  }
}

