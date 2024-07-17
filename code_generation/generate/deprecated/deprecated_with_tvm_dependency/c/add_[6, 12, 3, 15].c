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
  int32_t data_code_1 = arg_type_ids[1];
  int32_t T_add_code = arg_type_ids[2];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* data_1 = (((TVMValue*)args)[1].v_handle);
  void* T_add = (((TVMValue*)args)[2].v_handle);
  void* data_2 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* data_3 = (((DLTensor*)data_1)[0].data);
  void* default_function_data_shape_1 = (((DLTensor*)data_1)[0].shape);
  void* default_function_data_strides_1 = (((DLTensor*)data_1)[0].strides);
  void* T_add_1 = (((DLTensor*)T_add)[0].data);
  void* default_function_T_add_shape = (((DLTensor*)T_add)[0].shape);
  void* default_function_T_add_strides = (((DLTensor*)T_add)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_data_strides_1 == NULL)) {
  }
  if (!(default_function_T_add_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 3240; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((float*)T_add_1)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((float*)data_2)[ax0_ax1_fused_ax2_fused_ax3_fused] + ((float*)data_3)[ax0_ax1_fused_ax2_fused_ax3_fused]);
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
