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
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 240; ++ax0_ax1_fused_ax2_fused) {
    float pad_temp[9];
    for (int32_t ax3 = 0; ax3 < 30; ++ax3) {
      int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused % 3);
      bool cse_var_5 = (1 <= ax3);
      bool cse_var_4 = (cse_var_6 < 2);
      bool cse_var_3 = (1 <= cse_var_6);
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 30) + ax3);
      int32_t cse_var_1 = ((((ax0_ax1_fused_ax2_fused / 3) * 300) + (cse_var_6 * 120)) + (ax3 * 2));
      pad_temp[0] = ((cse_var_3 && cse_var_5) ? ((float*)data_1)[(cse_var_1 - 61)] : -3.402823e+38f);
      pad_temp[1] = (cse_var_3 ? ((float*)data_1)[(cse_var_1 - 60)] : -3.402823e+38f);
      pad_temp[2] = (cse_var_3 ? ((float*)data_1)[(cse_var_1 - 59)] : -3.402823e+38f);
      pad_temp[3] = (cse_var_5 ? ((float*)data_1)[(cse_var_1 - 1)] : -3.402823e+38f);
      pad_temp[4] = ((float*)data_1)[cse_var_1];
      pad_temp[5] = ((float*)data_1)[(cse_var_1 + 1)];
      pad_temp[6] = ((cse_var_4 && cse_var_5) ? ((float*)data_1)[(cse_var_1 + 59)] : -3.402823e+38f);
      pad_temp[7] = (cse_var_4 ? ((float*)data_1)[(cse_var_1 + 60)] : -3.402823e+38f);
      pad_temp[8] = (cse_var_4 ? ((float*)data_1)[(cse_var_1 + 61)] : -3.402823e+38f);
      ((float*)pool_max_1)[cse_var_2] = -3.402823e+38f;
      float v_ = ((float*)pool_max_1)[cse_var_2];
      float v__1 = pad_temp[0];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__1) ? (v_) : (v__1));
      float v__2 = pad_temp[1];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__2) ? (v_) : (v__2));
      float v__3 = pad_temp[2];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__3) ? (v_) : (v__3));
      float v__4 = pad_temp[3];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__4) ? (v_) : (v__4));
      float v__5 = pad_temp[4];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__5) ? (v_) : (v__5));
      float v__6 = pad_temp[5];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__6) ? (v_) : (v__6));
      float v__7 = pad_temp[6];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__7) ? (v_) : (v__7));
      float v__8 = pad_temp[7];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__8) ? (v_) : (v__8));
      float v__9 = pad_temp[8];
      ((float*)pool_max_1)[cse_var_2] = ((v_) > (v__9) ? (v_) : (v__9));
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
