; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_104/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i64 @apatb_fn1_ir(i32 %p, i64 %p_5, [5 x [5 x i8]]* %p_7, double* %p_9) local_unnamed_addr #0 {
entry:
  %p_7_copy = alloca [3 x [5 x [5 x i8]]], align 512
  %p_9_copy = alloca [2 x double], align 512
  %0 = bitcast [5 x [5 x i8]]* %p_7 to [3 x [5 x [5 x i8]]]*
  %1 = bitcast double* %p_9 to [2 x double]*
  call fastcc void @copy_in([3 x [5 x [5 x i8]]]* %0, [3 x [5 x [5 x i8]]]* nonnull align 512 %p_7_copy, [2 x double]* %1, [2 x double]* nonnull align 512 %p_9_copy)
  %2 = getelementptr inbounds [3 x [5 x [5 x i8]]], [3 x [5 x [5 x i8]]]* %p_7_copy, i32 0, i32 0
  %3 = getelementptr inbounds [2 x double], [2 x double]* %p_9_copy, i32 0, i32 0
  %4 = call i64 @apatb_fn1_hw(i32 %p, i64 %p_5, [5 x [5 x i8]]* %2, double* %3)
  call fastcc void @copy_out([3 x [5 x [5 x i8]]]* %0, [3 x [5 x [5 x i8]]]* nonnull align 512 %p_7_copy, [2 x double]* %1, [2 x double]* nonnull align 512 %p_9_copy)
  ret i64 %4
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([3 x [5 x [5 x i8]]]* readonly, [3 x [5 x [5 x i8]]]* noalias align 512, [2 x double]* readonly, [2 x double]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a3a5a5i8([3 x [5 x [5 x i8]]]* align 512 %1, [3 x [5 x [5 x i8]]]* %0)
  call fastcc void @onebyonecpy_hls.p0a2f64([2 x double]* align 512 %3, [2 x double]* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a3a5a5i8([3 x [5 x [5 x i8]]]* noalias align 512, [3 x [5 x [5 x i8]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [3 x [5 x [5 x i8]]]* %0, null
  %3 = icmp eq [3 x [5 x [5 x i8]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx19 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2.split, %for.loop
  %for.loop.idx318 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2.split ]
  br label %for.loop8

for.loop8:                                        ; preds = %for.loop8, %for.loop2
  %for.loop.idx917 = phi i64 [ 0, %for.loop2 ], [ %for.loop.idx9.next, %for.loop8 ]
  %dst.addr1115 = getelementptr [3 x [5 x [5 x i8]]], [3 x [5 x [5 x i8]]]* %0, i64 0, i64 %for.loop.idx19, i64 %for.loop.idx318, i64 %for.loop.idx917
  %src.addr1216 = getelementptr [3 x [5 x [5 x i8]]], [3 x [5 x [5 x i8]]]* %1, i64 0, i64 %for.loop.idx19, i64 %for.loop.idx318, i64 %for.loop.idx917
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr1115, i8* align 1 %src.addr1216, i64 1, i1 false)
  %for.loop.idx9.next = add nuw nsw i64 %for.loop.idx917, 1
  %exitcond = icmp ne i64 %for.loop.idx9.next, 5
  br i1 %exitcond, label %for.loop8, label %for.loop2.split

for.loop2.split:                                  ; preds = %for.loop8
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx318, 1
  %exitcond20 = icmp ne i64 %for.loop.idx3.next, 5
  br i1 %exitcond20, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2.split
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx19, 1
  %exitcond21 = icmp ne i64 %for.loop.idx.next, 3
  br i1 %exitcond21, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a2f64([2 x double]* noalias align 512, [2 x double]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [2 x double]* %0, null
  %3 = icmp eq [2 x double]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx3 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr.gep1 = getelementptr [2 x double], [2 x double]* %0, i64 0, i64 %for.loop.idx3
  %5 = bitcast double* %dst.addr.gep1 to i8*
  %src.addr.gep2 = getelementptr [2 x double], [2 x double]* %1, i64 0, i64 %for.loop.idx3
  %6 = bitcast double* %src.addr.gep2 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 8, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx3, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 2
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([3 x [5 x [5 x i8]]]*, [3 x [5 x [5 x i8]]]* noalias readonly align 512, [2 x double]*, [2 x double]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a3a5a5i8([3 x [5 x [5 x i8]]]* %0, [3 x [5 x [5 x i8]]]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a2f64([2 x double]* %2, [2 x double]* align 512 %3)
  ret void
}

declare i64 @apatb_fn1_hw(i32, i64, [5 x [5 x i8]]*, double*)

define i64 @fn1_hw_stub_wrapper(i32, i64, [5 x [5 x i8]]*, double*) #5 {
entry:
  %4 = bitcast [5 x [5 x i8]]* %2 to [3 x [5 x [5 x i8]]]*
  %5 = bitcast double* %3 to [2 x double]*
  call void @copy_out([3 x [5 x [5 x i8]]]* null, [3 x [5 x [5 x i8]]]* %4, [2 x double]* null, [2 x double]* %5)
  %6 = bitcast [3 x [5 x [5 x i8]]]* %4 to [5 x [5 x i8]]*
  %7 = bitcast [2 x double]* %5 to double*
  %8 = call i64 @fn1_hw_stub(i32 %0, i64 %1, [5 x [5 x i8]]* %6, double* %7)
  call void @copy_in([3 x [5 x [5 x i8]]]* null, [3 x [5 x [5 x i8]]]* %4, [2 x double]* null, [2 x double]* %5)
  ret i64 %8
}

declare i64 @fn1_hw_stub(i32, i64, [5 x [5 x i8]]*, double*)

attributes #0 = { argmemonly noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly nounwind }
attributes #4 = { argmemonly noinline "fpga.wrapper.func"="copyout" }
attributes #5 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
