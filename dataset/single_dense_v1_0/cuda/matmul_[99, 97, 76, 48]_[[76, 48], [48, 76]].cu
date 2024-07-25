extern "C" __global__ void __launch_bounds__(361) default_function_kernel(float* __restrict__ T_matmul, float* __restrict__ left_matrix, float* __restrict__ right_matrix) {
  float T_matmul_local[1];
  __shared__ float left_matrix_shared[152];
  __shared__ float right_matrix_shared[152];
  T_matmul_local[0] = 0.000000e+00f;
  for (int k_outer_outer = 0; k_outer_outer < 6; ++k_outer_outer) {
    __syncthreads();
    if (((int)threadIdx.x) < 76) {
      *(float2*)(left_matrix_shared + (((int)threadIdx.x) * 2)) = *(float2*)(left_matrix + (((((((int)blockIdx.x) >> 2) * 912) + ((((int)threadIdx.x) >> 2) * 48)) + (k_outer_outer * 8)) + ((((int)threadIdx.x) & 3) * 2)));
    }
    if (((int)threadIdx.x) < 76) {
      int2 __1;
        int2 __2;
          int2 __3;
            int2 v_ = make_int2((k_outer_outer * 608), (k_outer_outer * 608));
            int2 __4;
              int2 __5;
                int2 v__1 = make_int2(((((int)threadIdx.x) * 2))+(1*0), ((((int)threadIdx.x) * 2))+(1*1));
                int2 v__2 = make_int2(19, 19);
                __5.x = (v__1.x/v__2.x);
                __5.y = (v__1.y/v__2.y);
              int2 v__3 = make_int2(76, 76);
              __4.x = (__5.x*v__3.x);
              __4.y = (__5.y*v__3.y);
            __3.x = (v_.x+__4.x);
            __3.y = (v_.y+__4.y);
          int2 v__4 = make_int2(((((int)blockIdx.x) & 3) * 19), ((((int)blockIdx.x) & 3) * 19));
          __2.x = (__3.x+v__4.x);
          __2.y = (__3.y+v__4.y);
        int2 __6;
          int2 v__5 = make_int2(((((int)threadIdx.x) * 2))+(1*0), ((((int)threadIdx.x) * 2))+(1*1));
          int2 v__6 = make_int2(19, 19);
          __6.x = (v__5.x%v__6.x);
          __6.y = (v__5.y%v__6.y);
        __1.x = (__2.x+__6.x);
        __1.y = (__2.y+__6.y);
      *(float2*)(right_matrix_shared + (((int)threadIdx.x) * 2)) = make_float2(right_matrix[__1.x],right_matrix[__1.y]);
    }
    __syncthreads();
    for (int k_outer_inner = 0; k_outer_inner < 4; ++k_outer_inner) {
      for (int k_inner = 0; k_inner < 2; ++k_inner) {
        T_matmul_local[0] = (T_matmul_local[0] + (left_matrix_shared[((((((int)threadIdx.x) / 19) * 8) + (k_outer_inner * 2)) + k_inner)] * right_matrix_shared[(((k_outer_inner * 38) + (k_inner * 19)) + (((int)threadIdx.x) % 19))]));
      }
    }
  }
  T_matmul[(((((((int)blockIdx.x) >> 2) * 1444) + ((((int)threadIdx.x) / 19) * 76)) + ((((int)blockIdx.x) & 3) * 19)) + (((int)threadIdx.x) % 19))] = T_matmul_local[0];
}

