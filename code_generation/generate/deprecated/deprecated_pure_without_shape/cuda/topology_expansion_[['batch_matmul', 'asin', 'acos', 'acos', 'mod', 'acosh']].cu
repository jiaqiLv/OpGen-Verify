extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ T_mod, float* __restrict__ ph_0) {
  T_mod[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = fmodf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = asinf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(180) default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  float T_batch_matmul_NN[2];
  __shared__ float ph_3_shared[180];
  for (int i_inner_init = 0; i_inner_init < 2; ++i_inner_init) {
    T_batch_matmul_NN[i_inner_init] = 0.000000e+00f;
  }
  for (int k_outer_outer = 0; k_outer_outer < 2; ++k_outer_outer) {
    __syncthreads();
    ph_3_shared[((int)threadIdx.x)] = ph_3[((((((int)threadIdx.x) / 20) * 40) + (k_outer_outer * 20)) + (((int)threadIdx.x) % 20))];
    __syncthreads();
    for (int k_outer_inner = 0; k_outer_inner < 2; ++k_outer_inner) {
      for (int k_inner = 0; k_inner < 2; ++k_inner) {
        for (int i_inner = 0; i_inner < 2; ++i_inner) {
          T_batch_matmul_NN[i_inner] = (T_batch_matmul_NN[i_inner] + (ph_0[((((((((int)threadIdx.x) / 5) * 16) + (i_inner * 8)) + (k_outer_outer * 4)) + (k_outer_inner * 2)) + k_inner)] * ph_3_shared[(((((((int)threadIdx.x) / 20) * 20) + (k_outer_inner * 10)) + (k_inner * 5)) + (((int)threadIdx.x) % 5))]));
        }
      }
    }
  }
  for (int i1_inner = 0; i1_inner < 2; ++i1_inner) {
    compute[((((((int)threadIdx.x) / 5) * 10) + (i1_inner * 5)) + (((int)threadIdx.x) % 5))] = acoshf(T_batch_matmul_NN[i1_inner]);
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

