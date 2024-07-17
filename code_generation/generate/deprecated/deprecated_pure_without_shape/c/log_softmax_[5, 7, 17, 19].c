void default_function_kernel(float* compute, float* data) {
  float T_softmax_maxelem[595];
  float compute_1[1];
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        T_softmax_maxelem[(((i0 * 119) + (i1 * 17)) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 19; ++k) {
          T_softmax_maxelem[(((i0 * 119) + (i1 * 17)) + i2)] = max(T_softmax_maxelem[(((i0 * 119) + (i1 * 17)) + i2)], data[((((i0 * 2261) + (i1 * 323)) + (i2 * 19)) + k)]);
        }
      }
    }
  }
  for (int32_t i1_outer_outer_inner = 0; i1_outer_outer_inner < 7; ++i1_outer_outer_inner) {
    for (int32_t i2_outer_outer_inner = 0; i2_outer_outer_inner < 17; ++i2_outer_outer_inner) {
      for (int32_t i0_outer_inner = 0; i0_outer_inner < 5; ++i0_outer_inner) {
        for (int32_t i3_outer_inner = 0; i3_outer_inner < 19; ++i3_outer_inner) {
          compute_1[0] = 0.000000e+00f;
          for (int32_t k_1 = 0; k_1 < 19; ++k_1) {
            compute_1[0] = (compute_1[0] + expf((data[((((i0_outer_inner * 2261) + (i1_outer_outer_inner * 323)) + (i2_outer_outer_inner * 19)) + k_1)] - T_softmax_maxelem[(((i0_outer_inner * 119) + (i1_outer_outer_inner * 17)) + i2_outer_outer_inner)])));
          }
          compute[((((i0_outer_inner * 2261) + (i1_outer_outer_inner * 323)) + (i2_outer_outer_inner * 19)) + i3_outer_inner)] = ((data[((((i0_outer_inner * 2261) + (i1_outer_outer_inner * 323)) + (i2_outer_outer_inner * 19)) + i3_outer_inner)] - T_softmax_maxelem[(((i0_outer_inner * 119) + (i1_outer_outer_inner * 17)) + i2_outer_outer_inner)]) - logf(compute_1[0]));
        }
      }
    }
  }
}

