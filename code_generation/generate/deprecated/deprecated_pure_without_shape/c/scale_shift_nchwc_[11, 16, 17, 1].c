void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused = 0; b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused < 8; ++b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused) {
    for (int32_t i_outer_outer_inner = 0; i_outer_outer_inner < 17; ++i_outer_outer_inner) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 11; ++b_outer_inner) {
        for (int32_t cb_outer_inner = 0; cb_outer_inner < 2; ++cb_outer_inner) {
          for (int32_t cc_inner = 0; cc_inner < 2; ++cc_inner) {
            ScaleShift[(((((b_outer_inner * 544) + (cc_inner * 272)) + (i_outer_outer_inner * 16)) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused * 2)) + cb_outer_inner)] = ((data[(((((b_outer_inner * 544) + (cc_inner * 272)) + (i_outer_outer_inner * 16)) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused * 2)) + cb_outer_inner)] * Scale[(((cc_inner * 16) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused * 2)) + cb_outer_inner)]) + Shift[(((cc_inner * 16) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused * 2)) + cb_outer_inner)]);
          }
        }
      }
    }
  }
}

