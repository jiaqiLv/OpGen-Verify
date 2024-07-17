void default_function_kernel(float* compute, float* data) {
  float T_softmax_maxelem[2223];
  float compute_1[2223];
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        T_softmax_maxelem[(((i0 * 247) + (i1 * 19)) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 18; ++k) {
          T_softmax_maxelem[(((i0 * 247) + (i1 * 19)) + i2)] = max(T_softmax_maxelem[(((i0 * 247) + (i1 * 19)) + i2)], data[((((i0 * 4446) + (i1 * 342)) + (i2 * 18)) + k)]);
        }
      }
    }
  }
  for (int32_t i0_1 = 0; i0_1 < 9; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 13; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
        compute_1[(((i0_1 * 247) + (i1_1 * 19)) + i2_1)] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 18; ++k_1) {
          compute_1[(((i0_1 * 247) + (i1_1 * 19)) + i2_1)] = (compute_1[(((i0_1 * 247) + (i1_1 * 19)) + i2_1)] + expf((data[((((i0_1 * 4446) + (i1_1 * 342)) + (i2_1 * 18)) + k_1)] - T_softmax_maxelem[(((i0_1 * 247) + (i1_1 * 19)) + i2_1)])));
        }
      }
    }
  }
  for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 6; ++i3_outer_outer_inner) {
    for (int32_t i0_outer_inner = 0; i0_outer_inner < 9; ++i0_outer_inner) {
      for (int32_t i2_outer_inner = 0; i2_outer_inner < 19; ++i2_outer_inner) {
        for (int32_t i3_outer_inner = 0; i3_outer_inner < 3; ++i3_outer_inner) {
          for (int32_t i1_inner = 0; i1_inner < 13; ++i1_inner) {
            compute[(((((i0_outer_inner * 4446) + (i1_inner * 342)) + (i2_outer_inner * 18)) + (i3_outer_outer_inner * 3)) + i3_outer_inner)] = ((data[(((((i0_outer_inner * 4446) + (i1_inner * 342)) + (i2_outer_inner * 18)) + (i3_outer_outer_inner * 3)) + i3_outer_inner)] - T_softmax_maxelem[(((i0_outer_inner * 247) + (i1_inner * 19)) + i2_outer_inner)]) - logf(compute_1[(((i0_outer_inner * 247) + (i1_inner * 19)) + i2_outer_inner)]));
          }
        }
      }
    }
  }
}

