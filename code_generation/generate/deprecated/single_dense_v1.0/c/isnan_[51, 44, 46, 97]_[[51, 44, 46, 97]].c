void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 51; ++i0) {
    for (int32_t i1 = 0; i1 < 44; ++i1) {
      for (int32_t i2 = 0; i2 < 46; ++i2) {
        for (int32_t i3 = 0; i3 < 97; ++i3) {
          compute[((((i0 * 196328) + (i1 * 4462)) + (i2 * 97)) + i3)] = ((int8_t)(data[((((i0 * 196328) + (i1 * 4462)) + (i2 * 97)) + i3)] != data[((((i0 * 196328) + (i1 * 4462)) + (i2 * 97)) + i3)]));
        }
      }
    }
  }
}
