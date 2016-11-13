set lang "C++"
set moduleName "calcHash"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortList ""
set PortName0 "strStream"
set BitWidth0 "8"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "2"
set Reference0 "1"
set Dims0 [list 0]
set Interface0 [list AP_STREAM 0] 
set DataType0 "char"
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "indicesStream"
set BitWidth1 "64"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "2"
set Reference1 "1"
set Dims1 [list 0]
set Interface1 [list AP_STREAM 0] 
set structMem1 ""
set PortName10 "data"
set BitWidth10 "32"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list 0]
set Interface10 "wire"
set DataType10 "int"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend structMem1 $Port10
set PortName11 "last"
set BitWidth11 "8"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Dims11 [list 0]
set Interface11 "wire"
set DataType11 "[list ap_uint 1 ]"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11]
lappend structMem1 $Port11
set structParameter1 [list ]
set structArgument1 [list ]
set NameSpace1 [list ]
set structIsPacked1 "0"
set DataType1 [list "ap_item" "struct ap_item" $structMem1 1 0 $structParameter1 $structArgument1 $NameSpace1 $structIsPacked1]
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 1 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
