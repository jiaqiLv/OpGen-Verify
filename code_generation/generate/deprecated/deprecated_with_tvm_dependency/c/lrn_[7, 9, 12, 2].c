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
TVM_DLL float powf(float, float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t T_divide_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_divide = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_divide_1 = (((DLTensor*)T_divide)[0].data);
  void* default_function_T_divide_shape = (((DLTensor*)T_divide)[0].shape);
  void* default_function_T_divide_strides = (((DLTensor*)T_divide)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_divide_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 63; ++ax0_ax1_fused) {
    float tensor[2];
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      int32_t cse_var_2 = ((ax0_ax1_fused * 24) + (ax2 * 2));
      int32_t cse_var_1 = (cse_var_2 + 1);
      tensor[0] = 0.000000e+00f;
      tensor[0] = (tensor[0] + (((float*)data_1)[cse_var_2] * ((float*)data_1)[cse_var_2]));
      tensor[1] = 0.000000e+00f;
      tensor[1] = (tensor[1] + (((float*)data_1)[cse_var_1] * ((float*)data_1)[cse_var_1]));
      for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
        int32_t cse_var_3 = (cse_var_2 + ax3);
        ((float*)T_divide_1)[cse_var_3] = (((float*)data_1)[cse_var_3] / powf((2.000000e+00f + (1.000000e-04f * tensor[ax3])), 7.500000e-01f));
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
