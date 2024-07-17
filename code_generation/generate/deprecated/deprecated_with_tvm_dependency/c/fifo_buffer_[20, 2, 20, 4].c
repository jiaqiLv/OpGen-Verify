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
  int32_t buffer_code = arg_type_ids[1];
  int32_t new_buffer_code = arg_type_ids[2];
  void* data = (((TVMValue*)args)[0].v_handle);
  void* buffer = (((TVMValue*)args)[1].v_handle);
  void* new_buffer = (((TVMValue*)args)[2].v_handle);
  void* data_1 = (((DLTensor*)data)[0].data);
  void* default_function_data_shape = (((DLTensor*)data)[0].shape);
  void* default_function_data_strides = (((DLTensor*)data)[0].strides);
  int32_t dev_id = (((DLTensor*)data)[0].device.device_id);
  void* buffer_1 = (((DLTensor*)buffer)[0].data);
  void* default_function_buffer_shape = (((DLTensor*)buffer)[0].shape);
  void* default_function_buffer_strides = (((DLTensor*)buffer)[0].strides);
  void* new_buffer_1 = (((DLTensor*)new_buffer)[0].data);
  void* default_function_new_buffer_shape = (((DLTensor*)new_buffer)[0].shape);
  void* default_function_new_buffer_strides = (((DLTensor*)new_buffer)[0].strides);
  if (!(default_function_data_strides == NULL)) {
  }
  if (!(default_function_buffer_strides == NULL)) {
  }
  if (!(default_function_new_buffer_strides == NULL)) {
  }
  for (int32_t i = 0; i < 20; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t k = 0; k < 20; ++k) {
        for (int32_t l = 0; l < 4; ++l) {
          int32_t cse_var_1 = ((((i * 160) + (j * 80)) + (k * 4)) + l);
          ((float*)new_buffer_1)[cse_var_1] = ((float*)data_1)[cse_var_1];
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
