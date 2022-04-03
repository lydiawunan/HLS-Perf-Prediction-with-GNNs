; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_97/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define float @apatb_fn1_ir(i32 %p, i64 %p_4, i16* %p_6, [4 x i8]* %p_8, [2 x [1 x float]]* %p_10) local_unnamed_addr #0 {
entry:
  %p_6_copy = alloca [5 x i16], align 512
  %p_8_copy = alloca [5 x [4 x i8]], align 512
  %p_10_copy = alloca [1 x [2 x [1 x float]]], align 512
  %0 = bitcast i16* %p_6 to [5 x i16]*
  %1 = bitcast [4 x i8]* %p_8 to [5 x [4 x i8]]*
  %2 = bitcast [2 x [1 x float]]* %p_10 to [1 x [2 x [1 x float]]]*
  call fastcc void @copy_in([5 x i16]* %0, [5 x i16]* nonnull align 512 %p_6_copy, [5 x [4 x i8]]* %1, [5 x [4 x i8]]* nonnull align 512 %p_8_copy, [1 x [2 x [1 x float]]]* %2, [1 x [2 x [1 x float]]]* nonnull align 512 %p_10_copy)
  %3 = getelementptr inbounds [5 x i16], [5 x i16]* %p_6_copy, i32 0, i32 0
  %4 = getelementptr inbounds [5 x [4 x i8]], [5 x [4 x i8]]* %p_8_copy, i32 0, i32 0
  %5 = getelementptr inbounds [1 x [2 x [1 x float]]], [1 x [2 x [1 x float]]]* %p_10_copy, i32 0, i32 0
  %6 = call float @apatb_fn1_hw(i32 %p, i64 %p_4, i16* %3, [4 x i8]* %4, [2 x [1 x float]]* %5)
  call fastcc void @copy_out([5 x i16]* %0, [5 x i16]* nonnull align 512 %p_6_copy, [5 x [4 x i8]]* %1, [5 x [4 x i8]]* nonnull align 512 %p_8_copy, [1 x [2 x [1 x float]]]* %2, [1 x [2 x [1 x float]]]* nonnull align 512 %p_10_copy)
  ret float %6
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([5 x i16]* readonly, [5 x i16]* noalias align 512, [5 x [4 x i8]]* readonly, [5 x [4 x i8]]* noalias align 512, [1 x [2 x [1 x float]]]* readonly, [1 x [2 x [1 x float]]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5i16([5 x i16]* align 512 %1, [5 x i16]* %0)
  call fastcc void @onebyonecpy_hls.p0a5a4i8([5 x [4 x i8]]* align 512 %3, [5 x [4 x i8]]* %2)
  call fastcc void @onebyonecpy_hls.p0a1a2a1f32([1 x [2 x [1 x float]]]* align 512 %5, [1 x [2 x [1 x float]]]* %4)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5i16([5 x i16]* noalias align 512, [5 x i16]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x i16]* %0, null
  %3 = icmp eq [5 x i16]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx3 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr.gep1 = getelementptr [5 x i16], [5 x i16]* %0, i64 0, i64 %for.loop.idx3
  %5 = bitcast i16* %dst.addr.gep1 to i8*
  %src.addr.gep2 = getelementptr [5 x i16], [5 x i16]* %1, i64 0, i64 %for.loop.idx3
  %6 = bitcast i16* %src.addr.gep2 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 2, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx3, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5a4i8([5 x [4 x i8]]* noalias align 512, [5 x [4 x i8]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x [4 x i8]]* %0, null
  %3 = icmp eq [5 x [4 x i8]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx10 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx39 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57 = getelementptr [5 x [4 x i8]], [5 x [4 x i8]]* %0, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  %src.addr68 = getelementptr [5 x [4 x i8]], [5 x [4 x i8]]* %1, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr57, i8* align 1 %src.addr68, i64 1, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx39, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 4
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx10, 1
  %exitcond11 = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond11, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1a2a1f32([1 x [2 x [1 x float]]]* noalias align 512, [1 x [2 x [1 x float]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x [2 x [1 x float]]]* %0, null
  %3 = icmp eq [1 x [2 x [1 x float]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx320 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr1115.gep17 = getelementptr [1 x [2 x [1 x float]]], [1 x [2 x [1 x float]]]* %0, i64 0, i64 0, i64 %for.loop.idx320, i64 0
  %5 = bitcast float* %dst.addr1115.gep17 to i8*
  %src.addr1216.gep18 = getelementptr [1 x [2 x [1 x float]]], [1 x [2 x [1 x float]]]* %1, i64 0, i64 0, i64 %for.loop.idx320, i64 0
  %6 = bitcast float* %src.addr1216.gep18 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 4, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx320, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 2
  br i1 %exitcond, label %for.loop2, label %ret

ret:                                              ; preds = %for.loop2, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([5 x i16]*, [5 x i16]* noalias readonly align 512, [5 x [4 x i8]]*, [5 x [4 x i8]]* noalias readonly align 512, [1 x [2 x [1 x float]]]*, [1 x [2 x [1 x float]]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5i16([5 x i16]* %0, [5 x i16]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a5a4i8([5 x [4 x i8]]* %2, [5 x [4 x i8]]* align 512 %3)
  call fastcc void @onebyonecpy_hls.p0a1a2a1f32([1 x [2 x [1 x float]]]* %4, [1 x [2 x [1 x float]]]* align 512 %5)
  ret void
}

declare float @apatb_fn1_hw(i32, i64, i16*, [4 x i8]*, [2 x [1 x float]]*)

define float @fn1_hw_stub_wrapper(i32, i64, i16*, [4 x i8]*, [2 x [1 x float]]*) #5 {
entry:
  %5 = bitcast i16* %2 to [5 x i16]*
  %6 = bitcast [4 x i8]* %3 to [5 x [4 x i8]]*
  %7 = bitcast [2 x [1 x float]]* %4 to [1 x [2 x [1 x float]]]*
  call void @copy_out([5 x i16]* null, [5 x i16]* %5, [5 x [4 x i8]]* null, [5 x [4 x i8]]* %6, [1 x [2 x [1 x float]]]* null, [1 x [2 x [1 x float]]]* %7)
  %8 = bitcast [5 x i16]* %5 to i16*
  %9 = bitcast [5 x [4 x i8]]* %6 to [4 x i8]*
  %10 = bitcast [1 x [2 x [1 x float]]]* %7 to [2 x [1 x float]]*
  %11 = call float @fn1_hw_stub(i32 %0, i64 %1, i16* %8, [4 x i8]* %9, [2 x [1 x float]]* %10)
  call void @copy_in([5 x i16]* null, [5 x i16]* %5, [5 x [4 x i8]]* null, [5 x [4 x i8]]* %6, [1 x [2 x [1 x float]]]* null, [1 x [2 x [1 x float]]]* %7)
  ret float %11
}

declare float @fn1_hw_stub(i32, i64, i16*, [4 x i8]*, [2 x [1 x float]]*)

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
