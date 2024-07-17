void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused = 0; b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused < 5; ++b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused) {
    for (int32_t j_outer_outer_inner = 0; j_outer_outer_inner < 2; ++j_outer_outer_inner) {
      for (int32_t c_outer_inner = 0; c_outer_inner < 19; ++c_outer_inner) {
        for (int32_t i_outer_inner = 0; i_outer_inner < 19; ++i_outer_inner) {
          ScaleShift[((((c_outer_inner * 190) + (i_outer_inner * 10)) + (b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused * 2)) + j_outer_outer_inner)] = ((data[((((c_outer_inner * 190) + (i_outer_inner * 10)) + (b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_c_outer_outer_inner_fused_i_outer_outer_inner_fused * 2)) + j_outer_outer_inner)] * Scale[c_outer_inner]) + Shift[c_outer_inner]);
        }
      }
    }
  }
}

