void default_function_kernel(float* T_softmax_norm, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    float T_softmax_maxelem[162];
    float T_softmax_expsum[162];
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        T_softmax_maxelem[((i1 * 18) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 12; ++k) {
          T_softmax_maxelem[((i1 * 18) + i2)] = max(T_softmax_maxelem[((i1 * 18) + i2)], data[((((i0 * 1944) + (i1 * 216)) + (i2 * 12)) + k)]);
        }
      }
    }
    for (int32_t i1_1 = 0; i1_1 < 9; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
        T_softmax_expsum[((i1_1 * 18) + i2_1)] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 12; ++k_1) {
            int32_t v_ = ((int32_t)(floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
          T_softmax_expsum[((i1_1 * 18) + i2_1)] = (T_softmax_expsum[((i1_1 * 18) + i2_1)] + max(((*(float *)(&(v_))) * ((((((((((((((1.987569e-04f * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f)), (data[((((i0 * 1944) + (i1_1 * 216)) + (i2_1 * 12)) + k_1)] - T_softmax_maxelem[((i1_1 * 18) + i2_1)])));
        }
      }
    }
    for (int32_t i1_2 = 0; i1_2 < 9; ++i1_2) {
      for (int32_t i2_2 = 0; i2_2 < 18; ++i2_2) {
        for (int32_t i3_s = 0; i3_s < 12; ++i3_s) {
            int32_t v__1 = ((int32_t)(floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
          T_softmax_norm[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] = (max(((*(float *)(&(v__1))) * ((((((((((((((1.987569e-04f * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) - (floorf(((max(min((data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)]), 8.837627e+01f), -8.837626e+01f) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f)), (data[((((i0 * 1944) + (i1_2 * 216)) + (i2_2 * 12)) + i3_s)] - T_softmax_maxelem[((i1_2 * 18) + i2_2)])) / T_softmax_expsum[((i1_2 * 18) + i2_2)]);
        }
      }
    }
  }
}

