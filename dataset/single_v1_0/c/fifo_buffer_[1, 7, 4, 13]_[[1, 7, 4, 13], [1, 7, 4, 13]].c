void default_function_kernel(float* data, float* new_buffer) {
  for (int32_t j = 0; j < 7; ++j) {
    for (int32_t k = 0; k < 4; ++k) {
      for (int32_t l = 0; l < 13; ++l) {
        new_buffer[(((j * 52) + (k * 13)) + l)] = data[(((j * 52) + (k * 13)) + l)];
      }
    }
  }
}

