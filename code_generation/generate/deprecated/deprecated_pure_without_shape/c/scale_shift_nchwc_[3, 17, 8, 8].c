void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused = 0; b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused < 1632; ++b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused) {
    for (int32_t cc_outer_inner = 0; cc_outer_inner < 2; ++cc_outer_inner) {
      for (int32_t j_outer_inner = 0; j_outer_inner < 2; ++j_outer_inner) {
        ScaleShift[((((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused / 544) * 2176) + (cc_outer_inner * 1088)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 544) / 136) * 272)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 34) / 17) * 136)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 136) / 34) * 34)) + (j_outer_inner * 17)) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 17))] = ((data[((((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused / 544) * 2176) + (cc_outer_inner * 1088)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 544) / 136) * 272)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 34) / 17) * 136)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 136) / 34) * 34)) + (j_outer_inner * 17)) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 17))] * Scale[((cc_outer_inner * 17) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 17))]) + Shift[((cc_outer_inner * 17) + (b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused % 17))]);
      }
    }
  }
}
