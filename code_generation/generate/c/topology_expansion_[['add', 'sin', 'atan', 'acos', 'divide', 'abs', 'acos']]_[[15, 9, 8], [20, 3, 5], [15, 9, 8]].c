void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 135; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute[((i0_i1_fused * 8) + i2)] = sinf(ph_0[((i0_i1_fused * 8) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1080; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acosf(atanf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 135; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      T_divide[((ax0_ax1_fused * 8) + ax2)] = (atanf(ph_0[((ax0_ax1_fused * 8) + ax2)]) / ph_0[((ax0_ax1_fused * 8) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1080; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = fabsf((ph_0[i0_i1_fused_i2_fused_1] + ph_3[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 1080; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = acosf((ph_0[i0_i1_fused_i2_fused_2] + ph_3[i0_i1_fused_i2_fused_2]));
  }
}
