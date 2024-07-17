void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 20; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      compute[((i1 * 7) + i2)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - data[((i1 * 7) + i2)]))));
    }
  }
}

