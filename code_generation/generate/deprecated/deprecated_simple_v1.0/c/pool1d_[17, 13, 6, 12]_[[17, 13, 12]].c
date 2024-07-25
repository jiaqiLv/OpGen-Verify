void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 17; ++ax0) {
    float pad_temp[169];
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2_s = 0; ax2_s < 13; ++ax2_s) {
        pad_temp[((ax1 * 13) + ax2_s)] = ((1 <= ax2_s) ? data[((((ax0 * 156) + (ax1 * 12)) + ax2_s) - 1)] : -3.402823e+38f);
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 13; ++ax1_1) {
      for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
        pool_max[(((ax0 * 78) + (ax1_1 * 6)) + ax2)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          pool_max[(((ax0 * 78) + (ax1_1 * 6)) + ax2)] = max(pool_max[(((ax0 * 78) + (ax1_1 * 6)) + ax2)], pad_temp[(((ax1_1 * 13) + (ax2 * 2)) + rv0)]);
        }
      }
    }
  }
}
