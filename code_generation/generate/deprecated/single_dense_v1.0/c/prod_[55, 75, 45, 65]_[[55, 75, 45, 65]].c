void default_function_kernel(float* data, float* data_red) {
  float data_red_rf[482625];
  #pragma omp parallel for
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 482625; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer] = 1.000000e+00f;
    for (int32_t k0_k1_fused_k2_fused_k3_fused_inner = 0; k0_k1_fused_k2_fused_k3_fused_inner < 25; ++k0_k1_fused_k2_fused_k3_fused_inner) {
      data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer] = (data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer] * data[((k0_k1_fused_k2_fused_k3_fused_outer * 25) + k0_k1_fused_k2_fused_k3_fused_inner)]);
    }
  }
  data_red[0] = 1.000000e+00f;
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer_v = 0; k0_k1_fused_k2_fused_k3_fused_outer_v < 482625; ++k0_k1_fused_k2_fused_k3_fused_outer_v) {
    data_red[0] = (data_red[0] * data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer_v]);
  }
}

