extern "C" __global__ void __launch_bounds__(238) default_function_kernel(float* __restrict__ data, float* __restrict__ transform_weight) {
  float transform_weight_local[28];
  __shared__ float data_shared[4896];
  __shared__ float G_shared[42];
  for (int eps_c_inner_init = 0; eps_c_inner_init < 7; ++eps_c_inner_init) {
    for (int ci_c_inner_init = 0; ci_c_inner_init < 4; ++ci_c_inner_init) {
      transform_weight_local[((eps_c_inner_init * 4) + ci_c_inner_init)] = 0.000000e+00f;
    }
  }
  for (int ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer < 21; ++ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer) {
    if (((ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer * 7) + (((int)threadIdx.x) / 34)) < 144) {
      data_shared[((ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer * 238) + ((int)threadIdx.x))] = data[((((((ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer * 119) + (((int)threadIdx.x) >> 1)) / 144) * 576) + (((int)blockIdx.x) * 288)) + (((ax0_ax1_fused_ax2_fused_ax3_fused_outer_outer * 238) + ((int)threadIdx.x)) % 288))];
    }
  }
  if (((int)threadIdx.x) < 42) {
    G_shared[((int)threadIdx.x)] = ((((int)threadIdx.x) == 41) ? 1.000000e+00f : ((((int)threadIdx.x) == 40) ? 0.000000e+00f : ((((int)threadIdx.x) == 39) ? 0.000000e+00f : ((((int)threadIdx.x) == 38) ? 0.000000e+00f : ((((int)threadIdx.x) == 37) ? 0.000000e+00f : ((((int)threadIdx.x) == 36) ? 0.000000e+00f : ((((int)threadIdx.x) == 35) ? 5.555556e-02f : ((((int)threadIdx.x) == 34) ? -1.111111e-01f : ((((int)threadIdx.x) == 33) ? 2.222222e-01f : ((((int)threadIdx.x) == 32) ? -4.444444e-01f : ((((int)threadIdx.x) == 31) ? 8.888889e-01f : ((((int)threadIdx.x) == 30) ? -1.777778e+00f : ((((int)threadIdx.x) == 29) ? 1.422222e+00f : ((((int)threadIdx.x) == 28) ? -7.111111e-01f : ((((int)threadIdx.x) == 27) ? 3.555556e-01f : ((((int)threadIdx.x) == 26) ? -1.777778e-01f : ((((int)threadIdx.x) == 25) ? 8.888889e-02f : ((((int)threadIdx.x) == 24) ? -4.444445e-02f : ((((int)threadIdx.x) == 23) ? -3.333334e-02f : ((((int)threadIdx.x) == 22) ? -6.666667e-02f : ((((int)threadIdx.x) == 21) ? -1.333333e-01f : ((((int)threadIdx.x) == 20) ? -2.666667e-01f : ((((int)threadIdx.x) == 19) ? -5.333334e-01f : ((((int)threadIdx.x) == 18) ? -1.066667e+00f : ((((int)threadIdx.x) == 17) ? 2.222222e-01f : ((((int)threadIdx.x) == 16) ? 2.222222e-01f : ((((int)threadIdx.x) == 15) ? 2.222222e-01f : ((((int)threadIdx.x) == 14) ? 2.222222e-01f : ((((int)threadIdx.x) == 13) ? 2.222222e-01f : ((((int)threadIdx.x) == 12) ? 2.222222e-01f : ((((int)threadIdx.x) == 11) ? -6.666667e-01f : ((((int)threadIdx.x) == 10) ? 6.666667e-01f : ((((int)threadIdx.x) == 9) ? -6.666667e-01f : ((((int)threadIdx.x) == 8) ? 6.666667e-01f : ((((int)threadIdx.x) == 7) ? -6.666667e-01f : ((((int)threadIdx.x) == 6) ? 6.666667e-01f : ((((int)threadIdx.x) == 5) ? 0.000000e+00f : ((((int)threadIdx.x) == 4) ? 0.000000e+00f : ((((int)threadIdx.x) == 3) ? 0.000000e+00f : ((((int)threadIdx.x) == 2) ? 0.000000e+00f : ((((int)threadIdx.x) == 1) ? 0.000000e+00f : 2.000000e+00f)))))))))))))))))))))))))))))))))))))))));
  }
  __syncthreads();
  for (int r_kh_outer_inner = 0; r_kh_outer_inner < 2; ++r_kh_outer_inner) {
    for (int r_kh_inner = 0; r_kh_inner < 3; ++r_kh_inner) {
      for (int r_kw_inner = 0; r_kw_inner < 6; ++r_kw_inner) {
        for (int eps_c_inner = 0; eps_c_inner < 7; ++eps_c_inner) {
          for (int ci_c_inner = 0; ci_c_inner < 4; ++ci_c_inner) {
            transform_weight_local[((eps_c_inner * 4) + ci_c_inner)] = (transform_weight_local[((eps_c_inner * 4) + ci_c_inner)] + ((data_shared[((((((((int)threadIdx.x) % 34) * 144) + (ci_c_inner * 36)) + (r_kh_outer_inner * 18)) + (r_kh_inner * 6)) + r_kw_inner)] * G_shared[(((eps_c_inner * 6) + (r_kh_outer_inner * 3)) + r_kh_inner)]) * G_shared[(((((int)threadIdx.x) / 34) * 6) + r_kw_inner)]));
          }
        }
      }
    }
  }
  for (int eps_inner = 0; eps_inner < 7; ++eps_inner) {
    for (int ci_inner = 0; ci_inner < 4; ++ci_inner) {
      transform_weight[(((((eps_inner * 1904) + ((((int)threadIdx.x) >> 1) * 16)) + (((int)blockIdx.x) * 8)) + ((((int)threadIdx.x) & 1) * 4)) + ci_inner)] = transform_weight_local[((eps_inner * 4) + ci_inner)];
    }
  }
}

