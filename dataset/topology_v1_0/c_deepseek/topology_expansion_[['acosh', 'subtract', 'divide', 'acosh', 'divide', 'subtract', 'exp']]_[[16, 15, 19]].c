void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4560; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] - acoshf(ph_0[ax0_ax1_fused_ax2_fused])) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 240; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      T_subtract[((ax0_ax1_fused * 19) + ax2)] = ((ph_0[((ax0_ax1_fused * 19) + ax2)] / acoshf(ph_0[((ax0_ax1_fused * 19) + ax2)])) - ph_0[((ax0_ax1_fused * 19) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 240; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute[((i0_i1_fused * 19) + i2)] = expf((ph_0[((i0_i1_fused * 19) + i2)] / acoshf(ph_0[((i0_i1_fused * 19) + i2)])));
    }
  }
}

