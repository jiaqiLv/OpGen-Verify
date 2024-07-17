extern "C" __global__ void default_function_kernel(float* __restrict__ T_matmul, float* __restrict__ left_matrix, float* __restrict__ right_matrix) {
  float T_matmul_local[5];
  __shared__ float left_matrix_shared[4];
  __shared__ float right_matrix_shared[20];
  for (int ax1_c_outer_inner_init = 0; ax1_c_outer_inner_init < 5; ++ax1_c_outer_inner_init) {
    T_matmul_local[ax1_c_outer_inner_init] = 0.000000e+00f;
  }
  *(float4*)(left_matrix_shared + 0) = *(float4*)(left_matrix + (((int)blockIdx.x) * 4));
  for (int ax0_ax1_fused_outer_outer = 0; ax0_ax1_fused_outer_outer < 20; ++ax0_ax1_fused_outer_outer) {
    right_matrix_shared[ax0_ax1_fused_outer_outer] = right_matrix[ax0_ax1_fused_outer_outer];
  }
  __syncthreads();
  for (int k_outer_inner = 0; k_outer_inner < 2; ++k_outer_inner) {
    for (int ax1_c_outer_inner = 0; ax1_c_outer_inner < 5; ++ax1_c_outer_inner) {
      for (int k_inner = 0; k_inner < 2; ++k_inner) {
        T_matmul_local[ax1_c_outer_inner] = (T_matmul_local[ax1_c_outer_inner] + (left_matrix_shared[((k_outer_inner * 2) + k_inner)] * right_matrix_shared[(((k_outer_inner * 10) + (k_inner * 5)) + ax1_c_outer_inner)]));
      }
    }
  }
  for (int ax1_inner = 0; ax1_inner < 5; ++ax1_inner) {
    T_matmul[((((int)blockIdx.x) * 5) + ax1_inner)] = T_matmul_local[ax1_inner];
  }
}

