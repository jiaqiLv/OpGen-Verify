extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (__cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]) + ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + __cosf(__sinf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_3(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_8) {
  float T_batch_matmul_NN_local[1];
  __shared__ float ph_8_shared[40];
  T_batch_matmul_NN_local[0] = 0.000000e+00f;
  if (((int)threadIdx.x) < 40) {
    ph_8_shared[((int)threadIdx.x)] = ph_8[((int)threadIdx.x)];
  }
  __syncthreads();
  for (int k_inner = 0; k_inner < 5; ++k_inner) {
    T_batch_matmul_NN_local[0] = (T_batch_matmul_NN_local[0] + (__cosf(ph_0[((((int)threadIdx.x) * 5) + k_inner)]) * ph_8_shared[(((((int)threadIdx.x) >> 3) * 5) + k_inner)]));
  }
  T_batch_matmul_NN[((int)threadIdx.x)] = T_batch_matmul_NN_local[0];
}

