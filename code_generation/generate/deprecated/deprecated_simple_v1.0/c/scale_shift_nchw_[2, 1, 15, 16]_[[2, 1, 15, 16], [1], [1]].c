void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  for (int32_t i_outer_outer_outer = 0; i_outer_outer_outer < 3; ++i_outer_outer_outer) {
    for (int32_t j_outer_outer_outer = 0; j_outer_outer_outer < 4; ++j_outer_outer_outer) {
      for (int32_t j_outer_outer_inner = 0; j_outer_outer_inner < 2; ++j_outer_outer_inner) {
        for (int32_t i_outer_inner = 0; i_outer_inner < 5; ++i_outer_inner) {
          for (int32_t j_outer_inner = 0; j_outer_inner < 2; ++j_outer_inner) {
            for (int32_t b_inner = 0; b_inner < 2; ++b_inner) {
              ScaleShift[((((((b_inner * 240) + (i_outer_outer_outer * 80)) + (i_outer_inner * 16)) + (j_outer_outer_outer * 4)) + (j_outer_outer_inner * 2)) + j_outer_inner)] = ((data[((((((b_inner * 240) + (i_outer_outer_outer * 80)) + (i_outer_inner * 16)) + (j_outer_outer_outer * 4)) + (j_outer_outer_inner * 2)) + j_outer_inner)] * Scale[0]) + Shift[0]);
            }
          }
        }
      }
    }
  }
}

