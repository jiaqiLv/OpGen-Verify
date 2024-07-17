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
  int32_t T_strided_slice_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* T_strided_slice = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* T_strided_slice_1 = (((DLTensor*)T_strided_slice)[0].data);
  void* default_function_T_strided_slice_shape = (((DLTensor*)T_strided_slice)[0].shape);
  void* default_function_T_strided_slice_strides = (((DLTensor*)T_strided_slice)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_T_strided_slice_strides == NULL)) {
  }
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    void* T_reshape = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)9216, 2, 32);
    if (T_reshape == NULL) {
      return -1;
    }
    void* T_transpose = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)9216, 2, 32);
    if (T_transpose == NULL) {
      return -1;
    }
    float8 T_reshape_1[1];
    for (int32_t ax0_1 = 0; ax0_1 < 2; ++ax0_1) {
      for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
        for (int32_t ax3 = 0; ax3 < 12; ++ax3) {
          for (int32_t ax4 = 0; ax4 < 6; ++ax4) {
            ((float8*)T_reshape)[((((ax0_1 * 144) + (ax1 * 72)) + (ax3 * 6)) + ax4)] = *(float8*)(((float*)data_1) + (((((ax0_1 * 3456) + (ax1 * 1728)) + (ax0 * 576)) + (ax3 * 48)) + (ax4 * 8)));
          }
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 12; ++ax1_1) {
      for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
        for (int32_t ax3_1 = 0; ax3_1 < 6; ++ax3_1) {
          for (int32_t ax4_1 = 0; ax4_1 < 2; ++ax4_1) {
            ((float8*)T_transpose)[((((ax1_1 * 24) + (ax2 * 12)) + (ax3_1 * 2)) + ax4_1)] = ((float8*)T_reshape)[((((ax2 * 144) + (ax4_1 * 72)) + (ax1_1 * 6)) + ax3_1)];
          }
        }
      }
    }
    for (int32_t ax1_2 = 0; ax1_2 < 24; ++ax1_2) {
      for (int32_t ax2_1 = 0; ax2_1 < 12; ++ax2_1) {
        T_reshape_1[0] = ((float8*)T_transpose)[((ax1_2 * 12) + ax2_1)];
        *(float8*)(((float*)T_strided_slice_1) + (((ax0 * 2304) + (ax1_2 * 96)) + (ax2_1 * 8))) = T_reshape_1[0];
      }
    }
    if (TVMBackendFreeWorkspace(1, dev_id, T_transpose) != 0) {
      return -1;
    }
    if (TVMBackendFreeWorkspace(1, dev_id, T_reshape) != 0) {
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
