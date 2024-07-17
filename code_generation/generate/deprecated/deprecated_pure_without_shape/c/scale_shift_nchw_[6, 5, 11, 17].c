void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused = 0; b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused < 6; ++b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused) {
    for (int32_t j_outer_outer_inner = 0; j_outer_outer_inner < 17; ++j_outer_outer_inner) {
      for (int32_t i_outer_inner = 0; i_outer_inner < 11; ++i_outer_inner) {
        for (int32_t c_inner = 0; c_inner < 5; ++c_inner) {
          ScaleShift[((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused * 935) + (c_inner * 187)) + (i_outer_inner * 17)) + j_outer_outer_inner)] = ((data[((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused * 935) + (c_inner * 187)) + (i_outer_inner * 17)) + j_outer_outer_inner)] * Scale[c_inner]) + Shift[c_inner]);
        }
      }
    }
  }
}

