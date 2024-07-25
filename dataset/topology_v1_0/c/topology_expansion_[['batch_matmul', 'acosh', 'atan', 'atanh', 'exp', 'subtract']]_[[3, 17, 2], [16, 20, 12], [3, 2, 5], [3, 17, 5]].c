void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3, float* ph_9) {
  float auto_scheduler_layout_transform[30];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 102; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 102; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanhf(atanf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 102; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = expf(atanf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 5; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax8 = 0; ax8 < 2; ++ax8) {
      for (int32_t ax12 = 0; ax12 < 3; ++ax12) {
        auto_scheduler_layout_transform[(((ax0_ax1_fused_ax2_fused * 6) + (ax8 * 3)) + ax12)] = ph_3[(((ax12 * 10) + (ax8 * 5)) + ax0_ax1_fused_ax2_fused)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_outer_outer_ax1_outer_outer_fused_ax2_outer_outer_fused_ax0_outer_inner_fused_ax1_outer_inner_fused_ax2_outer_inner_fused = 0; ax0_outer_outer_ax1_outer_outer_fused_ax2_outer_outer_fused_ax0_outer_inner_fused_ax1_outer_inner_fused_ax2_outer_inner_fused < 5; ++ax0_outer_outer_ax1_outer_outer_fused_ax2_outer_outer_fused_ax0_outer_inner_fused_ax1_outer_inner_fused_ax2_outer_inner_fused) {
    float T_batch_matmul_NN[51];
    for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 17; ++i_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 3; ++b_inner_init) {
        T_batch_matmul_NN[((b_inner_init * 17) + i_outer_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
      for (int32_t i_outer_inner = 0; i_outer_inner < 17; ++i_outer_inner) {
        for (int32_t b_inner = 0; b_inner < 3; ++b_inner) {
          T_batch_matmul_NN[((b_inner * 17) + i_outer_inner)] = (T_batch_matmul_NN[((b_inner * 17) + i_outer_inner)] + (ph_0[(((b_inner * 34) + (i_outer_inner * 2)) + k_outer)] * auto_scheduler_layout_transform[(((ax0_outer_outer_ax1_outer_outer_fused_ax2_outer_outer_fused_ax0_outer_inner_fused_ax1_outer_inner_fused_ax2_outer_inner_fused * 6) + (k_outer * 3)) + b_inner)]));
        }
      }
    }
    for (int32_t ax0_inner = 0; ax0_inner < 3; ++ax0_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 17; ++ax1_inner) {
        T_subtract[(((ax0_inner * 85) + (ax1_inner * 5)) + ax0_outer_outer_ax1_outer_outer_fused_ax2_outer_outer_fused_ax0_outer_inner_fused_ax1_outer_inner_fused_ax2_outer_inner_fused)] = (T_batch_matmul_NN[((ax0_inner * 17) + ax1_inner)] - ph_9[(((ax0_inner * 85) + (ax1_inner * 5)) + ax0_outer_outer_ax1_outer_outer_fused_ax2_outer_outer_fused_ax0_outer_inner_fused_ax1_outer_inner_fused_ax2_outer_inner_fused)]);
      }
    }
  }
}
