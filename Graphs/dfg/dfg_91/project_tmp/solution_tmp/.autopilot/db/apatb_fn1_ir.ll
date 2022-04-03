; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_91/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i16 @apatb_fn1_ir(i32 %p, [4 x i64]* %p_7, [3 x [1 x i16]]* %p_9, [1 x [2 x i8]]* %p_11, i64 %p_13) local_unnamed_addr #0 {
entry:
  %p_7_copy = alloca [5 x [4 x i64]], align 512
  %p_9_copy = alloca [1 x [3 x [1 x i16]]], align 512
  %p_11_copy = alloca [4 x [1 x [2 x i8]]], align 512
  %0 = bitcast [4 x i64]* %p_7 to [5 x [4 x i64]]*
  %1 = bitcast [3 x [1 x i16]]* %p_9 to [1 x [3 x [1 x i16]]]*
  %2 = bitcast [1 x [2 x i8]]* %p_11 to [4 x [1 x [2 x i8]]]*
  call fastcc void @copy_in([5 x [4 x i64]]* %0, [5 x [4 x i64]]* nonnull align 512 %p_7_copy, [1 x [3 x [1 x i16]]]* %1, [1 x [3 x [1 x i16]]]* nonnull align 512 %p_9_copy, [4 x [1 x [2 x i8]]]* %2, [4 x [1 x [2 x i8]]]* nonnull align 512 %p_11_copy)
  %3 = getelementptr inbounds [5 x [4 x i64]], [5 x [4 x i64]]* %p_7_copy, i32 0, i32 0
  %4 = getelementptr inbounds [1 x [3 x [1 x i16]]], [1 x [3 x [1 x i16]]]* %p_9_copy, i32 0, i32 0
  %5 = getelementptr inbounds [4 x [1 x [2 x i8]]], [4 x [1 x [2 x i8]]]* %p_11_copy, i32 0, i32 0
  %6 = call i16 @apatb_fn1_hw(i32 %p, [4 x i64]* %3, [3 x [1 x i16]]* %4, [1 x [2 x i8]]* %5, i64 %p_13)
  call fastcc void @copy_out([5 x [4 x i64]]* %0, [5 x [4 x i64]]* nonnull align 512 %p_7_copy, [1 x [3 x [1 x i16]]]* %1, [1 x [3 x [1 x i16]]]* nonnull align 512 %p_9_copy, [4 x [1 x [2 x i8]]]* %2, [4 x [1 x [2 x i8]]]* nonnull align 512 %p_11_copy)
  ret i16 %6
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([5 x [4 x i64]]* readonly, [5 x [4 x i64]]* noalias align 512, [1 x [3 x [1 x i16]]]* readonly, [1 x [3 x [1 x i16]]]* noalias align 512, [4 x [1 x [2 x i8]]]* readonly, [4 x [1 x [2 x i8]]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5a4i64([5 x [4 x i64]]* align 512 %1, [5 x [4 x i64]]* %0)
  call fastcc void @onebyonecpy_hls.p0a1a3a1i16([1 x [3 x [1 x i16]]]* align 512 %3, [1 x [3 x [1 x i16]]]* %2)
  call fastcc void @onebyonecpy_hls.p0a4a1a2i8([4 x [1 x [2 x i8]]]* align 512 %5, [4 x [1 x [2 x i8]]]* %4)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5a4i64([5 x [4 x i64]]* noalias align 512, [5 x [4 x i64]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x [4 x i64]]* %0, null
  %3 = icmp eq [5 x [4 x i64]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx12 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx311 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57.gep9 = getelementptr [5 x [4 x i64]], [5 x [4 x i64]]* %0, i64 0, i64 %for.loop.idx12, i64 %for.loop.idx311
  %5 = bitcast i64* %dst.addr57.gep9 to i8*
  %src.addr68.gep10 = getelementptr [5 x [4 x i64]], [5 x [4 x i64]]* %1, i64 0, i64 %for.loop.idx12, i64 %for.loop.idx311
  %6 = bitcast i64* %src.addr68.gep10 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 8, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx311, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 4
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx12, 1
  %exitcond13 = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond13, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1a3a1i16([1 x [3 x [1 x i16]]]* noalias align 512, [1 x [3 x [1 x i16]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x [3 x [1 x i16]]]* %0, null
  %3 = icmp eq [1 x [3 x [1 x i16]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx320 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr1115.gep17 = getelementptr [1 x [3 x [1 x i16]]], [1 x [3 x [1 x i16]]]* %0, i64 0, i64 0, i64 %for.loop.idx320, i64 0
  %5 = bitcast i16* %dst.addr1115.gep17 to i8*
  %src.addr1216.gep18 = getelementptr [1 x [3 x [1 x i16]]], [1 x [3 x [1 x i16]]]* %1, i64 0, i64 0, i64 %for.loop.idx320, i64 0
  %6 = bitcast i16* %src.addr1216.gep18 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 2, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx320, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 3
  br i1 %exitcond, label %for.loop2, label %ret

ret:                                              ; preds = %for.loop2, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a4a1a2i8([4 x [1 x [2 x i8]]]* noalias align 512, [4 x [1 x [2 x i8]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [4 x [1 x [2 x i8]]]* %0, null
  %3 = icmp eq [4 x [1 x [2 x i8]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx19 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop8

for.loop8:                                        ; preds = %for.loop8, %for.loop
  %for.loop.idx917 = phi i64 [ 0, %for.loop ], [ %for.loop.idx9.next, %for.loop8 ]
  %dst.addr1115 = getelementptr [4 x [1 x [2 x i8]]], [4 x [1 x [2 x i8]]]* %0, i64 0, i64 %for.loop.idx19, i64 0, i64 %for.loop.idx917
  %src.addr1216 = getelementptr [4 x [1 x [2 x i8]]], [4 x [1 x [2 x i8]]]* %1, i64 0, i64 %for.loop.idx19, i64 0, i64 %for.loop.idx917
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr1115, i8* align 1 %src.addr1216, i64 1, i1 false)
  %for.loop.idx9.next = add nuw nsw i64 %for.loop.idx917, 1
  %exitcond = icmp ne i64 %for.loop.idx9.next, 2
  br i1 %exitcond, label %for.loop8, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop8
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx19, 1
  %exitcond20 = icmp ne i64 %for.loop.idx.next, 4
  br i1 %exitcond20, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([5 x [4 x i64]]*, [5 x [4 x i64]]* noalias readonly align 512, [1 x [3 x [1 x i16]]]*, [1 x [3 x [1 x i16]]]* noalias readonly align 512, [4 x [1 x [2 x i8]]]*, [4 x [1 x [2 x i8]]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5a4i64([5 x [4 x i64]]* %0, [5 x [4 x i64]]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a1a3a1i16([1 x [3 x [1 x i16]]]* %2, [1 x [3 x [1 x i16]]]* align 512 %3)
  call fastcc void @onebyonecpy_hls.p0a4a1a2i8([4 x [1 x [2 x i8]]]* %4, [4 x [1 x [2 x i8]]]* align 512 %5)
  ret void
}

declare i16 @apatb_fn1_hw(i32, [4 x i64]*, [3 x [1 x i16]]*, [1 x [2 x i8]]*, i64)

define i16 @fn1_hw_stub_wrapper(i32, [4 x i64]*, [3 x [1 x i16]]*, [1 x [2 x i8]]*, i64) #5 {
entry:
  %5 = bitcast [4 x i64]* %1 to [5 x [4 x i64]]*
  %6 = bitcast [3 x [1 x i16]]* %2 to [1 x [3 x [1 x i16]]]*
  %7 = bitcast [1 x [2 x i8]]* %3 to [4 x [1 x [2 x i8]]]*
  call void @copy_out([5 x [4 x i64]]* null, [5 x [4 x i64]]* %5, [1 x [3 x [1 x i16]]]* null, [1 x [3 x [1 x i16]]]* %6, [4 x [1 x [2 x i8]]]* null, [4 x [1 x [2 x i8]]]* %7)
  %8 = bitcast [5 x [4 x i64]]* %5 to [4 x i64]*
  %9 = bitcast [1 x [3 x [1 x i16]]]* %6 to [3 x [1 x i16]]*
  %10 = bitcast [4 x [1 x [2 x i8]]]* %7 to [1 x [2 x i8]]*
  %11 = call i16 @fn1_hw_stub(i32 %0, [4 x i64]* %8, [3 x [1 x i16]]* %9, [1 x [2 x i8]]* %10, i64 %4)
  call void @copy_in([5 x [4 x i64]]* null, [5 x [4 x i64]]* %5, [1 x [3 x [1 x i16]]]* null, [1 x [3 x [1 x i16]]]* %6, [4 x [1 x [2 x i8]]]* null, [4 x [1 x [2 x i8]]]* %7)
  ret i16 %11
}

declare i16 @fn1_hw_stub(i32, [4 x i64]*, [3 x [1 x i16]]*, [1 x [2 x i8]]*, i64)

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
