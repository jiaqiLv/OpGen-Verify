void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_6) {
  float auto_scheduler_layout_transform[1105];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1989; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1989; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = cosf(atanf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 1989; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = acosf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 17; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax5 = 0; ax5 < 5; ++ax5) {
      for (int32_t ax6 = 0; ax6 < 13; ++ax6) {
        auto_scheduler_layout_transform[(((ax0_ax1_fused_ax2_fused * 65) + (ax5 * 13)) + ax6)] = ph_6[(((ax0_ax1_fused_ax2_fused * 65) + (ax6 * 5)) + ax5)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_i1_outer_fused_i2_outer_fused = 0; i0_outer_i1_outer_fused_i2_outer_fused < 17; ++i0_outer_i1_outer_fused_i2_outer_fused) {
    float T_batch_matmul_NN[45];
    for (int32_t i_outer_outer_inner = 0; i_outer_outer_inner < 9; ++i_outer_outer_inner) {
      for (int32_t j_outer_outer_inner = 0; j_outer_outer_inner < 5; ++j_outer_outer_inner) {
        T_batch_matmul_NN[((i_outer_outer_inner * 5) + j_outer_outer_inner)] = 0.000000e+00f;
        for (int32_t k_outer = 0; k_outer < 13; ++k_outer) {
          T_batch_matmul_NN[((i_outer_outer_inner * 5) + j_outer_outer_inner)] = (T_batch_matmul_NN[((i_outer_outer_inner * 5) + j_outer_outer_inner)] + (ph_0[(((i0_outer_i1_outer_fused_i2_outer_fused * 117) + (i_outer_outer_inner * 13)) + k_outer)] * auto_scheduler_layout_transform[(((i0_outer_i1_outer_fused_i2_outer_fused * 65) + (j_outer_outer_inner * 13)) + k_outer)]));
        }
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 9; ++i1_inner) {
      for (int32_t i2_inner_s = 0; i2_inner_s < 5; ++i2_inner_s) {
        compute_3[(((i0_outer_i1_outer_fused_i2_outer_fused * 45) + (i1_inner * 5)) + i2_inner_s)] = atanhf(T_batch_matmul_NN[((i1_inner * 5) + i2_inner_s)]);
      }
    }
  }
}
