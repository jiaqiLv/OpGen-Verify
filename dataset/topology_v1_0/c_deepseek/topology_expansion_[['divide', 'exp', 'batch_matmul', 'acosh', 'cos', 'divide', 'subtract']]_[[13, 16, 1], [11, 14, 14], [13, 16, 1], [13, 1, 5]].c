void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3, float* ph_6) {
  float auto_scheduler_layout_transform[65];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 208; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 5; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4 = 0; ax4 < 13; ++ax4) {
      auto_scheduler_layout_transform[((ax0_ax1_fused_ax2_fused * 13) + ax4)] = ph_6[((ax4 * 5) + ax0_ax1_fused_ax2_fused)];
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_i1_outer_fused_i2_outer_fused = 0; i0_outer_i1_outer_fused_i2_outer_fused < 10; ++i0_outer_i1_outer_fused_i2_outer_fused) {
    float T_batch_matmul_NN[104];
    for (int32_t b_outer_outer_inner = 0; b_outer_outer_inner < 13; ++b_outer_outer_inner) {
      for (int32_t i_outer_outer_inner = 0; i_outer_outer_inner < 2; ++i_outer_outer_inner) {
        for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 4; ++i_outer_inner_init) {
          T_batch_matmul_NN[(((b_outer_outer_inner * 8) + (i_outer_outer_inner * 4)) + i_outer_inner_init)] = 0.000000e+00f;
        }
        for (int32_t i_outer_inner = 0; i_outer_inner < 4; ++i_outer_inner) {
          T_batch_matmul_NN[(((b_outer_outer_inner * 8) + (i_outer_outer_inner * 4)) + i_outer_inner)] = (T_batch_matmul_NN[(((b_outer_outer_inner * 8) + (i_outer_outer_inner * 4)) + i_outer_inner)] + (ph_0[((((b_outer_outer_inner * 16) + ((i0_outer_i1_outer_fused_i2_outer_fused / 5) * 8)) + (i_outer_outer_inner * 4)) + i_outer_inner)] * auto_scheduler_layout_transform[(((i0_outer_i1_outer_fused_i2_outer_fused % 5) * 13) + b_outer_outer_inner)]));
        }
      }
    }
    for (int32_t i0_inner = 0; i0_inner < 13; ++i0_inner) {
      for (int32_t i1_inner = 0; i1_inner < 8; ++i1_inner) {
        compute_1[((((i0_inner * 80) + ((i0_outer_i1_outer_fused_i2_outer_fused / 5) * 40)) + (i1_inner * 5)) + (i0_outer_i1_outer_fused_i2_outer_fused % 5))] = acoshf(T_batch_matmul_NN[((i0_inner * 8) + i1_inner)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 208; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = cosf((ph_0[i0_i1_fused_i2_fused_1] / ph_3[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 208; ++ax0_ax1_fused_ax2_fused_1) {
    T_divide[ax0_ax1_fused_ax2_fused_1] = ((ph_0[ax0_ax1_fused_ax2_fused_1] / ph_3[ax0_ax1_fused_ax2_fused_1]) / ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 208; ++ax0_ax1_fused_ax2_fused_2) {
    T_subtract[ax0_ax1_fused_ax2_fused_2] = ((ph_0[ax0_ax1_fused_ax2_fused_2] / ph_3[ax0_ax1_fused_ax2_fused_2]) - ph_0[ax0_ax1_fused_ax2_fused_2]);
  }
}
