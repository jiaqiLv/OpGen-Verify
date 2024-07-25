void default_function_kernel(float* T_add, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        compute[(((i0 * 266) + (i1 * 19)) + i2)] = expf(ph_0[(((i0 * 266) + (i1 * 19)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3724; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (fabsf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 14; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
        compute_1[(((i0_1 * 266) + (i1_1 * 19)) + i2_1)] = atanf(ph_0[(((i0_1 * 266) + (i1_1 * 19)) + i2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3724; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
}
