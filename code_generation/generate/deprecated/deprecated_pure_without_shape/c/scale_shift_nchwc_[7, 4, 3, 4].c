void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  for (int32_t j_outer_outer_outer = 0; j_outer_outer_outer < 2; ++j_outer_outer_outer) {
    for (int32_t cb_outer_outer_outer = 0; cb_outer_outer_outer < 2; ++cb_outer_outer_outer) {
      for (int32_t cc_outer_outer_inner = 0; cc_outer_outer_inner < 2; ++cc_outer_outer_inner) {
        for (int32_t cb_outer_outer_inner = 0; cb_outer_outer_inner < 2; ++cb_outer_outer_inner) {
          for (int32_t j_outer_inner = 0; j_outer_inner < 2; ++j_outer_inner) {
            for (int32_t b_inner = 0; b_inner < 7; ++b_inner) {
              for (int32_t i_inner = 0; i_inner < 3; ++i_inner) {
                ScaleShift[(((((((b_inner * 96) + (cc_outer_outer_inner * 48)) + (i_inner * 16)) + (j_outer_outer_outer * 8)) + (j_outer_inner * 4)) + (cb_outer_outer_outer * 2)) + cb_outer_outer_inner)] = ((data[(((((((b_inner * 96) + (cc_outer_outer_inner * 48)) + (i_inner * 16)) + (j_outer_outer_outer * 8)) + (j_outer_inner * 4)) + (cb_outer_outer_outer * 2)) + cb_outer_outer_inner)] * Scale[(((cc_outer_outer_inner * 4) + (cb_outer_outer_outer * 2)) + cb_outer_outer_inner)]) + Shift[(((cc_outer_outer_inner * 4) + (cb_outer_outer_outer * 2)) + cb_outer_outer_inner)]);
              }
            }
          }
        }
      }
    }
  }
}

