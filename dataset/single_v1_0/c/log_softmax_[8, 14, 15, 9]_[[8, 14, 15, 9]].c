void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused = 0; i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused < 72; ++i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused) {
    float T_softmax_maxelem[210];
    float compute_1[210];
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 15; ++i2) {
        T_softmax_maxelem[((i1 * 15) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 9; ++k) {
          T_softmax_maxelem[((i1 * 15) + i2)] = max(T_softmax_maxelem[((i1 * 15) + i2)], data[(((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 9) * 1890) + (i1 * 135)) + (i2 * 9)) + k)]);
        }
      }
    }
    for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 15; ++i2_1) {
        compute_1[((i1_1 * 15) + i2_1)] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 9; ++k_1) {
          compute_1[((i1_1 * 15) + i2_1)] = (compute_1[((i1_1 * 15) + i2_1)] + expf((data[(((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 9) * 1890) + (i1_1 * 135)) + (i2_1 * 9)) + k_1)] - T_softmax_maxelem[((i1_1 * 15) + i2_1)])));
        }
      }
    }
    for (int32_t i2_outer_inner = 0; i2_outer_inner < 15; ++i2_outer_inner) {
      for (int32_t i1_inner = 0; i1_inner < 14; ++i1_inner) {
        compute[(((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 9) * 1890) + (i1_inner * 135)) + (i2_outer_inner * 9)) + (i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 9))] = ((data[(((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 9) * 1890) + (i1_inner * 135)) + (i2_outer_inner * 9)) + (i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 9))] - T_softmax_maxelem[((i1_inner * 15) + i2_outer_inner)]) - logf(compute_1[((i1_inner * 15) + i2_outer_inner)]));
      }
    }
  }
}
