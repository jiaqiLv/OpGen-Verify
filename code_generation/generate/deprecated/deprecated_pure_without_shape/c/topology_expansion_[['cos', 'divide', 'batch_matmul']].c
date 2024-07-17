void default_function_kernel(float* T_batch_matmul_NN, float* ph_0, float* ph_4) {
  float T_batch_matmul_NN_rf[76];
  #pragma omp parallel for
  for (int32_t b_i_fused_j_fused = 0; b_i_fused_j_fused < 4; ++b_i_fused_j_fused) {
    for (int32_t k_outer = 0; k_outer < 19; ++k_outer) {
      T_batch_matmul_NN_rf[((b_i_fused_j_fused * 19) + k_outer)] = 0.000000e+00f;
      T_batch_matmul_NN_rf[((b_i_fused_j_fused * 19) + k_outer)] = (T_batch_matmul_NN_rf[((b_i_fused_j_fused * 19) + k_outer)] + ((ph_0[((b_i_fused_j_fused * 19) + k_outer)] / cosf(ph_0[((b_i_fused_j_fused * 19) + k_outer)])) * ph_4[k_outer]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    T_batch_matmul_NN[ax0_ax1_fused_ax2_fused] = 0.000000e+00f;
    for (int32_t k_outer_v = 0; k_outer_v < 19; ++k_outer_v) {
      T_batch_matmul_NN[ax0_ax1_fused_ax2_fused] = (T_batch_matmul_NN[ax0_ax1_fused_ax2_fused] + T_batch_matmul_NN_rf[((ax0_ax1_fused_ax2_fused * 19) + k_outer_v)]);
    }
  }
}

