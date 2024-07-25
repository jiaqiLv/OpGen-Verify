void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_4) {
  float T_batch_matmul_NN_rf[266];
  #pragma omp parallel for
  for (int32_t b_i_fused_j_fused = 0; b_i_fused_j_fused < 14; ++b_i_fused_j_fused) {
    for (int32_t k_inner_init = 0; k_inner_init < 19; ++k_inner_init) {
      T_batch_matmul_NN_rf[((b_i_fused_j_fused * 19) + k_inner_init)] = 0.000000e+00f;
    }
    for (int32_t k_inner = 0; k_inner < 19; ++k_inner) {
      T_batch_matmul_NN_rf[((b_i_fused_j_fused * 19) + k_inner)] = (T_batch_matmul_NN_rf[((b_i_fused_j_fused * 19) + k_inner)] + (ceilf(ph_0[((b_i_fused_j_fused * 19) + k_inner)]) * ph_4[k_inner]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 14; ++ax0_ax1_fused_ax2_fused) {
    T_batch_matmul_NN[ax0_ax1_fused_ax2_fused] = 0.000000e+00f;
    for (int32_t k_inner_v = 0; k_inner_v < 19; ++k_inner_v) {
      T_batch_matmul_NN[ax0_ax1_fused_ax2_fused] = (T_batch_matmul_NN[ax0_ax1_fused_ax2_fused] + T_batch_matmul_NN_rf[((ax0_ax1_fused_ax2_fused * 19) + k_inner_v)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 266; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(acoshf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 266; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(acoshf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    float compute_3[19];
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute_3[i2] = expf(ph_0[((i0_i1_fused * 19) + i2)]);
    }
    for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
      compute_2[((i0_i1_fused * 19) + i2_1)] = acosf(compute_3[i2_1]);
    }
  }
}
