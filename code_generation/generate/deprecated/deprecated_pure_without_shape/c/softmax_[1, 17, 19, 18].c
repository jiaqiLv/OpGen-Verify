void default_function_kernel(float* T_softmax_norm, float* data) {
  float T_softmax_exp[342];
  float T_softmax_maxelem[1];
  float T_softmax_expsum[1];
  for (int32_t i1 = 0; i1 < 17; ++i1) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      T_softmax_maxelem[0] = -3.402823e+38f;
      for (int32_t k = 0; k < 18; ++k) {
        T_softmax_maxelem[0] = max(T_softmax_maxelem[0], data[(((i1 * 342) + (i2 * 18)) + k)]);
      }
      for (int32_t i3 = 0; i3 < 18; ++i3) {
        T_softmax_exp[((i2 * 18) + i3)] = expf((data[(((i1 * 342) + (i2 * 18)) + i3)] - T_softmax_maxelem[0]));
      }
    }
    for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 18; ++i3_1) {
        T_softmax_expsum[0] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 18; ++k_1) {
          T_softmax_expsum[0] = (T_softmax_expsum[0] + T_softmax_exp[((i2_1 * 18) + k_1)]);
        }
        T_softmax_norm[(((i1 * 342) + (i2_1 * 18)) + i3_1)] = (T_softmax_exp[((i2_1 * 18) + i3_1)] / T_softmax_expsum[0]);
      }
    }
  }
}

