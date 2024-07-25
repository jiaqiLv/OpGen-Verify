#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

void default_function_kernel(float* T_softmax_maxelem, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        for (int32_t k = 0; k < 3; ++k) {
          T_softmax_maxelem[((((i0 * 36) + (i1 * 3)) + i2) + k)] = -3.402823e+38f;
        }
        for (int32_t k = 0; k < 3; ++k) {
          T_softmax_maxelem[((((i0 * 36) + (i1 * 3)) + i2) + k)] = fmaxf(T_softmax_maxelem[((((i0 * 36) + (i1 * 3)) + i2) + k)], data[((((i0 * 42) + (i1 * 3)) + i2) + k)]);
        }
      }
    }
  }
}
void bridge_call(void** void_args) {
    void* arg_0 = void_args[0];
    void* arg_1 = void_args[1];
    default_function_kernel(arg_0, arg_1);
}
