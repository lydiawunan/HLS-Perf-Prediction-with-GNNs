; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_33/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i64 @apatb_fn1_ir(i16 %p, i8 %p_5, i8 %p_9, [2 x [4 x i16]]* %p_11, double %p_15) local_unnamed_addr #0 {
entry:
  %p_11_copy = alloca [5 x [2 x [4 x i16]]], align 512
  %0 = bitcast [2 x [4 x i16]]* %p_11 to [5 x [2 x [4 x i16]]]*
  call fastcc void @copy_in([5 x [2 x [4 x i16]]]* %0, [5 x [2 x [4 x i16]]]* nonnull align 512 %p_11_copy)
  %1 = getelementptr inbounds [5 x [2 x [4 x i16]]], [5 x [2 x [4 x i16]]]* %p_11_copy, i32 0, i32 0
  %2 = call i64 @apatb_fn1_hw(i16 %p, i8 %p_5, i8 %p_9, [2 x [4 x i16]]* %1, double %p_15)
  call fastcc void @copy_out([5 x [2 x [4 x i16]]]* %0, [5 x [2 x [4 x i16]]]* nonnull align 512 %p_11_copy)
  ret i64 %2
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([5 x [2 x [4 x i16]]]* noalias readonly, [5 x [2 x [4 x i16]]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5a2a4i16([5 x [2 x [4 x i16]]]* align 512 %1, [5 x [2 x [4 x i16]]]* %0)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5a2a4i16([5 x [2 x [4 x i16]]]* noalias align 512, [5 x [2 x [4 x i16]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x [2 x [4 x i16]]]* %0, null
  %3 = icmp eq [5 x [2 x [4 x i16]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx21 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2.split, %for.loop
  %for.loop.idx320 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2.split ]
  br label %for.loop8

for.loop8:                                        ; preds = %for.loop8, %for.loop2
  %for.loop.idx919 = phi i64 [ 0, %for.loop2 ], [ %for.loop.idx9.next, %for.loop8 ]
  %dst.addr1115.gep17 = getelementptr [5 x [2 x [4 x i16]]], [5 x [2 x [4 x i16]]]* %0, i64 0, i64 %for.loop.idx21, i64 %for.loop.idx320, i64 %for.loop.idx919
  %5 = bitcast i16* %dst.addr1115.gep17 to i8*
  %src.addr1216.gep18 = getelementptr [5 x [2 x [4 x i16]]], [5 x [2 x [4 x i16]]]* %1, i64 0, i64 %for.loop.idx21, i64 %for.loop.idx320, i64 %for.loop.idx919
  %6 = bitcast i16* %src.addr1216.gep18 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 2, i1 false)
  %for.loop.idx9.next = add nuw nsw i64 %for.loop.idx919, 1
  %exitcond = icmp ne i64 %for.loop.idx9.next, 4
  br i1 %exitcond, label %for.loop8, label %for.loop2.split

for.loop2.split:                                  ; preds = %for.loop8
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx320, 1
  %exitcond22 = icmp ne i64 %for.loop.idx3.next, 2
  br i1 %exitcond22, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2.split
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx21, 1
  %exitcond23 = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond23, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([5 x [2 x [4 x i16]]]* noalias, [5 x [2 x [4 x i16]]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5a2a4i16([5 x [2 x [4 x i16]]]* %0, [5 x [2 x [4 x i16]]]* align 512 %1)
  ret void
}

declare i64 @apatb_fn1_hw(i16, i8, i8, [2 x [4 x i16]]*, double)

define i64 @fn1_hw_stub_wrapper(i16, i8, i8, [2 x [4 x i16]]*, double) #5 {
entry:
  %5 = bitcast [2 x [4 x i16]]* %3 to [5 x [2 x [4 x i16]]]*
  call void @copy_out([5 x [2 x [4 x i16]]]* null, [5 x [2 x [4 x i16]]]* %5)
  %6 = bitcast [5 x [2 x [4 x i16]]]* %5 to [2 x [4 x i16]]*
  %7 = call i64 @fn1_hw_stub(i16 %0, i8 %1, i8 %2, [2 x [4 x i16]]* %6, double %4)
  call void @copy_in([5 x [2 x [4 x i16]]]* null, [5 x [2 x [4 x i16]]]* %5)
  ret i64 %7
}

declare i64 @fn1_hw_stub(i16, i8, i8, [2 x [4 x i16]]*, double)

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
