void default_function_kernel(float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 66; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute[((i0_i1_fused * 18) + i2)] = acosf(ph_0[((i0_i1_fused * 18) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 66; ++ax0_ax1_fused) {
    float compute_1[18];
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute_1[i2_1] = expf(ph_0[((ax0_ax1_fused * 18) + i2_1)]);
    }
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      T_subtract[((ax0_ax1_fused * 18) + ax2)] = (0.000000e+00f - compute_1[ax2]);
    }
  }
}

