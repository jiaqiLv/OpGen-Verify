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
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t gamma_code = arg_type_ids[1];
  int32_t beta_code = arg_type_ids[2];
  int32_t moving_mean_code = arg_type_ids[3];
  int32_t moving_var_code = arg_type_ids[4];
  int32_t T_divide_code = arg_type_ids[5];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* gamma = (((TVMValue*)args)[1].v_handle);
  void* beta = (((TVMValue*)args)[2].v_handle);
  void* moving_mean = (((TVMValue*)args)[3].v_handle);
  void* moving_var = (((TVMValue*)args)[4].v_handle);
  void* T_divide = (((TVMValue*)args)[5].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* gamma_1 = (((DLTensor*)gamma)[0].data);
  void* default_function_gamma_shape = (((DLTensor*)gamma)[0].shape);
  void* default_function_gamma_strides = (((DLTensor*)gamma)[0].strides);
  void* beta_1 = (((DLTensor*)beta)[0].data);
  void* default_function_beta_shape = (((DLTensor*)beta)[0].shape);
  void* default_function_beta_strides = (((DLTensor*)beta)[0].strides);
  void* moving_mean_1 = (((DLTensor*)moving_mean)[0].data);
  void* default_function_moving_mean_shape = (((DLTensor*)moving_mean)[0].shape);
  void* default_function_moving_mean_strides = (((DLTensor*)moving_mean)[0].strides);
  void* moving_var_1 = (((DLTensor*)moving_var)[0].data);
  void* default_function_moving_var_shape = (((DLTensor*)moving_var)[0].shape);
  void* default_function_moving_var_strides = (((DLTensor*)moving_var)[0].strides);
  void* T_divide_1 = (((DLTensor*)T_divide)[0].data);
  void* default_function_T_divide_shape = (((DLTensor*)T_divide)[0].shape);
  void* default_function_T_divide_strides = (((DLTensor*)T_divide)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_gamma_strides == NULL)) {
  }
  if (!(default_function_beta_strides == NULL)) {
  }
  if (!(default_function_moving_mean_strides == NULL)) {
  }
  if (!(default_function_moving_var_strides == NULL)) {
  }
  if (!(default_function_T_divide_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 7200; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused_ax3_fused % 3600) / 240);
    float T_reshape[1];
    float T_reshape_1[1];
    T_reshape[0] = ((float*)moving_mean_1)[cse_var_1];
    T_reshape_1[0] = ((float*)moving_var_1)[cse_var_1];
    ((float*)T_divide_1)[ax0_ax1_fused_ax2_fused_ax3_fused] = ((((float*)data_1)[ax0_ax1_fused_ax2_fused_ax3_fused] - T_reshape[0]) / sqrtf((T_reshape_1[0] + 1.000000e-05f)));
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
