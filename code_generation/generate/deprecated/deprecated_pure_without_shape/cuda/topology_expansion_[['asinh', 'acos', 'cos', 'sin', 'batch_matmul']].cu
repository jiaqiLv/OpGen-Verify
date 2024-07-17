extern "C" __global__ void default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((int)blockIdx.x)] = __cosf(acosf(ph_0[((int)blockIdx.x)]));
}

extern "C" __global__ void __launch_bounds__(10) default_function_kernel_3(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_6) {
  float T_batch_matmul_NN_local[20];
  __shared__ float ph_6_shared[160];
  for (int b_c_inner_init = 0; b_c_inner_init < 2; ++b_c_inner_init) {
    T_batch_matmul_NN_local[b_c_inner_init] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 2)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 4)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 6)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 8)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 10)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 12)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 14)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 16)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(b_c_inner_init + 18)] = 0.000000e+00f;
  }
  for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 16; ++ax0_ax1_fused_ax2_fused_outer_outer) {
    ph_6_shared[((ax0_ax1_fused_ax2_fused_outer_outer * 10) + ((int)threadIdx.x))] = ph_6[((ax0_ax1_fused_ax2_fused_outer_outer * 10) + ((int)threadIdx.x))];
  }
  __syncthreads();
  for (int k_outer_inner = 0; k_outer_inner < 2; ++k_outer_inner) {
    for (int k_inner = 0; k_inner < 2; ++k_inner) {
      for (int b_c_inner = 0; b_c_inner < 2; ++b_c_inner) {
        T_batch_matmul_NN_local[b_c_inner] = (T_batch_matmul_NN_local[b_c_inner] + (ph_0[(((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner)] * ph_6_shared[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        T_batch_matmul_NN_local[(b_c_inner + 2)] = (T_batch_matmul_NN_local[(b_c_inner + 2)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 4)] * ph_6_shared[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        T_batch_matmul_NN_local[(b_c_inner + 4)] = (T_batch_matmul_NN_local[(b_c_inner + 4)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 8)] * ph_6_shared[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        T_batch_matmul_NN_local[(b_c_inner + 6)] = (T_batch_matmul_NN_local[(b_c_inner + 6)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 12)] * ph_6_shared[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        T_batch_matmul_NN_local[(b_c_inner + 8)] = (T_batch_matmul_NN_local[(b_c_inner + 8)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 16)] * ph_6_shared[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        T_batch_matmul_NN_local[(b_c_inner + 10)] = (T_batch_matmul_NN_local[(b_c_inner + 10)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 80)] * ph_6_shared[(((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5)) + 80)]));
        T_batch_matmul_NN_local[(b_c_inner + 12)] = (T_batch_matmul_NN_local[(b_c_inner + 12)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 84)] * ph_6_shared[(((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5)) + 80)]));
        T_batch_matmul_NN_local[(b_c_inner + 14)] = (T_batch_matmul_NN_local[(b_c_inner + 14)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 88)] * ph_6_shared[(((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5)) + 80)]));
        T_batch_matmul_NN_local[(b_c_inner + 16)] = (T_batch_matmul_NN_local[(b_c_inner + 16)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 92)] * ph_6_shared[(((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5)) + 80)]));
        T_batch_matmul_NN_local[(b_c_inner + 18)] = (T_batch_matmul_NN_local[(b_c_inner + 18)] + (ph_0[((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 2)) + k_inner) + 96)] * ph_6_shared[(((((((((int)threadIdx.x) / 5) * 40) + (b_c_inner * 20)) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5)) + 80)]));
      }
    }
  }
  for (int b_inner = 0; b_inner < 2; ++b_inner) {
    T_batch_matmul_NN[((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5))] = T_batch_matmul_NN_local[b_inner];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 5)] = T_batch_matmul_NN_local[(b_inner + 2)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 10)] = T_batch_matmul_NN_local[(b_inner + 4)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 15)] = T_batch_matmul_NN_local[(b_inner + 6)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 20)] = T_batch_matmul_NN_local[(b_inner + 8)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 100)] = T_batch_matmul_NN_local[(b_inner + 10)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 105)] = T_batch_matmul_NN_local[(b_inner + 12)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 110)] = T_batch_matmul_NN_local[(b_inner + 14)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 115)] = T_batch_matmul_NN_local[(b_inner + 16)];
    T_batch_matmul_NN[(((((((int)threadIdx.x) / 5) * 50) + (b_inner * 25)) + (((int)threadIdx.x) % 5)) + 120)] = T_batch_matmul_NN_local[(b_inner + 18)];
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __sinf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

