void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 819; ++b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t c_outer_inner = 0; c_outer_inner < 3; ++c_outer_inner) {
        for (int32_t i_outer_inner = 0; i_outer_inner < 3; ++i_outer_inner) {
          for (int32_t i_inner = 0; i_inner < 2; ++i_inner) {
            ScaleShift[((((((((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 273) / 39) * 4212) + (b_outer_inner * 2106)) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 39) / 13) * 702)) + (c_outer_inner * 234)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 273) * 78)) + (i_outer_inner * 26)) + (i_inner * 13)) + (b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 13))] = ((data[((((((((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 273) / 39) * 4212) + (b_outer_inner * 2106)) + (((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 39) / 13) * 702)) + (c_outer_inner * 234)) + ((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 273) * 78)) + (i_outer_inner * 26)) + (i_inner * 13)) + (b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 13))] * Scale[((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 39) / 13) * 3) + c_outer_inner)]) + Shift[((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 39) / 13) * 3) + c_outer_inner)]);
          }
        }
      }
    }
  }
}

