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
  int32_t DilatedInput_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* DilatedInput = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* DilatedInput_1 = (((DLTensor*)DilatedInput)[0].data);
  void* default_function_DilatedInput_shape = (((DLTensor*)DilatedInput)[0].shape);
  void* default_function_DilatedInput_strides = (((DLTensor*)DilatedInput)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_DilatedInput_strides == NULL)) {
  }
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      for (int32_t i2 = 0; i2 < 16; ++i2) {
        int32_t cse_var_1 = (((i0 * 1088) + (i1 * 64)) + (i2 * 4));
        int32_t4 v_ = int32_t4((cse_var_1)+(1*0), (cse_var_1)+(1*1), (cse_var_1)+(1*2), (cse_var_1)+(1*3));
        *(float4*)(((float*)DilatedInput_1) + cse_var_1) = (float4(((float*)data_1)[v_.s0],((float*)data_1)[v_.s1],((float*)data_1)[v_.s2],((float*)data_1)[v_.s3]));
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
