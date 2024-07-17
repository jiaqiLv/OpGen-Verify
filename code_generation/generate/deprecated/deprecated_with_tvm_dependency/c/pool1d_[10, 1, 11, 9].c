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
  int32_t pool_max_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* pool_max = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* pool_max_1 = (((DLTensor*)pool_max)[0].data);
  void* default_function_pool_max_shape = (((DLTensor*)pool_max)[0].shape);
  void* default_function_pool_max_strides = (((DLTensor*)pool_max)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_pool_max_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    float pad_temp[11];
    for (int32_t ax1_ax2_fused_s = 0; ax1_ax2_fused_s < 11; ++ax1_ax2_fused_s) {
      pad_temp[ax1_ax2_fused_s] = (((1 <= ax1_ax2_fused_s) && (ax1_ax2_fused_s < 10)) ? ((float*)data_1)[(((ax0_ax1_fused * 9) + ax1_ax2_fused_s) - 1)] : -3.402823e+38f);
    }
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      ((float*)pool_max_1)[((ax0_ax1_fused * 5) + ax2)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        int32_t cse_var_1 = ((ax0_ax1_fused * 5) + ax2);
        float v_ = ((float*)pool_max_1)[cse_var_1];
        float v__1 = pad_temp[((ax2 * 2) + rv0)];
        ((float*)pool_max_1)[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
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
