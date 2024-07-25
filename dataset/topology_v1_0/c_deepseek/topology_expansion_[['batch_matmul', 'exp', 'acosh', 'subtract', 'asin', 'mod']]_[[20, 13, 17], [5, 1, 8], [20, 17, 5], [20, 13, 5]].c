void default_function_kernel(float* T_mod, float* T_subtract, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_9) {
  float auto_scheduler_layout_transform[1700];
  float T_batch_matmul_NN[1300];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4420; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4420; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (acoshf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4420; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinf(acoshf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax4 = 0; ax4 < 17; ++ax4) {
      for (int32_t ax5 = 0; ax5 < 5; ++ax5) {
        for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
          for (int32_t ax8 = 0; ax8 < 2; ++ax8) {
            auto_scheduler_layout_transform[(((((ax0_ax1_fused_ax2_fused_1 * 850) + (ax4 * 50)) + (ax5 * 10)) + (ax6 * 2)) + ax8)] = ph_3[(((((ax0_ax1_fused_ax2_fused_1 * 850) + (ax5 * 170)) + (ax8 * 85)) + (ax4 * 5)) + ax6)];
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 26; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 5; ++b_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        for (int32_t b_inner_init = 0; b_inner_init < 2; ++b_inner_init) {
          T_batch_matmul_NN[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 650) + (b_outer_inner_init * 130)) + (b_inner_init * 65)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1) * 5)) + j_outer_inner_init)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t k_outer = 0; k_outer < 17; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 5; ++b_outer_inner) {
        for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
          for (int32_t b_inner = 0; b_inner < 2; ++b_inner) {
            T_batch_matmul_NN[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 650) + (b_outer_inner * 130)) + (b_inner * 65)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1) * 5)) + j_outer_inner)] = (T_batch_matmul_NN[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 650) + (b_outer_inner * 130)) + (b_inner * 65)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1) * 5)) + j_outer_inner)] + (ph_0[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 2210) + (b_outer_inner * 442)) + (b_inner * 221)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1) * 17)) + k_outer)] * auto_scheduler_layout_transform[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 850) + (k_outer * 50)) + (b_outer_inner * 10)) + (j_outer_inner * 2)) + b_inner)]));
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 1300; ++ax0_ax1_fused_ax2_fused_2) {
    T_mod[ax0_ax1_fused_ax2_fused_2] = fmodf(T_batch_matmul_NN[ax0_ax1_fused_ax2_fused_2], ph_9[ax0_ax1_fused_ax2_fused_2]);
  }
}

