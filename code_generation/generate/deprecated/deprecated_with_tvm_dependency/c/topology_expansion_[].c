; ModuleID = 'TVMMod'
source_filename = "TVMMod"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%0 = type { double }
%1 = type { i8*, %2, i32, %3, i64*, i64*, i64 }
%2 = type { i32, i32 }
%3 = type { i8, i8, i16 }

@__tvm_module_ctx = linkonce dllexport local_unnamed_addr global i8* null, align 8
@__TVMFuncCall = linkonce dllexport local_unnamed_addr global i32 (i8*, %0*, i32*, i32, %0*, i32*)* null, align 8
@__TVMBackendGetFuncFromEnv = linkonce dllexport local_unnamed_addr global i32 (i8*, i8*, i8**)* null, align 8
@__TVMAPISetLastError = linkonce dllexport local_unnamed_addr global void (i8*)* null, align 8
@.str = private constant [67 x i8] c"Assert fail: num_args == 2, default_function: num_args should be 2\00", align 1
@.str.1 = private constant [130 x i8] c"Assert fail: ph_0_code == 3 or ph_0_code == 13 or ph_0_code == 7 or ph_0_code == 4, default_function: Expect arg[0] to be pointer\00", align 1
@.str.2 = private constant [142 x i8] c"Assert fail: compute_code == 3 or compute_code == 13 or compute_code == 7 or compute_code == 4, default_function: Expect arg[1] to be pointer\00", align 1
@.str.3 = private constant [107 x i8] c"Assert fail: 3 == T.tvm_struct_get(ph_0, 0, 4, \22int32\22), default_function.ph_0.ndim is expected to equal 3\00", align 1
@.str.4 = private constant [235 x i8] c"Assert fail: T.tvm_struct_get(ph_0, 0, 5, \22uint8\22) == T.uint8(2) and T.tvm_struct_get(ph_0, 0, 6, \22uint8\22) == T.uint8(32) and T.tvm_struct_get(ph_0, 0, 7, \22uint16\22) == T.uint16(1), default_function.ph_0.dtype is expected to be float32\00", align 1
@.str.5 = private constant [193 x i8] c"Assert fail: T.Cast(\22int32\22, default_function_ph_0_shape[0]) == 20, Argument default_function.ph_0.shape[0] has an unsatisfied constraint: 20 == T.Cast(\22int32\22, default_function_ph_0_shape[0])\00", align 1
@.str.6 = private constant [191 x i8] c"Assert fail: T.Cast(\22int32\22, default_function_ph_0_shape[1]) == 3, Argument default_function.ph_0.shape[1] has an unsatisfied constraint: 3 == T.Cast(\22int32\22, default_function_ph_0_shape[1])\00", align 1
@.str.7 = private constant [191 x i8] c"Assert fail: T.Cast(\22int32\22, default_function_ph_0_shape[2]) == 8, Argument default_function.ph_0.shape[2] has an unsatisfied constraint: 8 == T.Cast(\22int32\22, default_function_ph_0_shape[2])\00", align 1
@.str.8 = private constant [248 x i8] c"Assert fail: 1 == T.Cast(\22int32\22, default_function_ph_0_strides[2]) and 8 == T.Cast(\22int32\22, default_function_ph_0_strides[1]) and 24 == T.Cast(\22int32\22, default_function_ph_0_strides[0]), default_function.ph_0.strides: expected to be compact array\00", align 1
@.str.9 = private constant [196 x i8] c"Assert fail: T.uint64(0) == T.tvm_struct_get(ph_0, 0, 8, \22uint64\22), Argument default_function.ph_0.byte_offset has an unsatisfied constraint: T.uint64(0) == T.tvm_struct_get(ph_0, 0, 8, \22uint64\22)\00", align 1
@.str.10 = private constant [176 x i8] c"Assert fail: T.tvm_struct_get(ph_0, 0, 10, \22int32\22) == 1, Argument default_function.ph_0.device_type has an unsatisfied constraint: 1 == T.tvm_struct_get(ph_0, 0, 10, \22int32\22)\00", align 1
@.str.11 = private constant [113 x i8] c"Assert fail: 3 == T.tvm_struct_get(compute, 0, 4, \22int32\22), default_function.compute.ndim is expected to equal 3\00", align 1
@.str.12 = private constant [247 x i8] c"Assert fail: T.tvm_struct_get(compute, 0, 5, \22uint8\22) == T.uint8(2) and T.tvm_struct_get(compute, 0, 6, \22uint8\22) == T.uint8(32) and T.tvm_struct_get(compute, 0, 7, \22uint16\22) == T.uint16(1), default_function.compute.dtype is expected to be float32\00", align 1
@.str.13 = private constant [202 x i8] c"Assert fail: T.Cast(\22int32\22, default_function_compute_shape[0]) == 20, Argument default_function.compute.shape[0] has an unsatisfied constraint: 20 == T.Cast(\22int32\22, default_function_compute_shape[0])\00", align 1
@.str.14 = private constant [200 x i8] c"Assert fail: T.Cast(\22int32\22, default_function_compute_shape[1]) == 3, Argument default_function.compute.shape[1] has an unsatisfied constraint: 3 == T.Cast(\22int32\22, default_function_compute_shape[1])\00", align 1
@.str.15 = private constant [200 x i8] c"Assert fail: T.Cast(\22int32\22, default_function_compute_shape[2]) == 8, Argument default_function.compute.shape[2] has an unsatisfied constraint: 8 == T.Cast(\22int32\22, default_function_compute_shape[2])\00", align 1
@.str.16 = private constant [260 x i8] c"Assert fail: 1 == T.Cast(\22int32\22, default_function_compute_strides[2]) and 8 == T.Cast(\22int32\22, default_function_compute_strides[1]) and 24 == T.Cast(\22int32\22, default_function_compute_strides[0]), default_function.compute.strides: expected to be compact array\00", align 1
@.str.17 = private constant [205 x i8] c"Assert fail: T.uint64(0) == T.tvm_struct_get(compute, 0, 8, \22uint64\22), Argument default_function.compute.byte_offset has an unsatisfied constraint: T.uint64(0) == T.tvm_struct_get(compute, 0, 8, \22uint64\22)\00", align 1
@.str.18 = private constant [185 x i8] c"Assert fail: T.tvm_struct_get(compute, 0, 10, \22int32\22) == 1, Argument default_function.compute.device_type has an unsatisfied constraint: 1 == T.tvm_struct_get(compute, 0, 10, \22int32\22)\00", align 1
@.str.19 = private constant [191 x i8] c"Assert fail: dev_id == T.tvm_struct_get(compute, 0, 9, \22int32\22), Argument default_function.compute.device_id has an unsatisfied constraint: dev_id == T.tvm_struct_get(compute, 0, 9, \22int32\22)\00", align 1
@.tvm_func.default_function_kernel = internal unnamed_addr global i8* null, align 8
@.str.20 = private constant [24 x i8] c"default_function_kernel\00", align 1
@.str.21 = private constant [68 x i8] c"Assert fail: kernel_error_code == 0, Error executing compute kernel\00", align 1
@__tvm_main__ = weak dllexport local_unnamed_addr constant [17 x i8] c"default_function\00", align 1
@llvm.global_ctors = appending global [0 x { i32, void ()*, i8* }] zeroinitializer

define dllexport i32 @default_function(i8* noalias nocapture readonly %args, i32* noalias nocapture readonly %arg_type_ids, i32 %num_args, i8* noalias nocapture readnone %out_ret_value, i32* noalias nocapture readnone %out_ret_tcode, i8* noalias nocapture readnone %resource_handle) local_unnamed_addr #0 !dbg !5 {
entry:
  call void @llvm.dbg.value(metadata i8* %args, metadata !12, metadata !DIExpression()), !dbg !18
  call void @llvm.dbg.value(metadata i32* %arg_type_ids, metadata !13, metadata !DIExpression()), !dbg !18
  call void @llvm.dbg.value(metadata i32 %num_args, metadata !14, metadata !DIExpression()), !dbg !18
  call void @llvm.dbg.value(metadata i8* %out_ret_value, metadata !15, metadata !DIExpression()), !dbg !18
  call void @llvm.dbg.value(metadata i32* %out_ret_tcode, metadata !16, metadata !DIExpression()), !dbg !18
  call void @llvm.dbg.value(metadata i8* %resource_handle, metadata !17, metadata !DIExpression()), !dbg !18
  %stack_value_void_ptr52 = alloca [3 x %0], align 8, !dbg !18
  %stack_tcode53 = alloca [3 x i32], align 4, !dbg !18
  %stack_tcode53.sub = getelementptr inbounds [3 x i32], [3 x i32]* %stack_tcode53, i64 0, i64 0
  %stack_value = bitcast [3 x %0]* %stack_value_void_ptr52 to i8*, !dbg !18
  %0 = icmp eq i32 %num_args, 2, !dbg !18
  br i1 %0, label %assert_end, label %assert_fail, !dbg !18, !prof !19

assert_fail:                                      ; preds = %entry
  %1 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %1(i8* getelementptr inbounds ([67 x i8], [67 x i8]* @.str, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end:                                       ; preds = %entry
  %ph_0.code = load i32, i32* %arg_type_ids, align 4, !dbg !18, !tbaa !23
  %2 = getelementptr inbounds i32, i32* %arg_type_ids, i64 1, !dbg !18
  %compute.code = load i32, i32* %2, align 4, !dbg !18, !tbaa !34
  %3 = bitcast i8* %args to %1**, !dbg !18
  %ph_054 = load %1*, %1** %3, align 8, !dbg !18
  %4 = getelementptr inbounds i8, i8* %args, i64 8, !dbg !18
  %5 = bitcast i8* %4 to %1**, !dbg !18
  %compute55 = load %1*, %1** %5, align 8, !dbg !18
  %6 = bitcast %1* %ph_054 to float**, !dbg !18
  %ph_0_void_ptr56 = load float*, float** %6, align 8, !dbg !18
  %ptrint = ptrtoint float* %ph_0_void_ptr56 to i64, !dbg !18
  %maskedptr = and i64 %ptrint, 63, !dbg !18
  %maskcond = icmp eq i64 %maskedptr, 0, !dbg !18
  tail call void @llvm.assume(i1 %maskcond), !dbg !18
  %7 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 4, !dbg !18
  %default_function.ph_0.shape = load i64*, i64** %7, align 8, !dbg !18
  %8 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 5, !dbg !18
  %default_function.ph_0.strides = load i64*, i64** %8, align 8, !dbg !18
  %9 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 1, i32 1, !dbg !18
  %dev_id = load i32, i32* %9, align 4, !dbg !18
  %10 = bitcast %1* %compute55 to float**, !dbg !18
  %compute_void_ptr57 = load float*, float** %10, align 8, !dbg !18
  %ptrint3 = ptrtoint float* %compute_void_ptr57 to i64, !dbg !18
  %maskedptr4 = and i64 %ptrint3, 63, !dbg !18
  %maskcond5 = icmp eq i64 %maskedptr4, 0, !dbg !18
  tail call void @llvm.assume(i1 %maskcond5), !dbg !18
  %11 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 4, !dbg !18
  %default_function.compute.shape = load i64*, i64** %11, align 8, !dbg !18
  %12 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 5, !dbg !18
  %default_function.compute.strides = load i64*, i64** %12, align 8, !dbg !18
  switch i32 %ph_0.code, label %assert_fail6 [
    i32 13, label %assert_end7
    i32 7, label %assert_end7
    i32 4, label %assert_end7
    i32 3, label %assert_end7
  ], !dbg !18

assert_fail6:                                     ; preds = %assert_end
  %13 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %13(i8* getelementptr inbounds ([130 x i8], [130 x i8]* @.str.1, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end7:                                      ; preds = %assert_end, %assert_end, %assert_end, %assert_end
  switch i32 %compute.code, label %assert_fail8 [
    i32 13, label %assert_end9
    i32 7, label %assert_end9
    i32 4, label %assert_end9
    i32 3, label %assert_end9
  ], !dbg !18

assert_fail8:                                     ; preds = %assert_end7
  %14 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %14(i8* getelementptr inbounds ([142 x i8], [142 x i8]* @.str.2, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end9:                                      ; preds = %assert_end7, %assert_end7, %assert_end7, %assert_end7
  %15 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 2, !dbg !18
  %16 = load i32, i32* %15, align 4, !dbg !18
  %17 = icmp eq i32 %16, 3, !dbg !18
  br i1 %17, label %assert_end13, label %assert_fail10, !dbg !18, !prof !19

assert_fail10:                                    ; preds = %assert_end9
  %18 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %18(i8* getelementptr inbounds ([107 x i8], [107 x i8]* @.str.3, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end13:                                     ; preds = %assert_end9
  %19 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 3, i32 2, !dbg !18
  %20 = load i16, i16* %19, align 2, !dbg !18
  %21 = icmp eq i16 %20, 1, !dbg !18
  %22 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 3, i32 1, !dbg !18
  %23 = load i8, i8* %22, align 1, !dbg !18
  %24 = icmp eq i8 %23, 32, !dbg !18
  %25 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 3, i32 0, !dbg !18
  %26 = load i8, i8* %25, align 1, !dbg !18
  %27 = icmp eq i8 %26, 2, !dbg !18
  %28 = and i1 %24, %27, !dbg !18
  %29 = and i1 %21, %28, !dbg !18
  br i1 %29, label %assert_end15, label %assert_fail14, !dbg !18, !prof !19

assert_fail14:                                    ; preds = %assert_end13
  %30 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %30(i8* getelementptr inbounds ([235 x i8], [235 x i8]* @.str.4, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end15:                                     ; preds = %assert_end13
  %31 = load i64, i64* %default_function.ph_0.shape, align 8, !dbg !18, !tbaa !36
  %32 = trunc i64 %31 to i32, !dbg !18
  %33 = icmp eq i32 %32, 20, !dbg !18
  br i1 %33, label %assert_end17, label %assert_fail16, !dbg !18, !prof !19

assert_fail16:                                    ; preds = %assert_end15
  %34 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %34(i8* getelementptr inbounds ([193 x i8], [193 x i8]* @.str.5, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end17:                                     ; preds = %assert_end15
  %35 = getelementptr inbounds i64, i64* %default_function.ph_0.shape, i64 1, !dbg !18
  %36 = load i64, i64* %35, align 8, !dbg !18, !tbaa !46
  %37 = trunc i64 %36 to i32, !dbg !18
  %38 = icmp eq i32 %37, 3, !dbg !18
  br i1 %38, label %assert_end19, label %assert_fail18, !dbg !18, !prof !19

assert_fail18:                                    ; preds = %assert_end17
  %39 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %39(i8* getelementptr inbounds ([191 x i8], [191 x i8]* @.str.6, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end19:                                     ; preds = %assert_end17
  %40 = getelementptr inbounds i64, i64* %default_function.ph_0.shape, i64 2, !dbg !18
  %41 = load i64, i64* %40, align 8, !dbg !18, !tbaa !48
  %42 = trunc i64 %41 to i32, !dbg !18
  %43 = icmp eq i32 %42, 8, !dbg !18
  br i1 %43, label %assert_end21, label %assert_fail20, !dbg !18, !prof !19

assert_fail20:                                    ; preds = %assert_end19
  %44 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %44(i8* getelementptr inbounds ([191 x i8], [191 x i8]* @.str.7, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end21:                                     ; preds = %assert_end19
  %45 = icmp eq i64* %default_function.ph_0.strides, null, !dbg !18
  br i1 %45, label %if_end, label %if_then, !dbg !18, !prof !51

if_then:                                          ; preds = %assert_end21
  %46 = load i64, i64* %default_function.ph_0.strides, align 8, !dbg !18, !tbaa !52
  %47 = trunc i64 %46 to i32, !dbg !18
  %48 = icmp eq i32 %47, 24, !dbg !18
  %49 = getelementptr inbounds i64, i64* %default_function.ph_0.strides, i64 1, !dbg !18
  %50 = load i64, i64* %49, align 8, !dbg !18, !tbaa !62
  %51 = trunc i64 %50 to i32, !dbg !18
  %52 = icmp eq i32 %51, 8, !dbg !18
  %53 = getelementptr inbounds i64, i64* %default_function.ph_0.strides, i64 2, !dbg !18
  %54 = load i64, i64* %53, align 8, !dbg !18, !tbaa !64
  %55 = trunc i64 %54 to i32, !dbg !18
  %56 = icmp eq i32 %55, 1, !dbg !18
  %57 = and i1 %52, %56, !dbg !18
  %58 = and i1 %48, %57, !dbg !18
  br i1 %58, label %if_end, label %assert_fail22, !dbg !18, !prof !19

if_end:                                           ; preds = %assert_end21, %if_then
  %59 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 6, !dbg !18
  %60 = load i64, i64* %59, align 8, !dbg !18
  %61 = icmp eq i64 %60, 0, !dbg !18
  br i1 %61, label %assert_end25, label %assert_fail24, !dbg !18, !prof !19

assert_fail22:                                    ; preds = %if_then
  %62 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %62(i8* getelementptr inbounds ([248 x i8], [248 x i8]* @.str.8, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_fail24:                                    ; preds = %if_end
  %63 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %63(i8* getelementptr inbounds ([196 x i8], [196 x i8]* @.str.9, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end25:                                     ; preds = %if_end
  %64 = getelementptr inbounds %1, %1* %ph_054, i64 0, i32 1, i32 0, !dbg !18
  %65 = load i32, i32* %64, align 4, !dbg !18
  %66 = icmp eq i32 %65, 1, !dbg !18
  br i1 %66, label %assert_end27, label %assert_fail26, !dbg !18, !prof !19

assert_fail26:                                    ; preds = %assert_end25
  %67 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %67(i8* getelementptr inbounds ([176 x i8], [176 x i8]* @.str.10, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end27:                                     ; preds = %assert_end25
  %68 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 2, !dbg !18
  %69 = load i32, i32* %68, align 4, !dbg !18
  %70 = icmp eq i32 %69, 3, !dbg !18
  br i1 %70, label %assert_end31, label %assert_fail28, !dbg !18, !prof !19

assert_fail28:                                    ; preds = %assert_end27
  %71 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %71(i8* getelementptr inbounds ([113 x i8], [113 x i8]* @.str.11, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end31:                                     ; preds = %assert_end27
  %72 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 3, i32 2, !dbg !18
  %73 = load i16, i16* %72, align 2, !dbg !18
  %74 = icmp eq i16 %73, 1, !dbg !18
  %75 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 3, i32 1, !dbg !18
  %76 = load i8, i8* %75, align 1, !dbg !18
  %77 = icmp eq i8 %76, 32, !dbg !18
  %78 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 3, i32 0, !dbg !18
  %79 = load i8, i8* %78, align 1, !dbg !18
  %80 = icmp eq i8 %79, 2, !dbg !18
  %81 = and i1 %77, %80, !dbg !18
  %82 = and i1 %74, %81, !dbg !18
  br i1 %82, label %assert_end33, label %assert_fail32, !dbg !18, !prof !19

assert_fail32:                                    ; preds = %assert_end31
  %83 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %83(i8* getelementptr inbounds ([247 x i8], [247 x i8]* @.str.12, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end33:                                     ; preds = %assert_end31
  %84 = load i64, i64* %default_function.compute.shape, align 8, !dbg !18, !tbaa !67
  %85 = trunc i64 %84 to i32, !dbg !18
  %86 = icmp eq i32 %85, 20, !dbg !18
  br i1 %86, label %assert_end35, label %assert_fail34, !dbg !18, !prof !19

assert_fail34:                                    ; preds = %assert_end33
  %87 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %87(i8* getelementptr inbounds ([202 x i8], [202 x i8]* @.str.13, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end35:                                     ; preds = %assert_end33
  %88 = getelementptr inbounds i64, i64* %default_function.compute.shape, i64 1, !dbg !18
  %89 = load i64, i64* %88, align 8, !dbg !18, !tbaa !77
  %90 = trunc i64 %89 to i32, !dbg !18
  %91 = icmp eq i32 %90, 3, !dbg !18
  br i1 %91, label %assert_end37, label %assert_fail36, !dbg !18, !prof !19

assert_fail36:                                    ; preds = %assert_end35
  %92 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %92(i8* getelementptr inbounds ([200 x i8], [200 x i8]* @.str.14, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end37:                                     ; preds = %assert_end35
  %93 = getelementptr inbounds i64, i64* %default_function.compute.shape, i64 2, !dbg !18
  %94 = load i64, i64* %93, align 8, !dbg !18, !tbaa !79
  %95 = trunc i64 %94 to i32, !dbg !18
  %96 = icmp eq i32 %95, 8, !dbg !18
  br i1 %96, label %assert_end39, label %assert_fail38, !dbg !18, !prof !19

assert_fail38:                                    ; preds = %assert_end37
  %97 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %97(i8* getelementptr inbounds ([200 x i8], [200 x i8]* @.str.15, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end39:                                     ; preds = %assert_end37
  %98 = icmp eq i64* %default_function.compute.strides, null, !dbg !18
  br i1 %98, label %if_end41, label %if_then40, !dbg !18, !prof !51

if_then40:                                        ; preds = %assert_end39
  %99 = load i64, i64* %default_function.compute.strides, align 8, !dbg !18, !tbaa !82
  %100 = trunc i64 %99 to i32, !dbg !18
  %101 = icmp eq i32 %100, 24, !dbg !18
  %102 = getelementptr inbounds i64, i64* %default_function.compute.strides, i64 1, !dbg !18
  %103 = load i64, i64* %102, align 8, !dbg !18, !tbaa !92
  %104 = trunc i64 %103 to i32, !dbg !18
  %105 = icmp eq i32 %104, 8, !dbg !18
  %106 = getelementptr inbounds i64, i64* %default_function.compute.strides, i64 2, !dbg !18
  %107 = load i64, i64* %106, align 8, !dbg !18, !tbaa !94
  %108 = trunc i64 %107 to i32, !dbg !18
  %109 = icmp eq i32 %108, 1, !dbg !18
  %110 = and i1 %105, %109, !dbg !18
  %111 = and i1 %101, %110, !dbg !18
  br i1 %111, label %if_end41, label %assert_fail42, !dbg !18, !prof !19

if_end41:                                         ; preds = %assert_end39, %if_then40
  %112 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 6, !dbg !18
  %113 = load i64, i64* %112, align 8, !dbg !18
  %114 = icmp eq i64 %113, 0, !dbg !18
  br i1 %114, label %assert_end45, label %assert_fail44, !dbg !18, !prof !19

assert_fail42:                                    ; preds = %if_then40
  %115 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %115(i8* getelementptr inbounds ([260 x i8], [260 x i8]* @.str.16, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_fail44:                                    ; preds = %if_end41
  %116 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %116(i8* getelementptr inbounds ([205 x i8], [205 x i8]* @.str.17, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end45:                                     ; preds = %if_end41
  %117 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 1, i32 0, !dbg !18
  %118 = load i32, i32* %117, align 4, !dbg !18
  %119 = icmp eq i32 %118, 1, !dbg !18
  br i1 %119, label %assert_end47, label %assert_fail46, !dbg !18, !prof !19

assert_fail46:                                    ; preds = %assert_end45
  %120 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %120(i8* getelementptr inbounds ([185 x i8], [185 x i8]* @.str.18, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end47:                                     ; preds = %assert_end45
  %121 = getelementptr inbounds %1, %1* %compute55, i64 0, i32 1, i32 1, !dbg !18
  %122 = load i32, i32* %121, align 4, !dbg !18
  %123 = icmp eq i32 %dev_id, %122, !dbg !18
  br i1 %123, label %assert_end49, label %assert_fail48, !dbg !18, !prof !19

assert_fail48:                                    ; preds = %assert_end47
  %124 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !18, !tbaa !20
  tail call void %124(i8* getelementptr inbounds ([191 x i8], [191 x i8]* @.str.19, i64 0, i64 0)), !dbg !18
  ret i32 -1, !dbg !18

assert_end49:                                     ; preds = %assert_end47
  %125 = call fastcc i32 @default_function_compute_(i8* nonnull %stack_value, float* %compute_void_ptr57, i32* nonnull %stack_tcode53.sub, float* %ph_0_void_ptr56), !dbg !18
  ret i32 %125, !dbg !18
}

; Function Attrs: nounwind willreturn
declare void @llvm.assume(i1) #1

; Function Attrs: noinline
define internal fastcc i32 @default_function_compute_(i8* noalias %0, float* noalias align 64 %1, i32* noalias %2, float* noalias align 64 %3) unnamed_addr #2 {
entry:
  %4 = alloca i8*, align 8
  %5 = bitcast i8* %0 to %0*
  %6 = bitcast i8* %0 to float**
  store float* %1, float** %6, align 8
  store i32 3, i32* %2, align 4, !tbaa !97
  %7 = getelementptr inbounds i8, i8* %0, i64 8
  %8 = bitcast i8* %7 to float**
  store float* %3, float** %8, align 8
  %9 = getelementptr inbounds i32, i32* %2, i64 1
  store i32 3, i32* %9, align 4, !tbaa !108
  %10 = getelementptr inbounds i8, i8* %0, i64 16
  %11 = bitcast i8* %10 to %0*
  %12 = getelementptr inbounds i32, i32* %2, i64 2
  %13 = load i32 (i8*, %0*, i32*, i32, %0*, i32*)*, i32 (i8*, %0*, i32*, i32, %0*, i32*)** @__TVMFuncCall, align 8, !tbaa !20
  %14 = load i8*, i8** @.tvm_func.default_function_kernel, align 8
  %15 = icmp eq i8* %14, null
  br i1 %15, label %handle_init, label %handle_init_end, !prof !51

handle_init:                                      ; preds = %entry
  %16 = load i8*, i8** @__tvm_module_ctx, align 8, !tbaa !20
  %17 = load i32 (i8*, i8*, i8**)*, i32 (i8*, i8*, i8**)** @__TVMBackendGetFuncFromEnv, align 8, !tbaa !20
  %18 = call i32 %17(i8* %16, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @.str.20, i64 0, i64 0), i8** nonnull %4)
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %call_end, label %call_fail, !prof !19

handle_init_end:                                  ; preds = %entry, %call_end
  %20 = phi i8* [ %14, %entry ], [ %23, %call_end ]
  %21 = call i32 %13(i8* %20, %0* %5, i32* nonnull %2, i32 2, %0* nonnull %11, i32* nonnull %12)
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %call_end2, label %call_fail, !prof !19

call_fail:                                        ; preds = %call_end2, %handle_init_end, %handle_init
  %merge = phi i32 [ %18, %handle_init ], [ %21, %handle_init_end ], [ 0, %call_end2 ]
  ret i32 %merge

call_end:                                         ; preds = %handle_init
  %23 = load i8*, i8** %4, align 8
  store i8* %23, i8** @.tvm_func.default_function_kernel, align 8
  br label %handle_init_end

call_end2:                                        ; preds = %handle_init_end
  %24 = bitcast i8* %10 to i64*
  %25 = load i64, i64* %24, align 8
  %kernel_error_code = trunc i64 %25 to i32
  %26 = icmp eq i32 %kernel_error_code, 0
  br i1 %26, label %call_fail, label %assert_fail, !prof !19

assert_fail:                                      ; preds = %call_end2
  %27 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !tbaa !20
  call void %27(i8* getelementptr inbounds ([68 x i8], [68 x i8]* @.str.21, i64 0, i64 0))
  ret i32 -1
}

; Function Attrs: nounwind readnone
define weak dso_local i16 @__truncsfhf2(float %a0) local_unnamed_addr #3 section ".text.tvm.fp16.conv" {
b0:
  %v0 = bitcast float %a0 to i32
  %v1 = and i32 %v0, 2147483647
  %v2 = add nsw i32 %v1, -947912704
  %v3 = add nsw i32 %v1, -1199570944
  %v4 = icmp ult i32 %v2, %v3
  br i1 %v4, label %b1, label %b5

b1:                                               ; preds = %b0
  %v5 = lshr i32 %v0, 13
  %v6 = and i32 %v5, 65535
  %v7 = add nuw nsw i32 %v6, -114688
  %v8 = and i32 %v0, 8191
  %v9 = icmp ugt i32 %v8, 4096
  br i1 %v9, label %b2, label %b3

b2:                                               ; preds = %b1
  %v10 = add nuw nsw i32 %v6, -114687
  br label %b13

b3:                                               ; preds = %b1
  %v11 = icmp eq i32 %v8, 4096
  br i1 %v11, label %b4, label %b13

b4:                                               ; preds = %b3
  %v12 = and i32 %v7, 65535
  %v13 = and i32 %v5, 1
  %v14 = add nuw nsw i32 %v12, %v13
  br label %b13

b5:                                               ; preds = %b0
  %v15 = icmp ugt i32 %v1, 2139095040
  br i1 %v15, label %b6, label %b7

b6:                                               ; preds = %b5
  %v16 = lshr i32 %v0, 13
  %v17 = and i32 %v16, 511
  %v18 = or i32 %v17, 32256
  br label %b13

b7:                                               ; preds = %b5
  %v19 = icmp ugt i32 %v1, 1199570943
  br i1 %v19, label %b13, label %b8

b8:                                               ; preds = %b7
  %v20 = icmp ult i32 %v1, 754974720
  br i1 %v20, label %b13, label %b9

b9:                                               ; preds = %b8
  %v21 = lshr i32 %v1, 23
  %v22 = sub nsw i32 113, %v21
  %v23 = and i32 %v0, 8388607
  %v24 = or i32 %v23, 8388608
  %v25 = add nsw i32 %v21, -81
  %v26 = shl i32 %v24, %v25
  %v27 = icmp ne i32 %v26, 0
  %v28 = lshr i32 %v24, %v22
  %v29 = zext i1 %v27 to i32
  %v30 = lshr i32 %v28, 13
  %v31 = and i32 %v28, 8191
  %v32 = or i32 %v31, %v29
  %v33 = icmp ugt i32 %v32, 4096
  br i1 %v33, label %b10, label %b11

b10:                                              ; preds = %b9
  %v34 = add nuw nsw i32 %v30, 1
  br label %b13

b11:                                              ; preds = %b9
  %v35 = icmp eq i32 %v32, 4096
  br i1 %v35, label %b12, label %b13

b12:                                              ; preds = %b11
  %v36 = and i32 %v30, 1
  %v37 = add nuw nsw i32 %v36, %v30
  br label %b13

b13:                                              ; preds = %b12, %b11, %b10, %b8, %b7, %b6, %b4, %b3, %b2
  %v38 = phi i32 [ %v18, %b6 ], [ %v10, %b2 ], [ %v14, %b4 ], [ %v7, %b3 ], [ 31744, %b7 ], [ 0, %b8 ], [ %v34, %b10 ], [ %v37, %b12 ], [ %v30, %b11 ]
  %v39 = lshr i32 %v0, 16
  %v40 = and i32 %v39, 32768
  %v41 = or i32 %v38, %v40
  %vlast = trunc i32 %v41 to i16
  ret i16 %vlast
}

; Function Attrs: nounwind readnone
define weak dso_local float @__extendhfsf2(i16 %a0) local_unnamed_addr #3 section ".text.tvm.fp16.conv" {
b0:
  %v1 = and i16 %a0, 32767
  %v2 = zext i16 %v1 to i32
  %v3 = add nsw i16 %v1, -1024
  %v4 = icmp ult i16 %v3, 30720
  br i1 %v4, label %b1, label %b2

b1:                                               ; preds = %b0
  %v5 = shl nuw nsw i32 %v2, 13
  %v6 = add nuw nsw i32 %v5, 939524096
  br label %b6

b2:                                               ; preds = %b0
  %v7 = icmp ugt i16 %v1, 31743
  br i1 %v7, label %b3, label %b4

b3:                                               ; preds = %b2
  %v8 = shl nuw nsw i32 %v2, 13
  %v9 = or i32 %v8, 2139095040
  br label %b6

b4:                                               ; preds = %b2
  %v10 = icmp eq i16 %v1, 0
  br i1 %v10, label %b6, label %b5

b5:                                               ; preds = %b4
  %v11 = icmp ult i16 %v1, 256
  %v12 = lshr i32 %v2, 8
  %v13 = select i1 %v11, i32 %v2, i32 %v12
  %v14 = select i1 %v11, i32 32, i32 24
  %v15 = icmp ult i32 %v13, 16
  %v16 = lshr i32 %v13, 4
  %v17 = add nsw i32 %v14, -4
  %v18 = select i1 %v15, i32 %v13, i32 %v16
  %v19 = select i1 %v15, i32 %v14, i32 %v17
  %v20 = icmp ult i32 %v18, 4
  %v21 = lshr i32 %v18, 2
  %v22 = add nsw i32 %v19, -2
  %v23 = select i1 %v20, i32 %v18, i32 %v21
  %v24 = select i1 %v20, i32 %v19, i32 %v22
  %v25 = icmp ult i32 %v23, 2
  %v26 = sub nsw i32 0, %v23
  %v27 = select i1 %v25, i32 %v26, i32 -2
  %v28 = add nsw i32 %v27, %v24
  %v29 = add nsw i32 %v28, -8
  %v30 = shl i32 %v2, %v29
  %v31 = xor i32 %v30, 8388608
  %v32 = shl i32 %v28, 23
  %v33 = sub i32 1124073472, %v32
  %v34 = or i32 %v31, %v33
  br label %b6

b6:                                               ; preds = %b5, %b4, %b3, %b1
  %v35 = phi i32 [ %v6, %b1 ], [ %v9, %b3 ], [ %v34, %b5 ], [ 0, %b4 ]
  %v36 = and i16 %a0, -32768
  %v37 = zext i16 %v36 to i32
  %v38 = shl nuw i32 %v37, 16
  %v39 = or i32 %v35, %v38
  %v40 = bitcast i32 %v39 to float
  ret float %v40
}

; Function Attrs: nounwind readnone speculatable willreturn
declare void @llvm.dbg.value(metadata, metadata, metadata) #4

attributes #0 = { "target-cpu"="generic" }
attributes #1 = { nounwind willreturn }
attributes #2 = { noinline "target-cpu"="generic" }
attributes #3 = { nounwind readnone "target-cpu"="generic" "target-features" }
attributes #4 = { nounwind readnone speculatable willreturn }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!3, !4}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "TVM", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "main.tir", directory: ".")
!2 = !{}
!3 = !{i32 2, !"tvm_target", !"llvm -mtriple=x86_64-pc-linux-gnu"}
!4 = !{i32 4, !"Debug Info Version", i32 3}
!5 = distinct !DISubprogram(name: "main.tir", scope: !1, file: !1, type: !6, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition | DISPFlagOptimized, unit: !0, retainedNodes: !11)
!6 = !DISubroutineType(types: !7)
!7 = !{!8, !9, !10, !8, !9, !10, !9}
!8 = !DIBasicType(name: "int32", size: 32, encoding: DW_ATE_signed)
!9 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: null)
!10 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !8)
!11 = !{!12, !13, !14, !15, !16, !17}
!12 = !DILocalVariable(name: "arg1", arg: 1, scope: !5, file: !1, type: !9)
!13 = !DILocalVariable(name: "arg2", arg: 2, scope: !5, file: !1, type: !10)
!14 = !DILocalVariable(name: "arg3", arg: 3, scope: !5, file: !1, type: !8)
!15 = !DILocalVariable(name: "arg4", arg: 4, scope: !5, file: !1, type: !9)
!16 = !DILocalVariable(name: "arg5", arg: 5, scope: !5, file: !1, type: !10)
!17 = !DILocalVariable(name: "arg6", arg: 6, scope: !5, file: !1, type: !9)
!18 = !DILocation(line: 0, scope: !5)
!19 = !{!"branch_weights", i32 1048576, i32 1}
!20 = !{!21, !21, i64 0}
!21 = !{!"ctx_ptr", !22, i64 0}
!22 = !{!"tvm-tbaa"}
!23 = !{!24, !24, i64 0}
!24 = !{!"0x41b6f00.w4.b0", !25, i64 0}
!25 = !{!"0x41b6f00.w8.b0", !26, i64 0}
!26 = !{!"0x41b6f00.w16.b0", !27, i64 0}
!27 = !{!"0x41b6f00.w32.b0", !28, i64 0}
!28 = !{!"0x41b6f00.w64.b0", !29, i64 0}
!29 = !{!"0x41b6f00.w128.b0", !30, i64 0}
!30 = !{!"0x41b6f00.w256.b0", !31, i64 0}
!31 = !{!"0x41b6f00.w512.b0", !32, i64 0}
!32 = !{!"0x41b6f00.w1024.b0", !33, i64 0}
!33 = !{!"0x41b6f00", !22, i64 0}
!34 = !{!35, !35, i64 0}
!35 = !{!"0x41b6f00.w4.b4", !25, i64 0}
!36 = !{!37, !37, i64 0}
!37 = !{!"0x4645e30.w8.b0", !38, i64 0}
!38 = !{!"0x4645e30.w16.b0", !39, i64 0}
!39 = !{!"0x4645e30.w32.b0", !40, i64 0}
!40 = !{!"0x4645e30.w64.b0", !41, i64 0}
!41 = !{!"0x4645e30.w128.b0", !42, i64 0}
!42 = !{!"0x4645e30.w256.b0", !43, i64 0}
!43 = !{!"0x4645e30.w512.b0", !44, i64 0}
!44 = !{!"0x4645e30.w1024.b0", !45, i64 0}
!45 = !{!"0x4645e30", !22, i64 0}
!46 = !{!47, !47, i64 0}
!47 = !{!"0x4645e30.w8.b8", !38, i64 0}
!48 = !{!49, !49, i64 0}
!49 = !{!"0x4645e30.w8.b16", !50, i64 0}
!50 = !{!"0x4645e30.w16.b16", !39, i64 0}
!51 = !{!"branch_weights", i32 1, i32 1048576}
!52 = !{!53, !53, i64 0}
!53 = !{!"0x473a2e0.w8.b0", !54, i64 0}
!54 = !{!"0x473a2e0.w16.b0", !55, i64 0}
!55 = !{!"0x473a2e0.w32.b0", !56, i64 0}
!56 = !{!"0x473a2e0.w64.b0", !57, i64 0}
!57 = !{!"0x473a2e0.w128.b0", !58, i64 0}
!58 = !{!"0x473a2e0.w256.b0", !59, i64 0}
!59 = !{!"0x473a2e0.w512.b0", !60, i64 0}
!60 = !{!"0x473a2e0.w1024.b0", !61, i64 0}
!61 = !{!"0x473a2e0", !22, i64 0}
!62 = !{!63, !63, i64 0}
!63 = !{!"0x473a2e0.w8.b8", !54, i64 0}
!64 = !{!65, !65, i64 0}
!65 = !{!"0x473a2e0.w8.b16", !66, i64 0}
!66 = !{!"0x473a2e0.w16.b16", !55, i64 0}
!67 = !{!68, !68, i64 0}
!68 = !{!"0x435f200.w8.b0", !69, i64 0}
!69 = !{!"0x435f200.w16.b0", !70, i64 0}
!70 = !{!"0x435f200.w32.b0", !71, i64 0}
!71 = !{!"0x435f200.w64.b0", !72, i64 0}
!72 = !{!"0x435f200.w128.b0", !73, i64 0}
!73 = !{!"0x435f200.w256.b0", !74, i64 0}
!74 = !{!"0x435f200.w512.b0", !75, i64 0}
!75 = !{!"0x435f200.w1024.b0", !76, i64 0}
!76 = !{!"0x435f200", !22, i64 0}
!77 = !{!78, !78, i64 0}
!78 = !{!"0x435f200.w8.b8", !69, i64 0}
!79 = !{!80, !80, i64 0}
!80 = !{!"0x435f200.w8.b16", !81, i64 0}
!81 = !{!"0x435f200.w16.b16", !70, i64 0}
!82 = !{!83, !83, i64 0}
!83 = !{!"0x473b460.w8.b0", !84, i64 0}
!84 = !{!"0x473b460.w16.b0", !85, i64 0}
!85 = !{!"0x473b460.w32.b0", !86, i64 0}
!86 = !{!"0x473b460.w64.b0", !87, i64 0}
!87 = !{!"0x473b460.w128.b0", !88, i64 0}
!88 = !{!"0x473b460.w256.b0", !89, i64 0}
!89 = !{!"0x473b460.w512.b0", !90, i64 0}
!90 = !{!"0x473b460.w1024.b0", !91, i64 0}
!91 = !{!"0x473b460", !22, i64 0}
!92 = !{!93, !93, i64 0}
!93 = !{!"0x473b460.w8.b8", !84, i64 0}
!94 = !{!95, !95, i64 0}
!95 = !{!"0x473b460.w8.b16", !96, i64 0}
!96 = !{!"0x473b460.w16.b16", !85, i64 0}
!97 = !{!98, !98, i64 0}
!98 = !{!"0x463cfa0.w4.b0", !99, i64 0}
!99 = !{!"0x463cfa0.w8.b0", !100, i64 0}
!100 = !{!"0x463cfa0.w16.b0", !101, i64 0}
!101 = !{!"0x463cfa0.w32.b0", !102, i64 0}
!102 = !{!"0x463cfa0.w64.b0", !103, i64 0}
!103 = !{!"0x463cfa0.w128.b0", !104, i64 0}
!104 = !{!"0x463cfa0.w256.b0", !105, i64 0}
!105 = !{!"0x463cfa0.w512.b0", !106, i64 0}
!106 = !{!"0x463cfa0.w1024.b0", !107, i64 0}
!107 = !{!"0x463cfa0", !22, i64 0}
!108 = !{!109, !109, i64 0}
!109 = !{!"0x463cfa0.w4.b4", !99, i64 0}
