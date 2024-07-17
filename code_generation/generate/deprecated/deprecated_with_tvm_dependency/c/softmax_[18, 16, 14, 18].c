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
TVM_DLL float expf(float);
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
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    void* T_softmax_exp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)16128, 2, 32);
    if (T_softmax_exp == NULL) {
      return -1;
    }
    float T_softmax_maxelem[1];
    float T_softmax_expsum[14];
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        int32_t cse_var_1 = (((i0 * 4032) + (i1 * 252)) + (i2 * 18));
        T_softmax_maxelem[0] = -3.402823e+38f;
        float v_ = T_softmax_maxelem[0];
        float v__1 = ((float*)data_1)[cse_var_1];
        T_softmax_maxelem[0] = ((v_) > (v__1) ? (v_) : (v__1));
        float v__2 = ((float*)data_1)[(cse_var_1 + 1)];
        T_softmax_maxelem[0] = ((v_) > (v__2) ? (v_) : (v__2));
        float v__3 = ((float*)data_1)[(cse_var_1 + 2)];
        T_softmax_maxelem[0] = ((v_) > (v__3) ? (v_) : (v__3));
        float v__4 = ((float*)data_1)[(cse_var_1 + 3)];
        T_softmax_maxelem[0] = ((v_) > (v__4) ? (v_) : (v__4));
        float v__5 = ((float*)data_1)[(cse_var_1 + 4)];
        T_softmax_maxelem[0] = ((v_) > (v__5) ? (v_) : (v__5));
        float v__6 = ((float*)data_1)[(cse_var_1 + 5)];
        T_softmax_maxelem[0] = ((v_) > (v__6) ? (v_) : (v__6));
        float v__7 = ((float*)data_1)[(cse_var_1 + 6)];
        T_softmax_maxelem[0] = ((v_) > (v__7) ? (v_) : (v__7));
        float v__8 = ((float*)data_1)[(cse_var_1 + 7)];
        T_softmax_maxelem[0] = ((v_) > (v__8) ? (v_) : (v__8));
        float v__9 = ((float*)data_1)[(cse_var_1 + 8)];
        T_softmax_maxelem[0] = ((v_) > (v__9) ? (v_) : (v__9));
        float v__10 = ((float*)data_1)[(cse_var_1 + 9)];
        T_softmax_maxelem[0] = ((v_) > (v__10) ? (v_) : (v__10));
        float v__11 = ((float*)data_1)[(cse_var_1 + 10)];
        T_softmax_maxelem[0] = ((v_) > (v__11) ? (v_) : (v__11));
        float v__12 = ((float*)data_1)[(cse_var_1 + 11)];
        T_softmax_maxelem[0] = ((v_) > (v__12) ? (v_) : (v__12));
        float v__13 = ((float*)data_1)[(cse_var_1 + 12)];
        T_softmax_maxelem[0] = ((v_) > (v__13) ? (v_) : (v__13));
        float v__14 = ((float*)data_1)[(cse_var_1 + 13)];
        T_softmax_maxelem[0] = ((v_) > (v__14) ? (v_) : (v__14));
        float v__15 = ((float*)data_1)[(cse_var_1 + 14)];
        T_softmax_maxelem[0] = ((v_) > (v__15) ? (v_) : (v__15));
        float v__16 = ((float*)data_1)[(cse_var_1 + 15)];
        T_softmax_maxelem[0] = ((v_) > (v__16) ? (v_) : (v__16));
        float v__17 = ((float*)data_1)[(cse_var_1 + 16)];
        T_softmax_maxelem[0] = ((v_) > (v__17) ? (v_) : (v__17));
        float v__18 = ((float*)data_1)[(cse_var_1 + 17)];
        T_softmax_maxelem[0] = ((v_) > (v__18) ? (v_) : (v__18));
        for (int32_t i3 = 0; i3 < 18; ++i3) {
          ((float*)T_softmax_exp)[(((i1 * 252) + (i2 * 18)) + i3)] = expf((((float*)data_1)[(cse_var_1 + i3)] - T_softmax_maxelem[0]));
        }
      }
    }
    for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
        int32_t cse_var_2 = ((i1_1 * 252) + (i2_1 * 18));
        T_softmax_expsum[i2_1] = 0.000000e+00f;
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[cse_var_2]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 1)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 2)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 3)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 4)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 5)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 6)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 7)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 8)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 9)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 10)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 11)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 12)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 13)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 14)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 15)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 16)]);
        T_softmax_expsum[i2_1] = (T_softmax_expsum[i2_1] + ((float*)T_softmax_exp)[(cse_var_2 + 17)]);
      }
      for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
        for (int32_t i3_1 = 0; i3_1 < 18; ++i3_1) {
          int32_t cse_var_4 = (i1_1 * 252);
          int32_t cse_var_3 = (i2_2 * 18);
          ((float*)T_softmax_norm_1)[((((i0 * 4032) + cse_var_4) + cse_var_3) + i3_1)] = (((float*)T_softmax_exp)[((cse_var_4 + cse_var_3) + i3_1)] / T_softmax_expsum[i2_2]);
        }
      }
    }
    if (TVMBackendFreeWorkspace(1, dev_id, T_softmax_exp) != 0) {
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
