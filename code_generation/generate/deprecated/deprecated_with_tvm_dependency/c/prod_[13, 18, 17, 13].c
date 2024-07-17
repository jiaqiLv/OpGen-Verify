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
  int32_t data_red_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* data_red = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* data_red_1 = (((DLTensor*)data_red)[0].data);
  void* default_function_data_red_shape = (((DLTensor*)data_red)[0].shape);
  void* default_function_data_red_strides = (((DLTensor*)data_red)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  float data_red_rf[13];
  for (int32_t k0_k1_fused_k2_fused_k3_fused_inner_init = 0; k0_k1_fused_k2_fused_k3_fused_inner_init < 13; ++k0_k1_fused_k2_fused_k3_fused_inner_init) {
    data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner_init] = 1.000000e+00f;
  }
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 3978; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    int32_t cse_var_1 = (k0_k1_fused_k2_fused_k3_fused_outer * 13);
    data_red_rf[0] = (data_red_rf[0] * ((float*)data_1)[cse_var_1]);
    data_red_rf[1] = (data_red_rf[1] * ((float*)data_1)[(cse_var_1 + 1)]);
    data_red_rf[2] = (data_red_rf[2] * ((float*)data_1)[(cse_var_1 + 2)]);
    data_red_rf[3] = (data_red_rf[3] * ((float*)data_1)[(cse_var_1 + 3)]);
    data_red_rf[4] = (data_red_rf[4] * ((float*)data_1)[(cse_var_1 + 4)]);
    data_red_rf[5] = (data_red_rf[5] * ((float*)data_1)[(cse_var_1 + 5)]);
    data_red_rf[6] = (data_red_rf[6] * ((float*)data_1)[(cse_var_1 + 6)]);
    data_red_rf[7] = (data_red_rf[7] * ((float*)data_1)[(cse_var_1 + 7)]);
    data_red_rf[8] = (data_red_rf[8] * ((float*)data_1)[(cse_var_1 + 8)]);
    data_red_rf[9] = (data_red_rf[9] * ((float*)data_1)[(cse_var_1 + 9)]);
    data_red_rf[10] = (data_red_rf[10] * ((float*)data_1)[(cse_var_1 + 10)]);
    data_red_rf[11] = (data_red_rf[11] * ((float*)data_1)[(cse_var_1 + 11)]);
    data_red_rf[12] = (data_red_rf[12] * ((float*)data_1)[(cse_var_1 + 12)]);
  }
  ((float*)data_red_1)[0] = 1.000000e+00f;
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[0]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[1]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[2]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[3]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[4]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[5]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[6]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[7]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[8]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[9]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[10]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[11]);
  ((float*)data_red_1)[0] = (((float*)data_red_1)[0] * data_red_rf[12]);
  return 0;
}

// CodegenC: NOTE: Auto-generated entry function
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_main__(void* args, int* arg_type_ids, int num_args, void* out_ret_value, int* out_ret_tcode, void* resource_handle) {
  return default_function(args, arg_type_ids, num_args, out_ret_value, out_ret_tcode, resource_handle);
}
