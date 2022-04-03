; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_69/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define double @apatb_fn1_ir([1 x i64]* %p, i16 %p_4, i64 %p_6, i8 %p_8, [5 x [2 x i16]]* %p_13) local_unnamed_addr #0 {
entry:
  %p_copy = alloca [4 x [1 x i64]], align 512
  %p_13_copy = alloca [1 x [5 x [2 x i16]]], align 512
  %0 = bitcast [1 x i64]* %p to [4 x [1 x i64]]*
  %1 = bitcast [5 x [2 x i16]]* %p_13 to [1 x [5 x [2 x i16]]]*
  call fastcc void @copy_in([4 x [1 x i64]]* %0, [4 x [1 x i64]]* nonnull align 512 %p_copy, [1 x [5 x [2 x i16]]]* %1, [1 x [5 x [2 x i16]]]* nonnull align 512 %p_13_copy)
  %2 = getelementptr inbounds [4 x [1 x i64]], [4 x [1 x i64]]* %p_copy, i32 0, i32 0
  %3 = getelementptr inbounds [1 x [5 x [2 x i16]]], [1 x [5 x [2 x i16]]]* %p_13_copy, i32 0, i32 0
  %4 = call double @apatb_fn1_hw([1 x i64]* %2, i16 %p_4, i64 %p_6, i8 %p_8, [5 x [2 x i16]]* %3)
  call fastcc void @copy_out([4 x [1 x i64]]* %0, [4 x [1 x i64]]* nonnull align 512 %p_copy, [1 x [5 x [2 x i16]]]* %1, [1 x [5 x [2 x i16]]]* nonnull align 512 %p_13_copy)
  ret double %4
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([4 x [1 x i64]]* readonly, [4 x [1 x i64]]* noalias align 512, [1 x [5 x [2 x i16]]]* readonly, [1 x [5 x [2 x i16]]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a4a1i64([4 x [1 x i64]]* align 512 %1, [4 x [1 x i64]]* %0)
  call fastcc void @onebyonecpy_hls.p0a1a5a2i16([1 x [5 x [2 x i16]]]* align 512 %3, [1 x [5 x [2 x i16]]]* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a4a1i64([4 x [1 x i64]]* noalias align 512, [4 x [1 x i64]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [4 x [1 x i64]]* %0, null
  %3 = icmp eq [4 x [1 x i64]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx12 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr57.gep9 = getelementptr [4 x [1 x i64]], [4 x [1 x i64]]* %0, i64 0, i64 %for.loop.idx12, i64 0
  %5 = bitcast i64* %dst.addr57.gep9 to i8*
  %src.addr68.gep10 = getelementptr [4 x [1 x i64]], [4 x [1 x i64]]* %1, i64 0, i64 %for.loop.idx12, i64 0
  %6 = bitcast i64* %src.addr68.gep10 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 8, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx12, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 4
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1a5a2i16([1 x [5 x [2 x i16]]]* noalias align 512, [1 x [5 x [2 x i16]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x [5 x [2 x i16]]]* %0, null
  %3 = icmp eq [1 x [5 x [2 x i16]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2.split, %for.loop
  %for.loop.idx320 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2.split ]
  br label %for.loop8

for.loop8:                                        ; preds = %for.loop8, %for.loop2
  %for.loop.idx919 = phi i64 [ 0, %for.loop2 ], [ %for.loop.idx9.next, %for.loop8 ]
  %dst.addr1115.gep17 = getelementptr [1 x [5 x [2 x i16]]], [1 x [5 x [2 x i16]]]* %0, i64 0, i64 0, i64 %for.loop.idx320, i64 %for.loop.idx919
  %5 = bitcast i16* %dst.addr1115.gep17 to i8*
  %src.addr1216.gep18 = getelementptr [1 x [5 x [2 x i16]]], [1 x [5 x [2 x i16]]]* %1, i64 0, i64 0, i64 %for.loop.idx320, i64 %for.loop.idx919
  %6 = bitcast i16* %src.addr1216.gep18 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 2, i1 false)
  %for.loop.idx9.next = add nuw nsw i64 %for.loop.idx919, 1
  %exitcond = icmp ne i64 %for.loop.idx9.next, 2
  br i1 %exitcond, label %for.loop8, label %for.loop2.split

for.loop2.split:                                  ; preds = %for.loop8
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx320, 1
  %exitcond22 = icmp ne i64 %for.loop.idx3.next, 5
  br i1 %exitcond22, label %for.loop2, label %ret

ret:                                              ; preds = %for.loop2.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([4 x [1 x i64]]*, [4 x [1 x i64]]* noalias readonly align 512, [1 x [5 x [2 x i16]]]*, [1 x [5 x [2 x i16]]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a4a1i64([4 x [1 x i64]]* %0, [4 x [1 x i64]]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a1a5a2i16([1 x [5 x [2 x i16]]]* %2, [1 x [5 x [2 x i16]]]* align 512 %3)
  ret void
}

declare double @apatb_fn1_hw([1 x i64]*, i16, i64, i8, [5 x [2 x i16]]*)

define double @fn1_hw_stub_wrapper([1 x i64]*, i16, i64, i8, [5 x [2 x i16]]*) #5 {
entry:
  %5 = bitcast [1 x i64]* %0 to [4 x [1 x i64]]*
  %6 = bitcast [5 x [2 x i16]]* %4 to [1 x [5 x [2 x i16]]]*
  call void @copy_out([4 x [1 x i64]]* null, [4 x [1 x i64]]* %5, [1 x [5 x [2 x i16]]]* null, [1 x [5 x [2 x i16]]]* %6)
  %7 = bitcast [4 x [1 x i64]]* %5 to [1 x i64]*
  %8 = bitcast [1 x [5 x [2 x i16]]]* %6 to [5 x [2 x i16]]*
  %9 = call double @fn1_hw_stub([1 x i64]* %7, i16 %1, i64 %2, i8 %3, [5 x [2 x i16]]* %8)
  call void @copy_in([4 x [1 x i64]]* null, [4 x [1 x i64]]* %5, [1 x [5 x [2 x i16]]]* null, [1 x [5 x [2 x i16]]]* %6)
  ret double %9
}

declare double @fn1_hw_stub([1 x i64]*, i16, i64, i8, [5 x [2 x i16]]*)

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
