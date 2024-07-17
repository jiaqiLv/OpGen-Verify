void default_function_kernel(float* compute, float* data) {
  float T_softmax_maxelem[357];
  float compute_1[357];
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        T_softmax_maxelem[(((i0 * 51) + (i1 * 17)) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 10; ++k) {
          T_softmax_maxelem[(((i0 * 51) + (i1 * 17)) + i2)] = max(T_softmax_maxelem[(((i0 * 51) + (i1 * 17)) + i2)], data[((((i0 * 510) + (i1 * 170)) + (i2 * 10)) + k)]);
        }
      }
    }
  }
  for (int32_t i0_1 = 0; i0_1 < 7; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 3; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 17; ++i2_1) {
        compute_1[(((i0_1 * 51) + (i1_1 * 17)) + i2_1)] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
          compute_1[(((i0_1 * 51) + (i1_1 * 17)) + i2_1)] = (compute_1[(((i0_1 * 51) + (i1_1 * 17)) + i2_1)] + expf((data[((((i0_1 * 510) + (i1_1 * 170)) + (i2_1 * 10)) + k_1)] - T_softmax_maxelem[(((i0_1 * 51) + (i1_1 * 17)) + i2_1)])));
        }
      }
    }
  }
  for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 2; ++i3_outer_outer_inner) {
    for (int32_t i0_outer_inner = 0; i0_outer_inner < 7; ++i0_outer_inner) {
      for (int32_t i1_outer_inner = 0; i1_outer_inner < 3; ++i1_outer_inner) {
        for (int32_t i2_outer_inner = 0; i2_outer_inner < 17; ++i2_outer_inner) {
          for (int32_t i3_outer_inner = 0; i3_outer_inner < 5; ++i3_outer_inner) {
            compute[(((((i0_outer_inner * 510) + (i1_outer_inner * 170)) + (i2_outer_inner * 10)) + (i3_outer_outer_inner * 5)) + i3_outer_inner)] = ((data[(((((i0_outer_inner * 510) + (i1_outer_inner * 170)) + (i2_outer_inner * 10)) + (i3_outer_outer_inner * 5)) + i3_outer_inner)] - T_softmax_maxelem[(((i0_outer_inner * 51) + (i1_outer_inner * 17)) + i2_outer_inner)]) - logf(compute_1[(((i0_outer_inner * 51) + (i1_outer_inner * 17)) + i2_outer_inner)]));
          }
        }
      }
    }
  }
}

