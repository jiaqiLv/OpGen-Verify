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
TVM_DLL float logf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t default_function(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  int32_t data_code = arg_type_ids[0];
  int32_t compute_code = arg_type_ids[1];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* compute = (((TVMValue*)args)[1].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* compute_1 = (((DLTensor*)compute)[0].data);
  void* default_function_compute_shape = (((DLTensor*)compute)[0].shape);
  void* default_function_compute_strides = (((DLTensor*)compute)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_compute_strides == NULL)) {
  }
  void* T_softmax_maxelem = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)7488, 2, 32);
  if (T_softmax_maxelem == NULL) {
    return -1;
  }
  void* compute_2 = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)3744, 2, 32);
  if (compute_2 == NULL) {
    return -1;
  }
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        ((float*)T_softmax_maxelem)[(((i0 * 234) + (i1 * 18)) + i2)] = -3.402823e+38f;
        for (int32_t k = 0; k < 13; ++k) {
          int32_t cse_var_1 = (((i0 * 234) + (i1 * 18)) + i2);
          float v_ = ((float*)T_softmax_maxelem)[cse_var_1];
          float v__1 = ((float*)data_1)[((((i0 * 3042) + (i1 * 234)) + (i2 * 13)) + k)];
          ((float*)T_softmax_maxelem)[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
        }
      }
    }
  }
  for (int32_t i0_outer_outer_inner = 0; i0_outer_outer_inner < 2; ++i0_outer_outer_inner) {
    for (int32_t i0_1 = 0; i0_1 < 4; ++i0_1) {
      for (int32_t i1_1 = 0; i1_1 < 13; ++i1_1) {
        for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
          ((float*)compute_2)[(((i0_1 * 234) + (i1_1 * 18)) + i2_1)] = 0.000000e+00f;
          for (int32_t k_1 = 0; k_1 < 13; ++k_1) {
            int32_t cse_var_4 = (i0_1 * 234);
            int32_t cse_var_3 = (i1_1 * 18);
            int32_t cse_var_2 = ((cse_var_4 + cse_var_3) + i2_1);
            ((float*)compute_2)[cse_var_2] = (((float*)compute_2)[cse_var_2] + expf((((float*)data_1)[(((((i0_outer_outer_inner * 12168) + (i0_1 * 3042)) + (i1_1 * 234)) + (i2_1 * 13)) + k_1)] - ((float*)T_softmax_maxelem)[((((i0_outer_outer_inner * 936) + cse_var_4) + cse_var_3) + i2_1)])));
          }
        }
      }
    }
    for (int32_t i1_outer_outer_inner = 0; i1_outer_outer_inner < 13; ++i1_outer_outer_inner) {
      for (int32_t i3_outer_outer_inner = 0; i3_outer_outer_inner < 13; ++i3_outer_outer_inner) {
        for (int32_t i0_outer_inner = 0; i0_outer_inner < 4; ++i0_outer_inner) {
          for (int32_t i2_outer_inner = 0; i2_outer_inner < 18; ++i2_outer_inner) {
            int32_t cse_var_7 = (i0_outer_inner * 234);
            int32_t cse_var_6 = (i1_outer_outer_inner * 18);
            int32_t cse_var_5 = (((((i0_outer_outer_inner * 12168) + (i0_outer_inner * 3042)) + (i1_outer_outer_inner * 234)) + (i2_outer_inner * 13)) + i3_outer_outer_inner);
            ((float*)compute_1)[cse_var_5] = ((((float*)data_1)[cse_var_5] - ((float*)T_softmax_maxelem)[((((i0_outer_outer_inner * 936) + cse_var_7) + cse_var_6) + i2_outer_inner)]) - logf(((float*)compute_2)[((cse_var_7 + cse_var_6) + i2_outer_inner)]));
          }
        }
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, compute_2) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, T_softmax_maxelem) != 0) {
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
