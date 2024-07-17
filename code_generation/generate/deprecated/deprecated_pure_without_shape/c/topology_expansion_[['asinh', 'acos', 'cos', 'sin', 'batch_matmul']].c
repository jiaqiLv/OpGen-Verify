void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_6) {
  float auto_scheduler_layout_transform[440];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 176; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 176; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = cosf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 176; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = sinf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
    for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
      for (int32_t ax7 = 0; ax7 < 11; ++ax7) {
        for (int32_t ax8 = 0; ax8 < 4; ++ax8) {
          auto_scheduler_layout_transform[((((ax5 * 220) + (ax6 * 44)) + (ax7 * 4)) + ax8)] = ph_6[((((ax5 * 220) + (ax8 * 55)) + (ax7 * 5)) + ax6)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 2; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        for (int32_t b_inner_init = 0; b_inner_init < 4; ++b_inner_init) {
          T_batch_matmul_NN[((((b_outer_inner_init * 40) + (b_inner_init * 10)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner_init)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 11; ++k_inner) {
          for (int32_t b_inner = 0; b_inner < 4; ++b_inner) {
            T_batch_matmul_NN[((((b_outer_inner * 40) + (b_inner * 10)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner)] = (T_batch_matmul_NN[((((b_outer_inner * 40) + (b_inner * 10)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner)] + (ph_0[((((b_outer_inner * 88) + (b_inner * 22)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 11)) + k_inner)] * auto_scheduler_layout_transform[((((b_outer_inner * 220) + (j_outer_inner * 44)) + (k_inner * 4)) + b_inner)]));
          }
        }
      }
    }
  }
}

