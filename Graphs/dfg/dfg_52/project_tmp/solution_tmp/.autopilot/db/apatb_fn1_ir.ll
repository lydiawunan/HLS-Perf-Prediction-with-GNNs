; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_52/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define float @apatb_fn1_ir(i64 %p, i8 %p_5, i8 %p_9, [3 x [1 x i8]]* %p_11) local_unnamed_addr #0 {
entry:
  %p_11_copy = alloca [5 x [3 x [1 x i8]]], align 512
  %0 = bitcast [3 x [1 x i8]]* %p_11 to [5 x [3 x [1 x i8]]]*
  call fastcc void @copy_in([5 x [3 x [1 x i8]]]* %0, [5 x [3 x [1 x i8]]]* nonnull align 512 %p_11_copy)
  %1 = getelementptr inbounds [5 x [3 x [1 x i8]]], [5 x [3 x [1 x i8]]]* %p_11_copy, i32 0, i32 0
  %2 = call float @apatb_fn1_hw(i64 %p, i8 %p_5, i8 %p_9, [3 x [1 x i8]]* %1)
  call fastcc void @copy_out([5 x [3 x [1 x i8]]]* %0, [5 x [3 x [1 x i8]]]* nonnull align 512 %p_11_copy)
  ret float %2
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([5 x [3 x [1 x i8]]]* noalias readonly, [5 x [3 x [1 x i8]]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5a3a1i8([5 x [3 x [1 x i8]]]* align 512 %1, [5 x [3 x [1 x i8]]]* %0)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5a3a1i8([5 x [3 x [1 x i8]]]* noalias align 512, [5 x [3 x [1 x i8]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x [3 x [1 x i8]]]* %0, null
  %3 = icmp eq [5 x [3 x [1 x i8]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx19 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx318 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr1115 = getelementptr [5 x [3 x [1 x i8]]], [5 x [3 x [1 x i8]]]* %0, i64 0, i64 %for.loop.idx19, i64 %for.loop.idx318, i64 0
  %src.addr1216 = getelementptr [5 x [3 x [1 x i8]]], [5 x [3 x [1 x i8]]]* %1, i64 0, i64 %for.loop.idx19, i64 %for.loop.idx318, i64 0
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr1115, i8* align 1 %src.addr1216, i64 1, i1 false)
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx318, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 3
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx19, 1
  %exitcond20 = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond20, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([5 x [3 x [1 x i8]]]* noalias, [5 x [3 x [1 x i8]]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5a3a1i8([5 x [3 x [1 x i8]]]* %0, [5 x [3 x [1 x i8]]]* align 512 %1)
  ret void
}

declare float @apatb_fn1_hw(i64, i8, i8, [3 x [1 x i8]]*)

define float @fn1_hw_stub_wrapper(i64, i8, i8, [3 x [1 x i8]]*) #5 {
entry:
  %4 = bitcast [3 x [1 x i8]]* %3 to [5 x [3 x [1 x i8]]]*
  call void @copy_out([5 x [3 x [1 x i8]]]* null, [5 x [3 x [1 x i8]]]* %4)
  %5 = bitcast [5 x [3 x [1 x i8]]]* %4 to [3 x [1 x i8]]*
  %6 = call float @fn1_hw_stub(i64 %0, i8 %1, i8 %2, [3 x [1 x i8]]* %5)
  call void @copy_in([5 x [3 x [1 x i8]]]* null, [5 x [3 x [1 x i8]]]* %4)
  ret float %6
}

declare float @fn1_hw_stub(i64, i8, i8, [3 x [1 x i8]]*)

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
