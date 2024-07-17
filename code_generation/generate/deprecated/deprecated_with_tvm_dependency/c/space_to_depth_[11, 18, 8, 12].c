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
  int32_t space_to_depth_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* space_to_depth = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* space_to_depth_1 = (((DLTensor*)space_to_depth)[0].data);
  void* default_function_space_to_depth_shape = (((DLTensor*)space_to_depth)[0].shape);
  void* default_function_space_to_depth_strides = (((DLTensor*)space_to_depth)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_space_to_depth_strides == NULL)) {
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 792; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      int32_t cse_var_1 = (i0_i1_fused % 72);
      int32_t12 v_ = int32_t12((((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*0), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*1), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*2), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*3), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*4), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*5), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*6), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*7), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*8), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*9), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*10), (((((((i0_i1_fused / 72) * 6912) + ((cse_var_1 % 18) * 384)) + (i2 * 48)) + ((cse_var_1 / 36) * 24)) + ((cse_var_1 % 36) / 18)))+(2*11));
      *(float12*)(((float*)space_to_depth_1) + ((i0_i1_fused * 96) + (i2 * 12))) = (float12(((float*)data_1)[v_.s0],((float*)data_1)[v_.s1],((float*)data_1)[v_.s2],((float*)data_1)[v_.s3],((float*)data_1)[v_.s4],((float*)data_1)[v_.s5],((float*)data_1)[v_.s6],((float*)data_1)[v_.s7],((float*)data_1)[v_.s8],((float*)data_1)[v_.s9],((float*)data_1)[v_.sa],((float*)data_1)[v_.sb]));
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
