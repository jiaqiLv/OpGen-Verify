void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 156; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 3; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        compute_1[(((i0 * 52) + (i1 * 13)) + i2)] = fabsf(acoshf(ph_0[(((i0 * 52) + (i1 * 13)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 156; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (acoshf(ph_0[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 3; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 13; ++i2_1) {
        compute_2[(((i0_1 * 52) + (i1_1 * 13)) + i2_1)] = asinhf(fmodf(ph_0[(((i0_1 * 52) + (i1_1 * 13)) + i2_1)], ph_3[(((i0_1 * 52) + (i1_1 * 13)) + i2_1)]));
      }
    }
  }
}

