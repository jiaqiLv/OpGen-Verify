void default_function_kernel(float* T_mod, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 56; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
      T_mod[((ax0_ax1_fused * 13) + ax2)] = fmodf(ph_0[((ax0_ax1_fused * 13) + ax2)], fabsf(ph_0[((ax0_ax1_fused * 13) + ax2)]));
    }
  }
}

