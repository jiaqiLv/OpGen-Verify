void default_function_kernel(float* compute, float* data) {
  for (int32_t i2 = 0; i2 < 17; ++i2) {
    compute[i2] = ((0.000000e+00f < data[i2]) ? data[i2] : (data[i2] * 5.000000e-01f));
  }
}

