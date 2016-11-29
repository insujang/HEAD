; ModuleID = '/home/insujang/cs710/xilinx_hls_workspace/sum/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@adder_str = internal unnamed_addr constant [6 x i8] c"adder\00" ; [#uses=1 type=[6 x i8]*]
@p_str2 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=12 type=[1 x i8]*]
@p_str = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=2 type=[5 x i8]*]

; [#uses=14]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @adder(i32* %inStream_V_data, i1* %inStream_V_last_V, i32* %outStream_V_data, i1* %outStream_V_last_V) {
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %inStream_V_data), !map !26
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %inStream_V_last_V), !map !30
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %outStream_V_data), !map !34
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %outStream_V_last_V), !map !38
  call void (...)* @_ssdm_op_SpecTopModule([6 x i8]* @adder_str) nounwind
  call void @llvm.dbg.value(metadata !{i32* %inStream_V_data}, i64 0, metadata !42), !dbg !488 ; [debug line = 3:34] [debug variable = inStream.V.data]
  call void @llvm.dbg.value(metadata !{i1* %inStream_V_last_V}, i64 0, metadata !489), !dbg !488 ; [debug line = 3:34] [debug variable = inStream.V.last.V]
  call void @llvm.dbg.value(metadata !{i32* %outStream_V_data}, i64 0, metadata !501), !dbg !503 ; [debug line = 4:25] [debug variable = outStream.V.data]
  call void @llvm.dbg.value(metadata !{i1* %outStream_V_last_V}, i64 0, metadata !504), !dbg !503 ; [debug line = 4:25] [debug variable = outStream.V.last.V]
  call void (...)* @_ssdm_op_SpecInterface(i32* %outStream_V_data, i1* %outStream_V_last_V, [5 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !505 ; [debug line = 5:1]
  call void (...)* @_ssdm_op_SpecInterface(i32* %inStream_V_data, i1* %inStream_V_last_V, [5 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !507 ; [debug line = 6:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str2, i32 1, i32 1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !508 ; [debug line = 7:1]
  br label %1, !dbg !509                          ; [debug line = 22:13]

; <label>:1                                       ; preds = %2, %0
  %i = phi i3 [ 0, %0 ], [ %i_1, %2 ]             ; [#uses=3 type=i3]
  %i_cast1 = zext i3 %i to i32, !dbg !509         ; [#uses=1 type=i32] [debug line = 22:13]
  %exitcond = icmp eq i3 %i, -3, !dbg !509        ; [#uses=1 type=i1] [debug line = 22:13]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) ; [#uses=0 type=i32]
  %i_1 = add i3 %i, 1, !dbg !511                  ; [#uses=1 type=i3] [debug line = 22:20]
  br i1 %exitcond, label %3, label %2, !dbg !509  ; [debug line = 22:13]

; <label>:2                                       ; preds = %1
  call void @llvm.dbg.value(metadata !{i32* %inStream_V_data}, i64 0, metadata !512), !dbg !517 ; [debug line = 129:56@23:18] [debug variable = stream<ap_item>.V.data]
  call void @llvm.dbg.value(metadata !{i1* %inStream_V_last_V}, i64 0, metadata !520), !dbg !517 ; [debug line = 129:56@23:18] [debug variable = stream<ap_item>.V.last.V]
  %empty_2 = call { i32, i1 } @_ssdm_op_Read.axis.volatile.i32P.i1P(i32* %inStream_V_data, i1* %inStream_V_last_V), !dbg !522 ; [#uses=2 type={ i32, i1 }] [debug line = 131:9@23:18]
  %tmp_data = extractvalue { i32, i1 } %empty_2, 0, !dbg !522 ; [#uses=1 type=i32] [debug line = 131:9@23:18]
  %tmp_last_V = extractvalue { i32, i1 } %empty_2, 1, !dbg !522 ; [#uses=1 type=i1] [debug line = 131:9@23:18]
  call void @llvm.dbg.value(metadata !{i32 %tmp_data}, i64 0, metadata !524), !dbg !522 ; [debug line = 131:9@23:18] [debug variable = tmp.data]
  call void @llvm.dbg.value(metadata !{i1 %tmp_last_V}, i64 0, metadata !526), !dbg !522 ; [debug line = 131:9@23:18] [debug variable = tmp.last.V]
  %tmp_data_1 = add nsw i32 %tmp_data, %i_cast1, !dbg !527 ; [#uses=1 type=i32] [debug line = 24:3]
  call void @llvm.dbg.value(metadata !{i32 %tmp_data_1}, i64 0, metadata !524), !dbg !527 ; [debug line = 24:3] [debug variable = tmp.data]
  call void @llvm.dbg.value(metadata !{i32* %outStream_V_data}, i64 0, metadata !528), !dbg !531 ; [debug line = 144:48@25:3] [debug variable = stream<ap_item>.V.data]
  call void @llvm.dbg.value(metadata !{i1* %outStream_V_last_V}, i64 0, metadata !533), !dbg !531 ; [debug line = 144:48@25:3] [debug variable = stream<ap_item>.V.last.V]
  call void @llvm.dbg.value(metadata !{i32 %tmp_data_1}, i64 0, metadata !534), !dbg !537 ; [debug line = 145:31@25:3] [debug variable = tmp.data]
  call void @llvm.dbg.value(metadata !{i1 %tmp_last_V}, i64 0, metadata !538), !dbg !537 ; [debug line = 145:31@25:3] [debug variable = tmp.last.V]
  call void @_ssdm_op_Write.axis.volatile.i32P.i1P(i32* %outStream_V_data, i1* %outStream_V_last_V, i32 %tmp_data_1, i1 %tmp_last_V), !dbg !539 ; [debug line = 146:9@25:3]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !540), !dbg !511 ; [debug line = 22:20] [debug variable = i]
  br label %1, !dbg !511                          ; [debug line = 22:20]

; <label>:3                                       ; preds = %1
  ret void, !dbg !541                             ; [debug line = 27:1]
}

; [#uses=1]
define weak void @_ssdm_op_Write.axis.volatile.i32P.i1P(i32*, i1*, i32, i1) {
entry:
  store i32 %2, i32* %0
  store i1 %3, i1* %1
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak { i32, i1 } @_ssdm_op_Read.axis.volatile.i32P.i1P(i32*, i1*) {
entry:
  %empty = load i32* %0                           ; [#uses=1 type=i32]
  %empty_3 = load i1* %1                          ; [#uses=1 type=i1]
  %mrv_0 = insertvalue { i32, i1 } undef, i32 %empty, 0 ; [#uses=1 type={ i32, i1 }]
  %mrv1 = insertvalue { i32, i1 } %mrv_0, i1 %empty_3, 1 ; [#uses=1 type={ i32, i1 }]
  ret { i32, i1 } %mrv1
}

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !13, !13, !13, !13, !13, !13}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!19}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"hls::stream<ap_item> &", metadata !"hls::stream<ap_item> &"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"inStream", metadata !"outStream"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_item &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"din"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space"}
!15 = metadata !{metadata !"kernel_arg_access_qual"}
!16 = metadata !{metadata !"kernel_arg_type"}
!17 = metadata !{metadata !"kernel_arg_type_qual"}
!18 = metadata !{metadata !"kernel_arg_name"}
!19 = metadata !{metadata !20, [1 x i32]* @llvm_global_ctors_0}
!20 = metadata !{metadata !21}
!21 = metadata !{i32 0, i32 31, metadata !22}
!22 = metadata !{metadata !23}
!23 = metadata !{metadata !"llvm.global_ctors.0", metadata !24, metadata !"", i32 0, i32 31}
!24 = metadata !{metadata !25}
!25 = metadata !{i32 0, i32 0, i32 1}
!26 = metadata !{metadata !27}
!27 = metadata !{i32 0, i32 31, metadata !28}
!28 = metadata !{metadata !29}
!29 = metadata !{metadata !"inStream.V.data", metadata !24, metadata !"int", i32 0, i32 31}
!30 = metadata !{metadata !31}
!31 = metadata !{i32 0, i32 0, metadata !32}
!32 = metadata !{metadata !33}
!33 = metadata !{metadata !"inStream.V.last.V", metadata !24, metadata !"uint1", i32 0, i32 0}
!34 = metadata !{metadata !35}
!35 = metadata !{i32 0, i32 31, metadata !36}
!36 = metadata !{metadata !37}
!37 = metadata !{metadata !"outStream.V.data", metadata !24, metadata !"int", i32 0, i32 31}
!38 = metadata !{metadata !39}
!39 = metadata !{i32 0, i32 0, metadata !40}
!40 = metadata !{metadata !41}
!41 = metadata !{metadata !"outStream.V.last.V", metadata !24, metadata !"uint1", i32 0, i32 0}
!42 = metadata !{i32 790531, metadata !43, metadata !"inStream.V.data", null, i32 3, metadata !483, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!43 = metadata !{i32 786689, metadata !44, metadata !"inStream", metadata !45, i32 16777219, metadata !48, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!44 = metadata !{i32 786478, i32 0, metadata !45, metadata !"adder", metadata !"adder", metadata !"_Z5adderRN3hls6streamI7ap_itemEES3_", metadata !45, i32 3, metadata !46, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !77, i32 4} ; [ DW_TAG_subprogram ]
!45 = metadata !{i32 786473, metadata !"sum/solution1/adder.cpp", metadata !"/home/insujang/cs710/xilinx_hls_workspace", null} ; [ DW_TAG_file_type ]
!46 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !47, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!47 = metadata !{null, metadata !48, metadata !48}
!48 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !49} ; [ DW_TAG_reference_type ]
!49 = metadata !{i32 786434, metadata !50, metadata !"stream<ap_item>", metadata !51, i32 79, i64 64, i64 32, i32 0, i32 0, null, metadata !52, i32 0, null, metadata !481} ; [ DW_TAG_class_type ]
!50 = metadata !{i32 786489, null, metadata !"hls", metadata !51, i32 69} ; [ DW_TAG_namespace ]
!51 = metadata !{i32 786473, metadata !"/opt/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot/hls_stream.h", metadata !"/home/insujang/cs710/xilinx_hls_workspace", null} ; [ DW_TAG_file_type ]
!52 = metadata !{metadata !53, metadata !440, metadata !444, metadata !447, metadata !452, metadata !455, metadata !459, metadata !462, metadata !466, metadata !467, metadata !468, metadata !471, metadata !474, metadata !475, metadata !478}
!53 = metadata !{i32 786445, metadata !49, metadata !"V", metadata !51, i32 163, i64 64, i64 32, i64 0, i32 0, metadata !54} ; [ DW_TAG_member ]
!54 = metadata !{i32 786434, null, metadata !"ap_item", metadata !55, i32 5, i64 64, i64 32, i32 0, i32 0, null, metadata !56, i32 0, null, null} ; [ DW_TAG_class_type ]
!55 = metadata !{i32 786473, metadata !"sum/solution1/adder.h", metadata !"/home/insujang/cs710/xilinx_hls_workspace", null} ; [ DW_TAG_file_type ]
!56 = metadata !{metadata !57, metadata !59, metadata !431, metadata !435}
!57 = metadata !{i32 786445, metadata !54, metadata !"data", metadata !55, i32 6, i64 32, i64 32, i64 0, i32 0, metadata !58} ; [ DW_TAG_member ]
!58 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!59 = metadata !{i32 786445, metadata !54, metadata !"last", metadata !55, i32 7, i64 8, i64 8, i64 32, i32 0, metadata !60} ; [ DW_TAG_member ]
!60 = metadata !{i32 786434, null, metadata !"ap_uint<1>", metadata !61, i32 180, i64 8, i64 8, i32 0, i32 0, null, metadata !62, i32 0, null, metadata !430} ; [ DW_TAG_class_type ]
!61 = metadata !{i32 786473, metadata !"/opt/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot/ap_int.h", metadata !"/home/insujang/cs710/xilinx_hls_workspace", null} ; [ DW_TAG_file_type ]
!62 = metadata !{metadata !63, metadata !351, metadata !355, metadata !361, metadata !367, metadata !370, metadata !373, metadata !376, metadata !379, metadata !382, metadata !385, metadata !388, metadata !391, metadata !394, metadata !397, metadata !400, metadata !403, metadata !406, metadata !409, metadata !412, metadata !415, metadata !419, metadata !422, metadata !426, metadata !429}
!63 = metadata !{i32 786460, metadata !60, null, metadata !61, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !64} ; [ DW_TAG_inheritance ]
!64 = metadata !{i32 786434, null, metadata !"ap_int_base<1, false, true>", metadata !65, i32 1397, i64 8, i64 8, i32 0, i32 0, null, metadata !66, i32 0, null, metadata !348} ; [ DW_TAG_class_type ]
!65 = metadata !{i32 786473, metadata !"/opt/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot/ap_int_syn.h", metadata !"/home/insujang/cs710/xilinx_hls_workspace", null} ; [ DW_TAG_file_type ]
!66 = metadata !{metadata !67, metadata !88, metadata !92, metadata !100, metadata !106, metadata !109, metadata !113, metadata !117, metadata !121, metadata !125, metadata !128, metadata !132, metadata !136, metadata !140, metadata !145, metadata !150, metadata !154, metadata !158, metadata !164, metadata !167, metadata !171, metadata !174, metadata !177, metadata !178, metadata !182, metadata !185, metadata !188, metadata !191, metadata !194, metadata !197, metadata !200, metadata !203, metadata !206, metadata !209, metadata !212, metadata !215, metadata !223, metadata !226, metadata !229, metadata !232, metadata !235, metadata !238, metadata !241, metadata !244, metadata !247, metadata !250, metadata !253, metadata !256, metadata !259, metadata !260, metadata !264, metadata !267, metadata !268, metadata !269, metadata !270, metadata !271, metadata !272, metadata !275, metadata !276, metadata !279, metadata !280, metadata !281, metadata !282, metadata !283, metadata !284, metadata !287, metadata !288, metadata !289, metadata !292, metadata !293, metadata !296, metadata !297, metadata !301, metadata !305, metadata !306, metadata !309, metadata !310, metadata !314, metadata !315, metadata !316, metadata !317, metadata !320, metadata !321, metadata !322, metadata !323, metadata !324, metadata !325, metadata !326, metadata !327, metadata !328, metadata !329, metadata !330, metadata !331, metadata !341, metadata !344, metadata !347}
!67 = metadata !{i32 786460, metadata !64, null, metadata !65, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !68} ; [ DW_TAG_inheritance ]
!68 = metadata !{i32 786434, null, metadata !"ssdm_int<1 + 1024 * 0, false>", metadata !69, i32 3, i64 8, i64 8, i32 0, i32 0, null, metadata !70, i32 0, null, metadata !84} ; [ DW_TAG_class_type ]
!69 = metadata !{i32 786473, metadata !"/opt/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot/etc/autopilot_dt.def", metadata !"/home/insujang/cs710/xilinx_hls_workspace", null} ; [ DW_TAG_file_type ]
!70 = metadata !{metadata !71, metadata !73, metadata !79}
!71 = metadata !{i32 786445, metadata !68, metadata !"V", metadata !69, i32 3, i64 1, i64 1, i64 0, i32 0, metadata !72} ; [ DW_TAG_member ]
!72 = metadata !{i32 786468, null, metadata !"uint1", null, i32 0, i64 1, i64 1, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!73 = metadata !{i32 786478, i32 0, metadata !68, metadata !"ssdm_int", metadata !"ssdm_int", metadata !"", metadata !69, i32 3, metadata !74, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 3} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{null, metadata !76}
!76 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !68} ; [ DW_TAG_pointer_type ]
!77 = metadata !{metadata !78}
!78 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!79 = metadata !{i32 786478, i32 0, metadata !68, metadata !"ssdm_int", metadata !"ssdm_int", metadata !"", metadata !69, i32 3, metadata !80, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !77, i32 3} ; [ DW_TAG_subprogram ]
!80 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !81, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!81 = metadata !{null, metadata !76, metadata !82}
!82 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !83} ; [ DW_TAG_reference_type ]
!83 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !68} ; [ DW_TAG_const_type ]
!84 = metadata !{metadata !85, metadata !86}
!85 = metadata !{i32 786480, null, metadata !"_AP_N", metadata !58, i64 1, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!86 = metadata !{i32 786480, null, metadata !"_AP_S", metadata !87, i64 0, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!87 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!88 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1438, metadata !89, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1438} ; [ DW_TAG_subprogram ]
!89 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !90, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!90 = metadata !{null, metadata !91}
!91 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !64} ; [ DW_TAG_pointer_type ]
!92 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base<1, false>", metadata !"ap_int_base<1, false>", metadata !"", metadata !65, i32 1450, metadata !93, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, metadata !97, i32 0, metadata !77, i32 1450} ; [ DW_TAG_subprogram ]
!93 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !94, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!94 = metadata !{null, metadata !91, metadata !95}
!95 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !96} ; [ DW_TAG_reference_type ]
!96 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !64} ; [ DW_TAG_const_type ]
!97 = metadata !{metadata !98, metadata !99}
!98 = metadata !{i32 786480, null, metadata !"_AP_W2", metadata !58, i64 1, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!99 = metadata !{i32 786480, null, metadata !"_AP_S2", metadata !87, i64 0, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!100 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base<1, false>", metadata !"ap_int_base<1, false>", metadata !"", metadata !65, i32 1453, metadata !101, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, metadata !97, i32 0, metadata !77, i32 1453} ; [ DW_TAG_subprogram ]
!101 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !102, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!102 = metadata !{null, metadata !91, metadata !103}
!103 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !104} ; [ DW_TAG_reference_type ]
!104 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !105} ; [ DW_TAG_const_type ]
!105 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !64} ; [ DW_TAG_volatile_type ]
!106 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1460, metadata !107, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1460} ; [ DW_TAG_subprogram ]
!107 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !108, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!108 = metadata !{null, metadata !91, metadata !87}
!109 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1461, metadata !110, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1461} ; [ DW_TAG_subprogram ]
!110 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !111, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!111 = metadata !{null, metadata !91, metadata !112}
!112 = metadata !{i32 786468, null, metadata !"signed char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!113 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1462, metadata !114, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1462} ; [ DW_TAG_subprogram ]
!114 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !115, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!115 = metadata !{null, metadata !91, metadata !116}
!116 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!117 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1463, metadata !118, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1463} ; [ DW_TAG_subprogram ]
!118 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !119, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!119 = metadata !{null, metadata !91, metadata !120}
!120 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!121 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1464, metadata !122, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1464} ; [ DW_TAG_subprogram ]
!122 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !123, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!123 = metadata !{null, metadata !91, metadata !124}
!124 = metadata !{i32 786468, null, metadata !"unsigned short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!125 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1465, metadata !126, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1465} ; [ DW_TAG_subprogram ]
!126 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !127, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!127 = metadata !{null, metadata !91, metadata !58}
!128 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1466, metadata !129, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1466} ; [ DW_TAG_subprogram ]
!129 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !130, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!130 = metadata !{null, metadata !91, metadata !131}
!131 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!132 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1467, metadata !133, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1467} ; [ DW_TAG_subprogram ]
!133 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !134, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!134 = metadata !{null, metadata !91, metadata !135}
!135 = metadata !{i32 786468, null, metadata !"long int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!136 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1468, metadata !137, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1468} ; [ DW_TAG_subprogram ]
!137 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !138, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!138 = metadata !{null, metadata !91, metadata !139}
!139 = metadata !{i32 786468, null, metadata !"long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!140 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1469, metadata !141, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1469} ; [ DW_TAG_subprogram ]
!141 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !142, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!142 = metadata !{null, metadata !91, metadata !143}
!143 = metadata !{i32 786454, null, metadata !"ap_slong", metadata !65, i32 111, i64 0, i64 0, i64 0, i32 0, metadata !144} ; [ DW_TAG_typedef ]
!144 = metadata !{i32 786468, null, metadata !"long long int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!145 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1470, metadata !146, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1470} ; [ DW_TAG_subprogram ]
!146 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !147, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!147 = metadata !{null, metadata !91, metadata !148}
!148 = metadata !{i32 786454, null, metadata !"ap_ulong", metadata !65, i32 110, i64 0, i64 0, i64 0, i32 0, metadata !149} ; [ DW_TAG_typedef ]
!149 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!150 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1471, metadata !151, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1471} ; [ DW_TAG_subprogram ]
!151 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !152, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!152 = metadata !{null, metadata !91, metadata !153}
!153 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!154 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1472, metadata !155, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !77, i32 1472} ; [ DW_TAG_subprogram ]
!155 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !156, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!156 = metadata !{null, metadata !91, metadata !157}
!157 = metadata !{i32 786468, null, metadata !"double", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!158 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1499, metadata !159, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1499} ; [ DW_TAG_subprogram ]
!159 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !160, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!160 = metadata !{null, metadata !91, metadata !161}
!161 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !162} ; [ DW_TAG_pointer_type ]
!162 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !163} ; [ DW_TAG_const_type ]
!163 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!164 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1506, metadata !165, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1506} ; [ DW_TAG_subprogram ]
!165 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !166, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!166 = metadata !{null, metadata !91, metadata !161, metadata !112}
!167 = metadata !{i32 786478, i32 0, metadata !64, metadata !"read", metadata !"read", metadata !"_ZNV11ap_int_baseILi1ELb0ELb1EE4readEv", metadata !65, i32 1527, metadata !168, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1527} ; [ DW_TAG_subprogram ]
!168 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !169, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!169 = metadata !{metadata !64, metadata !170}
!170 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !105} ; [ DW_TAG_pointer_type ]
!171 = metadata !{i32 786478, i32 0, metadata !64, metadata !"write", metadata !"write", metadata !"_ZNV11ap_int_baseILi1ELb0ELb1EE5writeERKS0_", metadata !65, i32 1533, metadata !172, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1533} ; [ DW_TAG_subprogram ]
!172 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !173, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!173 = metadata !{null, metadata !170, metadata !95}
!174 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZNV11ap_int_baseILi1ELb0ELb1EEaSERVKS0_", metadata !65, i32 1545, metadata !175, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1545} ; [ DW_TAG_subprogram ]
!175 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !176, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!176 = metadata !{null, metadata !170, metadata !103}
!177 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZNV11ap_int_baseILi1ELb0ELb1EEaSERKS0_", metadata !65, i32 1554, metadata !172, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1554} ; [ DW_TAG_subprogram ]
!178 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSERVKS0_", metadata !65, i32 1577, metadata !179, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1577} ; [ DW_TAG_subprogram ]
!179 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !180, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!180 = metadata !{metadata !181, metadata !91, metadata !103}
!181 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !64} ; [ DW_TAG_reference_type ]
!182 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSERKS0_", metadata !65, i32 1582, metadata !183, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1582} ; [ DW_TAG_subprogram ]
!183 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !184, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!184 = metadata !{metadata !181, metadata !91, metadata !95}
!185 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEPKc", metadata !65, i32 1586, metadata !186, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1586} ; [ DW_TAG_subprogram ]
!186 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !187, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!187 = metadata !{metadata !181, metadata !91, metadata !161}
!188 = metadata !{i32 786478, i32 0, metadata !64, metadata !"set", metadata !"set", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE3setEPKca", metadata !65, i32 1594, metadata !189, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1594} ; [ DW_TAG_subprogram ]
!189 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !190, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!190 = metadata !{metadata !181, metadata !91, metadata !161, metadata !112}
!191 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEa", metadata !65, i32 1608, metadata !192, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1608} ; [ DW_TAG_subprogram ]
!192 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !193, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!193 = metadata !{metadata !181, metadata !91, metadata !112}
!194 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEh", metadata !65, i32 1609, metadata !195, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1609} ; [ DW_TAG_subprogram ]
!195 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !196, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!196 = metadata !{metadata !181, metadata !91, metadata !116}
!197 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEs", metadata !65, i32 1610, metadata !198, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1610} ; [ DW_TAG_subprogram ]
!198 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !199, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!199 = metadata !{metadata !181, metadata !91, metadata !120}
!200 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEt", metadata !65, i32 1611, metadata !201, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1611} ; [ DW_TAG_subprogram ]
!201 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !202, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!202 = metadata !{metadata !181, metadata !91, metadata !124}
!203 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEi", metadata !65, i32 1612, metadata !204, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1612} ; [ DW_TAG_subprogram ]
!204 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !205, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!205 = metadata !{metadata !181, metadata !91, metadata !58}
!206 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEj", metadata !65, i32 1613, metadata !207, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1613} ; [ DW_TAG_subprogram ]
!207 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !208, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!208 = metadata !{metadata !181, metadata !91, metadata !131}
!209 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEx", metadata !65, i32 1614, metadata !210, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1614} ; [ DW_TAG_subprogram ]
!210 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !211, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!211 = metadata !{metadata !181, metadata !91, metadata !143}
!212 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator=", metadata !"operator=", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEaSEy", metadata !65, i32 1615, metadata !213, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1615} ; [ DW_TAG_subprogram ]
!213 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !214, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!214 = metadata !{metadata !181, metadata !91, metadata !148}
!215 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator unsigned char", metadata !"operator unsigned char", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EEcvhEv", metadata !65, i32 1653, metadata !216, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1653} ; [ DW_TAG_subprogram ]
!216 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !217, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!217 = metadata !{metadata !218, metadata !222}
!218 = metadata !{i32 786454, metadata !64, metadata !"RetType", metadata !65, i32 1402, i64 0, i64 0, i64 0, i32 0, metadata !219} ; [ DW_TAG_typedef ]
!219 = metadata !{i32 786454, metadata !220, metadata !"Type", metadata !65, i32 1370, i64 0, i64 0, i64 0, i32 0, metadata !116} ; [ DW_TAG_typedef ]
!220 = metadata !{i32 786434, null, metadata !"retval<1, false>", metadata !65, i32 1369, i64 8, i64 8, i32 0, i32 0, null, metadata !221, i32 0, null, metadata !84} ; [ DW_TAG_class_type ]
!221 = metadata !{i32 0}
!222 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !96} ; [ DW_TAG_pointer_type ]
!223 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_bool", metadata !"to_bool", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE7to_boolEv", metadata !65, i32 1659, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1659} ; [ DW_TAG_subprogram ]
!224 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !225, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!225 = metadata !{metadata !87, metadata !222}
!226 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_uchar", metadata !"to_uchar", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE8to_ucharEv", metadata !65, i32 1660, metadata !227, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1660} ; [ DW_TAG_subprogram ]
!227 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !228, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!228 = metadata !{metadata !116, metadata !222}
!229 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_char", metadata !"to_char", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE7to_charEv", metadata !65, i32 1661, metadata !230, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1661} ; [ DW_TAG_subprogram ]
!230 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !231, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!231 = metadata !{metadata !112, metadata !222}
!232 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_ushort", metadata !"to_ushort", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9to_ushortEv", metadata !65, i32 1662, metadata !233, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1662} ; [ DW_TAG_subprogram ]
!233 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !234, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!234 = metadata !{metadata !124, metadata !222}
!235 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_short", metadata !"to_short", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE8to_shortEv", metadata !65, i32 1663, metadata !236, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1663} ; [ DW_TAG_subprogram ]
!236 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !237, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!237 = metadata !{metadata !120, metadata !222}
!238 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_int", metadata !"to_int", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE6to_intEv", metadata !65, i32 1664, metadata !239, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1664} ; [ DW_TAG_subprogram ]
!239 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !240, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!240 = metadata !{metadata !58, metadata !222}
!241 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_uint", metadata !"to_uint", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE7to_uintEv", metadata !65, i32 1665, metadata !242, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1665} ; [ DW_TAG_subprogram ]
!242 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !243, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!243 = metadata !{metadata !131, metadata !222}
!244 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_long", metadata !"to_long", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE7to_longEv", metadata !65, i32 1666, metadata !245, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1666} ; [ DW_TAG_subprogram ]
!245 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !246, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!246 = metadata !{metadata !135, metadata !222}
!247 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_ulong", metadata !"to_ulong", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE8to_ulongEv", metadata !65, i32 1667, metadata !248, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1667} ; [ DW_TAG_subprogram ]
!248 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !249, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!249 = metadata !{metadata !139, metadata !222}
!250 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_int64", metadata !"to_int64", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE8to_int64Ev", metadata !65, i32 1668, metadata !251, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1668} ; [ DW_TAG_subprogram ]
!251 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !252, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!252 = metadata !{metadata !143, metadata !222}
!253 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_uint64", metadata !"to_uint64", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9to_uint64Ev", metadata !65, i32 1669, metadata !254, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1669} ; [ DW_TAG_subprogram ]
!254 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !255, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!255 = metadata !{metadata !148, metadata !222}
!256 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_double", metadata !"to_double", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9to_doubleEv", metadata !65, i32 1670, metadata !257, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1670} ; [ DW_TAG_subprogram ]
!257 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !258, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!258 = metadata !{metadata !157, metadata !222}
!259 = metadata !{i32 786478, i32 0, metadata !64, metadata !"length", metadata !"length", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE6lengthEv", metadata !65, i32 1684, metadata !239, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1684} ; [ DW_TAG_subprogram ]
!260 = metadata !{i32 786478, i32 0, metadata !64, metadata !"length", metadata !"length", metadata !"_ZNVK11ap_int_baseILi1ELb0ELb1EE6lengthEv", metadata !65, i32 1685, metadata !261, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1685} ; [ DW_TAG_subprogram ]
!261 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !262, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!262 = metadata !{metadata !58, metadata !263}
!263 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !104} ; [ DW_TAG_pointer_type ]
!264 = metadata !{i32 786478, i32 0, metadata !64, metadata !"reverse", metadata !"reverse", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE7reverseEv", metadata !65, i32 1690, metadata !265, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1690} ; [ DW_TAG_subprogram ]
!265 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !266, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!266 = metadata !{metadata !181, metadata !91}
!267 = metadata !{i32 786478, i32 0, metadata !64, metadata !"iszero", metadata !"iszero", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE6iszeroEv", metadata !65, i32 1696, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1696} ; [ DW_TAG_subprogram ]
!268 = metadata !{i32 786478, i32 0, metadata !64, metadata !"is_zero", metadata !"is_zero", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE7is_zeroEv", metadata !65, i32 1701, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1701} ; [ DW_TAG_subprogram ]
!269 = metadata !{i32 786478, i32 0, metadata !64, metadata !"sign", metadata !"sign", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE4signEv", metadata !65, i32 1706, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1706} ; [ DW_TAG_subprogram ]
!270 = metadata !{i32 786478, i32 0, metadata !64, metadata !"clear", metadata !"clear", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE5clearEi", metadata !65, i32 1714, metadata !126, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1714} ; [ DW_TAG_subprogram ]
!271 = metadata !{i32 786478, i32 0, metadata !64, metadata !"invert", metadata !"invert", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE6invertEi", metadata !65, i32 1720, metadata !126, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1720} ; [ DW_TAG_subprogram ]
!272 = metadata !{i32 786478, i32 0, metadata !64, metadata !"test", metadata !"test", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE4testEi", metadata !65, i32 1728, metadata !273, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1728} ; [ DW_TAG_subprogram ]
!273 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !274, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!274 = metadata !{metadata !87, metadata !222, metadata !58}
!275 = metadata !{i32 786478, i32 0, metadata !64, metadata !"set", metadata !"set", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE3setEi", metadata !65, i32 1734, metadata !126, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1734} ; [ DW_TAG_subprogram ]
!276 = metadata !{i32 786478, i32 0, metadata !64, metadata !"set", metadata !"set", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE3setEib", metadata !65, i32 1740, metadata !277, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1740} ; [ DW_TAG_subprogram ]
!277 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !278, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!278 = metadata !{null, metadata !91, metadata !58, metadata !87}
!279 = metadata !{i32 786478, i32 0, metadata !64, metadata !"lrotate", metadata !"lrotate", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE7lrotateEi", metadata !65, i32 1747, metadata !126, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1747} ; [ DW_TAG_subprogram ]
!280 = metadata !{i32 786478, i32 0, metadata !64, metadata !"rrotate", metadata !"rrotate", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE7rrotateEi", metadata !65, i32 1756, metadata !126, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1756} ; [ DW_TAG_subprogram ]
!281 = metadata !{i32 786478, i32 0, metadata !64, metadata !"set_bit", metadata !"set_bit", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE7set_bitEib", metadata !65, i32 1764, metadata !277, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1764} ; [ DW_TAG_subprogram ]
!282 = metadata !{i32 786478, i32 0, metadata !64, metadata !"get_bit", metadata !"get_bit", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE7get_bitEi", metadata !65, i32 1769, metadata !273, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1769} ; [ DW_TAG_subprogram ]
!283 = metadata !{i32 786478, i32 0, metadata !64, metadata !"b_not", metadata !"b_not", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE5b_notEv", metadata !65, i32 1774, metadata !89, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1774} ; [ DW_TAG_subprogram ]
!284 = metadata !{i32 786478, i32 0, metadata !64, metadata !"countLeadingZeros", metadata !"countLeadingZeros", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE17countLeadingZerosEv", metadata !65, i32 1781, metadata !285, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1781} ; [ DW_TAG_subprogram ]
!285 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !286, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!286 = metadata !{metadata !58, metadata !91}
!287 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator++", metadata !"operator++", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEppEv", metadata !65, i32 1838, metadata !265, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1838} ; [ DW_TAG_subprogram ]
!288 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator--", metadata !"operator--", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEmmEv", metadata !65, i32 1842, metadata !265, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1842} ; [ DW_TAG_subprogram ]
!289 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator++", metadata !"operator++", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEppEi", metadata !65, i32 1850, metadata !290, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1850} ; [ DW_TAG_subprogram ]
!290 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !291, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!291 = metadata !{metadata !96, metadata !91, metadata !58}
!292 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator--", metadata !"operator--", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEmmEi", metadata !65, i32 1855, metadata !290, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1855} ; [ DW_TAG_subprogram ]
!293 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator+", metadata !"operator+", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EEpsEv", metadata !65, i32 1864, metadata !294, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1864} ; [ DW_TAG_subprogram ]
!294 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !295, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!295 = metadata !{metadata !64, metadata !222}
!296 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator!", metadata !"operator!", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EEntEv", metadata !65, i32 1870, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1870} ; [ DW_TAG_subprogram ]
!297 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator-", metadata !"operator-", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EEngEv", metadata !65, i32 1875, metadata !298, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 1875} ; [ DW_TAG_subprogram ]
!298 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !299, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!299 = metadata !{metadata !300, metadata !222}
!300 = metadata !{i32 786434, null, metadata !"ap_int_base<2, true, true>", metadata !65, i32 650, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!301 = metadata !{i32 786478, i32 0, metadata !64, metadata !"range", metadata !"range", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE5rangeEii", metadata !65, i32 2005, metadata !302, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2005} ; [ DW_TAG_subprogram ]
!302 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !303, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!303 = metadata !{metadata !304, metadata !91, metadata !58, metadata !58}
!304 = metadata !{i32 786434, null, metadata !"ap_range_ref<1, false>", metadata !65, i32 923, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!305 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator()", metadata !"operator()", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEclEii", metadata !65, i32 2011, metadata !302, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2011} ; [ DW_TAG_subprogram ]
!306 = metadata !{i32 786478, i32 0, metadata !64, metadata !"range", metadata !"range", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE5rangeEii", metadata !65, i32 2017, metadata !307, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2017} ; [ DW_TAG_subprogram ]
!307 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !308, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!308 = metadata !{metadata !304, metadata !222, metadata !58, metadata !58}
!309 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator()", metadata !"operator()", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EEclEii", metadata !65, i32 2023, metadata !307, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2023} ; [ DW_TAG_subprogram ]
!310 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator[]", metadata !"operator[]", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EEixEi", metadata !65, i32 2042, metadata !311, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2042} ; [ DW_TAG_subprogram ]
!311 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !312, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!312 = metadata !{metadata !313, metadata !91, metadata !58}
!313 = metadata !{i32 786434, null, metadata !"ap_bit_ref<1, false>", metadata !65, i32 1193, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!314 = metadata !{i32 786478, i32 0, metadata !64, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EEixEi", metadata !65, i32 2056, metadata !273, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2056} ; [ DW_TAG_subprogram ]
!315 = metadata !{i32 786478, i32 0, metadata !64, metadata !"bit", metadata !"bit", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE3bitEi", metadata !65, i32 2070, metadata !311, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2070} ; [ DW_TAG_subprogram ]
!316 = metadata !{i32 786478, i32 0, metadata !64, metadata !"bit", metadata !"bit", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE3bitEi", metadata !65, i32 2084, metadata !273, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2084} ; [ DW_TAG_subprogram ]
!317 = metadata !{i32 786478, i32 0, metadata !64, metadata !"and_reduce", metadata !"and_reduce", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE10and_reduceEv", metadata !65, i32 2264, metadata !318, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2264} ; [ DW_TAG_subprogram ]
!318 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !319, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!319 = metadata !{metadata !87, metadata !91}
!320 = metadata !{i32 786478, i32 0, metadata !64, metadata !"nand_reduce", metadata !"nand_reduce", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE11nand_reduceEv", metadata !65, i32 2267, metadata !318, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2267} ; [ DW_TAG_subprogram ]
!321 = metadata !{i32 786478, i32 0, metadata !64, metadata !"or_reduce", metadata !"or_reduce", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE9or_reduceEv", metadata !65, i32 2270, metadata !318, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2270} ; [ DW_TAG_subprogram ]
!322 = metadata !{i32 786478, i32 0, metadata !64, metadata !"nor_reduce", metadata !"nor_reduce", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE10nor_reduceEv", metadata !65, i32 2273, metadata !318, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2273} ; [ DW_TAG_subprogram ]
!323 = metadata !{i32 786478, i32 0, metadata !64, metadata !"xor_reduce", metadata !"xor_reduce", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE10xor_reduceEv", metadata !65, i32 2276, metadata !318, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2276} ; [ DW_TAG_subprogram ]
!324 = metadata !{i32 786478, i32 0, metadata !64, metadata !"xnor_reduce", metadata !"xnor_reduce", metadata !"_ZN11ap_int_baseILi1ELb0ELb1EE11xnor_reduceEv", metadata !65, i32 2279, metadata !318, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2279} ; [ DW_TAG_subprogram ]
!325 = metadata !{i32 786478, i32 0, metadata !64, metadata !"and_reduce", metadata !"and_reduce", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE10and_reduceEv", metadata !65, i32 2283, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2283} ; [ DW_TAG_subprogram ]
!326 = metadata !{i32 786478, i32 0, metadata !64, metadata !"nand_reduce", metadata !"nand_reduce", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE11nand_reduceEv", metadata !65, i32 2286, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2286} ; [ DW_TAG_subprogram ]
!327 = metadata !{i32 786478, i32 0, metadata !64, metadata !"or_reduce", metadata !"or_reduce", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9or_reduceEv", metadata !65, i32 2289, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2289} ; [ DW_TAG_subprogram ]
!328 = metadata !{i32 786478, i32 0, metadata !64, metadata !"nor_reduce", metadata !"nor_reduce", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE10nor_reduceEv", metadata !65, i32 2292, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2292} ; [ DW_TAG_subprogram ]
!329 = metadata !{i32 786478, i32 0, metadata !64, metadata !"xor_reduce", metadata !"xor_reduce", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE10xor_reduceEv", metadata !65, i32 2295, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2295} ; [ DW_TAG_subprogram ]
!330 = metadata !{i32 786478, i32 0, metadata !64, metadata !"xnor_reduce", metadata !"xnor_reduce", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE11xnor_reduceEv", metadata !65, i32 2298, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2298} ; [ DW_TAG_subprogram ]
!331 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_string", metadata !"to_string", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9to_stringEPci8BaseModeb", metadata !65, i32 2305, metadata !332, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2305} ; [ DW_TAG_subprogram ]
!332 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !333, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!333 = metadata !{null, metadata !222, metadata !334, metadata !58, metadata !335, metadata !87}
!334 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !163} ; [ DW_TAG_pointer_type ]
!335 = metadata !{i32 786436, null, metadata !"BaseMode", metadata !65, i32 602, i64 5, i64 8, i32 0, i32 0, null, metadata !336, i32 0, i32 0} ; [ DW_TAG_enumeration_type ]
!336 = metadata !{metadata !337, metadata !338, metadata !339, metadata !340}
!337 = metadata !{i32 786472, metadata !"SC_BIN", i64 2} ; [ DW_TAG_enumerator ]
!338 = metadata !{i32 786472, metadata !"SC_OCT", i64 8} ; [ DW_TAG_enumerator ]
!339 = metadata !{i32 786472, metadata !"SC_DEC", i64 10} ; [ DW_TAG_enumerator ]
!340 = metadata !{i32 786472, metadata !"SC_HEX", i64 16} ; [ DW_TAG_enumerator ]
!341 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_string", metadata !"to_string", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9to_stringE8BaseModeb", metadata !65, i32 2332, metadata !342, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2332} ; [ DW_TAG_subprogram ]
!342 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !343, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!343 = metadata !{metadata !334, metadata !222, metadata !335, metadata !87}
!344 = metadata !{i32 786478, i32 0, metadata !64, metadata !"to_string", metadata !"to_string", metadata !"_ZNK11ap_int_baseILi1ELb0ELb1EE9to_stringEab", metadata !65, i32 2336, metadata !345, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 2336} ; [ DW_TAG_subprogram ]
!345 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !346, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!346 = metadata !{metadata !334, metadata !222, metadata !112, metadata !87}
!347 = metadata !{i32 786478, i32 0, metadata !64, metadata !"ap_int_base", metadata !"ap_int_base", metadata !"", metadata !65, i32 1397, metadata !93, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !77, i32 1397} ; [ DW_TAG_subprogram ]
!348 = metadata !{metadata !349, metadata !86, metadata !350}
!349 = metadata !{i32 786480, null, metadata !"_AP_W", metadata !58, i64 1, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!350 = metadata !{i32 786480, null, metadata !"_AP_C", metadata !87, i64 1, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!351 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 183, metadata !352, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 183} ; [ DW_TAG_subprogram ]
!352 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !353, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!353 = metadata !{null, metadata !354}
!354 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !60} ; [ DW_TAG_pointer_type ]
!355 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint<1>", metadata !"ap_uint<1>", metadata !"", metadata !61, i32 185, metadata !356, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, metadata !360, i32 0, metadata !77, i32 185} ; [ DW_TAG_subprogram ]
!356 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !357, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!357 = metadata !{null, metadata !354, metadata !358}
!358 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !359} ; [ DW_TAG_reference_type ]
!359 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !60} ; [ DW_TAG_const_type ]
!360 = metadata !{metadata !98}
!361 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint<1>", metadata !"ap_uint<1>", metadata !"", metadata !61, i32 191, metadata !362, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, metadata !360, i32 0, metadata !77, i32 191} ; [ DW_TAG_subprogram ]
!362 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !363, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!363 = metadata !{null, metadata !354, metadata !364}
!364 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !365} ; [ DW_TAG_reference_type ]
!365 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !366} ; [ DW_TAG_const_type ]
!366 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !60} ; [ DW_TAG_volatile_type ]
!367 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint<1, false>", metadata !"ap_uint<1, false>", metadata !"", metadata !61, i32 226, metadata !368, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, metadata !97, i32 0, metadata !77, i32 226} ; [ DW_TAG_subprogram ]
!368 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !369, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!369 = metadata !{null, metadata !354, metadata !95}
!370 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 245, metadata !371, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 245} ; [ DW_TAG_subprogram ]
!371 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !372, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!372 = metadata !{null, metadata !354, metadata !87}
!373 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 246, metadata !374, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 246} ; [ DW_TAG_subprogram ]
!374 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !375, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!375 = metadata !{null, metadata !354, metadata !112}
!376 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 247, metadata !377, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 247} ; [ DW_TAG_subprogram ]
!377 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !378, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!378 = metadata !{null, metadata !354, metadata !116}
!379 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 248, metadata !380, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 248} ; [ DW_TAG_subprogram ]
!380 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !381, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!381 = metadata !{null, metadata !354, metadata !120}
!382 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 249, metadata !383, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 249} ; [ DW_TAG_subprogram ]
!383 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !384, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!384 = metadata !{null, metadata !354, metadata !124}
!385 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 250, metadata !386, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 250} ; [ DW_TAG_subprogram ]
!386 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !387, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!387 = metadata !{null, metadata !354, metadata !58}
!388 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 251, metadata !389, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 251} ; [ DW_TAG_subprogram ]
!389 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !390, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!390 = metadata !{null, metadata !354, metadata !131}
!391 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 252, metadata !392, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 252} ; [ DW_TAG_subprogram ]
!392 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !393, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!393 = metadata !{null, metadata !354, metadata !135}
!394 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 253, metadata !395, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 253} ; [ DW_TAG_subprogram ]
!395 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !396, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!396 = metadata !{null, metadata !354, metadata !139}
!397 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 254, metadata !398, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 254} ; [ DW_TAG_subprogram ]
!398 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !399, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!399 = metadata !{null, metadata !354, metadata !149}
!400 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 255, metadata !401, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 255} ; [ DW_TAG_subprogram ]
!401 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !402, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!402 = metadata !{null, metadata !354, metadata !144}
!403 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 256, metadata !404, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 256} ; [ DW_TAG_subprogram ]
!404 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !405, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!405 = metadata !{null, metadata !354, metadata !153}
!406 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 257, metadata !407, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 257} ; [ DW_TAG_subprogram ]
!407 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !408, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!408 = metadata !{null, metadata !354, metadata !157}
!409 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 259, metadata !410, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 259} ; [ DW_TAG_subprogram ]
!410 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !411, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!411 = metadata !{null, metadata !354, metadata !161}
!412 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 260, metadata !413, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 260} ; [ DW_TAG_subprogram ]
!413 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !414, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!414 = metadata !{null, metadata !354, metadata !161, metadata !112}
!415 = metadata !{i32 786478, i32 0, metadata !60, metadata !"operator=", metadata !"operator=", metadata !"_ZNV7ap_uintILi1EEaSERKS0_", metadata !61, i32 263, metadata !416, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 263} ; [ DW_TAG_subprogram ]
!416 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !417, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!417 = metadata !{null, metadata !418, metadata !358}
!418 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !366} ; [ DW_TAG_pointer_type ]
!419 = metadata !{i32 786478, i32 0, metadata !60, metadata !"operator=", metadata !"operator=", metadata !"_ZNV7ap_uintILi1EEaSERVKS0_", metadata !61, i32 267, metadata !420, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 267} ; [ DW_TAG_subprogram ]
!420 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !421, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!421 = metadata !{null, metadata !418, metadata !364}
!422 = metadata !{i32 786478, i32 0, metadata !60, metadata !"operator=", metadata !"operator=", metadata !"_ZN7ap_uintILi1EEaSERVKS0_", metadata !61, i32 271, metadata !423, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 271} ; [ DW_TAG_subprogram ]
!423 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !424, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!424 = metadata !{metadata !425, metadata !354, metadata !364}
!425 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !60} ; [ DW_TAG_reference_type ]
!426 = metadata !{i32 786478, i32 0, metadata !60, metadata !"operator=", metadata !"operator=", metadata !"_ZN7ap_uintILi1EEaSERKS0_", metadata !61, i32 276, metadata !427, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 276} ; [ DW_TAG_subprogram ]
!427 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !428, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!428 = metadata !{metadata !425, metadata !354, metadata !358}
!429 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ap_uint", metadata !"ap_uint", metadata !"", metadata !61, i32 180, metadata !356, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !77, i32 180} ; [ DW_TAG_subprogram ]
!430 = metadata !{metadata !349}
!431 = metadata !{i32 786478, i32 0, metadata !54, metadata !"~ap_item", metadata !"~ap_item", metadata !"", metadata !55, i32 5, metadata !432, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !77, i32 5} ; [ DW_TAG_subprogram ]
!432 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !433, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!433 = metadata !{null, metadata !434}
!434 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !54} ; [ DW_TAG_pointer_type ]
!435 = metadata !{i32 786478, i32 0, metadata !54, metadata !"ap_item", metadata !"ap_item", metadata !"", metadata !55, i32 5, metadata !436, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !77, i32 5} ; [ DW_TAG_subprogram ]
!436 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !437, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!437 = metadata !{null, metadata !434, metadata !438}
!438 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !439} ; [ DW_TAG_reference_type ]
!439 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !54} ; [ DW_TAG_const_type ]
!440 = metadata !{i32 786478, i32 0, metadata !49, metadata !"stream", metadata !"stream", metadata !"", metadata !51, i32 83, metadata !441, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 83} ; [ DW_TAG_subprogram ]
!441 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !442, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!442 = metadata !{null, metadata !443}
!443 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !49} ; [ DW_TAG_pointer_type ]
!444 = metadata !{i32 786478, i32 0, metadata !49, metadata !"stream", metadata !"stream", metadata !"", metadata !51, i32 86, metadata !445, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 86} ; [ DW_TAG_subprogram ]
!445 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !446, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!446 = metadata !{null, metadata !443, metadata !161}
!447 = metadata !{i32 786478, i32 0, metadata !49, metadata !"stream", metadata !"stream", metadata !"", metadata !51, i32 91, metadata !448, i1 false, i1 false, i32 0, i32 0, null, i32 257, i1 false, null, null, i32 0, metadata !77, i32 91} ; [ DW_TAG_subprogram ]
!448 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !449, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!449 = metadata !{null, metadata !443, metadata !450}
!450 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !451} ; [ DW_TAG_reference_type ]
!451 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !49} ; [ DW_TAG_const_type ]
!452 = metadata !{i32 786478, i32 0, metadata !49, metadata !"operator=", metadata !"operator=", metadata !"_ZN3hls6streamI7ap_itemEaSERKS2_", metadata !51, i32 94, metadata !453, i1 false, i1 false, i32 0, i32 0, null, i32 257, i1 false, null, null, i32 0, metadata !77, i32 94} ; [ DW_TAG_subprogram ]
!453 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !454, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!454 = metadata !{metadata !48, metadata !443, metadata !450}
!455 = metadata !{i32 786478, i32 0, metadata !49, metadata !"operator>>", metadata !"operator>>", metadata !"_ZN3hls6streamI7ap_itemErsERS1_", metadata !51, i32 101, metadata !456, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 101} ; [ DW_TAG_subprogram ]
!456 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !457, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!457 = metadata !{null, metadata !443, metadata !458}
!458 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !54} ; [ DW_TAG_reference_type ]
!459 = metadata !{i32 786478, i32 0, metadata !49, metadata !"operator<<", metadata !"operator<<", metadata !"_ZN3hls6streamI7ap_itemElsERKS1_", metadata !51, i32 105, metadata !460, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 105} ; [ DW_TAG_subprogram ]
!460 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !461, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!461 = metadata !{null, metadata !443, metadata !438}
!462 = metadata !{i32 786478, i32 0, metadata !49, metadata !"empty", metadata !"empty", metadata !"_ZNK3hls6streamI7ap_itemE5emptyEv", metadata !51, i32 112, metadata !463, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 112} ; [ DW_TAG_subprogram ]
!463 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !464, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!464 = metadata !{metadata !87, metadata !465}
!465 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !451} ; [ DW_TAG_pointer_type ]
!466 = metadata !{i32 786478, i32 0, metadata !49, metadata !"full", metadata !"full", metadata !"_ZNK3hls6streamI7ap_itemE4fullEv", metadata !51, i32 117, metadata !463, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 117} ; [ DW_TAG_subprogram ]
!467 = metadata !{i32 786478, i32 0, metadata !49, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamI7ap_itemE4readERS1_", metadata !51, i32 123, metadata !456, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 123} ; [ DW_TAG_subprogram ]
!468 = metadata !{i32 786478, i32 0, metadata !49, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamI7ap_itemE4readEv", metadata !51, i32 129, metadata !469, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 129} ; [ DW_TAG_subprogram ]
!469 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !470, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!470 = metadata !{metadata !54, metadata !443}
!471 = metadata !{i32 786478, i32 0, metadata !49, metadata !"read_nb", metadata !"read_nb", metadata !"_ZN3hls6streamI7ap_itemE7read_nbERS1_", metadata !51, i32 136, metadata !472, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 136} ; [ DW_TAG_subprogram ]
!472 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !473, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!473 = metadata !{metadata !87, metadata !443, metadata !458}
!474 = metadata !{i32 786478, i32 0, metadata !49, metadata !"write", metadata !"write", metadata !"_ZN3hls6streamI7ap_itemE5writeERKS1_", metadata !51, i32 144, metadata !460, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 144} ; [ DW_TAG_subprogram ]
!475 = metadata !{i32 786478, i32 0, metadata !49, metadata !"write_nb", metadata !"write_nb", metadata !"_ZN3hls6streamI7ap_itemE8write_nbERKS1_", metadata !51, i32 150, metadata !476, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 150} ; [ DW_TAG_subprogram ]
!476 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !477, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!477 = metadata !{metadata !87, metadata !443, metadata !438}
!478 = metadata !{i32 786478, i32 0, metadata !49, metadata !"size", metadata !"size", metadata !"_ZN3hls6streamI7ap_itemE4sizeEv", metadata !51, i32 157, metadata !479, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !77, i32 157} ; [ DW_TAG_subprogram ]
!479 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !480, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!480 = metadata !{metadata !131, metadata !443}
!481 = metadata !{metadata !482}
!482 = metadata !{i32 786479, null, metadata !"__STREAM_T__", metadata !54, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!483 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !484} ; [ DW_TAG_pointer_type ]
!484 = metadata !{i32 786438, metadata !50, metadata !"stream<ap_item>", metadata !51, i32 79, i64 32, i64 32, i32 0, i32 0, null, metadata !485, i32 0, null, metadata !481} ; [ DW_TAG_class_field_type ]
!485 = metadata !{metadata !486}
!486 = metadata !{i32 786438, null, metadata !"ap_item", metadata !55, i32 5, i64 32, i64 32, i32 0, i32 0, null, metadata !487, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!487 = metadata !{metadata !57}
!488 = metadata !{i32 3, i32 34, metadata !44, null}
!489 = metadata !{i32 790531, metadata !43, metadata !"inStream.V.last.V", null, i32 3, metadata !490, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!490 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !491} ; [ DW_TAG_pointer_type ]
!491 = metadata !{i32 786438, metadata !50, metadata !"stream<ap_item>", metadata !51, i32 79, i64 1, i64 32, i32 0, i32 0, null, metadata !492, i32 0, null, metadata !481} ; [ DW_TAG_class_field_type ]
!492 = metadata !{metadata !493}
!493 = metadata !{i32 786438, null, metadata !"ap_item", metadata !55, i32 5, i64 1, i64 32, i32 0, i32 0, null, metadata !494, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!494 = metadata !{metadata !495}
!495 = metadata !{i32 786438, null, metadata !"ap_uint<1>", metadata !61, i32 180, i64 1, i64 8, i32 0, i32 0, null, metadata !496, i32 0, null, metadata !430} ; [ DW_TAG_class_field_type ]
!496 = metadata !{metadata !497}
!497 = metadata !{i32 786438, null, metadata !"ap_int_base<1, false, true>", metadata !65, i32 1397, i64 1, i64 8, i32 0, i32 0, null, metadata !498, i32 0, null, metadata !348} ; [ DW_TAG_class_field_type ]
!498 = metadata !{metadata !499}
!499 = metadata !{i32 786438, null, metadata !"ssdm_int<1 + 1024 * 0, false>", metadata !69, i32 3, i64 1, i64 8, i32 0, i32 0, null, metadata !500, i32 0, null, metadata !84} ; [ DW_TAG_class_field_type ]
!500 = metadata !{metadata !71}
!501 = metadata !{i32 790531, metadata !502, metadata !"outStream.V.data", null, i32 4, metadata !483, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!502 = metadata !{i32 786689, metadata !44, metadata !"outStream", metadata !45, i32 33554436, metadata !48, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!503 = metadata !{i32 4, i32 25, metadata !44, null}
!504 = metadata !{i32 790531, metadata !502, metadata !"outStream.V.last.V", null, i32 4, metadata !490, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!505 = metadata !{i32 5, i32 1, metadata !506, null}
!506 = metadata !{i32 786443, metadata !44, i32 4, i32 35, metadata !45, i32 0} ; [ DW_TAG_lexical_block ]
!507 = metadata !{i32 6, i32 1, metadata !506, null}
!508 = metadata !{i32 7, i32 1, metadata !506, null}
!509 = metadata !{i32 22, i32 13, metadata !510, null}
!510 = metadata !{i32 786443, metadata !506, i32 22, i32 2, metadata !45, i32 1} ; [ DW_TAG_lexical_block ]
!511 = metadata !{i32 22, i32 20, metadata !510, null}
!512 = metadata !{i32 790531, metadata !513, metadata !"stream<ap_item>.V.data", null, i32 129, metadata !516, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!513 = metadata !{i32 786689, metadata !514, metadata !"this", metadata !51, i32 16777345, metadata !515, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!514 = metadata !{i32 786478, i32 0, metadata !50, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamI7ap_itemE4readEv", metadata !51, i32 129, metadata !469, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !468, metadata !77, i32 129} ; [ DW_TAG_subprogram ]
!515 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !49} ; [ DW_TAG_pointer_type ]
!516 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !484} ; [ DW_TAG_pointer_type ]
!517 = metadata !{i32 129, i32 56, metadata !514, metadata !518}
!518 = metadata !{i32 23, i32 18, metadata !519, null}
!519 = metadata !{i32 786443, metadata !510, i32 22, i32 24, metadata !45, i32 2} ; [ DW_TAG_lexical_block ]
!520 = metadata !{i32 790531, metadata !513, metadata !"stream<ap_item>.V.last.V", null, i32 129, metadata !521, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!521 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !491} ; [ DW_TAG_pointer_type ]
!522 = metadata !{i32 131, i32 9, metadata !523, metadata !518}
!523 = metadata !{i32 786443, metadata !514, i32 129, i32 63, metadata !51, i32 4} ; [ DW_TAG_lexical_block ]
!524 = metadata !{i32 790529, metadata !525, metadata !"tmp.data", null, i32 130, metadata !486, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!525 = metadata !{i32 786688, metadata !523, metadata !"tmp", metadata !51, i32 130, metadata !458, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!526 = metadata !{i32 790529, metadata !525, metadata !"tmp.last.V", null, i32 130, metadata !493, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!527 = metadata !{i32 24, i32 3, metadata !519, null}
!528 = metadata !{i32 790531, metadata !529, metadata !"stream<ap_item>.V.data", null, i32 144, metadata !516, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!529 = metadata !{i32 786689, metadata !530, metadata !"this", metadata !51, i32 16777360, metadata !515, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!530 = metadata !{i32 786478, i32 0, metadata !50, metadata !"write", metadata !"write", metadata !"_ZN3hls6streamI7ap_itemE5writeERKS1_", metadata !51, i32 144, metadata !460, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !474, metadata !77, i32 144} ; [ DW_TAG_subprogram ]
!531 = metadata !{i32 144, i32 48, metadata !530, metadata !532}
!532 = metadata !{i32 25, i32 3, metadata !519, null}
!533 = metadata !{i32 790531, metadata !529, metadata !"stream<ap_item>.V.last.V", null, i32 144, metadata !521, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!534 = metadata !{i32 790529, metadata !535, metadata !"tmp.data", null, i32 145, metadata !486, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!535 = metadata !{i32 786688, metadata !536, metadata !"tmp", metadata !51, i32 145, metadata !54, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!536 = metadata !{i32 786443, metadata !530, i32 144, i32 79, metadata !51, i32 3} ; [ DW_TAG_lexical_block ]
!537 = metadata !{i32 145, i32 31, metadata !536, metadata !532}
!538 = metadata !{i32 790529, metadata !535, metadata !"tmp.last.V", null, i32 145, metadata !493, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!539 = metadata !{i32 146, i32 9, metadata !536, metadata !532}
!540 = metadata !{i32 786688, metadata !510, metadata !"i", metadata !45, i32 22, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!541 = metadata !{i32 27, i32 1, metadata !506, null}
