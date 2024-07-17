void default_function_kernel(float* T_add, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float compute_3[510];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 510; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 510; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 510; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (compute_3[ax0_ax1_fused_ax2_fused] + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 510; ++i0_i1_fused_i2_fused_2) {
    compute_1[i0_i1_fused_i2_fused_2] = cosf(compute_3[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 3; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax10 = 0; ax10 < 5; ++ax10) {
      for (int32_t ax11 = 0; ax11 < 2; ++ax11) {
        for (int32_t ax12 = 0; ax12 < 5; ++ax12) {
          compute_3[((((ax0_ax1_fused_ax2_fused_1 * 50) + (ax10 * 10)) + (ax11 * 5)) + ax12)] = ph_3[((((ax0_ax1_fused_ax2_fused_1 * 50) + (ax12 * 10)) + (ax11 * 5)) + ax10)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused = 0; i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused < 51; ++i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused) {
    float T_batch_matmul_NN[25];
    for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 5; ++b_inner_init) {
        T_batch_matmul_NN[((b_inner_init * 5) + j_outer_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 2; ++k_inner) {
        for (int32_t b_inner = 0; b_inner < 5; ++b_inner) {
          T_batch_matmul_NN[((b_inner * 5) + j_outer_inner)] = (T_batch_matmul_NN[((b_inner * 5) + j_outer_inner)] + (ph_0[(((((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused / 17) * 170) + (b_inner * 34)) + ((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused % 17) * 2)) + k_inner)] * compute_3[(((((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused / 17) * 50) + (j_outer_inner * 10)) + (k_inner * 5)) + b_inner)]));
        }
      }
    }
    for (int32_t i0_inner = 0; i0_inner < 5; ++i0_inner) {
      for (int32_t i2_inner_s = 0; i2_inner_s < 5; ++i2_inner_s) {
        compute_2[(((((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused / 17) * 425) + (i0_inner * 85)) + ((i0_outer_outer_i1_outer_outer_fused_i2_outer_outer_fused_i0_outer_inner_fused_i1_outer_inner_fused_i2_outer_inner_fused % 17) * 5)) + i2_inner_s)] = asinf(T_batch_matmul_NN[((i0_inner * 5) + i2_inner_s)]);
      }
    }
  }
}

