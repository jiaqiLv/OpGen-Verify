void default_function_kernel(float* compute, float* compute_1, float* data, float* data_1) {
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    for (int32_t i3 = 0; i3 < 15; ++i3) {
      compute[((i1 * 15) + i3)] = sqrtf((data[((i1 * 15) + i3)] + data_1[((i1 * 15) + i3)]));
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    for (int32_t i3_1 = 0; i3_1 < 15; ++i3_1) {
      compute_1[((i1_1 * 15) + i3_1)] = cosf((data[((i1_1 * 15) + i3_1)] + data_1[((i1_1 * 15) + i3_1)]));
    }
  }
}
