void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused = 0; b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused < 16150; ++b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused) {
    for (int32_t b_inner = 0; b_inner < 2; ++b_inner) {
      for (int32_t i_inner = 0; i_inner < 2; ++i_inner) {
        ScaleShift[(((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused / 3230) * 12920) + (b_inner * 6460)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 10) * 646)) + (i_inner * 323)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 170) / 10) * 19)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 3230) / 170))] = ((data[(((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused / 3230) * 12920) + (b_inner * 6460)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 10) * 646)) + (i_inner * 323)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 170) / 10) * 19)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 3230) / 170))] * Scale[((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 10) / 5) * 19) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 3230) / 170))]) + Shift[((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 10) / 5) * 19) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused % 3230) / 170))]);
      }
    }
  }
}

