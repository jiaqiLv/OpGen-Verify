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
  int32_t T_sign_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_sign = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_sign_1 = (((DLTensor*)T_sign)[0].data);
  void* default_function_T_sign_shape = (((DLTensor*)T_sign)[0].shape);
  void* default_function_T_sign_strides = (((DLTensor*)T_sign)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_sign_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 153; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      int32_t cse_var_1 = ((ax0_ax1_fused * 224) + (ax2 * 16));
      int32_t16 v_ = int32_t16((cse_var_1)+(1*0), (cse_var_1)+(1*1), (cse_var_1)+(1*2), (cse_var_1)+(1*3), (cse_var_1)+(1*4), (cse_var_1)+(1*5), (cse_var_1)+(1*6), (cse_var_1)+(1*7), (cse_var_1)+(1*8), (cse_var_1)+(1*9), (cse_var_1)+(1*10), (cse_var_1)+(1*11), (cse_var_1)+(1*12), (cse_var_1)+(1*13), (cse_var_1)+(1*14), (cse_var_1)+(1*15));
      *(float16*)(((float*)T_sign_1) + cse_var_1) = ((((float16)(0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f)) < (float16(((float*)data_1)[v_.s0],((float*)data_1)[v_.s1],((float*)data_1)[v_.s2],((float*)data_1)[v_.s3],((float*)data_1)[v_.s4],((float*)data_1)[v_.s5],((float*)data_1)[v_.s6],((float*)data_1)[v_.s7],((float*)data_1)[v_.s8],((float*)data_1)[v_.s9],((float*)data_1)[v_.sa],((float*)data_1)[v_.sb],((float*)data_1)[v_.sc],((float*)data_1)[v_.sd],((float*)data_1)[v_.se],((float*)data_1)[v_.sf]))) ? ((float16)(1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f, 1.000000e+00f)) : (((float16(((float*)data_1)[v_.s0],((float*)data_1)[v_.s1],((float*)data_1)[v_.s2],((float*)data_1)[v_.s3],((float*)data_1)[v_.s4],((float*)data_1)[v_.s5],((float*)data_1)[v_.s6],((float*)data_1)[v_.s7],((float*)data_1)[v_.s8],((float*)data_1)[v_.s9],((float*)data_1)[v_.sa],((float*)data_1)[v_.sb],((float*)data_1)[v_.sc],((float*)data_1)[v_.sd],((float*)data_1)[v_.se],((float*)data_1)[v_.sf])) < ((float16)(0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f))) ? ((float16)(-1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f, -1.000000e+00f)) : ((float16)(0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f, 0.000000e+00f))));
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
