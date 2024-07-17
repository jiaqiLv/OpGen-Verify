extern "C" __global__ void default_function_kernel(float* __restrict__ data, float* __restrict__ data_red) {
  data_red[0] = 3.402823e+38f;
  for (int k0 = 0; k0 < 4; ++k0) {
    for (int k2 = 0; k2 < 10; ++k2) {
      for (int k3 = 0; k3 < 20; ++k3) {
        data_red[0] = min(data_red[0], data[(((k0 * 200) + (k2 * 20)) + k3)]);
      }
    }
  }
}

