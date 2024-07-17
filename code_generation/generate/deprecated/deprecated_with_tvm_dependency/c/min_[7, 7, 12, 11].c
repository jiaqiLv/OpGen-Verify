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
  float data_red_rf[33];
  for (int32_t k0_k1_fused_k2_fused_k3_fused_inner_init = 0; k0_k1_fused_k2_fused_k3_fused_inner_init < 33; ++k0_k1_fused_k2_fused_k3_fused_inner_init) {
    data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner_init] = 3.402823e+38f;
  }
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 196; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    for (int32_t k0_k1_fused_k2_fused_k3_fused_inner = 0; k0_k1_fused_k2_fused_k3_fused_inner < 33; ++k0_k1_fused_k2_fused_k3_fused_inner) {
      float v_ = data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner];
      float v__1 = ((float*)data_1)[((k0_k1_fused_k2_fused_k3_fused_outer * 33) + k0_k1_fused_k2_fused_k3_fused_inner)];
      data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner] = ((v_) < (v__1) ? (v_) : (v__1));
    }
  }
  ((float*)data_red_1)[0] = 3.402823e+38f;
  for (int32_t k0_k1_fused_k2_fused_k3_fused_inner_v = 0; k0_k1_fused_k2_fused_k3_fused_inner_v < 33; ++k0_k1_fused_k2_fused_k3_fused_inner_v) {
    float v__2 = ((float*)data_red_1)[0];
    float v__3 = data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner_v];
    ((float*)data_red_1)[0] = ((v__2) < (v__3) ? (v__2) : (v__3));
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
