void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[1350];
  float T_batch_matmul_NN[630];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1890; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1890; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (fabsf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1890; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = ceilf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  for (int32_t ax4 = 0; ax4 < 5; ++ax4) {
    for (int32_t ax5 = 0; ax5 < 6; ++ax5) {
      for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
        for (int32_t ax7 = 0; ax7 < 3; ++ax7) {
          for (int32_t ax8 = 0; ax8 < 3; ++ax8) {
            auto_scheduler_layout_transform[(((((ax4 * 270) + (ax5 * 45)) + (ax6 * 9)) + (ax7 * 3)) + ax8)] = ph_3[(((((ax5 * 225) + (ax8 * 75)) + (ax4 * 15)) + (ax7 * 5)) + ax6)];
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 7; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 6; ++b_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        for (int32_t b_inner_init = 0; b_inner_init < 3; ++b_inner_init) {
          T_batch_matmul_NN[((((b_outer_inner_init * 105) + (b_inner_init * 35)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner_init)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t k_outer = 0; k_outer < 5; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 6; ++b_outer_inner) {
        for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
          for (int32_t k_inner = 0; k_inner < 3; ++k_inner) {
            for (int32_t b_inner = 0; b_inner < 3; ++b_inner) {
              T_batch_matmul_NN[((((b_outer_inner * 105) + (b_inner * 35)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner)] = (T_batch_matmul_NN[((((b_outer_inner * 105) + (b_inner * 35)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 5)) + j_outer_inner)] + (ph_0[(((((b_outer_inner * 315) + (b_inner * 105)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 15)) + (k_outer * 3)) + k_inner)] * auto_scheduler_layout_transform[(((((k_outer * 270) + (b_outer_inner * 45)) + (j_outer_inner * 9)) + (k_inner * 3)) + b_inner)]));
            }
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 630; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = sinf(T_batch_matmul_NN[i0_i1_fused_i2_fused_2]);
  }
}

