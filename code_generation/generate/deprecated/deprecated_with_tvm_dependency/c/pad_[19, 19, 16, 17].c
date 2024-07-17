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
  int32_t PadInput_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* PadInput = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* PadInput_1 = (((DLTensor*)PadInput)[0].data);
  void* default_function_PadInput_shape = (((DLTensor*)PadInput)[0].shape);
  void* default_function_PadInput_strides = (((DLTensor*)PadInput)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_PadInput_strides == NULL)) {
  }
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      ((float*)PadInput_1)[((i0 * 20) + i1)] = (((((1 <= i0) && (i0 < 17)) && (2 <= i1)) && (i1 < 19)) ? ((float*)data_1)[(((i0 * 17) + i1) - 19)] : 0.000000e+00f);
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
