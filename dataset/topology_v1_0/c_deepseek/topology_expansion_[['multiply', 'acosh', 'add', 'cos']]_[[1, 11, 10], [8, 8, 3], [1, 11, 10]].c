void default_function_kernel(float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      T_multiply[((ax1 * 10) + ax2)] = (ph_0[((ax1 * 10) + ax2)] * ph_3[((ax1 * 10) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 11; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      compute[((i0_i1_fused * 10) + i2)] = cosf((ph_0[((i0_i1_fused * 10) + i2)] + acoshf(ph_0[((i0_i1_fused * 10) + i2)])));
    }
  }
}
