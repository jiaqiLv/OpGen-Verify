void default_function_kernel(float* T_divide, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      T_divide[((ax0 * 6) + ax1)] = (ph_0[((ax0 * 6) + ax1)] / ph_3[((ax0 * 6) + ax1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 36; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf((ph_0[i0_i1_fused_i2_fused] + (ph_0[i0_i1_fused_i2_fused] * ph_3[i0_i1_fused_i2_fused])));
  }
}
