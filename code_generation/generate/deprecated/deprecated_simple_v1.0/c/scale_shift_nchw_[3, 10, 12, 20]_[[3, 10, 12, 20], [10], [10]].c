void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 900; ++b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t j_outer_inner = 0; j_outer_inner < 2; ++j_outer_inner) {
      for (int32_t i_inner = 0; i_inner < 4; ++i_inner) {
        ScaleShift[((((((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 300) * 2400) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 20) >> 1) * 240)) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 300) / 100) * 80)) + (i_inner * 20)) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 100) / 20) * 4)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 2)) + j_outer_inner)] = ((data[((((((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 300) * 2400) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 20) >> 1) * 240)) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 300) / 100) * 80)) + (i_inner * 20)) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 100) / 20) * 4)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 2)) + j_outer_inner)] * Scale[((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 20) >> 1)]) + Shift[((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 20) >> 1)]);
      }
    }
  }
}

