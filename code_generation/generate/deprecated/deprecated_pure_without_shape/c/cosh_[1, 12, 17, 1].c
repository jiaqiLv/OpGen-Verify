void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 12; ++i1) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      compute[((i1 * 17) + i2)] = coshf(data[((i1 * 17) + i2)]);
    }
  }
}

