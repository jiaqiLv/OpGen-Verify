void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[240];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 240; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 240; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(atanf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 240; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf(atanf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 4; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax8 = 0; ax8 < 2; ++ax8) {
      for (int32_t ax10 = 0; ax10 < 5; ++ax10) {
        for (int32_t ax11 = 0; ax11 < 6; ++ax11) {
          auto_scheduler_layout_transform[((((ax0_ax1_fused_ax2_fused_1 * 60) + (ax8 * 30)) + (ax10 * 6)) + ax11)] = ph_3[((((ax0_ax1_fused_ax2_fused_1 * 60) + (ax8 * 30)) + (ax11 * 5)) + ax10)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused = 0; i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused < 4; ++i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused) {
    float T_batch_matmul_NN[25];
    for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 5; ++i_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        T_batch_matmul_NN[((i_outer_inner_init * 5) + j_outer_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
      for (int32_t i_outer_inner = 0; i_outer_inner < 5; ++i_outer_inner) {
        for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
          for (int32_t k_inner = 0; k_inner < 6; ++k_inner) {
            T_batch_matmul_NN[((i_outer_inner * 5) + j_outer_inner)] = (T_batch_matmul_NN[((i_outer_inner * 5) + j_outer_inner)] + (ph_0[((((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused * 60) + (i_outer_inner * 12)) + (k_outer * 6)) + k_inner)] * auto_scheduler_layout_transform[((((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused * 60) + (k_outer * 30)) + (j_outer_inner * 6)) + k_inner)]));
          }
        }
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 5; ++i1_inner) {
      for (int32_t i2_inner_s = 0; i2_inner_s < 5; ++i2_inner_s) {
        compute_2[(((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused * 25) + (i1_inner * 5)) + i2_inner_s)] = atanhf(T_batch_matmul_NN[((i1_inner * 5) + i2_inner_s)]);
      }
    }
  }
}

