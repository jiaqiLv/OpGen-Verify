extern "C" __global__ void default_function_kernel(float* __restrict__ conv1d_ncw, float* __restrict__ data, float* __restrict__ kernel) {
  float conv1d_ncw_local[2];
  __shared__ float pad_temp_shared[6];
  __shared__ float kernel_shared[3];
  conv1d_ncw_local[0] = 0.000000e+00f;
  conv1d_ncw_local[1] = 0.000000e+00f;
  for (int ry_outer_outer = 0; ry_outer_outer < 3; ++ry_outer_outer) {
    __syncthreads();
    for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 6; ++ax0_ax1_fused_ax2_fused_outer_outer) {
      pad_temp_shared[ax0_ax1_fused_ax2_fused_outer_outer] = data[(((ax0_ax1_fused_ax2_fused_outer_outer * 10) + ((((int)blockIdx.x) & 3) * 2)) + ry_outer_outer)];
    }
    int3 v_ = make_int3(((((((int)blockIdx.x) >> 2) * 9) + ry_outer_outer))+(3*0), ((((((int)blockIdx.x) >> 2) * 9) + ry_outer_outer))+(3*1), ((((((int)blockIdx.x) >> 2) * 9) + ry_outer_outer))+(3*2));
    *(float3*)(kernel_shared + 0) = make_float3(kernel[v_.x],kernel[v_.y],kernel[v_.z]);
    __syncthreads();
    for (int rc_inner = 0; rc_inner < 3; ++rc_inner) {
      conv1d_ncw_local[0] = (conv1d_ncw_local[0] + (pad_temp_shared[rc_inner] * kernel_shared[rc_inner]));
      conv1d_ncw_local[1] = (conv1d_ncw_local[1] + (pad_temp_shared[(rc_inner + 3)] * kernel_shared[rc_inner]));
    }
  }
  conv1d_ncw[((int)blockIdx.x)] = conv1d_ncw_local[0];
  conv1d_ncw[(((int)blockIdx.x) + 20)] = conv1d_ncw_local[1];
}

