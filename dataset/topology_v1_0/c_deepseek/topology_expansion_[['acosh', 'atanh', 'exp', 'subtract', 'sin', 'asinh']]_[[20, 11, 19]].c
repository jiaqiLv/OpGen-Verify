void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 220; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute[((i0_i1_fused * 19) + i2)] = acoshf(ph_0[((i0_i1_fused * 19) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 20; ++ax0) {
    float compute_2[209];
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
        compute_2[((i1 * 19) + i2_1)] = expf(atanhf(ph_0[(((ax0 * 209) + (i1 * 19)) + i2_1)]));
      }
    }
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        T_subtract[(((ax0 * 209) + (ax1 * 19)) + ax2)] = (ph_0[(((ax0 * 209) + (ax1 * 19)) + ax2)] - compute_2[((ax1 * 19) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4180; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinhf(sinf(ph_0[i0_i1_fused_i2_fused]));
  }
}

