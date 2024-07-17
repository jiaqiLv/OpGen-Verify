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
  int32_t resize_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* resize = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* resize_1 = (((DLTensor*)resize)[0].data);
  void* default_function_resize_shape = (((DLTensor*)resize)[0].shape);
  void* default_function_resize_strides = (((DLTensor*)resize)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_resize_strides == NULL)) {
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 5040; ++i0_i1_fused_i2_fused) {
    int32_t16 v_ = ((int32_t16)((((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)), (((i0_i1_fused_i2_fused / 56) * 224) + (((i0_i1_fused_i2_fused % 56) / 2) * 8)))) + (int32_t16((0)+(1*0), (0)+(1*1), (0)+(1*2), (0)+(1*3), (0)+(1*4), (0)+(1*5), (0)+(1*6), (0)+(1*7), (0)+(1*8), (0)+(1*9), (0)+(1*10), (0)+(1*11), (0)+(1*12), (0)+(1*13), (0)+(1*14), (0)+(1*15)) / ((int32_t16)(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2)));
    *(float16*)(((float*)resize_1) + (i0_i1_fused_i2_fused * 16)) = (float16(((float*)data_1)[v_.s0],((float*)data_1)[v_.s1],((float*)data_1)[v_.s2],((float*)data_1)[v_.s3],((float*)data_1)[v_.s4],((float*)data_1)[v_.s5],((float*)data_1)[v_.s6],((float*)data_1)[v_.s7],((float*)data_1)[v_.s8],((float*)data_1)[v_.s9],((float*)data_1)[v_.sa],((float*)data_1)[v_.sb],((float*)data_1)[v_.sc],((float*)data_1)[v_.sd],((float*)data_1)[v_.se],((float*)data_1)[v_.sf]));
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
