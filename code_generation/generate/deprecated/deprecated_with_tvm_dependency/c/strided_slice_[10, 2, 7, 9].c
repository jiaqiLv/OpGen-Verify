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
  int32_t a_code = arg_type_ids[0];
  int32_t T_strided_slice_code = arg_type_ids[1];
  void* a = (((TVMValue*)args)[0].v_handle);
  void* T_strided_slice = (((TVMValue*)args)[1].v_handle);
  void* a_1 = (((DLTensor*)a)[0].data);
  void* default_function_a_shape = (((DLTensor*)a)[0].shape);
  void* default_function_a_strides = (((DLTensor*)a)[0].strides);
  int32_t dev_id = (((DLTensor*)a)[0].device.device_id);
  void* T_strided_slice_1 = (((DLTensor*)T_strided_slice)[0].data);
  void* default_function_T_strided_slice_shape = (((DLTensor*)T_strided_slice)[0].shape);
  void* default_function_T_strided_slice_strides = (((DLTensor*)T_strided_slice)[0].strides);
  if (!(default_function_a_strides == NULL)) {
  }
  if (!(default_function_T_strided_slice_strides == NULL)) {
  }
  for (int32_t ax1 = 0; ax1 < 5; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      ((float*)T_strided_slice_1)[((ax1 * 6) + ax2)] = ((float*)a_1)[(((ax1 * 9) + ax2) + 84)];
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
