extern "C" __global__ void __launch_bounds__(23) default_function_kernel(float* __restrict__ T_matmul, float* __restrict__ left_matrix, float* __restrict__ right_matrix) {
  float T_matmul_local[2];
  __shared__ float left_matrix_shared[552];
  __shared__ float right_matrix_shared[48];
  for (int ax1_c_inner_init = 0; ax1_c_inner_init < 2; ++ax1_c_inner_init) {
    T_matmul_local[ax1_c_inner_init] = 0.000000e+00f;
  }
  for (int k_outer_outer = 0; k_outer_outer < 3; ++k_outer_outer) {
    __syncthreads();
    for (int ax0_ax1_fused_outer_outer = 0; ax0_ax1_fused_outer_outer < 24; ++ax0_ax1_fused_outer_outer) {
      left_matrix_shared[((ax0_ax1_fused_outer_outer * 23) + ((int)threadIdx.x))] = left_matrix[(((((((int)blockIdx.x) / 23) * 1656) + ((((ax0_ax1_fused_outer_outer * 23) + ((int)threadIdx.x)) / 24) * 72)) + (k_outer_outer * 24)) + (((ax0_ax1_fused_outer_outer * 23) + ((int)threadIdx.x)) % 24))];
    }
    for (int ax0_ax1_fused_outer_outer_1 = 0; ax0_ax1_fused_outer_outer_1 < 3; ++ax0_ax1_fused_outer_outer_1) {
      if (((ax0_ax1_fused_outer_outer_1 * 23) + ((int)threadIdx.x)) < 48) {
        right_matrix_shared[((ax0_ax1_fused_outer_outer_1 * 23) + ((int)threadIdx.x))] = right_matrix[((((k_outer_outer * 1104) + ((((ax0_ax1_fused_outer_outer_1 * 23) + ((int)threadIdx.x)) >> 1) * 46)) + ((((int)blockIdx.x) % 23) * 2)) + ((ax0_ax1_fused_outer_outer_1 + ((int)threadIdx.x)) & 1))];
      }
    }
    __syncthreads();
    for (int k_outer_inner = 0; k_outer_inner < 8; ++k_outer_inner) {
      for (int k_inner = 0; k_inner < 3; ++k_inner) {
        for (int ax1_c_inner = 0; ax1_c_inner < 2; ++ax1_c_inner) {
          T_matmul_local[ax1_c_inner] = (T_matmul_local[ax1_c_inner] + (left_matrix_shared[(((((int)threadIdx.x) * 24) + (k_outer_inner * 3)) + k_inner)] * right_matrix_shared[(((k_outer_inner * 6) + (k_inner * 2)) + ax1_c_inner)]));
        }
      }
    }
  }
  for (int ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
    T_matmul[(((((((int)blockIdx.x) / 23) * 1058) + (((int)threadIdx.x) * 46)) + ((((int)blockIdx.x) % 23) * 2)) + ax1_inner)] = T_matmul_local[ax1_inner];
  }
}

