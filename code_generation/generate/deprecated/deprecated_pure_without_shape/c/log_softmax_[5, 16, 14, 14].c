void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused = 0; i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused < 4; ++i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused) {
    float T_softmax_maxelem[280];
    float compute_1[280];
    for (int32_t i0 = 0; i0 < 5; ++i0) {
      for (int32_t i1 = 0; i1 < 8; ++i1) {
        for (int32_t i2 = 0; i2 < 7; ++i2) {
          T_softmax_maxelem[(((i0 * 56) + (i1 * 7)) + i2)] = -3.402823e+38f;
          for (int32_t k = 0; k < 14; ++k) {
            T_softmax_maxelem[(((i0 * 56) + (i1 * 7)) + i2)] = max(T_softmax_maxelem[(((i0 * 56) + (i1 * 7)) + i2)], data[((((((i0 * 3136) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused >> 1) * 1568)) + (i1 * 196)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused & 1) * 98)) + (i2 * 14)) + k)]);
          }
        }
      }
    }
    for (int32_t i0_1 = 0; i0_1 < 5; ++i0_1) {
      for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
        for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
          compute_1[(((i0_1 * 56) + (i1_1 * 7)) + i2_1)] = 0.000000e+00f;
          for (int32_t k_1 = 0; k_1 < 14; ++k_1) {
            compute_1[(((i0_1 * 56) + (i1_1 * 7)) + i2_1)] = (compute_1[(((i0_1 * 56) + (i1_1 * 7)) + i2_1)] + expf((data[((((((i0_1 * 3136) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused >> 1) * 1568)) + (i1_1 * 196)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused & 1) * 98)) + (i2_1 * 14)) + k_1)] - T_softmax_maxelem[(((i0_1 * 56) + (i1_1 * 7)) + i2_1)])));
          }
        }
      }
    }
    for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 14; ++i3_outer_outer_inner) {
      for (int32_t i1_outer_inner = 0; i1_outer_inner < 8; ++i1_outer_inner) {
        for (int32_t i0_inner = 0; i0_inner < 5; ++i0_inner) {
          for (int32_t i2_inner = 0; i2_inner < 7; ++i2_inner) {
            compute[((((((i0_inner * 3136) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused >> 1) * 1568)) + (i1_outer_inner * 196)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused & 1) * 98)) + (i2_inner * 14)) + i3_outer_outer_inner)] = ((data[((((((i0_inner * 3136) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused >> 1) * 1568)) + (i1_outer_inner * 196)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused & 1) * 98)) + (i2_inner * 14)) + i3_outer_outer_inner)] - T_softmax_maxelem[(((i0_inner * 56) + (i1_outer_inner * 7)) + i2_inner)]) - logf(compute_1[(((i0_inner * 56) + (i1_outer_inner * 7)) + i2_inner)]));
          }
        }
      }
    }
  }
}

