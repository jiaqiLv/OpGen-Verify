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
  int32_t kernel_code = arg_type_ids[1];
  int32_t conv1d_ncw_code = arg_type_ids[2];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* kernel = (((TVMValue*)args)[1].v_handle);
  void* conv1d_ncw = (((TVMValue*)args)[2].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* kernel_1 = (((DLTensor*)kernel)[0].data);
  void* default_function_kernel_shape = (((DLTensor*)kernel)[0].shape);
  void* default_function_kernel_strides = (((DLTensor*)kernel)[0].strides);
  void* conv1d_ncw_1 = (((DLTensor*)conv1d_ncw)[0].data);
  void* default_function_conv1d_ncw_shape = (((DLTensor*)conv1d_ncw)[0].shape);
  void* default_function_conv1d_ncw_strides = (((DLTensor*)conv1d_ncw)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_kernel_strides == NULL)) {
  }
  if (!(default_function_conv1d_ncw_strides == NULL)) {
  }
  void* conv1d_ncw_local = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)160, 2, 32);
  if (conv1d_ncw_local == NULL) {
    return -1;
  }
  for (int32_t yy_c_outer_outer_inner = 0; yy_c_outer_outer_inner < 2; ++yy_c_outer_outer_inner) {
    int32_t cse_var_1 = (yy_c_outer_outer_inner * 2);
    *(float2*)(((float*)conv1d_ncw_local) + cse_var_1) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 4)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 8)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 12)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 16)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 20)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 24)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 28)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 32)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    *(float2*)(((float*)conv1d_ncw_local) + (cse_var_1 + 36)) = ((float2)(0.000000e+00f, 0.000000e+00f));
    for (int32_t rc_inner = 0; rc_inner < 3; ++rc_inner) {
      int32_t cse_var_31 = (rc_inner * 3);
      int32_t cse_var_30 = (cse_var_1 + 8);
      int32_t cse_var_29 = (cse_var_1 + 4);
      int32_t cse_var_28 = (cse_var_1 + 36);
      int32_t cse_var_27 = (cse_var_1 + 32);
      int32_t cse_var_26 = (cse_var_1 + 28);
      int32_t cse_var_25 = (cse_var_1 + 24);
      int32_t cse_var_24 = (cse_var_1 + 20);
      int32_t cse_var_23 = (cse_var_1 + 16);
      int32_t cse_var_22 = (cse_var_1 + 12);
      int32_t cse_var_21 = (cse_var_31 + 9);
      int32_t cse_var_20 = (cse_var_31 + 38);
      int32_t cse_var_19 = (cse_var_31 + 37);
      int32_t cse_var_18 = (cse_var_31 + 36);
      int32_t cse_var_17 = (cse_var_31 + 29);
      int32_t cse_var_16 = (cse_var_31 + 28);
      int32_t cse_var_15 = (cse_var_31 + 27);
      int32_t cse_var_14 = (cse_var_31 + 20);
      int32_t cse_var_13 = (cse_var_31 + 2);
      int32_t cse_var_12 = (cse_var_31 + 19);
      int32_t cse_var_11 = (cse_var_31 + 18);
      int32_t cse_var_10 = (cse_var_31 + 11);
      int32_t cse_var_9 = (cse_var_31 + 10);
      int32_t cse_var_8 = (cse_var_31 + 1);
      int32_t cse_var_7 = ((rc_inner * 10) + (yy_c_outer_outer_inner * 4));
      int32_t cse_var_6 = (cse_var_7 + 32);
      int32_t cse_var_5 = (cse_var_7 + 31);
      int32_t cse_var_4 = (cse_var_7 + 30);
      int32_t cse_var_3 = (cse_var_7 + 2);
      int32_t cse_var_2 = (cse_var_7 + 1);
      int32_t2 v_ = int32_t2((cse_var_1)+(1*0), (cse_var_1)+(1*1));
      int32_t2 v__1 = int32_t2((cse_var_7)+(2*0), (cse_var_7)+(2*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_1) = ((float2(((float*)conv1d_ncw_local)[v_.s0],((float*)conv1d_ncw_local)[v_.s1])) + ((float2(((float*)data_1)[v__1.s0],((float*)data_1)[v__1.s1])) * ((float2)(((float*)kernel_1)[cse_var_31], ((float*)kernel_1)[cse_var_31]))));
      int32_t2 v__2 = int32_t2((cse_var_29)+(1*0), (cse_var_29)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_29) = ((float2(((float*)conv1d_ncw_local)[v__2.s0],((float*)conv1d_ncw_local)[v__2.s1])) + ((float2(((float*)data_1)[v__1.s0],((float*)data_1)[v__1.s1])) * ((float2)(((float*)kernel_1)[cse_var_21], ((float*)kernel_1)[cse_var_21]))));
      int32_t2 v__3 = int32_t2((cse_var_30)+(1*0), (cse_var_30)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_30) = ((float2(((float*)conv1d_ncw_local)[v__3.s0],((float*)conv1d_ncw_local)[v__3.s1])) + ((float2(((float*)data_1)[v__1.s0],((float*)data_1)[v__1.s1])) * ((float2)(((float*)kernel_1)[cse_var_11], ((float*)kernel_1)[cse_var_11]))));
      int32_t2 v__4 = int32_t2((cse_var_22)+(1*0), (cse_var_22)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_22) = ((float2(((float*)conv1d_ncw_local)[v__4.s0],((float*)conv1d_ncw_local)[v__4.s1])) + ((float2(((float*)data_1)[v__1.s0],((float*)data_1)[v__1.s1])) * ((float2)(((float*)kernel_1)[cse_var_15], ((float*)kernel_1)[cse_var_15]))));
      int32_t2 v__5 = int32_t2((cse_var_23)+(1*0), (cse_var_23)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_23) = ((float2(((float*)conv1d_ncw_local)[v__5.s0],((float*)conv1d_ncw_local)[v__5.s1])) + ((float2(((float*)data_1)[v__1.s0],((float*)data_1)[v__1.s1])) * ((float2)(((float*)kernel_1)[cse_var_18], ((float*)kernel_1)[cse_var_18]))));
      int32_t2 v__6 = int32_t2((cse_var_24)+(1*0), (cse_var_24)+(1*1));
      int32_t2 v__7 = int32_t2((cse_var_4)+(2*0), (cse_var_4)+(2*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_24) = ((float2(((float*)conv1d_ncw_local)[v__6.s0],((float*)conv1d_ncw_local)[v__6.s1])) + ((float2(((float*)data_1)[v__7.s0],((float*)data_1)[v__7.s1])) * ((float2)(((float*)kernel_1)[cse_var_31], ((float*)kernel_1)[cse_var_31]))));
      int32_t2 v__8 = int32_t2((cse_var_25)+(1*0), (cse_var_25)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_25) = ((float2(((float*)conv1d_ncw_local)[v__8.s0],((float*)conv1d_ncw_local)[v__8.s1])) + ((float2(((float*)data_1)[v__7.s0],((float*)data_1)[v__7.s1])) * ((float2)(((float*)kernel_1)[cse_var_21], ((float*)kernel_1)[cse_var_21]))));
      int32_t2 v__9 = int32_t2((cse_var_26)+(1*0), (cse_var_26)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_26) = ((float2(((float*)conv1d_ncw_local)[v__9.s0],((float*)conv1d_ncw_local)[v__9.s1])) + ((float2(((float*)data_1)[v__7.s0],((float*)data_1)[v__7.s1])) * ((float2)(((float*)kernel_1)[cse_var_11], ((float*)kernel_1)[cse_var_11]))));
      int32_t2 v__10 = int32_t2((cse_var_27)+(1*0), (cse_var_27)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_27) = ((float2(((float*)conv1d_ncw_local)[v__10.s0],((float*)conv1d_ncw_local)[v__10.s1])) + ((float2(((float*)data_1)[v__7.s0],((float*)data_1)[v__7.s1])) * ((float2)(((float*)kernel_1)[cse_var_15], ((float*)kernel_1)[cse_var_15]))));
      int32_t2 v__11 = int32_t2((cse_var_28)+(1*0), (cse_var_28)+(1*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_28) = ((float2(((float*)conv1d_ncw_local)[v__11.s0],((float*)conv1d_ncw_local)[v__11.s1])) + ((float2(((float*)data_1)[v__7.s0],((float*)data_1)[v__7.s1])) * ((float2)(((float*)kernel_1)[cse_var_18], ((float*)kernel_1)[cse_var_18]))));
      int32_t2 v__12 = int32_t2((cse_var_2)+(2*0), (cse_var_2)+(2*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_1) = ((float2(((float*)conv1d_ncw_local)[v_.s0],((float*)conv1d_ncw_local)[v_.s1])) + ((float2(((float*)data_1)[v__12.s0],((float*)data_1)[v__12.s1])) * ((float2)(((float*)kernel_1)[cse_var_8], ((float*)kernel_1)[cse_var_8]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_29) = ((float2(((float*)conv1d_ncw_local)[v__2.s0],((float*)conv1d_ncw_local)[v__2.s1])) + ((float2(((float*)data_1)[v__12.s0],((float*)data_1)[v__12.s1])) * ((float2)(((float*)kernel_1)[cse_var_9], ((float*)kernel_1)[cse_var_9]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_30) = ((float2(((float*)conv1d_ncw_local)[v__3.s0],((float*)conv1d_ncw_local)[v__3.s1])) + ((float2(((float*)data_1)[v__12.s0],((float*)data_1)[v__12.s1])) * ((float2)(((float*)kernel_1)[cse_var_12], ((float*)kernel_1)[cse_var_12]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_22) = ((float2(((float*)conv1d_ncw_local)[v__4.s0],((float*)conv1d_ncw_local)[v__4.s1])) + ((float2(((float*)data_1)[v__12.s0],((float*)data_1)[v__12.s1])) * ((float2)(((float*)kernel_1)[cse_var_16], ((float*)kernel_1)[cse_var_16]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_23) = ((float2(((float*)conv1d_ncw_local)[v__5.s0],((float*)conv1d_ncw_local)[v__5.s1])) + ((float2(((float*)data_1)[v__12.s0],((float*)data_1)[v__12.s1])) * ((float2)(((float*)kernel_1)[cse_var_19], ((float*)kernel_1)[cse_var_19]))));
      int32_t2 v__13 = int32_t2((cse_var_5)+(2*0), (cse_var_5)+(2*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_24) = ((float2(((float*)conv1d_ncw_local)[v__6.s0],((float*)conv1d_ncw_local)[v__6.s1])) + ((float2(((float*)data_1)[v__13.s0],((float*)data_1)[v__13.s1])) * ((float2)(((float*)kernel_1)[cse_var_8], ((float*)kernel_1)[cse_var_8]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_25) = ((float2(((float*)conv1d_ncw_local)[v__8.s0],((float*)conv1d_ncw_local)[v__8.s1])) + ((float2(((float*)data_1)[v__13.s0],((float*)data_1)[v__13.s1])) * ((float2)(((float*)kernel_1)[cse_var_9], ((float*)kernel_1)[cse_var_9]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_26) = ((float2(((float*)conv1d_ncw_local)[v__9.s0],((float*)conv1d_ncw_local)[v__9.s1])) + ((float2(((float*)data_1)[v__13.s0],((float*)data_1)[v__13.s1])) * ((float2)(((float*)kernel_1)[cse_var_12], ((float*)kernel_1)[cse_var_12]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_27) = ((float2(((float*)conv1d_ncw_local)[v__10.s0],((float*)conv1d_ncw_local)[v__10.s1])) + ((float2(((float*)data_1)[v__13.s0],((float*)data_1)[v__13.s1])) * ((float2)(((float*)kernel_1)[cse_var_16], ((float*)kernel_1)[cse_var_16]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_28) = ((float2(((float*)conv1d_ncw_local)[v__11.s0],((float*)conv1d_ncw_local)[v__11.s1])) + ((float2(((float*)data_1)[v__13.s0],((float*)data_1)[v__13.s1])) * ((float2)(((float*)kernel_1)[cse_var_19], ((float*)kernel_1)[cse_var_19]))));
      int32_t2 v__14 = int32_t2((cse_var_3)+(2*0), (cse_var_3)+(2*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_1) = ((float2(((float*)conv1d_ncw_local)[v_.s0],((float*)conv1d_ncw_local)[v_.s1])) + ((float2(((float*)data_1)[v__14.s0],((float*)data_1)[v__14.s1])) * ((float2)(((float*)kernel_1)[cse_var_13], ((float*)kernel_1)[cse_var_13]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_29) = ((float2(((float*)conv1d_ncw_local)[v__2.s0],((float*)conv1d_ncw_local)[v__2.s1])) + ((float2(((float*)data_1)[v__14.s0],((float*)data_1)[v__14.s1])) * ((float2)(((float*)kernel_1)[cse_var_10], ((float*)kernel_1)[cse_var_10]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_30) = ((float2(((float*)conv1d_ncw_local)[v__3.s0],((float*)conv1d_ncw_local)[v__3.s1])) + ((float2(((float*)data_1)[v__14.s0],((float*)data_1)[v__14.s1])) * ((float2)(((float*)kernel_1)[cse_var_14], ((float*)kernel_1)[cse_var_14]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_22) = ((float2(((float*)conv1d_ncw_local)[v__4.s0],((float*)conv1d_ncw_local)[v__4.s1])) + ((float2(((float*)data_1)[v__14.s0],((float*)data_1)[v__14.s1])) * ((float2)(((float*)kernel_1)[cse_var_17], ((float*)kernel_1)[cse_var_17]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_23) = ((float2(((float*)conv1d_ncw_local)[v__5.s0],((float*)conv1d_ncw_local)[v__5.s1])) + ((float2(((float*)data_1)[v__14.s0],((float*)data_1)[v__14.s1])) * ((float2)(((float*)kernel_1)[cse_var_20], ((float*)kernel_1)[cse_var_20]))));
      int32_t2 v__15 = int32_t2((cse_var_6)+(2*0), (cse_var_6)+(2*1));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_24) = ((float2(((float*)conv1d_ncw_local)[v__6.s0],((float*)conv1d_ncw_local)[v__6.s1])) + ((float2(((float*)data_1)[v__15.s0],((float*)data_1)[v__15.s1])) * ((float2)(((float*)kernel_1)[cse_var_13], ((float*)kernel_1)[cse_var_13]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_25) = ((float2(((float*)conv1d_ncw_local)[v__8.s0],((float*)conv1d_ncw_local)[v__8.s1])) + ((float2(((float*)data_1)[v__15.s0],((float*)data_1)[v__15.s1])) * ((float2)(((float*)kernel_1)[cse_var_10], ((float*)kernel_1)[cse_var_10]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_26) = ((float2(((float*)conv1d_ncw_local)[v__9.s0],((float*)conv1d_ncw_local)[v__9.s1])) + ((float2(((float*)data_1)[v__15.s0],((float*)data_1)[v__15.s1])) * ((float2)(((float*)kernel_1)[cse_var_14], ((float*)kernel_1)[cse_var_14]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_27) = ((float2(((float*)conv1d_ncw_local)[v__10.s0],((float*)conv1d_ncw_local)[v__10.s1])) + ((float2(((float*)data_1)[v__15.s0],((float*)data_1)[v__15.s1])) * ((float2)(((float*)kernel_1)[cse_var_17], ((float*)kernel_1)[cse_var_17]))));
      *(float2*)(((float*)conv1d_ncw_local) + cse_var_28) = ((float2(((float*)conv1d_ncw_local)[v__11.s0],((float*)conv1d_ncw_local)[v__11.s1])) + ((float2(((float*)data_1)[v__15.s0],((float*)data_1)[v__15.s1])) * ((float2)(((float*)kernel_1)[cse_var_20], ((float*)kernel_1)[cse_var_20]))));
    }
  }
  for (int32_t nn_inner = 0; nn_inner < 2; ++nn_inner) {
    for (int32_t ff_inner = 0; ff_inner < 5; ++ff_inner) {
      int32_t cse_var_32 = ((nn_inner * 20) + (ff_inner * 4));
      int32_t4 v__16 = int32_t4((cse_var_32)+(1*0), (cse_var_32)+(1*1), (cse_var_32)+(1*2), (cse_var_32)+(1*3));
      *(float4*)(((float*)conv1d_ncw_1) + cse_var_32) = (float4(((float*)conv1d_ncw_local)[v__16.s0],((float*)conv1d_ncw_local)[v__16.s1],((float*)conv1d_ncw_local)[v__16.s2],((float*)conv1d_ncw_local)[v__16.s3]));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, conv1d_ncw_local) != 0) {
    return -1;
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
