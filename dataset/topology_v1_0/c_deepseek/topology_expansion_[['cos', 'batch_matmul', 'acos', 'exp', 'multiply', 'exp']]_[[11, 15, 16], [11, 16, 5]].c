void default_function_kernel(float* T_batch_matmul_NN, float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[2640];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2640; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax4 = 0; ax4 < 8; ++ax4) {
    for (int32_t ax5 = 0; ax5 < 11; ++ax5) {
      for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
        for (int32_t ax7 = 0; ax7 < 2; ++ax7) {
          auto_scheduler_layout_transform[((((ax4 * 110) + (ax5 * 10)) + (ax6 * 2)) + ax7)] = ph_3[((((ax5 * 80) + (ax4 * 10)) + (ax7 * 5)) + ax6)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 15; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 11; ++b_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        T_batch_matmul_NN[(((b_outer_inner_init * 75) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t k_outer = 0; k_outer < 8; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 11; ++b_outer_inner) {
        for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
          for (int32_t k_inner = 0; k_inner < 2; ++k_inner) {
            T_batch_matmul_NN[(((b_outer_inner * 75) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner)] = (T_batch_matmul_NN[(((b_outer_inner * 75) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner)] + (ph_0[((((b_outer_inner * 240) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 16)) + (k_outer * 2)) + k_inner)] * auto_scheduler_layout_transform[((((k_outer * 110) + (b_outer_inner * 10)) + (j_outer_inner * 2)) + k_inner)]));
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2640; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 2640; ++i0_i1_fused_i2_fused_2) {
    auto_scheduler_layout_transform[i0_i1_fused_i2_fused_2] = expf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2640; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (auto_scheduler_layout_transform[ax0_ax1_fused_ax2_fused] * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 2640; ++i0_i1_fused_i2_fused_3) {
    compute_2[i0_i1_fused_i2_fused_3] = expf(auto_scheduler_layout_transform[i0_i1_fused_i2_fused_3]);
  }
}

