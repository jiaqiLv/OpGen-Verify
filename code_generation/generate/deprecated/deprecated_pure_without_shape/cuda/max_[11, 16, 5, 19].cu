extern "C" __global__ void default_function_kernel(float* __restrict__ data, float* __restrict__ data_red) {
  data_red[0] = -3.402823e+38f;
  for (int k0 = 0; k0 < 11; ++k0) {
    for (int k1 = 0; k1 < 16; ++k1) {
      for (int k2 = 0; k2 < 5; ++k2) {
        for (int k3 = 0; k3 < 19; ++k3) {
          data_red[0] = max(data_red[0], data[((((k0 * 1520) + (k1 * 95)) + (k2 * 19)) + k3)]);
        }
      }
    }
  }
}

