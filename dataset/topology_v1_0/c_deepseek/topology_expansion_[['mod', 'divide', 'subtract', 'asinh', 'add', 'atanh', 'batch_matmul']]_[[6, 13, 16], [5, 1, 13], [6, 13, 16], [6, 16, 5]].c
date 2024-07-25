void default_function_kernel(float* T_add, float* T_batch_matmul_NN, float* compute, float* compute_1, float* ph_0, float* ph_10, float* ph_3) {
  float auto_scheduler_layout_transform[480];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1248; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf((ph_0[i0_i1_fused_i2_fused] - (ph_0[i0_i1_fused_i2_fused] / ph_3[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1248; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] - (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused])) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1248; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanhf(fmodf(ph_0[i0_i1_fused_i2_fused_1], ph_3[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 10; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
      for (int32_t ax5 = 0; ax5 < 3; ++ax5) {
        for (int32_t ax7 = 0; ax7 < 4; ++ax7) {
          auto_scheduler_layout_transform[((((ax0_ax1_fused_ax2_fused_1 * 48) + (ax4 * 12)) + (ax5 * 4)) + ax7)] = ph_10[((((((ax0_ax1_fused_ax2_fused_1 & 1) * 240) + (ax5 * 80)) + (ax4 * 20)) + (ax7 * 5)) + (ax0_ax1_fused_ax2_fused_1 >> 1))];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 130; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 3; ++b_outer_inner_init) {
      T_batch_matmul_NN[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 195) + (b_outer_inner_init * 65)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1))] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 4; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 3; ++b_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 4; ++k_inner) {
          T_batch_matmul_NN[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 195) + (b_outer_inner * 65)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1))] = (T_batch_matmul_NN[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 195) + (b_outer_inner * 65)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1))] + (fmodf(ph_0[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 624) + (b_outer_inner * 208)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 10) * 16)) + (k_outer * 4)) + k_inner)], ph_3[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 624) + (b_outer_inner * 208)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 10) * 16)) + (k_outer * 4)) + k_inner)]) * auto_scheduler_layout_transform[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 10) * 48) + (k_outer * 12)) + (b_outer_inner * 4)) + k_inner)]));
        }
      }
    }
  }
}

