extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_add, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void default_function_kernel_1(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_5) {
  float T_batch_matmul_NN_local[9];
  __shared__ float ph_5_shared[1];
  for (int i_c_outer_inner_init = 0; i_c_outer_inner_init < 3; ++i_c_outer_inner_init) {
    T_batch_matmul_NN_local[i_c_outer_inner_init] = 0.000000e+00f;
    T_batch_matmul_NN_local[(i_c_outer_inner_init + 3)] = 0.000000e+00f;
    T_batch_matmul_NN_local[(i_c_outer_inner_init + 6)] = 0.000000e+00f;
  }
  for (int k_outer_outer = 0; k_outer_outer < 8; ++k_outer_outer) {
    __syncthreads();
    ph_5_shared[0] = ph_5[((k_outer_outer * 2) + ((int)blockIdx.x))];
    __syncthreads();
    for (int i_c_outer_inner = 0; i_c_outer_inner < 3; ++i_c_outer_inner) {
      T_batch_matmul_NN_local[i_c_outer_inner] = (T_batch_matmul_NN_local[i_c_outer_inner] + (ph_0[((i_c_outer_inner * 8) + k_outer_outer)] * ph_5_shared[0]));
      T_batch_matmul_NN_local[(i_c_outer_inner + 3)] = (T_batch_matmul_NN_local[(i_c_outer_inner + 3)] + (ph_0[(((i_c_outer_inner * 8) + k_outer_outer) + 24)] * ph_5_shared[0]));
      T_batch_matmul_NN_local[(i_c_outer_inner + 6)] = (T_batch_matmul_NN_local[(i_c_outer_inner + 6)] + (ph_0[(((i_c_outer_inner * 8) + k_outer_outer) + 48)] * ph_5_shared[0]));
    }
  }
  for (int i_inner = 0; i_inner < 3; ++i_inner) {
    T_batch_matmul_NN[((i_inner * 2) + ((int)blockIdx.x))] = T_batch_matmul_NN_local[i_inner];
    T_batch_matmul_NN[(((i_inner * 2) + ((int)blockIdx.x)) + 6)] = T_batch_matmul_NN_local[(i_inner + 3)];
    T_batch_matmul_NN[(((i_inner * 2) + ((int)blockIdx.x)) + 12)] = T_batch_matmul_NN_local[(i_inner + 6)];
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = __cosf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
  }
}

