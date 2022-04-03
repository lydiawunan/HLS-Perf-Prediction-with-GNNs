; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_108/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i64 @apatb_fn1_ir(i16 %p, double %p_7, [2 x i8]* %p_9, i8 %p_11, [4 x i64]* %p_15) local_unnamed_addr #0 {
entry:
  %p_9_copy = alloca [3 x [2 x i8]], align 512
  %p_15_copy = alloca [3 x [4 x i64]], align 512
  %0 = bitcast [2 x i8]* %p_9 to [3 x [2 x i8]]*
  %1 = bitcast [4 x i64]* %p_15 to [3 x [4 x i64]]*
  call fastcc void @copy_in([3 x [2 x i8]]* %0, [3 x [2 x i8]]* nonnull align 512 %p_9_copy, [3 x [4 x i64]]* %1, [3 x [4 x i64]]* nonnull align 512 %p_15_copy)
  %2 = getelementptr inbounds [3 x [2 x i8]], [3 x [2 x i8]]* %p_9_copy, i32 0, i32 0
  %3 = getelementptr inbounds [3 x [4 x i64]], [3 x [4 x i64]]* %p_15_copy, i32 0, i32 0
  %4 = call i64 @apatb_fn1_hw(i16 %p, double %p_7, [2 x i8]* %2, i8 %p_11, [4 x i64]* %3)
  call fastcc void @copy_out([3 x [2 x i8]]* %0, [3 x [2 x i8]]* nonnull align 512 %p_9_copy, [3 x [4 x i64]]* %1, [3 x [4 x i64]]* nonnull align 512 %p_15_copy)
  ret i64 %4
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([3 x [2 x i8]]* readonly, [3 x [2 x i8]]* noalias align 512, [3 x [4 x i64]]* readonly, [3 x [4 x i64]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a3a2i8([3 x [2 x i8]]* align 512 %1, [3 x [2 x i8]]* %0)
  call fastcc void @onebyonecpy_hls.p0a3a4i64([3 x [4 x i64]]* align 512 %3, [3 x [4 x i64]]* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a3a2i8([3 x [2 x i8]]* noalias align 512, [3 x [2 x i8]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [3 x [2 x i8]]* %0, null
  %3 = icmp eq [3 x [2 x i8]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx10 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx39 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57 = getelementptr [3 x [2 x i8]], [3 x [2 x i8]]* %0, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  %src.addr68 = getelementptr [3 x [2 x i8]], [3 x [2 x i8]]* %1, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr57, i8* align 1 %src.addr68, i64 1, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx39, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 2
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx10, 1
  %exitcond11 = icmp ne i64 %for.loop.idx.next, 3
  br i1 %exitcond11, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a3a4i64([3 x [4 x i64]]* noalias align 512, [3 x [4 x i64]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [3 x [4 x i64]]* %0, null
  %3 = icmp eq [3 x [4 x i64]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx12 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx311 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57.gep9 = getelementptr [3 x [4 x i64]], [3 x [4 x i64]]* %0, i64 0, i64 %for.loop.idx12, i64 %for.loop.idx311
  %5 = bitcast i64* %dst.addr57.gep9 to i8*
  %src.addr68.gep10 = getelementptr [3 x [4 x i64]], [3 x [4 x i64]]* %1, i64 0, i64 %for.loop.idx12, i64 %for.loop.idx311
  %6 = bitcast i64* %src.addr68.gep10 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 8, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx311, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 4
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx12, 1
  %exitcond13 = icmp ne i64 %for.loop.idx.next, 3
  br i1 %exitcond13, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([3 x [2 x i8]]*, [3 x [2 x i8]]* noalias readonly align 512, [3 x [4 x i64]]*, [3 x [4 x i64]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a3a2i8([3 x [2 x i8]]* %0, [3 x [2 x i8]]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a3a4i64([3 x [4 x i64]]* %2, [3 x [4 x i64]]* align 512 %3)
  ret void
}

declare i64 @apatb_fn1_hw(i16, double, [2 x i8]*, i8, [4 x i64]*)

define i64 @fn1_hw_stub_wrapper(i16, double, [2 x i8]*, i8, [4 x i64]*) #5 {
entry:
  %5 = bitcast [2 x i8]* %2 to [3 x [2 x i8]]*
  %6 = bitcast [4 x i64]* %4 to [3 x [4 x i64]]*
  call void @copy_out([3 x [2 x i8]]* null, [3 x [2 x i8]]* %5, [3 x [4 x i64]]* null, [3 x [4 x i64]]* %6)
  %7 = bitcast [3 x [2 x i8]]* %5 to [2 x i8]*
  %8 = bitcast [3 x [4 x i64]]* %6 to [4 x i64]*
  %9 = call i64 @fn1_hw_stub(i16 %0, double %1, [2 x i8]* %7, i8 %3, [4 x i64]* %8)
  call void @copy_in([3 x [2 x i8]]* null, [3 x [2 x i8]]* %5, [3 x [4 x i64]]* null, [3 x [4 x i64]]* %6)
  ret i64 %9
}

declare i64 @fn1_hw_stub(i16, double, [2 x i8]*, i8, [4 x i64]*)

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
