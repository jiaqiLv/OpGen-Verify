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
  int32_t kernel_code = arg_type_ids[1];
  int32_t conv1d_ncw_code = arg_type_ids[2];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* kernel = (((TVMValue*)args)[1].v_handle);
  void* conv1d_ncw = (((TVMValue*)args)[2].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* kernel_1 = (((DLTensor*)kernel)[0].data);
  void* default_function_kernel_shape = (((DLTensor*)kernel)[0].shape);
  void* default_function_kernel_strides = (((DLTensor*)kernel)[0].strides);
  void* conv1d_ncw_1 = (((DLTensor*)conv1d_ncw)[0].data);
  void* default_function_conv1d_ncw_shape = (((DLTensor*)conv1d_ncw)[0].shape);
  void* default_function_conv1d_ncw_strides = (((DLTensor*)conv1d_ncw)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_kernel_strides == NULL)) {
  }
  if (!(default_function_conv1d_ncw_strides == NULL)) {
  }
  for (int32_t nn_outer_outer_outer_ff_outer_outer_outer_fused_yy_outer_outer_outer_fused_nn_outer_outer_inner_fused_ff_outer_outer_inner_fused_yy_outer_outer_inner_fused = 0; nn_outer_outer_outer_ff_outer_outer_outer_fused_yy_outer_outer_outer_fused_nn_outer_outer_inner_fused_ff_outer_outer_inner_fused_yy_outer_outer_inner_fused < 40; ++nn_outer_outer_outer_ff_outer_outer_outer_fused_yy_outer_outer_outer_fused_nn_outer_outer_inner_fused_ff_outer_outer_inner_fused_yy_outer_outer_inner_fused) {
    int32_t cse_var_6 = (nn_outer_outer_outer_ff_outer_outer_outer_fused_yy_outer_outer_outer_fused_nn_outer_outer_inner_fused_ff_outer_outer_inner_fused_yy_outer_outer_inner_fused / 20);
    int32_t cse_var_5 = (nn_outer_outer_outer_ff_outer_outer_outer_fused_yy_outer_outer_outer_fused_nn_outer_outer_inner_fused_ff_outer_outer_inner_fused_yy_outer_outer_inner_fused % 5);
    int32_t cse_var_4 = ((nn_outer_outer_outer_ff_outer_outer_outer_fused_yy_outer_outer_outer_fused_nn_outer_outer_inner_fused_ff_outer_outer_inner_fused_yy_outer_outer_inner_fused % 20) / 5);
    int32_t cse_var_3 = (cse_var_5 * 9);
    int32_t cse_var_2 = ((cse_var_6 * 30) + (cse_var_4 * 2));
    int32_t cse_var_1 = (((cse_var_6 * 20) + (cse_var_5 * 4)) + cse_var_4);
    ((float*)conv1d_ncw_1)[cse_var_1] = 0.000000e+00f;
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[cse_var_2] * ((float*)kernel_1)[cse_var_3]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 1)] * ((float*)kernel_1)[(cse_var_3 + 1)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 2)] * ((float*)kernel_1)[(cse_var_3 + 2)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 10)] * ((float*)kernel_1)[(cse_var_3 + 3)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 11)] * ((float*)kernel_1)[(cse_var_3 + 4)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 12)] * ((float*)kernel_1)[(cse_var_3 + 5)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 20)] * ((float*)kernel_1)[(cse_var_3 + 6)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 21)] * ((float*)kernel_1)[(cse_var_3 + 7)]));
    ((float*)conv1d_ncw_1)[cse_var_1] = (((float*)conv1d_ncw_1)[cse_var_1] + (((float*)data_1)[(cse_var_2 + 22)] * ((float*)kernel_1)[(cse_var_3 + 8)]));
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
