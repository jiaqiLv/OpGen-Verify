void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused = 0; i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused < 117; ++i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused) {
    float T_softmax_maxelem[9];
    float compute_1[3];
    for (int32_t i0 = 0; i0 < 3; ++i0) {
      for (int32_t i1 = 0; i1 < 3; ++i1) {
        T_softmax_maxelem[((i0 * 3) + i1)] = -3.402823e+38f;
        for (int32_t k = 0; k < 19; ++k) {
          T_softmax_maxelem[((i0 * 3) + i1)] = max(T_softmax_maxelem[((i0 * 3) + i1)], data[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 39) * 6669) + (i0 * 2223)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 3) * 741)) + (i1 * 247)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 39) / 3) * 19)) + k)]);
        }
      }
    }
    for (int32_t i1_outer_inner = 0; i1_outer_inner < 3; ++i1_outer_inner) {
      for (int32_t i0_1 = 0; i0_1 < 3; ++i0_1) {
        compute_1[i0_1] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 19; ++k_1) {
          compute_1[i0_1] = (compute_1[i0_1] + expf((data[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 39) * 6669) + (i0_1 * 2223)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 3) * 741)) + (i1_outer_inner * 247)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 39) / 3) * 19)) + k_1)] - T_softmax_maxelem[((i0_1 * 3) + i1_outer_inner)])));
        }
      }
      for (int32_t i3_outer_inner = 0; i3_outer_inner < 19; ++i3_outer_inner) {
        for (int32_t i0_inner = 0; i0_inner < 3; ++i0_inner) {
          compute[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 39) * 6669) + (i0_inner * 2223)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 3) * 741)) + (i1_outer_inner * 247)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 39) / 3) * 19)) + i3_outer_inner)] = ((data[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused / 39) * 6669) + (i0_inner * 2223)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 3) * 741)) + (i1_outer_inner * 247)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused % 39) / 3) * 19)) + i3_outer_inner)] - T_softmax_maxelem[((i0_inner * 3) + i1_outer_inner)]) - logf(compute_1[i0_inner]));
        }
      }
    }
  }
}
