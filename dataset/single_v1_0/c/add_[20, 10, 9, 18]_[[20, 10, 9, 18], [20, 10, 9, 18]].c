void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 20; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 18; ++ax3) {
          T_add[((((ax0 * 1620) + (ax1 * 162)) + (ax2 * 18)) + ax3)] = (data[((((ax0 * 1620) + (ax1 * 162)) + (ax2 * 18)) + ax3)] + data_1[((((ax0 * 1620) + (ax1 * 162)) + (ax2 * 18)) + ax3)]);
        }
      }
    }
  }
}

