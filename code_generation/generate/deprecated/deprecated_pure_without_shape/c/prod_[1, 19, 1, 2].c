void default_function_kernel(float* data, float* data_red) {
  data_red[0] = 1.000000e+00f;
  for (int32_t k1 = 0; k1 < 19; ++k1) {
    for (int32_t k3 = 0; k3 < 2; ++k3) {
      data_red[0] = (data_red[0] * data[((k1 * 2) + k3)]);
    }
  }
}

