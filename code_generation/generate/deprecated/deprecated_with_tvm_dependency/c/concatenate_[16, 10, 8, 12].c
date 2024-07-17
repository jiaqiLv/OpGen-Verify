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
  int32_t data_a_code = arg_type_ids[0];
  int32_t data_b_code = arg_type_ids[1];
  int32_t T_concat_code = arg_type_ids[2];
  void* data_a = (((TVMValue*)args)[0].v_handle);
  void* data_b = (((TVMValue*)args)[1].v_handle);
  void* T_concat = (((TVMValue*)args)[2].v_handle);
  void* data_a_1 = (((DLTensor*)data_a)[0].data);
  void* default_function_data_a_shape = (((DLTensor*)data_a)[0].shape);
  void* default_function_data_a_strides = (((DLTensor*)data_a)[0].strides);
  int32_t dev_id = (((DLTensor*)data_a)[0].device.device_id);
  void* data_b_1 = (((DLTensor*)data_b)[0].data);
  void* default_function_data_b_shape = (((DLTensor*)data_b)[0].shape);
  void* default_function_data_b_strides = (((DLTensor*)data_b)[0].strides);
  void* T_concat_1 = (((DLTensor*)T_concat)[0].data);
  void* default_function_T_concat_shape = (((DLTensor*)T_concat)[0].shape);
  void* default_function_T_concat_strides = (((DLTensor*)T_concat)[0].strides);
  if (!(default_function_data_a_strides == NULL)) {
  }
  if (!(default_function_data_b_strides == NULL)) {
  }
  if (!(default_function_T_concat_strides == NULL)) {
  }
  for (int32_t ax0 = 0; ax0 < 32; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
        int32_t cse_var_1 = (((ax0 * 80) + (ax1 * 8)) + ax2);
        ((float*)T_concat_1)[cse_var_1] = ((16 <= ax0) ? ((float*)data_b_1)[(cse_var_1 - 1280)] : ((float*)data_a_1)[cse_var_1]);
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
