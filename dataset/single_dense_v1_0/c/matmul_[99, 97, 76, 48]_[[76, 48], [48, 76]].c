void default_function_kernel(float* T_matmul, float* left_matrix, float* right_matrix) {
  #pragma omp parallel for
  for (int32_t ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused = 0; ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused < 1444; ++ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused) {
    for (int32_t ax0_outer_inner_init = 0; ax0_outer_inner_init < 2; ++ax0_outer_inner_init) {
      for (int32_t ax0_inner_init = 0; ax0_inner_init < 2; ++ax0_inner_init) {
        T_matmul[(((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 76) * 304) + (ax0_outer_inner_init * 152)) + (ax0_inner_init * 76)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 76))] = 0.000000e+00f;
      }
    }
    for (int32_t ax0_outer_inner = 0; ax0_outer_inner < 2; ++ax0_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 48; ++k_inner) {
        for (int32_t ax0_inner = 0; ax0_inner < 2; ++ax0_inner) {
          T_matmul[(((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 76) * 304) + (ax0_outer_inner * 152)) + (ax0_inner * 76)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 76))] = (T_matmul[(((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 76) * 304) + (ax0_outer_inner * 152)) + (ax0_inner * 76)) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 76))] + (left_matrix[(((((ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused / 76) * 192) + (ax0_outer_inner * 96)) + (ax0_inner * 48)) + k_inner)] * right_matrix[((k_inner * 76) + (ax0_outer_outer_outer_ax1_outer_outer_outer_fused_ax0_outer_outer_inner_fused_ax1_outer_outer_inner_fused % 76))]));
        }
      }
    }
  }
}
