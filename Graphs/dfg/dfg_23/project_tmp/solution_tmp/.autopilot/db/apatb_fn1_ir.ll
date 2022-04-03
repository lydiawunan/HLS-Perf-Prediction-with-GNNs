; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_23/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i32 @apatb_fn1_ir(i8 %p, i64* %p_7, i32 %p_11, i8* %p_13) local_unnamed_addr #0 {
entry:
  %p_7_copy = alloca [5 x i64], align 512
  %p_13_copy = alloca [5 x i8], align 512
  %0 = bitcast i64* %p_7 to [5 x i64]*
  %1 = bitcast i8* %p_13 to [5 x i8]*
  call fastcc void @copy_in([5 x i64]* %0, [5 x i64]* nonnull align 512 %p_7_copy, [5 x i8]* %1, [5 x i8]* nonnull align 512 %p_13_copy)
  %2 = getelementptr inbounds [5 x i64], [5 x i64]* %p_7_copy, i32 0, i32 0
  %3 = getelementptr inbounds [5 x i8], [5 x i8]* %p_13_copy, i32 0, i32 0
  %4 = call i32 @apatb_fn1_hw(i8 %p, i64* %2, i32 %p_11, i8* %3)
  call fastcc void @copy_out([5 x i64]* %0, [5 x i64]* nonnull align 512 %p_7_copy, [5 x i8]* %1, [5 x i8]* nonnull align 512 %p_13_copy)
  ret i32 %4
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([5 x i64]* readonly, [5 x i64]* noalias align 512, [5 x i8]* readonly, [5 x i8]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5i64([5 x i64]* align 512 %1, [5 x i64]* %0)
  call fastcc void @onebyonecpy_hls.p0a5i8([5 x i8]* align 512 %3, [5 x i8]* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5i64([5 x i64]* noalias align 512, [5 x i64]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x i64]* %0, null
  %3 = icmp eq [5 x i64]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx3 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr.gep1 = getelementptr [5 x i64], [5 x i64]* %0, i64 0, i64 %for.loop.idx3
  %5 = bitcast i64* %dst.addr.gep1 to i8*
  %src.addr.gep2 = getelementptr [5 x i64], [5 x i64]* %1, i64 0, i64 %for.loop.idx3
  %6 = bitcast i64* %src.addr.gep2 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 8, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx3, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a5i8([5 x i8]* noalias align 512, [5 x i8]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5 x i8]* %0, null
  %3 = icmp eq [5 x i8]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx1 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [5 x i8], [5 x i8]* %0, i64 0, i64 %for.loop.idx1
  %src.addr = getelementptr [5 x i8], [5 x i8]* %1, i64 0, i64 %for.loop.idx1
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr, i8* align 1 %src.addr, i64 1, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx1, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 5
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([5 x i64]*, [5 x i64]* noalias readonly align 512, [5 x i8]*, [5 x i8]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5i64([5 x i64]* %0, [5 x i64]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a5i8([5 x i8]* %2, [5 x i8]* align 512 %3)
  ret void
}

declare i32 @apatb_fn1_hw(i8, i64*, i32, i8*)

define i32 @fn1_hw_stub_wrapper(i8, i64*, i32, i8*) #5 {
entry:
  %4 = bitcast i64* %1 to [5 x i64]*
  %5 = bitcast i8* %3 to [5 x i8]*
  call void @copy_out([5 x i64]* null, [5 x i64]* %4, [5 x i8]* null, [5 x i8]* %5)
  %6 = bitcast [5 x i64]* %4 to i64*
  %7 = bitcast [5 x i8]* %5 to i8*
  %8 = call i32 @fn1_hw_stub(i8 %0, i64* %6, i32 %2, i8* %7)
  call void @copy_in([5 x i64]* null, [5 x i64]* %4, [5 x i8]* null, [5 x i8]* %5)
  ret i32 %8
}

declare i32 @fn1_hw_stub(i8, i64*, i32, i8*)

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
