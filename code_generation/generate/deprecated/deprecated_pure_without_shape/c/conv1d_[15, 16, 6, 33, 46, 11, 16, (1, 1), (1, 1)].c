void default_function_kernel(float* conv1d_ncw, float* data, float* kernel) {
  for (int32_t ff_outer_inner_init = 0; ff_outer_inner_init < 5; ++ff_outer_inner_init) {
    for (int32_t yy_outer_inner_init = 0; yy_outer_inner_init < 4; ++yy_outer_inner_init) {
      for (int32_t nn_inner_init = 0; nn_inner_init < 2; ++nn_inner_init) {
        conv1d_ncw[(((nn_inner_init * 20) + (ff_outer_inner_init * 4)) + yy_outer_inner_init)] = 0.000000e+00f;
      }
    }
  }
  for (int32_t rc_outer = 0; rc_outer < 3; ++rc_outer) {
    for (int32_t ry_outer = 0; ry_outer < 3; ++ry_outer) {
      for (int32_t ff_outer_inner = 0; ff_outer_inner < 5; ++ff_outer_inner) {
        for (int32_t yy_outer_inner = 0; yy_outer_inner < 4; ++yy_outer_inner) {
          for (int32_t nn_inner = 0; nn_inner < 2; ++nn_inner) {
            conv1d_ncw[(((nn_inner * 20) + (ff_outer_inner * 4)) + yy_outer_inner)] = (conv1d_ncw[(((nn_inner * 20) + (ff_outer_inner * 4)) + yy_outer_inner)] + (data[((((nn_inner * 30) + (rc_outer * 10)) + (yy_outer_inner * 2)) + ry_outer)] * kernel[(((ff_outer_inner * 9) + (rc_outer * 3)) + ry_outer)]));
          }
        }
      }
    }
  }
}

