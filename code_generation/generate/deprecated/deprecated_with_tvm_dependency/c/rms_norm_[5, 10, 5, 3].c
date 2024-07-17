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
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t weight_code = arg_type_ids[1];
  int32_t T_cast_code = arg_type_ids[2];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* weight = (((TVMValue*)args)[1].v_handle);
  void* T_cast = (((TVMValue*)args)[2].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* weight_1 = (((DLTensor*)weight)[0].data);
  void* default_function_weight_shape = (((DLTensor*)weight)[0].shape);
  void* default_function_weight_strides = (((DLTensor*)weight)[0].strides);
  void* T_cast_1 = (((DLTensor*)T_cast)[0].data);
  void* default_function_T_cast_shape = (((DLTensor*)T_cast)[0].shape);
  void* default_function_T_cast_strides = (((DLTensor*)T_cast)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_weight_strides == NULL)) {
  }
  if (!(default_function_T_cast_strides == NULL)) {
  }
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    float T_multiply_red[3];
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
          T_multiply_red[ax2_1] = 0.000000e+00f;
          for (int32_t k1 = 0; k1 < 10; ++k1) {
            int32_t cse_var_1 = ((((ax0 * 150) + (k1 * 15)) + (ax2 * 3)) + ax2_1);
            T_multiply_red[ax2_1] = (T_multiply_red[ax2_1] + (((float*)data_1)[cse_var_1] * ((float*)data_1)[cse_var_1]));
          }
        }
        for (int32_t ax3_s = 0; ax3_s < 3; ++ax3_s) {
          int32_t cse_var_2 = ((((ax0 * 150) + (ax1 * 15)) + (ax2 * 3)) + ax3_s);
          ((float*)T_cast_1)[cse_var_2] = ((((float*)data_1)[cse_var_2] * ((float*)weight_1)[ax1]) * (1.000000e+00f / sqrtf(((T_multiply_red[ax3_s] * 1.000000e-01f) + 1.000000e-05f))));
        }
      }
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
