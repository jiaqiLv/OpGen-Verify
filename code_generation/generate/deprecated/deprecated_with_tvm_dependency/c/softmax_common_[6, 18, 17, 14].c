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
  int32_t T_softmax_norm_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_softmax_norm = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_softmax_norm_1 = (((DLTensor*)T_softmax_norm)[0].data);
  void* default_function_T_softmax_norm_shape = (((DLTensor*)T_softmax_norm)[0].shape);
  void* default_function_T_softmax_norm_strides = (((DLTensor*)T_softmax_norm)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_softmax_norm_strides == NULL)) {
  }
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    void* T_softmax_maxelem = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)1224, 2, 32);
    if (T_softmax_maxelem == NULL) {
      return -1;
    }
    void* T_softmax_expsum = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)1224, 2, 32);
    if (T_softmax_expsum == NULL) {
      return -1;
    }
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        ((float*)T_softmax_maxelem)[((i1 * 17) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 14; ++k) {
          int32_t cse_var_1 = ((i1 * 17) + i2);
          float v_ = ((float*)T_softmax_maxelem)[cse_var_1];
          float v__1 = ((float*)data_1)[((((i0 * 4284) + (i1 * 238)) + (i2 * 14)) + k)];
          ((float*)T_softmax_maxelem)[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
        }
      }
    }
    for (int32_t i1_1 = 0; i1_1 < 18; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 17; ++i2_1) {
        ((float*)T_softmax_expsum)[((i1_1 * 17) + i2_1)] = 0.000000e+00f;
        for (int32_t k_1 = 0; k_1 < 14; ++k_1) {
          int32_t cse_var_3 = ((i1_1 * 17) + i2_1);
          int32_t cse_var_2 = ((((i0 * 4284) + (i1_1 * 238)) + (i2_1 * 14)) + k_1);
            float v__2 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
            float v__3 = (v__2) < (8.837627e+01f) ? (v__2) : (8.837627e+01f);
            int32_t v__4 = ((int32_t)(floorf(((((v__3) > (-8.837626e+01f) ? (v__3) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
          float v__5 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__6 = (v__5) < (8.837627e+01f) ? (v__5) : (8.837627e+01f);
          float v__7 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__8 = (v__7) < (8.837627e+01f) ? (v__7) : (8.837627e+01f);
          float v__9 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__10 = (v__9) < (8.837627e+01f) ? (v__9) : (8.837627e+01f);
          float v__11 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__12 = (v__11) < (8.837627e+01f) ? (v__11) : (8.837627e+01f);
          float v__13 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__14 = (v__13) < (8.837627e+01f) ? (v__13) : (8.837627e+01f);
          float v__15 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__16 = (v__15) < (8.837627e+01f) ? (v__15) : (8.837627e+01f);
          float v__17 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__18 = (v__17) < (8.837627e+01f) ? (v__17) : (8.837627e+01f);
          float v__19 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__20 = (v__19) < (8.837627e+01f) ? (v__19) : (8.837627e+01f);
          float v__21 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__22 = (v__21) < (8.837627e+01f) ? (v__21) : (8.837627e+01f);
          float v__23 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__24 = (v__23) < (8.837627e+01f) ? (v__23) : (8.837627e+01f);
          float v__25 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__26 = (v__25) < (8.837627e+01f) ? (v__25) : (8.837627e+01f);
          float v__27 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__28 = (v__27) < (8.837627e+01f) ? (v__27) : (8.837627e+01f);
          float v__29 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__30 = (v__29) < (8.837627e+01f) ? (v__29) : (8.837627e+01f);
          float v__31 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__32 = (v__31) < (8.837627e+01f) ? (v__31) : (8.837627e+01f);
          float v__33 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__34 = (v__33) < (8.837627e+01f) ? (v__33) : (8.837627e+01f);
          float v__35 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          float v__36 = (v__35) < (8.837627e+01f) ? (v__35) : (8.837627e+01f);
          float v__37 = (*(float *)(&(v__4))) * ((((((((((((((1.987569e-04f * (((v__6) > (-8.837626e+01f) ? (v__6) : (-8.837626e+01f)) - (floorf(((((v__8) > (-8.837626e+01f) ? (v__8) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (((v__10) > (-8.837626e+01f) ? (v__10) : (-8.837626e+01f)) - (floorf(((((v__12) > (-8.837626e+01f) ? (v__12) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (((v__14) > (-8.837626e+01f) ? (v__14) : (-8.837626e+01f)) - (floorf(((((v__16) > (-8.837626e+01f) ? (v__16) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (((v__18) > (-8.837626e+01f) ? (v__18) : (-8.837626e+01f)) - (floorf(((((v__20) > (-8.837626e+01f) ? (v__20) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (((v__22) > (-8.837626e+01f) ? (v__22) : (-8.837626e+01f)) - (floorf(((((v__24) > (-8.837626e+01f) ? (v__24) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (((v__26) > (-8.837626e+01f) ? (v__26) : (-8.837626e+01f)) - (floorf(((((v__28) > (-8.837626e+01f) ? (v__28) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (((v__30) > (-8.837626e+01f) ? (v__30) : (-8.837626e+01f)) - (floorf(((((v__32) > (-8.837626e+01f) ? (v__32) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (((v__34) > (-8.837626e+01f) ? (v__34) : (-8.837626e+01f)) - (floorf(((((v__36) > (-8.837626e+01f) ? (v__36) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f);
          float v__38 = ((float*)data_1)[cse_var_2] - ((float*)T_softmax_maxelem)[cse_var_3];
          ((float*)T_softmax_expsum)[cse_var_3] = (((float*)T_softmax_expsum)[cse_var_3] + ((v__37) > (v__38) ? (v__37) : (v__38)));
        }
      }
    }
    for (int32_t i1_2 = 0; i1_2 < 18; ++i1_2) {
      for (int32_t i2_2 = 0; i2_2 < 17; ++i2_2) {
        for (int32_t i3 = 0; i3 < 14; ++i3) {
          int32_t cse_var_5 = ((i1_2 * 17) + i2_2);
          int32_t cse_var_4 = ((((i0 * 4284) + (i1_2 * 238)) + (i2_2 * 14)) + i3);
            float v__39 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
            float v__40 = (v__39) < (8.837627e+01f) ? (v__39) : (8.837627e+01f);
            int32_t v__41 = ((int32_t)(floorf(((((v__40) > (-8.837626e+01f) ? (v__40) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) + 1.270000e+02f)) << 23;
          float v__42 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__43 = (v__42) < (8.837627e+01f) ? (v__42) : (8.837627e+01f);
          float v__44 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__45 = (v__44) < (8.837627e+01f) ? (v__44) : (8.837627e+01f);
          float v__46 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__47 = (v__46) < (8.837627e+01f) ? (v__46) : (8.837627e+01f);
          float v__48 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__49 = (v__48) < (8.837627e+01f) ? (v__48) : (8.837627e+01f);
          float v__50 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__51 = (v__50) < (8.837627e+01f) ? (v__50) : (8.837627e+01f);
          float v__52 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__53 = (v__52) < (8.837627e+01f) ? (v__52) : (8.837627e+01f);
          float v__54 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__55 = (v__54) < (8.837627e+01f) ? (v__54) : (8.837627e+01f);
          float v__56 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__57 = (v__56) < (8.837627e+01f) ? (v__56) : (8.837627e+01f);
          float v__58 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__59 = (v__58) < (8.837627e+01f) ? (v__58) : (8.837627e+01f);
          float v__60 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__61 = (v__60) < (8.837627e+01f) ? (v__60) : (8.837627e+01f);
          float v__62 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__63 = (v__62) < (8.837627e+01f) ? (v__62) : (8.837627e+01f);
          float v__64 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__65 = (v__64) < (8.837627e+01f) ? (v__64) : (8.837627e+01f);
          float v__66 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__67 = (v__66) < (8.837627e+01f) ? (v__66) : (8.837627e+01f);
          float v__68 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__69 = (v__68) < (8.837627e+01f) ? (v__68) : (8.837627e+01f);
          float v__70 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__71 = (v__70) < (8.837627e+01f) ? (v__70) : (8.837627e+01f);
          float v__72 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          float v__73 = (v__72) < (8.837627e+01f) ? (v__72) : (8.837627e+01f);
          float v__74 = (*(float *)(&(v__41))) * ((((((((((((((1.987569e-04f * (((v__43) > (-8.837626e+01f) ? (v__43) : (-8.837626e+01f)) - (floorf(((((v__45) > (-8.837626e+01f) ? (v__45) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.398200e-03f) * (((v__47) > (-8.837626e+01f) ? (v__47) : (-8.837626e+01f)) - (floorf(((((v__49) > (-8.837626e+01f) ? (v__49) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 8.333452e-03f) * (((v__51) > (-8.837626e+01f) ? (v__51) : (-8.837626e+01f)) - (floorf(((((v__53) > (-8.837626e+01f) ? (v__53) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 4.166580e-02f) * (((v__55) > (-8.837626e+01f) ? (v__55) : (-8.837626e+01f)) - (floorf(((((v__57) > (-8.837626e+01f) ? (v__57) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.666667e-01f) * (((v__59) > (-8.837626e+01f) ? (v__59) : (-8.837626e+01f)) - (floorf(((((v__61) > (-8.837626e+01f) ? (v__61) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 5.000000e-01f) * (((v__63) > (-8.837626e+01f) ? (v__63) : (-8.837626e+01f)) - (floorf(((((v__65) > (-8.837626e+01f) ? (v__65) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) * (((v__67) > (-8.837626e+01f) ? (v__67) : (-8.837626e+01f)) - (floorf(((((v__69) > (-8.837626e+01f) ? (v__69) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + (((v__71) > (-8.837626e+01f) ? (v__71) : (-8.837626e+01f)) - (floorf(((((v__73) > (-8.837626e+01f) ? (v__73) : (-8.837626e+01f)) * 1.442695e+00f) + 5.000000e-01f)) * 6.931472e-01f))) + 1.000000e+00f);
          float v__75 = ((float*)data_1)[cse_var_4] - ((float*)T_softmax_maxelem)[cse_var_5];
          ((float*)T_softmax_norm_1)[cse_var_4] = (((v__74) > (v__75) ? (v__74) : (v__75)) / ((float*)T_softmax_expsum)[cse_var_5]);
        }
      }
    }
    if (TVMBackendFreeWorkspace(1, dev_id, T_softmax_expsum) != 0) {
      return -1;
    }
    if (TVMBackendFreeWorkspace(1, dev_id, T_softmax_maxelem) != 0) {
      return -1;
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
