void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused = 0; i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused < 40; ++i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused) {
    float T_softmax_maxelem[204];
    float compute_1[204];
    for (int32_t i0 = 0; i0 < 3; ++i0) {
      for (int32_t i1 = 0; i1 < 17; ++i1) {
        for (int32_t i2 = 0; i2 < 4; ++i2) {
          T_softmax_maxelem[(((i0 * 68) + (i1 * 4)) + i2)] = -3.402823e+38f;
          for (int32_t k = 0; k < 20; ++k) {
            T_softmax_maxelem[(((i0 * 68) + (i1 * 4)) + i2)] = max(T_softmax_maxelem[(((i0 * 68) + (i1 * 4)) + i2)], data[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused & 1) * 8160) + (i0 * 2720)) + (i1 * 160)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused / 20) * 80)) + (i2 * 20)) + k)]);
          }
        }
      }
    }
    for (int32_t i0_1 = 0; i0_1 < 3; ++i0_1) {
      for (int32_t i1_1 = 0; i1_1 < 17; ++i1_1) {
        for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
          compute_1[(((i0_1 * 68) + (i1_1 * 4)) + i2_1)] = 0.000000e+00f;
          for (int32_t k_1 = 0; k_1 < 20; ++k_1) {
            compute_1[(((i0_1 * 68) + (i1_1 * 4)) + i2_1)] = (compute_1[(((i0_1 * 68) + (i1_1 * 4)) + i2_1)] + expf((data[(((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused & 1) * 8160) + (i0_1 * 2720)) + (i1_1 * 160)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused / 20) * 80)) + (i2_1 * 20)) + k_1)] - T_softmax_maxelem[(((i0_1 * 68) + (i1_1 * 4)) + i2_1)])));
          }
        }
      }
    }
    for (int32_t i2_outer_inner = 0; i2_outer_inner < 4; ++i2_outer_inner) {
      for (int32_t i3_outer_inner = 0; i3_outer_inner < 2; ++i3_outer_inner) {
        for (int32_t i0_inner = 0; i0_inner < 3; ++i0_inner) {
          for (int32_t i1_inner = 0; i1_inner < 17; ++i1_inner) {
            compute[((((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused & 1) * 8160) + (i0_inner * 2720)) + (i1_inner * 160)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused / 20) * 80)) + (i2_outer_inner * 20)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused % 20) >> 1) * 2)) + i3_outer_inner)] = ((data[((((((((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused & 1) * 8160) + (i0_inner * 2720)) + (i1_inner * 160)) + ((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused / 20) * 80)) + (i2_outer_inner * 20)) + (((i0_outer_outer_outer_i1_outer_outer_outer_fused_i2_outer_outer_outer_fused_i3_outer_outer_outer_fused_i0_outer_outer_inner_fused_i1_outer_outer_inner_fused_i2_outer_outer_inner_fused_i3_outer_outer_inner_fused_i0_outer_inner_fused % 20) >> 1) * 2)) + i3_outer_inner)] - T_softmax_maxelem[(((i0_inner * 68) + (i1_inner * 4)) + i2_outer_inner)]) - logf(compute_1[(((i0_inner * 68) + (i1_inner * 4)) + i2_outer_inner)]));
          }
        }
      }
    }
  }
}

