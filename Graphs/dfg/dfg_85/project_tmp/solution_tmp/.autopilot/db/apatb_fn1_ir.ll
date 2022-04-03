; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_85/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i8 @apatb_fn1_ir(i64 %p, i16 %p_9, [4 x [2 x i64]]* %p_11, i16 %p_13) local_unnamed_addr #0 {
entry:
  %p_11_copy = alloca [1 x [4 x [2 x i64]]], align 512
  %0 = bitcast [4 x [2 x i64]]* %p_11 to [1 x [4 x [2 x i64]]]*
  call fastcc void @copy_in([1 x [4 x [2 x i64]]]* %0, [1 x [4 x [2 x i64]]]* nonnull align 512 %p_11_copy)
  %1 = getelementptr inbounds [1 x [4 x [2 x i64]]], [1 x [4 x [2 x i64]]]* %p_11_copy, i32 0, i32 0
  %2 = call i8 @apatb_fn1_hw(i64 %p, i16 %p_9, [4 x [2 x i64]]* %1, i16 %p_13)
  call fastcc void @copy_out([1 x [4 x [2 x i64]]]* %0, [1 x [4 x [2 x i64]]]* nonnull align 512 %p_11_copy)
  ret i8 %2
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([1 x [4 x [2 x i64]]]* noalias readonly, [1 x [4 x [2 x i64]]]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a1a4a2i64([1 x [4 x [2 x i64]]]* align 512 %1, [1 x [4 x [2 x i64]]]* %0)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1a4a2i64([1 x [4 x [2 x i64]]]* noalias align 512, [1 x [4 x [2 x i64]]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x [4 x [2 x i64]]]* %0, null
  %3 = icmp eq [1 x [4 x [2 x i64]]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2.split, %for.loop
  %for.loop.idx320 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2.split ]
  br label %for.loop8

for.loop8:                                        ; preds = %for.loop8, %for.loop2
  %for.loop.idx919 = phi i64 [ 0, %for.loop2 ], [ %for.loop.idx9.next, %for.loop8 ]
  %dst.addr1115.gep17 = getelementptr [1 x [4 x [2 x i64]]], [1 x [4 x [2 x i64]]]* %0, i64 0, i64 0, i64 %for.loop.idx320, i64 %for.loop.idx919
  %5 = bitcast i64* %dst.addr1115.gep17 to i8*
  %src.addr1216.gep18 = getelementptr [1 x [4 x [2 x i64]]], [1 x [4 x [2 x i64]]]* %1, i64 0, i64 0, i64 %for.loop.idx320, i64 %for.loop.idx919
  %6 = bitcast i64* %src.addr1216.gep18 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 8, i1 false)
  %for.loop.idx9.next = add nuw nsw i64 %for.loop.idx919, 1
  %exitcond = icmp ne i64 %for.loop.idx9.next, 2
  br i1 %exitcond, label %for.loop8, label %for.loop2.split

for.loop2.split:                                  ; preds = %for.loop8
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx320, 1
  %exitcond22 = icmp ne i64 %for.loop.idx3.next, 4
  br i1 %exitcond22, label %for.loop2, label %ret

ret:                                              ; preds = %for.loop2.split, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([1 x [4 x [2 x i64]]]* noalias, [1 x [4 x [2 x i64]]]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a1a4a2i64([1 x [4 x [2 x i64]]]* %0, [1 x [4 x [2 x i64]]]* align 512 %1)
  ret void
}

declare i8 @apatb_fn1_hw(i64, i16, [4 x [2 x i64]]*, i16)

define i8 @fn1_hw_stub_wrapper(i64, i16, [4 x [2 x i64]]*, i16) #5 {
entry:
  %4 = bitcast [4 x [2 x i64]]* %2 to [1 x [4 x [2 x i64]]]*
  call void @copy_out([1 x [4 x [2 x i64]]]* null, [1 x [4 x [2 x i64]]]* %4)
  %5 = bitcast [1 x [4 x [2 x i64]]]* %4 to [4 x [2 x i64]]*
  %6 = call i8 @fn1_hw_stub(i64 %0, i16 %1, [4 x [2 x i64]]* %5, i16 %3)
  call void @copy_in([1 x [4 x [2 x i64]]]* null, [1 x [4 x [2 x i64]]]* %4)
  ret i8 %6
}

declare i8 @fn1_hw_stub(i64, i16, [4 x [2 x i64]]*, i16)

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
