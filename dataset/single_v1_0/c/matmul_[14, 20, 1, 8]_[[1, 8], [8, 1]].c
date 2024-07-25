void default_function_kernel(float* T_matmul, float* left_matrix, float* right_matrix) {
  T_matmul[0] = 0.000000e+00f;
  for (int32_t k = 0; k < 8; ++k) {
    T_matmul[0] = (T_matmul[0] + (left_matrix[k] * right_matrix[k]));
  }
}

