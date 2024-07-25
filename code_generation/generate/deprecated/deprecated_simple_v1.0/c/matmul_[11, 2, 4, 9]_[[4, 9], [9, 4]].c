void default_function_kernel(float* T_matmul, float* left_matrix, float* right_matrix) {
  for (int32_t ax0_outer_inner_init = 0; ax0_outer_inner_init < 2; ++ax0_outer_inner_init) {
    for (int32_t ax1_outer_inner_init = 0; ax1_outer_inner_init < 4; ++ax1_outer_inner_init) {
      for (int32_t ax0_inner_init = 0; ax0_inner_init < 2; ++ax0_inner_init) {
        T_matmul[(((ax0_outer_inner_init * 8) + (ax0_inner_init * 4)) + ax1_outer_inner_init)] = 0.000000e+00f;
      }
    }
  }
  for (int32_t k_outer = 0; k_outer < 9; ++k_outer) {
    for (int32_t ax0_outer_inner = 0; ax0_outer_inner < 2; ++ax0_outer_inner) {
      for (int32_t ax1_outer_inner = 0; ax1_outer_inner < 4; ++ax1_outer_inner) {
        for (int32_t ax0_inner = 0; ax0_inner < 2; ++ax0_inner) {
          T_matmul[(((ax0_outer_inner * 8) + (ax0_inner * 4)) + ax1_outer_inner)] = (T_matmul[(((ax0_outer_inner * 8) + (ax0_inner * 4)) + ax1_outer_inner)] + (left_matrix[(((ax0_outer_inner * 18) + (ax0_inner * 9)) + k_outer)] * right_matrix[((k_outer * 4) + ax1_outer_inner)]));
        }
      }
    }
  }
}

