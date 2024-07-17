void default_function_kernel(float* Scale, float* ScaleShift, float* Shift, float* data) {
  for (int32_t c_outer_outer_inner = 0; c_outer_outer_inner < 4; ++c_outer_outer_inner) {
    for (int32_t i_outer_outer_inner = 0; i_outer_outer_inner < 5; ++i_outer_outer_inner) {
      for (int32_t b_inner = 0; b_inner < 4; ++b_inner) {
        for (int32_t c_inner = 0; c_inner < 2; ++c_inner) {
          for (int32_t i_inner = 0; i_inner < 2; ++i_inner) {
            ScaleShift[(((((b_inner * 80) + (c_outer_outer_inner * 20)) + (c_inner * 10)) + (i_outer_outer_inner * 2)) + i_inner)] = ((data[(((((b_inner * 80) + (c_outer_outer_inner * 20)) + (c_inner * 10)) + (i_outer_outer_inner * 2)) + i_inner)] * Scale[((c_outer_outer_inner * 2) + c_inner)]) + Shift[((c_outer_outer_inner * 2) + c_inner)]);
          }
        }
      }
    }
  }
}

