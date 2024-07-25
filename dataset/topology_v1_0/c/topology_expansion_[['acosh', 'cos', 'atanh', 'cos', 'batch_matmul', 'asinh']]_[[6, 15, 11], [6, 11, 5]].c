void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_6) {
  float auto_scheduler_layout_transform[330];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 990; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 990; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanhf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 990; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = cosf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  for (int32_t ax4 = 0; ax4 < 6; ++ax4) {
    for (int32_t ax8 = 0; ax8 < 5; ++ax8) {
      for (int32_t ax9 = 0; ax9 < 11; ++ax9) {
        auto_scheduler_layout_transform[(((ax4 * 55) + (ax8 * 11)) + ax9)] = ph_6[(((ax4 * 55) + (ax9 * 5)) + ax8)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_i1_outer_fused_i2_outer_fused = 0; i0_outer_i1_outer_fused_i2_outer_fused < 5; ++i0_outer_i1_outer_fused_i2_outer_fused) {
    float T_batch_matmul_NN[90];
    for (int32_t b_outer_outer_inner = 0; b_outer_outer_inner < 6; ++b_outer_outer_inner) {
      for (int32_t i_outer_outer_inner = 0; i_outer_outer_inner < 3; ++i_outer_outer_inner) {
        for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
          T_batch_matmul_NN[(((b_outer_outer_inner * 15) + (i_outer_outer_inner * 5)) + j_outer_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
          for (int32_t k_inner = 0; k_inner < 11; ++k_inner) {
            T_batch_matmul_NN[(((b_outer_outer_inner * 15) + (i_outer_outer_inner * 5)) + j_outer_inner)] = (T_batch_matmul_NN[(((b_outer_outer_inner * 15) + (i_outer_outer_inner * 5)) + j_outer_inner)] + (ph_0[((((b_outer_outer_inner * 165) + (i0_outer_i1_outer_fused_i2_outer_fused * 33)) + (i_outer_outer_inner * 11)) + k_inner)] * auto_scheduler_layout_transform[(((b_outer_outer_inner * 55) + (j_outer_inner * 11)) + k_inner)]));
          }
        }
      }
    }
    for (int32_t i0_inner = 0; i0_inner < 6; ++i0_inner) {
      for (int32_t i1_inner = 0; i1_inner < 3; ++i1_inner) {
        for (int32_t i2_inner_s = 0; i2_inner_s < 5; ++i2_inner_s) {
          compute_3[((((i0_inner * 75) + (i0_outer_i1_outer_fused_i2_outer_fused * 15)) + (i1_inner * 5)) + i2_inner_s)] = asinhf(T_batch_matmul_NN[(((i0_inner * 15) + (i1_inner * 5)) + i2_inner_s)]);
        }
      }
    }
  }
}
