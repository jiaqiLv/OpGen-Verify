void default_function_kernel(float* T_matmul, float* left_matrix, float* right_matrix) {
  for (int32_t ax1_outer_outer_outer = 0; ax1_outer_outer_outer < 5; ++ax1_outer_outer_outer) {
    for (int32_t ax0_inner_init = 0; ax0_inner_init < 5; ++ax0_inner_init) {
      T_matmul[((ax0_inner_init * 5) + ax1_outer_outer_outer)] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
      for (int32_t k_inner = 0; k_inner < 2; ++k_inner) {
        for (int32_t ax0_inner = 0; ax0_inner < 5; ++ax0_inner) {
          T_matmul[((ax0_inner * 5) + ax1_outer_outer_outer)] = (T_matmul[((ax0_inner * 5) + ax1_outer_outer_outer)] + (left_matrix[(((ax0_inner * 4) + (k_outer * 2)) + k_inner)] * right_matrix[(((k_outer * 10) + (k_inner * 5)) + ax1_outer_outer_outer)]));
        }
      }
    }
  }
}

