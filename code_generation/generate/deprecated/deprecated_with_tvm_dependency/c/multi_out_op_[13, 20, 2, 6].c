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
TVM_DLL float cosf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t data_code_1 = arg_type_ids[1];
  int32_t compute_code = arg_type_ids[2];
  int32_t compute_code_1 = arg_type_ids[3];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* data_1 = (((TVMValue*)args)[1].v_handle);
  void* compute = (((TVMValue*)args)[2].v_handle);
  void* compute_1 = (((TVMValue*)args)[3].v_handle);
  void* data_2 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* data_3 = (((DLTensor*)data_1)[0].data);
  void* default_function_data_shape_1 = (((DLTensor*)data_1)[0].shape);
  void* default_function_data_strides_1 = (((DLTensor*)data_1)[0].strides);
  void* compute_2 = (((DLTensor*)compute)[0].data);
  void* default_function_compute_shape = (((DLTensor*)compute)[0].shape);
  void* default_function_compute_strides = (((DLTensor*)compute)[0].strides);
  void* compute_3 = (((DLTensor*)compute_1)[0].data);
  void* default_function_compute_shape_1 = (((DLTensor*)compute_1)[0].shape);
  void* default_function_compute_strides_1 = (((DLTensor*)compute_1)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_data_strides_1 == NULL)) {
  }
  if (!(default_function_compute_strides == NULL)) {
  }
  if (!(default_function_compute_strides_1 == NULL)) {
  }
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 3120; ++i0_i1_fused_i2_fused_i3_fused) {
    ((float*)compute_2)[i0_i1_fused_i2_fused_i3_fused] = sqrtf((((float*)data_2)[i0_i1_fused_i2_fused_i3_fused] + ((float*)data_3)[i0_i1_fused_i2_fused_i3_fused]));
  }
  for (int32_t i0_i1_fused_i2_fused_i3_fused_1 = 0; i0_i1_fused_i2_fused_i3_fused_1 < 3120; ++i0_i1_fused_i2_fused_i3_fused_1) {
    ((float*)compute_3)[i0_i1_fused_i2_fused_i3_fused_1] = cosf((((float*)data_2)[i0_i1_fused_i2_fused_i3_fused_1] + ((float*)data_3)[i0_i1_fused_i2_fused_i3_fused_1]));
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
