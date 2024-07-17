void default_function_kernel(float* data, float* new_buffer) {
  for (int32_t j = 0; j < 10; ++j) {
    for (int32_t k = 0; k < 13; ++k) {
      for (int32_t l = 0; l < 17; ++l) {
        new_buffer[(((j * 221) + (k * 17)) + l)] = data[(((j * 221) + (k * 17)) + l)];
      }
    }
  }
}

