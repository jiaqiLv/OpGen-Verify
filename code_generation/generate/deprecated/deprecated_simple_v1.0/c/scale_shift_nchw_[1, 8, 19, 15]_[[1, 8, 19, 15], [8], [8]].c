void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused = 0; b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused < 60; ++b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused) {
    for (int32_t c_outer_outer_inner = 0; c_outer_outer_inner < 2; ++c_outer_outer_inner) {
      for (int32_t i_inner = 0; i_inner < 19; ++i_inner) {
        ScaleShift[(((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused / 15) * 570) + (c_outer_outer_inner * 285)) + (i_inner * 15)) + (b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused % 15))] = ((data[(((((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused / 15) * 570) + (c_outer_outer_inner * 285)) + (i_inner * 15)) + (b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused % 15))] * Scale[(((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused / 15) * 2) + c_outer_outer_inner)]) + Shift[(((b_outer_outer_outer_c_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused / 15) * 2) + c_outer_outer_inner)]);
      }
    }
  }
}
