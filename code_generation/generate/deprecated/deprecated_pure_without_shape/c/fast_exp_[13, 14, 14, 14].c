void default_function_kernel(float* T_fast_exp, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2548; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_s = 0; ax3_s < 14; ++ax3_s) {
        int32_t v_ = ((int32_t)(floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
      T_fast_exp[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)] = max(((*(float *)(&(v_))) * ((((((((((((((1.987569e-04f * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min(data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)], 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f)), data[((ax0_ax1_fused_ax2_fused * 14) + ax3_s)]);
    }
  }
}

