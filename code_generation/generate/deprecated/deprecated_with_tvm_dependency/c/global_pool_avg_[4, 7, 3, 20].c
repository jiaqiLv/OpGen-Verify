// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t adaptive_pool_avg_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* adaptive_pool_avg = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* adaptive_pool_avg_1 = (((DLTensor*)adaptive_pool_avg)[0].data);
  void* default_function_adaptive_pool_avg_shape = (((DLTensor*)adaptive_pool_avg)[0].shape);
  void* default_function_adaptive_pool_avg_strides = (((DLTensor*)adaptive_pool_avg)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_adaptive_pool_avg_strides == NULL)) {
  }
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    float adaptive_pool_sum[1];
    for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
      int32_t cse_var_1 = ((ax0 * 420) + (ax1 * 60));
      adaptive_pool_sum[0] = 0.000000e+00f;
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[cse_var_1]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 1)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 2)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 3)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 4)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 5)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 6)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 7)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 8)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 9)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 10)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 11)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 12)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 13)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 14)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 15)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 16)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 17)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 18)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 19)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 20)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 21)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 22)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 23)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 24)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 25)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 26)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 27)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 28)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 29)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 30)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 31)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 32)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 33)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 34)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 35)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 36)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 37)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 38)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 39)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 40)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 41)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 42)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 43)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 44)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 45)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 46)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 47)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 48)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 49)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 50)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 51)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 52)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 53)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 54)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 55)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 56)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 57)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 58)]);
      adaptive_pool_sum[0] = (adaptive_pool_sum[0] + ((float*)data_1)[(cse_var_1 + 59)]);
      ((float*)adaptive_pool_avg_1)[((ax0 * 7) + ax1)] = (adaptive_pool_sum[0] * 1.666667e-02f);
    }
  }
  return 0;
}

// CodegenC: NOTE: Auto-generated entry function
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_main__(void* args, int* arg_type_ids, int num_args, void* out_ret_value, int* out_ret_tcode, void* resource_handle) {
  return default_function(args, arg_type_ids, num_args, out_ret_value, out_ret_tcode, resource_handle);
}
