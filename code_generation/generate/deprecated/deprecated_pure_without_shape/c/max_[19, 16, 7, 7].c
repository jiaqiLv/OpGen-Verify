void default_function_kernel(float* data, float* data_red) {
  float data_red_rf[56];
  for (int32_t k0_k1_fused_k2_fused_k3_fused_inner_init = 0; k0_k1_fused_k2_fused_k3_fused_inner_init < 56; ++k0_k1_fused_k2_fused_k3_fused_inner_init) {
    data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner_init] = -3.402823e+38f;
  }
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 266; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    for (int32_t k0_k1_fused_k2_fused_k3_fused_inner = 0; k0_k1_fused_k2_fused_k3_fused_inner < 56; ++k0_k1_fused_k2_fused_k3_fused_inner) {
      data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner] = max(data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner], data[((k0_k1_fused_k2_fused_k3_fused_outer * 56) + k0_k1_fused_k2_fused_k3_fused_inner)]);
    }
  }
  data_red[0] = -3.402823e+38f;
  for (int32_t k0_k1_fused_k2_fused_k3_fused_inner_v = 0; k0_k1_fused_k2_fused_k3_fused_inner_v < 56; ++k0_k1_fused_k2_fused_k3_fused_inner_v) {
    data_red[0] = max(data_red[0], data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner_v]);
  }
}

