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
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float floorf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t T_fast_exp_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_fast_exp = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_fast_exp_1 = (((DLTensor*)T_fast_exp)[0].data);
  void* default_function_T_fast_exp_shape = (((DLTensor*)T_fast_exp)[0].shape);
  void* default_function_T_fast_exp_strides = (((DLTensor*)T_fast_exp)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_fast_exp_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 75; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3_s = 0; ax3_s < 14; ++ax3_s) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 224) + (ax2 * 14)) + ax3_s);
          float v_ = ((float*)data_1)[cse_var_1];
          float v__1 = (v_) < (8.837627e+01f) ? (v_) : (8.837627e+01f);
          int32_t v__2 = ((int32_t)(floorf(((((v__1) > (-8.837626e+01f) ? (v__1) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
        float v__3 = ((float*)data_1)[cse_var_1];
        float v__4 = (v__3) < (8.837627e+01f) ? (v__3) : (8.837627e+01f);
        float v__5 = ((float*)data_1)[cse_var_1];
        float v__6 = (v__5) < (8.837627e+01f) ? (v__5) : (8.837627e+01f);
        float v__7 = ((float*)data_1)[cse_var_1];
        float v__8 = (v__7) < (8.837627e+01f) ? (v__7) : (8.837627e+01f);
        float v__9 = ((float*)data_1)[cse_var_1];
        float v__10 = (v__9) < (8.837627e+01f) ? (v__9) : (8.837627e+01f);
        float v__11 = ((float*)data_1)[cse_var_1];
        float v__12 = (v__11) < (8.837627e+01f) ? (v__11) : (8.837627e+01f);
        float v__13 = ((float*)data_1)[cse_var_1];
        float v__14 = (v__13) < (8.837627e+01f) ? (v__13) : (8.837627e+01f);
        float v__15 = ((float*)data_1)[cse_var_1];
        float v__16 = (v__15) < (8.837627e+01f) ? (v__15) : (8.837627e+01f);
        float v__17 = ((float*)data_1)[cse_var_1];
        float v__18 = (v__17) < (8.837627e+01f) ? (v__17) : (8.837627e+01f);
        float v__19 = ((float*)data_1)[cse_var_1];
        float v__20 = (v__19) < (8.837627e+01f) ? (v__19) : (8.837627e+01f);
        float v__21 = ((float*)data_1)[cse_var_1];
        float v__22 = (v__21) < (8.837627e+01f) ? (v__21) : (8.837627e+01f);
        float v__23 = ((float*)data_1)[cse_var_1];
        float v__24 = (v__23) < (8.837627e+01f) ? (v__23) : (8.837627e+01f);
        float v__25 = ((float*)data_1)[cse_var_1];
        float v__26 = (v__25) < (8.837627e+01f) ? (v__25) : (8.837627e+01f);
        float v__27 = ((float*)data_1)[cse_var_1];
        float v__28 = (v__27) < (8.837627e+01f) ? (v__27) : (8.837627e+01f);
        float v__29 = ((float*)data_1)[cse_var_1];
        float v__30 = (v__29) < (8.837627e+01f) ? (v__29) : (8.837627e+01f);
        float v__31 = ((float*)data_1)[cse_var_1];
        float v__32 = (v__31) < (8.837627e+01f) ? (v__31) : (8.837627e+01f);
        float v__33 = ((float*)data_1)[cse_var_1];
        float v__34 = (v__33) < (8.837627e+01f) ? (v__33) : (8.837627e+01f);
        float v__35 = (*(float *)(&(v__2))) * ((((((((((((((1.987569e-04f * (((v__4) > (-8.837626e+01f) ? (v__4) : (-8.837626e+01f)) - (floorf(((((v__6) > (-8.837626e+01f) ? (v__6) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (((v__8) > (-8.837626e+01f) ? (v__8) : (-8.837626e+01f)) - (floorf(((((v__10) > (-8.837626e+01f) ? (v__10) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (((v__12) > (-8.837626e+01f) ? (v__12) : (-8.837626e+01f)) - (floorf(((((v__14) > (-8.837626e+01f) ? (v__14) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (((v__16) > (-8.837626e+01f) ? (v__16) : (-8.837626e+01f)) - (floorf(((((v__18) > (-8.837626e+01f) ? (v__18) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (((v__20) > (-8.837626e+01f) ? (v__20) : (-8.837626e+01f)) - (floorf(((((v__22) > (-8.837626e+01f) ? (v__22) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (((v__24) > (-8.837626e+01f) ? (v__24) : (-8.837626e+01f)) - (floorf(((((v__26) > (-8.837626e+01f) ? (v__26) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (((v__28) > (-8.837626e+01f) ? (v__28) : (-8.837626e+01f)) - (floorf(((((v__30) > (-8.837626e+01f) ? (v__30) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (((v__32) > (-8.837626e+01f) ? (v__32) : (-8.837626e+01f)) - (floorf(((((v__34) > (-8.837626e+01f) ? (v__34) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f);
        float v__36 = ((float*)data_1)[cse_var_1];
        ((float*)T_fast_exp_1)[cse_var_1] = ((v__35) > (v__36) ? (v__35) : (v__36));
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
