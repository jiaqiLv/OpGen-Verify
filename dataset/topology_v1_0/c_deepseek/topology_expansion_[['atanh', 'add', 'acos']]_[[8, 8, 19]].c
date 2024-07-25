void default_function_kernel(float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        compute[(((i0 * 152) + (i1 * 19)) + i2)] = acosf((ph_0[(((i0 * 152) + (i1 * 19)) + i2)] + atanhf(ph_0[(((i0 * 152) + (i1 * 19)) + i2)])));
      }
    }
  }
}
