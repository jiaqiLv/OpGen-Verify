void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    float T_softmax_maxelem[16];
    float compute_1[4];
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 4; ++i2) {
        T_softmax_maxelem[((i1 * 4) + i2)] = -3.402823e+38f;
        T_softmax_maxelem[((i1 * 4) + i2)] = max(T_softmax_maxelem[((i1 * 4) + i2)], data[(((i0 * 16) + (i1 * 4)) + i2)]);
      }
    }
    for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
        compute_1[i2_1] = 0.000000e+00f;
        compute_1[i2_1] = (compute_1[i2_1] + expf((data[(((i0 * 16) + (i1_1 * 4)) + i2_1)] - T_softmax_maxelem[((i1_1 * 4) + i2_1)])));
      }
      for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
        compute[(((i0 * 16) + (i1_1 * 4)) + i2_2)] = ((data[(((i0 * 16) + (i1_1 * 4)) + i2_2)] - T_softmax_maxelem[((i1_1 * 4) + i2_2)]) - logf(compute_1[i2_2]));
      }
    }
  }
}

