void default_function_kernel(float* T_matmul, float* left_matrix, float* right_matrix) {
  for (int32_t ax1_outer_inner_init = 0; ax1_outer_inner_init < 11; ++ax1_outer_inner_init) {
    for (int32_t ax0_inner_init = 0; ax0_inner_init < 11; ++ax0_inner_init) {
      T_matmul[((ax0_inner_init * 11) + ax1_outer_inner_init)] = 0.000000e+00f;
    }
  }
  for (int32_t ax1_outer_inner = 0; ax1_outer_inner < 11; ++ax1_outer_inner) {
    for (int32_t k_inner = 0; k_inner < 2; ++k_inner) {
      for (int32_t ax0_inner = 0; ax0_inner < 11; ++ax0_inner) {
        T_matmul[((ax0_inner * 11) + ax1_outer_inner)] = (T_matmul[((ax0_inner * 11) + ax1_outer_inner)] + (left_matrix[((ax0_inner * 2) + k_inner)] * right_matrix[((k_inner * 11) + ax1_outer_inner)]));
      }
    }
  }
}
