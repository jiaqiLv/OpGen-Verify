void default_function_kernel(float* T_add, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[1100];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3520; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3520; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 3520; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf(asinhf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 10; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax9 = 0; ax9 < 11; ++ax9) {
      for (int32_t ax10 = 0; ax10 < 10; ++ax10) {
        auto_scheduler_layout_transform[(((ax0_ax1_fused_ax2_fused_1 * 110) + (ax9 * 10)) + ax10)] = ph_3[(((((ax0_ax1_fused_ax2_fused_1 / 5) * 550) + (ax10 * 55)) + (ax9 * 5)) + (ax0_ax1_fused_ax2_fused_1 % 5))];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_i1_outer_fused_i2_outer_fused = 0; i0_outer_i1_outer_fused_i2_outer_fused < 160; ++i0_outer_i1_outer_fused_i2_outer_fused) {
    float T_batch_matmul_NN[10];
    for (int32_t b_inner_init = 0; b_inner_init < 10; ++b_inner_init) {
      T_batch_matmul_NN[b_inner_init] = 0.000000e+00f;
    }
    for (int32_t k_inner = 0; k_inner < 11; ++k_inner) {
      for (int32_t b_inner = 0; b_inner < 10; ++b_inner) {
        T_batch_matmul_NN[b_inner] = (T_batch_matmul_NN[b_inner] + (ph_0[(((((i0_outer_i1_outer_fused_i2_outer_fused / 80) * 1760) + (b_inner * 176)) + (((i0_outer_i1_outer_fused_i2_outer_fused % 80) / 5) * 11)) + k_inner)] * auto_scheduler_layout_transform[(((((i0_outer_i1_outer_fused_i2_outer_fused / 80) * 550) + ((i0_outer_i1_outer_fused_i2_outer_fused % 5) * 110)) + (k_inner * 10)) + b_inner)]));
      }
    }
    for (int32_t i0_inner = 0; i0_inner < 10; ++i0_inner) {
      compute_2[((((i0_outer_i1_outer_fused_i2_outer_fused / 80) * 800) + (i0_inner * 80)) + (i0_outer_i1_outer_fused_i2_outer_fused % 80))] = acosf(T_batch_matmul_NN[i0_inner]);
    }
  }
}

