void default_function_kernel(float* T_fast_tanh, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 342; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      T_fast_tanh[((ax0_ax1_fused * 4) + ax2)] = ((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * -2.760768e-16f) + 2.000188e-13f)) + -8.604672e-11f)) + 5.122297e-08f)) + 1.485722e-05f)) + 6.372619e-04f)) + 4.893525e-03f)) / (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)])) * max(-9.000000e+00f, min(9.000000e+00f, data[((ax0_ax1_fused * 4) + ax2)]))) * 1.198258e-06f) + 1.185347e-04f)) + 2.268435e-03f)) + 4.893525e-03f));
    }
  }
}

