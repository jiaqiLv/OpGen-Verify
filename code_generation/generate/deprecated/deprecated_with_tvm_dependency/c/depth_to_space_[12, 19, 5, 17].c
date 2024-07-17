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
  int32_t depth_to_space_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* depth_to_space = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* depth_to_space_1 = (((DLTensor*)depth_to_space)[0].data);
  void* default_function_depth_to_space_shape = (((DLTensor*)depth_to_space)[0].shape);
  void* default_function_depth_to_space_strides = (((DLTensor*)depth_to_space)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_depth_to_space_strides == NULL)) {
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 48; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 34; ++i3) {
        ((float*)depth_to_space_1)[(((i0_i1_fused * 340) + (i2 * 34)) + i3)] = ((float*)data_1)[(((((((i0_i1_fused >> 2) * 1615) + ((i2 % 2) * 680)) + ((i3 % 2) * 340)) + ((i0_i1_fused & 3) * 85)) + ((i2 / 2) * 17)) + (i3 / 2))];
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
