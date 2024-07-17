void default_function_kernel(float* T_add, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 48; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      T_add[((ax0_ax1_fused * 3) + ax2)] = ((ph_0[((ax0_ax1_fused * 3) + ax2)] + sinf(ph_0[((ax0_ax1_fused * 3) + ax2)])) + ph_0[((ax0_ax1_fused * 3) + ax2)]);
    }
  }
}

