void default_function_kernel(float* T_add, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 3515; ++ax0_ax1_fused) {
    float compute_1[1];
    for (int32_t ax2 = 0; ax2 < 86; ++ax2) {
      compute_1[0] = expf(ph_0[((ax0_ax1_fused * 86) + ax2)]);
      T_add[((ax0_ax1_fused * 86) + ax2)] = (ph_0[((ax0_ax1_fused * 86) + ax2)] + ((ph_0[((ax0_ax1_fused * 86) + ax2)] - compute_1[0]) + ph_0[((ax0_ax1_fused * 86) + ax2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 302290; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(acoshf(ph_0[i0_i1_fused_i2_fused]));
  }
}

