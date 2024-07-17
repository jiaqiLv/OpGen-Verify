void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  float compute_2[540];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 270; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      T_divide[((ax0_ax1_fused * 2) + ax2)] = (ph_0[((ax0_ax1_fused * 2) + ax2)] / sinf((ph_0[((ax0_ax1_fused * 2) + ax2)] * asinhf(ph_0[((ax0_ax1_fused * 2) + ax2)]))));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 540; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 540; ++i0_i1_fused_i2_fused_1) {
    compute[i0_i1_fused_i2_fused_1] = sinf(compute_2[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 540; ++i0_i1_fused_i2_fused_2) {
    compute_1[i0_i1_fused_i2_fused_2] = ceilf(compute_2[i0_i1_fused_i2_fused_2]);
  }
}

