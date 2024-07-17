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
  int32_t T_shape_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_shape = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_shape_1 = (((DLTensor*)T_shape)[0].data);
  void* default_function_T_shape_shape = (((DLTensor*)T_shape)[0].shape);
  void* default_function_T_shape_strides = (((DLTensor*)T_shape)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_shape_strides == NULL)) {
  }
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    ((int32_t*)T_shape_1)[ax0] = ((ax0 == 3) ? 1 : ((ax0 == 2) ? 2 : ((ax0 == 1) ? 15 : 16)));
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
