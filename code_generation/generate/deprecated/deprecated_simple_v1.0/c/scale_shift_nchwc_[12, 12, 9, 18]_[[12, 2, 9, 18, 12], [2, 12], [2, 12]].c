void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused = 0; b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused < 5184; ++b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused) {
    for (int32_t j_inner = 0; j_inner < 9; ++j_inner) {
      ScaleShift[(((((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 12) * 3888) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 1296) / 216) * 648)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 108) / 36) * 216)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused / 2592) * 108)) + (j_inner * 12)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 2592) / 1296) * 6)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 216) / 108) * 3)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 36) / 12))] = ((data[(((((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 12) * 3888) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 1296) / 216) * 648)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 108) / 36) * 216)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused / 2592) * 108)) + (j_inner * 12)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 2592) / 1296) * 6)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 216) / 108) * 3)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 36) / 12))] * Scale[((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 1296) / 648) * 12) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 2592) / 1296) * 6)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 216) / 108) * 3)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 36) / 12))]) + Shift[((((((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 1296) / 648) * 12) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 2592) / 1296) * 6)) + (((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 216) / 108) * 3)) + ((b_outer_outer_outer_cc_outer_outer_outer_fused_i_outer_outer_outer_fused_j_outer_outer_outer_fused_cb_outer_outer_outer_fused_b_outer_outer_inner_fused_cc_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused_cb_outer_outer_inner_fused_b_outer_inner_fused_cc_outer_inner_fused_i_outer_inner_fused_j_outer_inner_fused_cb_outer_inner_fused_b_inner_fused % 36) / 12))]);
    }
  }
}

