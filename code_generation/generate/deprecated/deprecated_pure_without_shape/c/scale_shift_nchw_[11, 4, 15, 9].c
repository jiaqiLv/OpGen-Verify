void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused = 0; b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused < 990; ++b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused) {
    for (int32_t c_inner = 0; c_inner < 2; ++c_inner) {
      for (int32_t i_inner = 0; i_inner < 3; ++i_inner) {
        ScaleShift[((((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused / 45) * 270) + (c_inner * 135)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused % 5) * 27)) + (i_inner * 9)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused % 45) / 5))] = ((data[((((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused / 45) * 270) + (c_inner * 135)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused % 5) * 27)) + (i_inner * 9)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused % 45) / 5))] * Scale[((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused % 90) / 45) * 2) + c_inner)]) + Shift[((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_b_outer_inner_fused_c_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_b_inner_fused % 90) / 45) * 2) + c_inner)]);
      }
    }
  }
}

