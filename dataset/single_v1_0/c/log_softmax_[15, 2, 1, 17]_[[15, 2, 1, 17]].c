void default_function_kernel(float* compute, float* data) {
  float T_softmax_maxelem[30];
  float compute_1[1];
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      T_softmax_maxelem[((i0 * 2) + i1)] = -3.402823e+38f;
      for (int32_t k = 0; k < 17; ++k) {
        T_softmax_maxelem[((i0 * 2) + i1)] = max(T_softmax_maxelem[((i0 * 2) + i1)], data[(((i0 * 34) + (i1 * 17)) + k)]);
      }
    }
  }
  for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 17; ++i3_outer_outer_inner) {
    for (int32_t i0_outer_inner = 0; i0_outer_inner < 15; ++i0_outer_inner) {
      for (int32_t i1_outer_inner = 0; i1_outer_inner < 2; ++i1_outer_inner) {
        compute_1[0] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 17; ++k_1) {
          compute_1[0] = (compute_1[0] + expf((data[(((i0_outer_inner * 34) + (i1_outer_inner * 17)) + k_1)] - T_softmax_maxelem[((i0_outer_inner * 2) + i1_outer_inner)])));
        }
        compute[(((i0_outer_inner * 34) + (i1_outer_inner * 17)) + i3_outer_outer_inner)] = ((data[(((i0_outer_inner * 34) + (i1_outer_inner * 17)) + i3_outer_outer_inner)] - T_softmax_maxelem[((i0_outer_inner * 2) + i1_outer_inner)]) - logf(compute_1[0]));
      }
    }
  }
}
