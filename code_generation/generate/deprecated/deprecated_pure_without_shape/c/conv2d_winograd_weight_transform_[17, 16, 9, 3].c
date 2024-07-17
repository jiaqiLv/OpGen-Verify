void default_function_kernel(float* data, float* transform_weight) {
  #pragma omp parallel for
  for (int32_t eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused = 0; eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused < 272; ++eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused) {
    for (int32_t nu_outer_inner_init = 0; nu_outer_inner_init < 7; ++nu_outer_inner_init) {
      for (int32_t eps_inner_init = 0; eps_inner_init < 7; ++eps_inner_init) {
        transform_weight[(((eps_inner_init * 1904) + (nu_outer_inner_init * 272)) + eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused)] = 0.000000e+00f;
      }
    }
    for (int32_t r_kh_outer = 0; r_kh_outer < 2; ++r_kh_outer) {
      for (int32_t r_kw_outer = 0; r_kw_outer < 6; ++r_kw_outer) {
        for (int32_t nu_outer_inner = 0; nu_outer_inner < 7; ++nu_outer_inner) {
          for (int32_t r_kh_inner = 0; r_kh_inner < 3; ++r_kh_inner) {
            for (int32_t eps_inner = 0; eps_inner < 7; ++eps_inner) {
              int cse_var_27 = (nu_outer_inner == 0);
              int cse_var_26 = (nu_outer_inner == 1);
              int cse_var_25 = (nu_outer_inner == 2);
              int cse_var_24 = (nu_outer_inner == 3);
              int cse_var_23 = (nu_outer_inner == 4);
              int cse_var_22 = (nu_outer_inner == 5);
              int cse_var_21 = (r_kw_outer == 0);
              int cse_var_20 = (r_kw_outer == 1);
              int cse_var_19 = (r_kw_outer == 2);
              int cse_var_18 = (r_kw_outer == 3);
              int cse_var_17 = (r_kw_outer == 4);
              int cse_var_16 = (r_kw_outer == 5);
              int cse_var_15 = (nu_outer_inner == 6);
              int cse_var_14 = (eps_inner == 0);
              int cse_var_13 = (eps_inner == 1);
              int cse_var_12 = (eps_inner == 2);
              int cse_var_11 = (eps_inner == 3);
              int cse_var_10 = (eps_inner == 4);
              int cse_var_9 = (eps_inner == 5);
              int cse_var_8 = (eps_inner == 6);
              int cse_var_7 = (((r_kh_outer * 3) + r_kh_inner) == 0);
              int cse_var_6 = (((r_kh_outer * 3) + r_kh_inner) == 1);
              int cse_var_5 = (((r_kh_outer * 3) + r_kh_inner) == 2);
              int cse_var_4 = (((r_kh_outer * 3) + r_kh_inner) == 3);
              int cse_var_3 = (((r_kh_outer * 3) + r_kh_inner) == 4);
              int cse_var_2 = (((r_kh_outer * 3) + r_kh_inner) == 5);
              transform_weight[(((eps_inner * 1904) + (nu_outer_inner * 272)) + eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused)] = (transform_weight[(((eps_inner * 1904) + (nu_outer_inner * 272)) + eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused)] + ((data[((((eps_outer_outer_outer_nu_outer_outer_outer_fused_co_outer_outer_outer_fused_ci_outer_outer_outer_fused_eps_outer_outer_inner_fused_nu_outer_outer_inner_fused_co_outer_outer_inner_fused_ci_outer_outer_inner_fused * 36) + (r_kh_outer * 18)) + (r_kh_inner * 6)) + r_kw_outer)] * ((cse_var_8 && cse_var_2) ? 1.000000e+00f : ((cse_var_8 && cse_var_3) ? 0.000000e+00f : ((cse_var_8 && cse_var_4) ? 0.000000e+00f : ((cse_var_8 && cse_var_5) ? 0.000000e+00f : ((cse_var_8 && cse_var_6) ? 0.000000e+00f : ((cse_var_8 && cse_var_7) ? 0.000000e+00f : ((cse_var_9 && cse_var_2) ? 5.555556e-02f : ((cse_var_9 && cse_var_3) ? -1.111111e-01f : ((cse_var_9 && cse_var_4) ? 2.222222e-01f : ((cse_var_9 && cse_var_5) ? -4.444444e-01f : ((cse_var_9 && cse_var_6) ? 8.888889e-01f : ((cse_var_9 && cse_var_7) ? -1.777778e+00f : ((cse_var_10 && cse_var_2) ? 1.422222e+00f : ((cse_var_10 && cse_var_3) ? -7.111111e-01f : ((cse_var_10 && cse_var_4) ? 3.555556e-01f : ((cse_var_10 && cse_var_5) ? -1.777778e-01f : ((cse_var_10 && cse_var_6) ? 8.888889e-02f : ((cse_var_10 && cse_var_7) ? -4.444445e-02f : ((cse_var_11 && cse_var_2) ? -3.333334e-02f : ((cse_var_11 && cse_var_3) ? -6.666667e-02f : ((cse_var_11 && cse_var_4) ? -1.333333e-01f : ((cse_var_11 && cse_var_5) ? -2.666667e-01f : ((cse_var_11 && cse_var_6) ? -5.333334e-01f : ((cse_var_11 && cse_var_7) ? -1.066667e+00f : ((cse_var_12 && cse_var_2) ? 2.222222e-01f : ((cse_var_12 && cse_var_3) ? 2.222222e-01f : ((cse_var_12 && cse_var_4) ? 2.222222e-01f : ((cse_var_12 && cse_var_5) ? 2.222222e-01f : ((cse_var_12 && cse_var_6) ? 2.222222e-01f : ((cse_var_12 && cse_var_7) ? 2.222222e-01f : ((cse_var_13 && cse_var_2) ? -6.666667e-01f : ((cse_var_13 && cse_var_3) ? 6.666667e-01f : ((cse_var_13 && cse_var_4) ? -6.666667e-01f : ((cse_var_13 && cse_var_5) ? 6.666667e-01f : ((cse_var_13 && cse_var_6) ? -6.666667e-01f : ((cse_var_13 && cse_var_7) ? 6.666667e-01f : ((cse_var_14 && cse_var_2) ? 0.000000e+00f : ((cse_var_14 && cse_var_3) ? 0.000000e+00f : ((cse_var_14 && cse_var_4) ? 0.000000e+00f : ((cse_var_14 && cse_var_5) ? 0.000000e+00f : ((cse_var_14 && cse_var_6) ? 0.000000e+00f : ((cse_var_14 && cse_var_7) ? 2.000000e+00f : 0.000000e+00f))))))))))))))))))))))))))))))))))))))))))) * ((cse_var_15 && cse_var_16) ? 1.000000e+00f : ((cse_var_15 && cse_var_17) ? 0.000000e+00f : ((cse_var_15 && cse_var_18) ? 0.000000e+00f : ((cse_var_15 && cse_var_19) ? 0.000000e+00f : ((cse_var_15 && cse_var_20) ? 0.000000e+00f : ((cse_var_15 && cse_var_21) ? 0.000000e+00f : ((cse_var_22 && cse_var_16) ? 5.555556e-02f : ((cse_var_22 && cse_var_17) ? -1.111111e-01f : ((cse_var_22 && cse_var_18) ? 2.222222e-01f : ((cse_var_22 && cse_var_19) ? -4.444444e-01f : ((cse_var_22 && cse_var_20) ? 8.888889e-01f : ((cse_var_22 && cse_var_21) ? -1.777778e+00f : ((cse_var_23 && cse_var_16) ? 1.422222e+00f : ((cse_var_23 && cse_var_17) ? -7.111111e-01f : ((cse_var_23 && cse_var_18) ? 3.555556e-01f : ((cse_var_23 && cse_var_19) ? -1.777778e-01f : ((cse_var_23 && cse_var_20) ? 8.888889e-02f : ((cse_var_23 && cse_var_21) ? -4.444445e-02f : ((cse_var_24 && cse_var_16) ? -3.333334e-02f : ((cse_var_24 && cse_var_17) ? -6.666667e-02f : ((cse_var_24 && cse_var_18) ? -1.333333e-01f : ((cse_var_24 && cse_var_19) ? -2.666667e-01f : ((cse_var_24 && cse_var_20) ? -5.333334e-01f : ((cse_var_24 && cse_var_21) ? -1.066667e+00f : ((cse_var_25 && cse_var_16) ? 2.222222e-01f : ((cse_var_25 && cse_var_17) ? 2.222222e-01f : ((cse_var_25 && cse_var_18) ? 2.222222e-01f : ((cse_var_25 && cse_var_19) ? 2.222222e-01f : ((cse_var_25 && cse_var_20) ? 2.222222e-01f : ((cse_var_25 && cse_var_21) ? 2.222222e-01f : ((cse_var_26 && cse_var_16) ? -6.666667e-01f : ((cse_var_26 && cse_var_17) ? 6.666667e-01f : ((cse_var_26 && cse_var_18) ? -6.666667e-01f : ((cse_var_26 && cse_var_19) ? 6.666667e-01f : ((cse_var_26 && cse_var_20) ? -6.666667e-01f : ((cse_var_26 && cse_var_21) ? 6.666667e-01f : ((cse_var_27 && cse_var_16) ? 0.000000e+00f : ((cse_var_27 && cse_var_17) ? 0.000000e+00f : ((cse_var_27 && cse_var_18) ? 0.000000e+00f : ((cse_var_27 && cse_var_19) ? 0.000000e+00f : ((cse_var_27 && cse_var_20) ? 0.000000e+00f : ((cse_var_27 && cse_var_21) ? 2.000000e+00f : 0.000000e+00f))))))))))))))))))))))))))))))))))))))))))));
            }
          }
        }
      }
    }
  }
}

