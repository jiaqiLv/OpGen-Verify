void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute[((i0 * 19) + i2)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - data[((i0 * 19) + i2)]))));
    }
  }
}
