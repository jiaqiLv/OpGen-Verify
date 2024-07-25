void default_function_kernel(float* T_softmax_norm, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    float T_softmax_exp[546];
    float T_softmax_maxelem[1];
    float T_softmax_expsum[1];
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 3; ++i2) {
        for (int32_t i3 = 0; i3 < 13; ++i3) {
          T_softmax_maxelem[0] = -3.402823e+38f;
          for (int32_t k = 0; k < 13; ++k) {
            T_softmax_maxelem[0] = max(T_softmax_maxelem[0], data[((((i0 * 546) + (i1 * 39)) + (i2 * 13)) + k)]);
          }
          T_softmax_exp[(((i1 * 39) + (i2 * 13)) + i3)] = expf((data[((((i0 * 546) + (i1 * 39)) + (i2 * 13)) + i3)] - T_softmax_maxelem[0]));
        }
      }
    }
    for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 3; ++i2_1) {
        for (int32_t i3_1 = 0; i3_1 < 13; ++i3_1) {
          T_softmax_expsum[0] = 0.000000e+00f;
          for (int32_t k_1 = 0; k_1 < 13; ++k_1) {
            T_softmax_expsum[0] = (T_softmax_expsum[0] + T_softmax_exp[(((i1_1 * 39) + (i2_1 * 13)) + k_1)]);
          }
          T_softmax_norm[((((i0 * 546) + (i1_1 * 39)) + (i2_1 * 13)) + i3_1)] = (T_softmax_exp[(((i1_1 * 39) + (i2_1 * 13)) + i3_1)] / T_softmax_expsum[0]);
        }
      }
    }
  }
}
