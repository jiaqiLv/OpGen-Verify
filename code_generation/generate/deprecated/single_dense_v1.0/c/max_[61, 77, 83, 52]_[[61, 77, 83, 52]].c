void default_function_kernel(float* data, float* data_red) {
  float data_red_rf[332332];
  #pragma omp parallel for
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 332332; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer] = -3.402823e+38f;
    for (int32_t k0_k1_fused_k2_fused_k3_fused_inner = 0; k0_k1_fused_k2_fused_k3_fused_inner < 61; ++k0_k1_fused_k2_fused_k3_fused_inner) {
      data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer] = max(data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer], data[((k0_k1_fused_k2_fused_k3_fused_outer * 61) + k0_k1_fused_k2_fused_k3_fused_inner)]);
    }
  }
  data_red[0] = -3.402823e+38f;
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer_v = 0; k0_k1_fused_k2_fused_k3_fused_outer_v < 332332; ++k0_k1_fused_k2_fused_k3_fused_outer_v) {
    data_red[0] = max(data_red[0], data_red_rf[k0_k1_fused_k2_fused_k3_fused_outer_v]);
  }
}

