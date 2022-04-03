; ModuleID = '/home/nanwu/GNN_DFG/bb/dfg_101/project_tmp/solution_tmp/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: argmemonly noinline
define i16 @apatb_fn1_ir(i64 %p, i16 %p_5, i8* %p_7, i8* %p_9, double %p_11) local_unnamed_addr #0 {
entry:
  %p_7_copy = alloca [1 x i8], align 512
  %p_9_copy = alloca [1 x i8], align 512
  %0 = bitcast i8* %p_7 to [1 x i8]*
  %1 = bitcast i8* %p_9 to [1 x i8]*
  call fastcc void @copy_in([1 x i8]* %0, [1 x i8]* nonnull align 512 %p_7_copy, [1 x i8]* %1, [1 x i8]* nonnull align 512 %p_9_copy)
  %2 = getelementptr inbounds [1 x i8], [1 x i8]* %p_7_copy, i32 0, i32 0
  %3 = getelementptr inbounds [1 x i8], [1 x i8]* %p_9_copy, i32 0, i32 0
  %4 = call i16 @apatb_fn1_hw(i64 %p, i16 %p_5, i8* %2, i8* %3, double %p_11)
  call fastcc void @copy_out([1 x i8]* %0, [1 x i8]* nonnull align 512 %p_7_copy, [1 x i8]* %1, [1 x i8]* nonnull align 512 %p_9_copy)
  ret i16 %4
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in([1 x i8]* readonly, [1 x i8]* noalias align 512, [1 x i8]* readonly, [1 x i8]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a1i8([1 x i8]* align 512 %1, [1 x i8]* %0)
  call fastcc void @onebyonecpy_hls.p0a1i8([1 x i8]* align 512 %3, [1 x i8]* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0a1i8([1 x i8]* noalias align 512, [1 x i8]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [1 x i8]* %0, null
  %3 = icmp eq [1 x i8]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %for.loop

for.loop:                                         ; preds = %entry
  %dst.addr = getelementptr [1 x i8], [1 x i8]* %0, i64 0, i64 0
  %src.addr = getelementptr [1 x i8], [1 x i8]* %1, i64 0, i64 0
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr, i8* align 1 %src.addr, i64 1, i1 false)
  br label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out([1 x i8]*, [1 x i8]* noalias readonly align 512, [1 x i8]*, [1 x i8]* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a1i8([1 x i8]* %0, [1 x i8]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a1i8([1 x i8]* %2, [1 x i8]* align 512 %3)
  ret void
}

declare i16 @apatb_fn1_hw(i64, i16, i8*, i8*, double)

define i16 @fn1_hw_stub_wrapper(i64, i16, i8*, i8*, double) #5 {
entry:
  %5 = bitcast i8* %2 to [1 x i8]*
  %6 = bitcast i8* %3 to [1 x i8]*
  call void @copy_out([1 x i8]* null, [1 x i8]* %5, [1 x i8]* null, [1 x i8]* %6)
  %7 = bitcast [1 x i8]* %5 to i8*
  %8 = bitcast [1 x i8]* %6 to i8*
  %9 = call i16 @fn1_hw_stub(i64 %0, i16 %1, i8* %7, i8* %8, double %4)
  call void @copy_in([1 x i8]* null, [1 x i8]* %5, [1 x i8]* null, [1 x i8]* %6)
  ret i16 %9
}

declare i16 @fn1_hw_stub(i64, i16, i8*, i8*, double)

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
