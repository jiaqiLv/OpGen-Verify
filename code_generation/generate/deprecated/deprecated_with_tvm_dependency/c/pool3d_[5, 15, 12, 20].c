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
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 450; ++ax0_ax1_fused_ax2_fused) {
    float pad_temp[27];
    for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
      for (int32_t ax4 = 0; ax4 < 8; ++ax4) {
        for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
          bool cse_var_6 = (1 <= ax4);
          int32_t cse_var_5 = (ax2 * 9);
          bool cse_var_4 = (1 <= (((ax0_ax1_fused_ax2_fused % 6) * 2) + ax2));
          bool cse_var_3 = (cse_var_4 && cse_var_6);
          bool cse_var_2 = (cse_var_4 && (1 <= ax3));
          int32_t cse_var_1 = ((((ax0_ax1_fused_ax2_fused * 640) + (ax2 * 320)) + (ax3 * 32)) + (ax4 * 2));
          pad_temp[cse_var_5] = ((cse_var_2 && cse_var_6) ? ((float*)data_1)[(cse_var_1 - 337)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 1)] = (cse_var_2 ? ((float*)data_1)[(cse_var_1 - 336)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 2)] = (cse_var_2 ? ((float*)data_1)[(cse_var_1 - 335)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 3)] = (cse_var_3 ? ((float*)data_1)[(cse_var_1 - 321)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 4)] = (cse_var_4 ? ((float*)data_1)[(cse_var_1 - 320)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 5)] = (cse_var_4 ? ((float*)data_1)[(cse_var_1 - 319)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 6)] = (cse_var_3 ? ((float*)data_1)[(cse_var_1 - 305)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 7)] = (cse_var_4 ? ((float*)data_1)[(cse_var_1 - 304)] : -3.402823e+38f);
          pad_temp[(cse_var_5 + 8)] = (cse_var_4 ? ((float*)data_1)[(cse_var_1 - 303)] : -3.402823e+38f);
        }
        ((float*)pool_max_1)[(((ax0_ax1_fused_ax2_fused * 80) + (ax3 * 8)) + ax4)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          int32_t cse_var_8 = (rv0 * 9);
          int32_t cse_var_7 = (((ax0_ax1_fused_ax2_fused * 80) + (ax3 * 8)) + ax4);
          float v_ = ((float*)pool_max_1)[cse_var_7];
          float v__1 = pad_temp[cse_var_8];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__1) ? (v_) : (v__1));
          float v__2 = pad_temp[(cse_var_8 + 1)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__2) ? (v_) : (v__2));
          float v__3 = pad_temp[(cse_var_8 + 2)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__3) ? (v_) : (v__3));
          float v__4 = pad_temp[(cse_var_8 + 3)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__4) ? (v_) : (v__4));
          float v__5 = pad_temp[(cse_var_8 + 4)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__5) ? (v_) : (v__5));
          float v__6 = pad_temp[(cse_var_8 + 5)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__6) ? (v_) : (v__6));
          float v__7 = pad_temp[(cse_var_8 + 6)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__7) ? (v_) : (v__7));
          float v__8 = pad_temp[(cse_var_8 + 7)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__8) ? (v_) : (v__8));
          float v__9 = pad_temp[(cse_var_8 + 8)];
          ((float*)pool_max_1)[cse_var_7] = ((v_) > (v__9) ? (v_) : (v__9));
        }
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
