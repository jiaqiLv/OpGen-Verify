void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    float pad_temp[323];
    for (int32_t ax1 = 0; ax1 < 19; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        pad_temp[((ax1 * 17) + ax2)] = (((1 <= ax2) && (ax2 < 16)) ? data[((((ax0 * 285) + (ax1 * 15)) + ax2) - 1)] : -3.402823e+38f);
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 19; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
        pool_max[(((ax0 * 152) + (ax1_1 * 8)) + ax2_1)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          pool_max[(((ax0 * 152) + (ax1_1 * 8)) + ax2_1)] = max(pool_max[(((ax0 * 152) + (ax1_1 * 8)) + ax2_1)], pad_temp[(((ax1_1 * 17) + (ax2_1 * 2)) + rv0)]);
        }
      }
    }
  }
}
