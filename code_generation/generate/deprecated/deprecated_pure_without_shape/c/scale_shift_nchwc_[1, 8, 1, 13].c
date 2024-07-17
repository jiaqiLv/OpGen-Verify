void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  for (int32_t j_outer_outer_inner = 0; j_outer_outer_inner < 13; ++j_outer_outer_inner) {
    for (int32_t cb_outer_outer_inner = 0; cb_outer_outer_inner < 8; ++cb_outer_outer_inner) {
      for (int32_t cc_outer_inner = 0; cc_outer_inner < 2; ++cc_outer_inner) {
        ScaleShift[(((cc_outer_inner * 104) + (j_outer_outer_inner * 8)) + cb_outer_outer_inner)] = ((data[(((cc_outer_inner * 104) + (j_outer_outer_inner * 8)) + cb_outer_outer_inner)] * Scale[((cc_outer_inner * 8) + cb_outer_outer_inner)]) + Shift[((cc_outer_inner * 8) + cb_outer_outer_inner)]);
      }
    }
  }
}

