void default_function_kernel(float* compute, float* ph_0) {
  for (int32_t i1 = 0; i1 < 20; ++i1) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      compute[((i1 * 3) + i2)] = acosf(fmodf(ph_0[((i1 * 3) + i2)], cosf(ph_0[((i1 * 3) + i2)])));
    }
  }
}

