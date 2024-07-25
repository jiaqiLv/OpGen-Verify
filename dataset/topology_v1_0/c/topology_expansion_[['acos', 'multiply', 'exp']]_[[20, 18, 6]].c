void default_function_kernel(float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        compute[(((i0 * 108) + (i1 * 6)) + i2)] = expf((ph_0[(((i0 * 108) + (i1 * 6)) + i2)] * acosf(ph_0[(((i0 * 108) + (i1 * 6)) + i2)])));
      }
    }
  }
}
