void default_function_kernel(int32_t* T_shape) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    T_shape[ax0] = ((ax0 == 3) ? 40 : ((ax0 == 2) ? 75 : ((ax0 == 1) ? 87 : 91)));
  }
}

