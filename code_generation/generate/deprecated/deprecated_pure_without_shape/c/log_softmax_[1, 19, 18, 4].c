void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused = 0; i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused < 76; ++i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused) {
    float T_softmax_maxelem[9];
    float compute_1[3];
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      T_softmax_maxelem[i2] = -3.402823e+38f;
      for (int32_t k = 0; k < 4; ++k) {
        T_softmax_maxelem[i2] = max(T_softmax_maxelem[i2], data[(((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused % 19) * 72) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused / 38) * 36)) + (i2 * 4)) + k)]);
      }
    }
    for (int32_t i2_outer_inner = 0; i2_outer_inner < 3; ++i2_outer_inner) {
      for (int32_t i3_outer_inner = 0; i3_outer_inner < 2; ++i3_outer_inner) {
        for (int32_t i2_1 = 0; i2_1 < 3; ++i2_1) {
          compute_1[i2_1] = 0.000000e+00f;
          for (int32_t k_1 = 0; k_1 < 4; ++k_1) {
            compute_1[i2_1] = (compute_1[i2_1] + expf((data[((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused % 19) * 72) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused / 38) * 36)) + (i2_outer_inner * 12)) + (i2_1 * 4)) + k_1)] - T_softmax_maxelem[((i2_outer_inner * 3) + i2_1)])));
          }
        }
        for (int32_t i2_inner = 0; i2_inner < 3; ++i2_inner) {
          compute[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused % 19) * 72) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused / 38) * 36)) + (i2_outer_inner * 12)) + (i2_inner * 4)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused % 38) / 19) * 2)) + i3_outer_inner)] = ((data[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused % 19) * 72) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused / 38) * 36)) + (i2_outer_inner * 12)) + (i2_inner * 4)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused % 38) / 19) * 2)) + i3_outer_inner)] - T_softmax_maxelem[((i2_outer_inner * 3) + i2_inner)]) - logf(compute_1[i2_inner]));
        }
      }
    }
  }
}

