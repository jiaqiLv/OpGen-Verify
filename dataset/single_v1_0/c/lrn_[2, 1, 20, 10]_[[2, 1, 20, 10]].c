void default_function_kernel(float* T_divide, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 2; ++ax0) {
    float tensor[1];
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        tensor[0] = 0.000000e+00f;
        tensor[0] = (tensor[0] + (data[(((ax0 * 200) + (ax2 * 10)) + ax3)] * data[(((ax0 * 200) + (ax2 * 10)) + ax3)]));
        T_divide[(((ax0 * 200) + (ax2 * 10)) + ax3)] = (data[(((ax0 * 200) + (ax2 * 10)) + ax3)] / powf((2.000000e+00f + (1.000000e-04f * tensor[0])), 7.500000e-01f));
      }
    }
  }
}
