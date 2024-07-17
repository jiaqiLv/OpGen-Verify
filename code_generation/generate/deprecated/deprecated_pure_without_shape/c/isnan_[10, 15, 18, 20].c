void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        for (int32_t i3 = 0; i3 < 20; ++i3) {
          compute[((((i0 * 5400) + (i1 * 360)) + (i2 * 20)) + i3)] = ((int8_t)(data[((((i0 * 5400) + (i1 * 360)) + (i2 * 20)) + i3)] != data[((((i0 * 5400) + (i1 * 360)) + (i2 * 20)) + i3)]));
        }
      }
    }
  }
}

