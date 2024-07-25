void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3800; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf((ph_0[i0_i1_fused_i2_fused] / atanf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        compute_1[(((i0 * 380) + (i1 * 19)) + i2)] = acosf((ph_0[(((i0 * 380) + (i1 * 19)) + i2)] / atanf(ph_0[(((i0 * 380) + (i1 * 19)) + i2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 200; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
      compute_2[((i0_i1_fused * 19) + i2_1)] = asinf((ph_0[((i0_i1_fused * 19) + i2_1)] - ph_3[((i0_i1_fused * 19) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3800; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

