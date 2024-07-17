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
  int32_t T_fast_tanh_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_fast_tanh = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_fast_tanh_1 = (((DLTensor*)T_fast_tanh)[0].data);
  void* default_function_T_fast_tanh_shape = (((DLTensor*)T_fast_tanh)[0].shape);
  void* default_function_T_fast_tanh_strides = (((DLTensor*)T_fast_tanh)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_fast_tanh_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 1995; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    float v_ = ((float*)data_1)[ax0_ax1_fused_ax2_fused_ax3_fused];
    float v__1 = (9.000000e+00f) < (v_) ? (9.000000e+00f) : (v_);
    ((float*)T_fast_tanh_1)[ax0_ax1_fused_ax2_fused_ax3_fused] = ((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * -2.760768e-16f) + 2.000188e-13f)) + -8.604672e-11f)) + 5.122297e-08f)) + 1.485722e-05f)) + 6.372619e-04f)) + 4.893525e-03f)) / (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * (((((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1)) * ((-9.000000e+00f) > (v__1) ? (-9.000000e+00f) : (v__1))) * 1.198258e-06f) + 1.185347e-04f)) + 2.268435e-03f)) + 4.893525e-03f));
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
