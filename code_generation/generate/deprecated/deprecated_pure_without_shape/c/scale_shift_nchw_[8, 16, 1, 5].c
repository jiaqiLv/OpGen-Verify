void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  for (int32_t b_outer_outer_inner = 0; b_outer_outer_inner < 2; ++b_outer_outer_inner) {
    for (int32_t c_outer_outer_inner = 0; c_outer_outer_inner < 8; ++c_outer_outer_inner) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
        for (int32_t b_inner = 0; b_inner < 2; ++b_inner) {
          for (int32_t c_inner = 0; c_inner < 2; ++c_inner) {
            for (int32_t j_inner = 0; j_inner < 5; ++j_inner) {
              ScaleShift[((((((b_outer_outer_inner * 320) + (b_outer_inner * 160)) + (b_inner * 80)) + (c_outer_outer_inner * 10)) + (c_inner * 5)) + j_inner)] = ((data[((((((b_outer_outer_inner * 320) + (b_outer_inner * 160)) + (b_inner * 80)) + (c_outer_outer_inner * 10)) + (c_inner * 5)) + j_inner)] * Scale[((c_outer_outer_inner * 2) + c_inner)]) + Shift[((c_outer_outer_inner * 2) + c_inner)]);
            }
          }
        }
      }
    }
  }
}

