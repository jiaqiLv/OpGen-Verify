void default_function_kernel(float* T_fast_erf, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 6008560; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    T_fast_erf[ax0_ax1_fused_ax2_fused_ax3_fused] = ((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * -2.726142e-10f) + 2.770681e-08f)) + -2.101024e-06f)) + -5.692506e-05f)) + -7.349906e-04f)) + -2.954600e-03f)) + -1.609603e-02f)) / (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * (((max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f) * max(min(data[ax0_ax1_fused_ax2_fused_ax3_fused], 4.000000e+00f), -4.000000e+00f)) * -1.456607e-05f) + -2.133740e-04f)) + -1.682827e-03f)) + -7.373329e-03f)) + -1.426474e-02f));
  }
}

