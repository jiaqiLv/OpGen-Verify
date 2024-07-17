void default_function_kernel(float* T_fast_erf, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 51; ++ax0_ax1_fused) {
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      T_fast_erf[((ax0_ax1_fused * 16) + ax3)] = ((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * -2.726142e-10f) + 2.770681e-08f)) + -2.101024e-06f)) + -5.692506e-05f)) + -7.349906e-04f)) + -2.954600e-03f)) + -1.609603e-02f)) / (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f) * max(min(data[((ax0_ax1_fused * 16) + ax3)], 4.000000e+00f), -4.000000e+00f)) * -1.456607e-05f) + -2.133740e-04f)) + -1.682827e-03f)) + -7.373329e-03f)) + -1.426474e-02f));
    }
  }
}

