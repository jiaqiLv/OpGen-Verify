void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    float tensor[1];
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      tensor[0] = 0.000000e+00f;
      tensor[0] = (tensor[0] + (data[((ax0_ax1_fused * 4) + ax2)] * data[((ax0_ax1_fused * 4) + ax2)]));
      T_divide[((ax0_ax1_fused * 4) + ax2)] = (data[((ax0_ax1_fused * 4) + ax2)] / powf((2.000000e+00f + (1.000000e-04f * tensor[0])), 7.500000e-01f));
    }
  }
}

