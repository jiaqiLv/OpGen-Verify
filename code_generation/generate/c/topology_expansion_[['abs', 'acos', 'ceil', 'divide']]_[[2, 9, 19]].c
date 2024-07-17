void default_function_kernel(float* T_divide, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute[((i0_i1_fused * 19) + i2)] = fabsf(ph_0[((i0_i1_fused * 19) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 18; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      T_divide[((ax0_ax1_fused * 19) + ax2)] = (ph_0[((ax0_ax1_fused * 19) + ax2)] / ceilf(acosf(ph_0[((ax0_ax1_fused * 19) + ax2)])));
    }
  }
}

