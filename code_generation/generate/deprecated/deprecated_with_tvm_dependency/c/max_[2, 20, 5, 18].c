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
  float data_red_rf[60];
  for (int32_t k0_k1_fused_k2_fused_k3_fused_inner_init = 0; k0_k1_fused_k2_fused_k3_fused_inner_init < 60; ++k0_k1_fused_k2_fused_k3_fused_inner_init) {
    data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner_init] = -3.402823e+38f;
  }
  for (int32_t k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 60; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    for (int32_t k0_k1_fused_k2_fused_k3_fused_inner = 0; k0_k1_fused_k2_fused_k3_fused_inner < 60; ++k0_k1_fused_k2_fused_k3_fused_inner) {
      float v_ = data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner];
      float v__1 = ((float*)data_1)[((k0_k1_fused_k2_fused_k3_fused_outer * 60) + k0_k1_fused_k2_fused_k3_fused_inner)];
      data_red_rf[k0_k1_fused_k2_fused_k3_fused_inner] = ((v_) > (v__1) ? (v_) : (v__1));
    }
  }
  ((float*)data_red_1)[0] = -3.402823e+38f;
  float v__2 = ((float*)data_red_1)[0];
  float v__3 = data_red_rf[0];
  ((float*)data_red_1)[0] = ((v__2) > (v__3) ? (v__2) : (v__3));
  float v__4 = ((float*)data_red_1)[0];
  float v__5 = data_red_rf[1];
  ((float*)data_red_1)[0] = ((v__4) > (v__5) ? (v__4) : (v__5));
  float v__6 = ((float*)data_red_1)[0];
  float v__7 = data_red_rf[2];
  ((float*)data_red_1)[0] = ((v__6) > (v__7) ? (v__6) : (v__7));
  float v__8 = ((float*)data_red_1)[0];
  float v__9 = data_red_rf[3];
  ((float*)data_red_1)[0] = ((v__8) > (v__9) ? (v__8) : (v__9));
  float v__10 = ((float*)data_red_1)[0];
  float v__11 = data_red_rf[4];
  ((float*)data_red_1)[0] = ((v__10) > (v__11) ? (v__10) : (v__11));
  float v__12 = ((float*)data_red_1)[0];
  float v__13 = data_red_rf[5];
  ((float*)data_red_1)[0] = ((v__12) > (v__13) ? (v__12) : (v__13));
  float v__14 = ((float*)data_red_1)[0];
  float v__15 = data_red_rf[6];
  ((float*)data_red_1)[0] = ((v__14) > (v__15) ? (v__14) : (v__15));
  float v__16 = ((float*)data_red_1)[0];
  float v__17 = data_red_rf[7];
  ((float*)data_red_1)[0] = ((v__16) > (v__17) ? (v__16) : (v__17));
  float v__18 = ((float*)data_red_1)[0];
  float v__19 = data_red_rf[8];
  ((float*)data_red_1)[0] = ((v__18) > (v__19) ? (v__18) : (v__19));
  float v__20 = ((float*)data_red_1)[0];
  float v__21 = data_red_rf[9];
  ((float*)data_red_1)[0] = ((v__20) > (v__21) ? (v__20) : (v__21));
  float v__22 = ((float*)data_red_1)[0];
  float v__23 = data_red_rf[10];
  ((float*)data_red_1)[0] = ((v__22) > (v__23) ? (v__22) : (v__23));
  float v__24 = ((float*)data_red_1)[0];
  float v__25 = data_red_rf[11];
  ((float*)data_red_1)[0] = ((v__24) > (v__25) ? (v__24) : (v__25));
  float v__26 = ((float*)data_red_1)[0];
  float v__27 = data_red_rf[12];
  ((float*)data_red_1)[0] = ((v__26) > (v__27) ? (v__26) : (v__27));
  float v__28 = ((float*)data_red_1)[0];
  float v__29 = data_red_rf[13];
  ((float*)data_red_1)[0] = ((v__28) > (v__29) ? (v__28) : (v__29));
  float v__30 = ((float*)data_red_1)[0];
  float v__31 = data_red_rf[14];
  ((float*)data_red_1)[0] = ((v__30) > (v__31) ? (v__30) : (v__31));
  float v__32 = ((float*)data_red_1)[0];
  float v__33 = data_red_rf[15];
  ((float*)data_red_1)[0] = ((v__32) > (v__33) ? (v__32) : (v__33));
  float v__34 = ((float*)data_red_1)[0];
  float v__35 = data_red_rf[16];
  ((float*)data_red_1)[0] = ((v__34) > (v__35) ? (v__34) : (v__35));
  float v__36 = ((float*)data_red_1)[0];
  float v__37 = data_red_rf[17];
  ((float*)data_red_1)[0] = ((v__36) > (v__37) ? (v__36) : (v__37));
  float v__38 = ((float*)data_red_1)[0];
  float v__39 = data_red_rf[18];
  ((float*)data_red_1)[0] = ((v__38) > (v__39) ? (v__38) : (v__39));
  float v__40 = ((float*)data_red_1)[0];
  float v__41 = data_red_rf[19];
  ((float*)data_red_1)[0] = ((v__40) > (v__41) ? (v__40) : (v__41));
  float v__42 = ((float*)data_red_1)[0];
  float v__43 = data_red_rf[20];
  ((float*)data_red_1)[0] = ((v__42) > (v__43) ? (v__42) : (v__43));
  float v__44 = ((float*)data_red_1)[0];
  float v__45 = data_red_rf[21];
  ((float*)data_red_1)[0] = ((v__44) > (v__45) ? (v__44) : (v__45));
  float v__46 = ((float*)data_red_1)[0];
  float v__47 = data_red_rf[22];
  ((float*)data_red_1)[0] = ((v__46) > (v__47) ? (v__46) : (v__47));
  float v__48 = ((float*)data_red_1)[0];
  float v__49 = data_red_rf[23];
  ((float*)data_red_1)[0] = ((v__48) > (v__49) ? (v__48) : (v__49));
  float v__50 = ((float*)data_red_1)[0];
  float v__51 = data_red_rf[24];
  ((float*)data_red_1)[0] = ((v__50) > (v__51) ? (v__50) : (v__51));
  float v__52 = ((float*)data_red_1)[0];
  float v__53 = data_red_rf[25];
  ((float*)data_red_1)[0] = ((v__52) > (v__53) ? (v__52) : (v__53));
  float v__54 = ((float*)data_red_1)[0];
  float v__55 = data_red_rf[26];
  ((float*)data_red_1)[0] = ((v__54) > (v__55) ? (v__54) : (v__55));
  float v__56 = ((float*)data_red_1)[0];
  float v__57 = data_red_rf[27];
  ((float*)data_red_1)[0] = ((v__56) > (v__57) ? (v__56) : (v__57));
  float v__58 = ((float*)data_red_1)[0];
  float v__59 = data_red_rf[28];
  ((float*)data_red_1)[0] = ((v__58) > (v__59) ? (v__58) : (v__59));
  float v__60 = ((float*)data_red_1)[0];
  float v__61 = data_red_rf[29];
  ((float*)data_red_1)[0] = ((v__60) > (v__61) ? (v__60) : (v__61));
  float v__62 = ((float*)data_red_1)[0];
  float v__63 = data_red_rf[30];
  ((float*)data_red_1)[0] = ((v__62) > (v__63) ? (v__62) : (v__63));
  float v__64 = ((float*)data_red_1)[0];
  float v__65 = data_red_rf[31];
  ((float*)data_red_1)[0] = ((v__64) > (v__65) ? (v__64) : (v__65));
  float v__66 = ((float*)data_red_1)[0];
  float v__67 = data_red_rf[32];
  ((float*)data_red_1)[0] = ((v__66) > (v__67) ? (v__66) : (v__67));
  float v__68 = ((float*)data_red_1)[0];
  float v__69 = data_red_rf[33];
  ((float*)data_red_1)[0] = ((v__68) > (v__69) ? (v__68) : (v__69));
  float v__70 = ((float*)data_red_1)[0];
  float v__71 = data_red_rf[34];
  ((float*)data_red_1)[0] = ((v__70) > (v__71) ? (v__70) : (v__71));
  float v__72 = ((float*)data_red_1)[0];
  float v__73 = data_red_rf[35];
  ((float*)data_red_1)[0] = ((v__72) > (v__73) ? (v__72) : (v__73));
  float v__74 = ((float*)data_red_1)[0];
  float v__75 = data_red_rf[36];
  ((float*)data_red_1)[0] = ((v__74) > (v__75) ? (v__74) : (v__75));
  float v__76 = ((float*)data_red_1)[0];
  float v__77 = data_red_rf[37];
  ((float*)data_red_1)[0] = ((v__76) > (v__77) ? (v__76) : (v__77));
  float v__78 = ((float*)data_red_1)[0];
  float v__79 = data_red_rf[38];
  ((float*)data_red_1)[0] = ((v__78) > (v__79) ? (v__78) : (v__79));
  float v__80 = ((float*)data_red_1)[0];
  float v__81 = data_red_rf[39];
  ((float*)data_red_1)[0] = ((v__80) > (v__81) ? (v__80) : (v__81));
  float v__82 = ((float*)data_red_1)[0];
  float v__83 = data_red_rf[40];
  ((float*)data_red_1)[0] = ((v__82) > (v__83) ? (v__82) : (v__83));
  float v__84 = ((float*)data_red_1)[0];
  float v__85 = data_red_rf[41];
  ((float*)data_red_1)[0] = ((v__84) > (v__85) ? (v__84) : (v__85));
  float v__86 = ((float*)data_red_1)[0];
  float v__87 = data_red_rf[42];
  ((float*)data_red_1)[0] = ((v__86) > (v__87) ? (v__86) : (v__87));
  float v__88 = ((float*)data_red_1)[0];
  float v__89 = data_red_rf[43];
  ((float*)data_red_1)[0] = ((v__88) > (v__89) ? (v__88) : (v__89));
  float v__90 = ((float*)data_red_1)[0];
  float v__91 = data_red_rf[44];
  ((float*)data_red_1)[0] = ((v__90) > (v__91) ? (v__90) : (v__91));
  float v__92 = ((float*)data_red_1)[0];
  float v__93 = data_red_rf[45];
  ((float*)data_red_1)[0] = ((v__92) > (v__93) ? (v__92) : (v__93));
  float v__94 = ((float*)data_red_1)[0];
  float v__95 = data_red_rf[46];
  ((float*)data_red_1)[0] = ((v__94) > (v__95) ? (v__94) : (v__95));
  float v__96 = ((float*)data_red_1)[0];
  float v__97 = data_red_rf[47];
  ((float*)data_red_1)[0] = ((v__96) > (v__97) ? (v__96) : (v__97));
  float v__98 = ((float*)data_red_1)[0];
  float v__99 = data_red_rf[48];
  ((float*)data_red_1)[0] = ((v__98) > (v__99) ? (v__98) : (v__99));
  float v__100 = ((float*)data_red_1)[0];
  float v__101 = data_red_rf[49];
  ((float*)data_red_1)[0] = ((v__100) > (v__101) ? (v__100) : (v__101));
  float v__102 = ((float*)data_red_1)[0];
  float v__103 = data_red_rf[50];
  ((float*)data_red_1)[0] = ((v__102) > (v__103) ? (v__102) : (v__103));
  float v__104 = ((float*)data_red_1)[0];
  float v__105 = data_red_rf[51];
  ((float*)data_red_1)[0] = ((v__104) > (v__105) ? (v__104) : (v__105));
  float v__106 = ((float*)data_red_1)[0];
  float v__107 = data_red_rf[52];
  ((float*)data_red_1)[0] = ((v__106) > (v__107) ? (v__106) : (v__107));
  float v__108 = ((float*)data_red_1)[0];
  float v__109 = data_red_rf[53];
  ((float*)data_red_1)[0] = ((v__108) > (v__109) ? (v__108) : (v__109));
  float v__110 = ((float*)data_red_1)[0];
  float v__111 = data_red_rf[54];
  ((float*)data_red_1)[0] = ((v__110) > (v__111) ? (v__110) : (v__111));
  float v__112 = ((float*)data_red_1)[0];
  float v__113 = data_red_rf[55];
  ((float*)data_red_1)[0] = ((v__112) > (v__113) ? (v__112) : (v__113));
  float v__114 = ((float*)data_red_1)[0];
  float v__115 = data_red_rf[56];
  ((float*)data_red_1)[0] = ((v__114) > (v__115) ? (v__114) : (v__115));
  float v__116 = ((float*)data_red_1)[0];
  float v__117 = data_red_rf[57];
  ((float*)data_red_1)[0] = ((v__116) > (v__117) ? (v__116) : (v__117));
  float v__118 = ((float*)data_red_1)[0];
  float v__119 = data_red_rf[58];
  ((float*)data_red_1)[0] = ((v__118) > (v__119) ? (v__118) : (v__119));
  float v__120 = ((float*)data_red_1)[0];
  float v__121 = data_red_rf[59];
  ((float*)data_red_1)[0] = ((v__120) > (v__121) ? (v__120) : (v__121));
  return 0;
}

// CodegenC: NOTE: Auto-generated entry function
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_main__(void* args, int* arg_type_ids, int num_args, void* out_ret_value, int* out_ret_tcode, void* resource_handle) {
  return default_function(args, arg_type_ids, num_args, out_ret_value, out_ret_tcode, resource_handle);
}
