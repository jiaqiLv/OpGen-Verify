void default_function_kernel(float* T_matmul, float* left_matrix, float* right_matrix) {
  #pragma omp parallel for
  for (int32_t ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused = 0; ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused < 1058; ++ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused) {
    for (int32_t ax0_inner_init = 0; ax0_inner_init < 2; ++ax0_inner_init) {
      T_matmul[((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 46) * 92) + (ax0_inner_init * 46)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 46))] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 24; ++k_outer) {
      for (int32_t k_inner = 0; k_inner < 3; ++k_inner) {
        for (int32_t ax0_inner = 0; ax0_inner < 2; ++ax0_inner) {
          T_matmul[((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 46) * 92) + (ax0_inner * 46)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 46))] = (T_matmul[((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 46) * 92) + (ax0_inner * 46)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 46))] + (left_matrix[(((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 46) * 144) + (ax0_inner * 72)) + (k_outer * 3)) + k_inner)] * right_matrix[(((k_outer * 138) + (k_inner * 46)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 46))]));
        }
      }
    }
  }
}
