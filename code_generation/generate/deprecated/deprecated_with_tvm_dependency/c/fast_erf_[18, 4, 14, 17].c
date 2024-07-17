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
  int32_t T_fast_erf_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_fast_erf = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_fast_erf_1 = (((DLTensor*)T_fast_erf)[0].data);
  void* default_function_T_fast_erf_shape = (((DLTensor*)T_fast_erf)[0].shape);
  void* default_function_T_fast_erf_strides = (((DLTensor*)T_fast_erf)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_fast_erf_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1008; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 17; ++ax3) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 17) + ax3);
      float v_ = ((float*)data_1)[cse_var_1];
      float v__1 = (v_) < (4.000000e+00f) ? (v_) : (4.000000e+00f);
      ((float*)T_fast_erf_1)[cse_var_1] = ((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * -2.726142e-10f) + 2.770681e-08f)) + -2.101024e-06f)) + -5.692506e-05f)) + -7.349906e-04f)) + -2.954600e-03f)) + -1.609603e-02f)) / (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * (((((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f)) * ((v__1) > (-4.000000e+00f) ? (v__1) : (-4.000000e+00f))) * -1.456607e-05f) + -2.133740e-04f)) + -1.682827e-03f)) + -7.373329e-03f)) + -1.426474e-02f));
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
