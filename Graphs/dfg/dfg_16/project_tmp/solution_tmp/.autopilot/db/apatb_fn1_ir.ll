; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_16/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i64 @apatb_fn1_ir([4 x i8]* %p, i32* %p_7, i64 %p_9, i32 %p_13) local_unnamed_addr #0 {
entry:
  %p_copy = alloca [1 x [4 x i8]], align 512
  %p_7_copy = alloca [1 x i32], align 512
  %0 = bitcast [4 x i8]* %p to [1 x [4 x i8]]*
  %1 = bitcast i32* %p_7 to [1 x i32]*
  call fastcc void @copy_in([1 x [4 x i8]]* %0, [1 x [4 x i8]]* nonnull align 512 %p_copy, [1 x i32]* %1, [1 x i32]* nonnull align 512 %p_7_copy)
  %2 = getelementptr inbounds [1 x [4 x i8]], [1 x [4 x i8]]* %p_copy, i32 0, i32 0
  %3 = getelementptr inbounds [1 x i32], [1 x i32]* %p_7_copy, i32 0, i32 0
  %4 = call i64 @apatb_fn1_hw([4 x i8]* %2, i32* %3, i64 %p_9, i32 %p_13)
  call fastcc void @copy_out([1 x [4 x i8]]* %0, [1 x [4 x i8]]* nonnull align 512 %p_copy, [1 x i32]* %1, [1 x i32]* nonnull align 512 %p_7_copy)
  ret i64 %4
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([1 x [4 x i8]]* readonly, [1 x [4 x i8]]* noalias align 512, [1 x i32]* readonly, [1 x i32]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a1a4i8([1 x [4 x i8]]* align 512 %1, [1 x [4 x i8]]* %0)
  call fastcc void @onebyonecpy_hls.p0a1i32([1 x i32]* align 512 %3, [1 x i32]* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1a4i8([1 x [4 x i8]]* noalias align 512, [1 x [4 x i8]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x [4 x i8]]* %0, null
  %3 = icmp eq [1 x [4 x i8]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx39 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57 = getelementptr [1 x [4 x i8]], [1 x [4 x i8]]* %0, i64 0, i64 0, i64 %for.loop.idx39
  %src.addr68 = getelementptr [1 x [4 x i8]], [1 x [4 x i8]]* %1, i64 0, i64 0, i64 %for.loop.idx39
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr57, i8* align 1 %src.addr68, i64 1, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx39, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 4
  br i1 %exitcond, label %for.loop2, label %ret

ret:                                              ; preds = %for.loop2, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1i32([1 x i32]* noalias align 512, [1 x i32]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x i32]* %0, null
  %3 = icmp eq [1 x i32]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  %5 = bitcast [1 x i32]* %0 to i8*
  %6 = bitcast [1 x i32]* %1 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 4, i1 false)
  br label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([1 x [4 x i8]]*, [1 x [4 x i8]]* noalias readonly align 512, [1 x i32]*, [1 x i32]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a1a4i8([1 x [4 x i8]]* %0, [1 x [4 x i8]]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a1i32([1 x i32]* %2, [1 x i32]* align 512 %3)
  ret void
}

declare i64 @apatb_fn1_hw([4 x i8]*, i32*, i64, i32)

define i64 @fn1_hw_stub_wrapper([4 x i8]*, i32*, i64, i32) #5 {
entry:
  %4 = bitcast [4 x i8]* %0 to [1 x [4 x i8]]*
  %5 = bitcast i32* %1 to [1 x i32]*
  call void @copy_out([1 x [4 x i8]]* null, [1 x [4 x i8]]* %4, [1 x i32]* null, [1 x i32]* %5)
  %6 = bitcast [1 x [4 x i8]]* %4 to [4 x i8]*
  %7 = bitcast [1 x i32]* %5 to i32*
  %8 = call i64 @fn1_hw_stub([4 x i8]* %6, i32* %7, i64 %2, i32 %3)
  call void @copy_in([1 x [4 x i8]]* null, [1 x [4 x i8]]* %4, [1 x i32]* null, [1 x i32]* %5)
  ret i64 %8
}

declare i64 @fn1_hw_stub([4 x i8]*, i32*, i64, i32)

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
