extern "C" __global__ void default_function_kernel(float* __restrict__ data, float* __restrict__ data_red) {
  data_red[0] = -3.402823e+38f;
  for (int k0 = 0; k0 < 7; ++k0) {
    for (int k1 = 0; k1 < 20; ++k1) {
      for (int k2 = 0; k2 < 9; ++k2) {
        data_red[0] = max(data_red[0], data[(((k0 * 180) + (k1 * 9)) + k2)]);
      }
    }
  }
}

