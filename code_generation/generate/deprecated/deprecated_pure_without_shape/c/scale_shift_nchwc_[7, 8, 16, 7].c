void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused = 0; b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused < 112; ++b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused) {
    for (int32_t b_outer_inner = 0; b_outer_inner < 7; ++b_outer_inner) {
      for (int32_t cc_outer_inner = 0; cc_outer_inner < 2; ++cc_outer_inner) {
        for (int32_t i_outer_inner = 0; i_outer_inner < 4; ++i_outer_inner) {
          for (int32_t i_inner = 0; i_inner < 2; ++i_inner) {
            ScaleShift[((((((b_outer_inner * 1792) + (cc_outer_inner * 896)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused / 56) * 448)) + (i_outer_inner * 112)) + (i_inner * 56)) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 56))] = ((data[((((((b_outer_inner * 1792) + (cc_outer_inner * 896)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused / 56) * 448)) + (i_outer_inner * 112)) + (i_inner * 56)) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 56))] * Scale[((cc_outer_inner * 8) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused & 7))]) + Shift[((cc_outer_inner * 8) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused & 7))]);
          }
        }
      }
    }
  }
}
