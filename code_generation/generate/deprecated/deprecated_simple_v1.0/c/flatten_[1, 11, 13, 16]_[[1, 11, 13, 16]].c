void default_function_kernel(float* compute, float* data) {
  for (int32_t j = 0; j < 2288; ++j) {
    compute[j] = data[j];
  }
}
