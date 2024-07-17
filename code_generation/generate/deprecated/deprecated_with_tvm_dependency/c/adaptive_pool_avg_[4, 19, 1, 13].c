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
  int32_t adaptive_pool_avg_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* adaptive_pool_avg = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* adaptive_pool_avg_1 = (((DLTensor*)adaptive_pool_avg)[0].data);
  void* default_function_adaptive_pool_avg_shape = (((DLTensor*)adaptive_pool_avg)[0].shape);
  void* default_function_adaptive_pool_avg_strides = (((DLTensor*)adaptive_pool_avg)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_adaptive_pool_avg_strides == NULL)) {
  }
  void* adaptive_pool_sum = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)19456, 2, 32);
  if (adaptive_pool_sum == NULL) {
    return -1;
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 76; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        ((float*)adaptive_pool_sum)[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)] = 0.000000e+00f;
        for (int32_t rv0 = 0; rv0 < ((((ax2 + 1) % 8) == 0) ? ((ax2 + 1) >> 3) : (((ax2 + 1) >> 3) + 1)); ++rv0) {
          for (int32_t rv1 = 0; rv1 < ((((((ax3 * 5) + 5) % 8) == 0) ? (((ax3 * 13) + 13) >> 3) : ((((ax3 * 13) + 13) >> 3) + 1)) - ((ax3 * 13) >> 3)); ++rv1) {
            int32_t cse_var_3 = (((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3);
            ((float*)adaptive_pool_sum)[cse_var_3] = (((float*)adaptive_pool_sum)[cse_var_3] + ((float*)data_1)[((((ax0_ax1_fused * 13) + (rv0 * 13)) + ((ax3 * 13) >> 3)) + rv1)]);
          }
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 4864; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    int32_t cse_var_7 = (ax0_ax1_fused_ax2_fused_ax3_fused & 63);
    int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_ax3_fused & 7);
    int32_t cse_var_8 = (cse_var_6 * 13);
    int32_t cse_var_5 = ((cse_var_7 + 8) >> 6);
    int32_t cse_var_4 = ((cse_var_8 + 13) >> 3);
    ((float*)adaptive_pool_avg_1)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((float*)adaptive_pool_sum)[ax0_ax1_fused_ax2_fused_ax3_fused] / (((float)(((((cse_var_7 >> 3) + 1) % 8) == 0) ? cse_var_5 : (cse_var_5 + 1))) * ((float)((((((cse_var_6 * 5) + 5) % 8) == 0) ? cse_var_4 : (cse_var_4 + 1)) - (cse_var_8 >> 3)))));
  }
  if (TVMBackendFreeWorkspace(1, dev_id, adaptive_pool_sum) != 0) {
    return -1;
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
