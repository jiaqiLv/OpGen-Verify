void default_function_kernel(float* data, float* new_buffer) {
  for (int32_t j = 0; j < 16; ++j) {
    for (int32_t k = 0; k < 10; ++k) {
      for (int32_t l = 0; l < 2; ++l) {
        new_buffer[(((j * 20) + (k * 2)) + l)] = data[(((j * 20) + (k * 2)) + l)];
      }
    }
  }
}

