extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ceilf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (fabsf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]) + ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(50) default_function_kernel_2(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_5) {
  float T_batch_matmul_NN_local[4];
  __shared__ float ph_5_shared[80];
  for (int b_c_outer_inner_init = 0; b_c_outer_inner_init < 2; ++b_c_outer_inner_init) {
    for (int b_c_inner_init = 0; b_c_inner_init < 2; ++b_c_inner_init) {
      T_batch_matmul_NN_local[((b_c_outer_inner_init * 2) + b_c_inner_init)] = 0.000000e+00f;
    }
  }
  for (int k_outer_outer = 0; k_outer_outer < 2; ++k_outer_outer) {
    __syncthreads();
    for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 2; ++ax0_ax1_fused_ax2_fused_outer_outer) {
      if (((ax0_ax1_fused_ax2_fused_outer_outer * 5) + (((int)threadIdx.x) / 10)) < 8) {
        ph_5_shared[((ax0_ax1_fused_ax2_fused_outer_outer * 50) + ((int)threadIdx.x))] = ph_5[((((ax0_ax1_fused_ax2_fused_outer_outer * 100) + ((((int)threadIdx.x) / 10) * 20)) + (k_outer_outer * 10)) + (((int)threadIdx.x) % 10))];
      }
    }
    __syncthreads();
    for (int b_c_outer_inner = 0; b_c_outer_inner < 2; ++b_c_outer_inner) {
      for (int k_inner = 0; k_inner < 2; ++k_inner) {
        for (int b_c_inner = 0; b_c_inner < 2; ++b_c_inner) {
          T_batch_matmul_NN_local[((b_c_outer_inner * 2) + b_c_inner)] = (T_batch_matmul_NN_local[((b_c_outer_inner * 2) + b_c_inner)] + (ph_0[(((((((((int)threadIdx.x) / 25) * 80) + (b_c_outer_inner * 40)) + (b_c_inner * 20)) + (((((int)threadIdx.x) % 25) / 5) * 4)) + (k_outer_outer * 2)) + k_inner)] * ph_5_shared[((((((((int)threadIdx.x) / 25) * 40) + (b_c_outer_inner * 20)) + (b_c_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        }
      }
    }
  }
  for (int b_inner = 0; b_inner < 4; ++b_inner) {
    T_batch_matmul_NN[((((((int)threadIdx.x) / 25) * 100) + (b_inner * 25)) + (((int)threadIdx.x) % 25))] = T_batch_matmul_NN_local[b_inner];
  }
}

