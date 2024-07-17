void default_function_kernel(float* T_add, float* T_batch_matmul_NN, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_9) {
  float auto_scheduler_layout_transform[260];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 364; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 364; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf(acoshf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 364; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (acoshf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 5; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax4 = 0; ax4 < 13; ++ax4) {
      for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
        for (int32_t ax8 = 0; ax8 < 2; ++ax8) {
          auto_scheduler_layout_transform[((((ax0_ax1_fused_ax2_fused_1 * 52) + (ax4 * 4)) + (ax5 * 2)) + ax8)] = ph_9[((((ax5 * 130) + (ax8 * 65)) + (ax4 * 5)) + ax0_ax1_fused_ax2_fused_1)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 5; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 2; ++b_inner_init) {
        for (int32_t i_inner_init = 0; i_inner_init < 7; ++i_inner_init) {
          T_batch_matmul_NN[((((b_outer_inner_init * 70) + (b_inner_init * 35)) + (i_inner_init * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t k_outer = 0; k_outer < 13; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
        for (int32_t b_inner = 0; b_inner < 2; ++b_inner) {
          for (int32_t i_inner = 0; i_inner < 7; ++i_inner) {
            T_batch_matmul_NN[((((b_outer_inner * 70) + (b_inner * 35)) + (i_inner * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[((((b_outer_inner * 70) + (b_inner * 35)) + (i_inner * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (fmodf(ph_0[((((b_outer_inner * 182) + (b_inner * 91)) + (i_inner * 13)) + k_outer)], ph_3[((((b_outer_inner * 182) + (b_inner * 91)) + (i_inner * 13)) + k_outer)]) * auto_scheduler_layout_transform[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 52) + (k_outer * 4)) + (b_outer_inner * 2)) + b_inner)]));
          }
        }
      }
    }
  }
}

