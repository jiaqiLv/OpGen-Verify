void default_function_kernel(float* compute, float* data) {
  float T_softmax_maxelem[187];
  float compute_1[17];
  for (int32_t i1 = 0; i1 < 17; ++i1) {
    for (int32_t i2 = 0; i2 < 11; ++i2) {
      T_softmax_maxelem[((i1 * 11) + i2)] = -3.402823e+38f;
      for (int32_t k = 0; k < 4; ++k) {
        T_softmax_maxelem[((i1 * 11) + i2)] = max(T_softmax_maxelem[((i1 * 11) + i2)], data[(((i1 * 44) + (i2 * 4)) + k)]);
      }
    }
  }
  for (int32_t i2_outer_outer_outer = 0; i2_outer_outer_outer < 11; ++i2_outer_outer_outer) {
    for (int32_t i1_1 = 0; i1_1 < 17; ++i1_1) {
      compute_1[i1_1] = 0.000000e+00f;
      for (int32_t k_1 = 0; k_1 < 4; ++k_1) {
        compute_1[i1_1] = (compute_1[i1_1] + expf((data[(((i1_1 * 44) + (i2_outer_outer_outer * 4)) + k_1)] - T_softmax_maxelem[((i1_1 * 11) + i2_outer_outer_outer)])));
      }
    }
    for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 4; ++i3_outer_outer_inner) {
      for (int32_t i1_outer_inner = 0; i1_outer_inner < 17; ++i1_outer_inner) {
        compute[(((i1_outer_inner * 44) + (i2_outer_outer_outer * 4)) + i3_outer_outer_inner)] = ((data[(((i1_outer_inner * 44) + (i2_outer_outer_outer * 4)) + i3_outer_outer_inner)] - T_softmax_maxelem[((i1_outer_inner * 11) + i2_outer_outer_outer)]) - logf(compute_1[i1_outer_inner]));
      }
    }
  }
}

