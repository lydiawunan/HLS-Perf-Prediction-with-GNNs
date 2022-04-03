; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_35/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i32 @apatb_fn1_ir(i32 %p, [1 x i8]* %p_4, i64 %p_7, i8 %p_9, float %p_11) local_unnamed_addr #0 {
entry:
  %p_4_copy = alloca [2 x [1 x i8]], align 512
  %0 = bitcast [1 x i8]* %p_4 to [2 x [1 x i8]]*
  call fastcc void @copy_in([2 x [1 x i8]]* %0, [2 x [1 x i8]]* nonnull align 512 %p_4_copy)
  %1 = getelementptr inbounds [2 x [1 x i8]], [2 x [1 x i8]]* %p_4_copy, i32 0, i32 0
  %2 = call i32 @apatb_fn1_hw(i32 %p, [1 x i8]* %1, i64 %p_7, i8 %p_9, float %p_11)
  call fastcc void @copy_out([2 x [1 x i8]]* %0, [2 x [1 x i8]]* nonnull align 512 %p_4_copy)
  ret i32 %2
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([2 x [1 x i8]]* noalias readonly, [2 x [1 x i8]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a2a1i8([2 x [1 x i8]]* align 512 %1, [2 x [1 x i8]]* %0)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a2a1i8([2 x [1 x i8]]* noalias align 512, [2 x [1 x i8]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [2 x [1 x i8]]* %0, null
  %3 = icmp eq [2 x [1 x i8]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx10 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr57 = getelementptr [2 x [1 x i8]], [2 x [1 x i8]]* %0, i64 0, i64 %for.loop.idx10, i64 0
  %src.addr68 = getelementptr [2 x [1 x i8]], [2 x [1 x i8]]* %1, i64 0, i64 %for.loop.idx10, i64 0
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr57, i8* align 1 %src.addr68, i64 1, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx10, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 2
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([2 x [1 x i8]]* noalias, [2 x [1 x i8]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a2a1i8([2 x [1 x i8]]* %0, [2 x [1 x i8]]* align 512 %1)
  ret void
}

declare i32 @apatb_fn1_hw(i32, [1 x i8]*, i64, i8, float)

define i32 @fn1_hw_stub_wrapper(i32, [1 x i8]*, i64, i8, float) #5 {
entry:
  %5 = bitcast [1 x i8]* %1 to [2 x [1 x i8]]*
  call void @copy_out([2 x [1 x i8]]* null, [2 x [1 x i8]]* %5)
  %6 = bitcast [2 x [1 x i8]]* %5 to [1 x i8]*
  %7 = call i32 @fn1_hw_stub(i32 %0, [1 x i8]* %6, i64 %2, i8 %3, float %4)
  call void @copy_in([2 x [1 x i8]]* null, [2 x [1 x i8]]* %5)
  ret i32 %7
}

declare i32 @fn1_hw_stub(i32, [1 x i8]*, i64, i8, float)

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
