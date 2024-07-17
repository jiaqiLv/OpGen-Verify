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
  int32_t packed_out_code = arg_type_ids[0];
  int32_t output_unpack_code = arg_type_ids[1];
  void* packed_out = (((TVMValue*)args)[0].v_handle);
  void* output_unpack = (((TVMValue*)args)[1].v_handle);
  void* packed_out_1 = (((DLTensor*)packed_out)[0].data);
  void* default_function_packed_out_shape = (((DLTensor*)packed_out)[0].shape);
  void* default_function_packed_out_strides = (((DLTensor*)packed_out)[0].strides);
  int32_t dev_id = (((DLTensor*)packed_out)[0].device.device_id);
  void* output_unpack_1 = (((DLTensor*)output_unpack)[0].data);
  void* default_function_output_unpack_shape = (((DLTensor*)output_unpack)[0].shape);
  void* default_function_output_unpack_strides = (((DLTensor*)output_unpack)[0].strides);
  if (!(default_function_packed_out_strides == NULL)) {
  }
  if (!(default_function_output_unpack_strides == NULL)) {
  }
  for (int32_t n_c_fused = 0; n_c_fused < 416; ++n_c_fused) {
    for (int32_t h = 0; h < 14; ++h) {
      int32_t7 v_ = int32_t7((((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*0), (((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*1), (((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*2), (((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*3), (((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*4), (((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*5), (((((n_c_fused >> 1) * 196) + (h * 14)) + (n_c_fused & 1)))+(2*6));
      *(float7*)(((float*)output_unpack_1) + ((n_c_fused * 98) + (h * 7))) = (float7(((float*)packed_out_1)[v_.s0],((float*)packed_out_1)[v_.s1],((float*)packed_out_1)[v_.s2],((float*)packed_out_1)[v_.s3],((float*)packed_out_1)[v_.s4],((float*)packed_out_1)[v_.s5],((float*)packed_out_1)[v_.s6]));
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
