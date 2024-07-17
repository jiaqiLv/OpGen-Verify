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
  int32_t adaptive_pool_max_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* adaptive_pool_max = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* adaptive_pool_max_1 = (((DLTensor*)adaptive_pool_max)[0].data);
  void* default_function_adaptive_pool_max_shape = (((DLTensor*)adaptive_pool_max)[0].shape);
  void* default_function_adaptive_pool_max_strides = (((DLTensor*)adaptive_pool_max)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_adaptive_pool_max_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 64; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((float*)adaptive_pool_max_1)[ax0_ax1_fused_ax2_fused_ax3_fused] = -3.402823e+38f;
    for (int32_t rv0 = 0; rv0 < 15; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 17; ++rv1) {
        float v_ = ((float*)adaptive_pool_max_1)[ax0_ax1_fused_ax2_fused_ax3_fused];
        float v__1 = ((float*)data_1)[(((ax0_ax1_fused_ax2_fused_ax3_fused * 255) + (rv0 * 17)) + rv1)];
        ((float*)adaptive_pool_max_1)[ax0_ax1_fused_ax2_fused_ax3_fused] = ((v_) > (v__1) ? (v_) : (v__1));
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
