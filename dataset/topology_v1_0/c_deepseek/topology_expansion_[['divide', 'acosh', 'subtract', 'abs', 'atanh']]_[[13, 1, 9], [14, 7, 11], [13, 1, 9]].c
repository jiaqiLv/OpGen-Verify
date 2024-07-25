void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 13; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      T_divide[((ax0_ax1_fused * 9) + ax2)] = (ph_0[((ax0_ax1_fused * 9) + ax2)] / ph_3[((ax0_ax1_fused * 9) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 117; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf((ph_0[i0_i1_fused_i2_fused] - acoshf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      compute_1[((i0 * 9) + i2)] = atanhf((ph_0[((i0 * 9) + i2)] - acoshf(ph_0[((i0 * 9) + i2)])));
    }
  }
}
