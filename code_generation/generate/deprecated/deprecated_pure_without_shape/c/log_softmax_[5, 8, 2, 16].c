void default_function_kernel(float* compute, float* data) {
  float T_softmax_maxelem[80];
  float compute_1[80];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 80; ++i0_i1_fused_i2_fused) {
    T_softmax_maxelem[i0_i1_fused_i2_fused] = -3.402823e+38f;
    for (int32_t k = 0; k < 16; ++k) {
      T_softmax_maxelem[i0_i1_fused_i2_fused] = max(T_softmax_maxelem[i0_i1_fused_i2_fused], data[((i0_i1_fused_i2_fused * 16) + k)]);
    }
  }
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        compute_1[(((i0 * 16) + (i1 * 2)) + i2)] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 16; ++k_1) {
          compute_1[(((i0 * 16) + (i1 * 2)) + i2)] = (compute_1[(((i0 * 16) + (i1 * 2)) + i2)] + expf((data[((((i0 * 256) + (i1 * 32)) + (i2 * 16)) + k_1)] - T_softmax_maxelem[(((i0 * 16) + (i1 * 2)) + i2)])));
        }
      }
    }
  }
  for (int32_t i3_outer_outer_outer = 0; i3_outer_outer_outer < 4; ++i3_outer_outer_outer) {
    for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 4; ++i3_outer_outer_inner) {
      for (int32_t i0_outer_inner = 0; i0_outer_inner < 5; ++i0_outer_inner) {
        for (int32_t i1_outer_inner = 0; i1_outer_inner < 8; ++i1_outer_inner) {
          for (int32_t i2_inner = 0; i2_inner < 2; ++i2_inner) {
            compute[(((((i0_outer_inner * 256) + (i1_outer_inner * 32)) + (i2_inner * 16)) + (i3_outer_outer_outer * 4)) + i3_outer_outer_inner)] = ((data[(((((i0_outer_inner * 256) + (i1_outer_inner * 32)) + (i2_inner * 16)) + (i3_outer_outer_outer * 4)) + i3_outer_outer_inner)] - T_softmax_maxelem[(((i0_outer_inner * 16) + (i1_outer_inner * 2)) + i2_inner)]) - logf(compute_1[(((i0_outer_inner * 16) + (i1_outer_inner * 2)) + i2_inner)]));
          }
        }
      }
    }
  }
}

