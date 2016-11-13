#include "calcHash_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void calcHash_rollingHash::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st87_fsm_83.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st87_fsm_83.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_return_0() {
    ap_return_0 = indices_cast_reg_77633.read();
}

void calcHash_rollingHash::thread_ap_return_1() {
    ap_return_1 = indices1_cast_reg_79289.read();
}

void calcHash_rollingHash::thread_ap_return_2() {
    ap_return_2 = indices2_cast_fu_67743_p1.read();
}

void calcHash_rollingHash::thread_ap_sig_101() {
    ap_sig_101 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void calcHash_rollingHash::thread_ap_sig_1272() {
    ap_sig_1272 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void calcHash_rollingHash::thread_ap_sig_1279() {
    ap_sig_1279 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void calcHash_rollingHash::thread_ap_sig_1288() {
    ap_sig_1288 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void calcHash_rollingHash::thread_ap_sig_31709() {
    ap_sig_31709 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(83, 83));
}

void calcHash_rollingHash::thread_ap_sig_3565() {
    ap_sig_3565 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void calcHash_rollingHash::thread_ap_sig_3644() {
    ap_sig_3644 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void calcHash_rollingHash::thread_ap_sig_3659() {
    ap_sig_3659 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void calcHash_rollingHash::thread_ap_sig_3668() {
    ap_sig_3668 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void calcHash_rollingHash::thread_ap_sig_3688() {
    ap_sig_3688 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void calcHash_rollingHash::thread_ap_sig_3712() {
    ap_sig_3712 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void calcHash_rollingHash::thread_ap_sig_3737() {
    ap_sig_3737 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(10, 10));
}

void calcHash_rollingHash::thread_ap_sig_3762() {
    ap_sig_3762 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(11, 11));
}

void calcHash_rollingHash::thread_ap_sig_3787() {
    ap_sig_3787 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(12, 12));
}

void calcHash_rollingHash::thread_ap_sig_3812() {
    ap_sig_3812 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(13, 13));
}

void calcHash_rollingHash::thread_ap_sig_3837() {
    ap_sig_3837 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(14, 14));
}

void calcHash_rollingHash::thread_ap_sig_3862() {
    ap_sig_3862 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(15, 15));
}

void calcHash_rollingHash::thread_ap_sig_3887() {
    ap_sig_3887 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(16, 16));
}

void calcHash_rollingHash::thread_ap_sig_3912() {
    ap_sig_3912 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(17, 17));
}

void calcHash_rollingHash::thread_ap_sig_3937() {
    ap_sig_3937 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(18, 18));
}

void calcHash_rollingHash::thread_ap_sig_3962() {
    ap_sig_3962 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(19, 19));
}

void calcHash_rollingHash::thread_ap_sig_3987() {
    ap_sig_3987 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(20, 20));
}

void calcHash_rollingHash::thread_ap_sig_4012() {
    ap_sig_4012 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(21, 21));
}

void calcHash_rollingHash::thread_ap_sig_4037() {
    ap_sig_4037 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(22, 22));
}

void calcHash_rollingHash::thread_ap_sig_4062() {
    ap_sig_4062 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(23, 23));
}

void calcHash_rollingHash::thread_ap_sig_4087() {
    ap_sig_4087 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(24, 24));
}

void calcHash_rollingHash::thread_ap_sig_4112() {
    ap_sig_4112 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(25, 25));
}

void calcHash_rollingHash::thread_ap_sig_4137() {
    ap_sig_4137 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(26, 26));
}

void calcHash_rollingHash::thread_ap_sig_4162() {
    ap_sig_4162 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(27, 27));
}

void calcHash_rollingHash::thread_ap_sig_4187() {
    ap_sig_4187 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(28, 28));
}

void calcHash_rollingHash::thread_ap_sig_4212() {
    ap_sig_4212 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(29, 29));
}

void calcHash_rollingHash::thread_ap_sig_4237() {
    ap_sig_4237 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(30, 30));
}

void calcHash_rollingHash::thread_ap_sig_4262() {
    ap_sig_4262 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(31, 31));
}

void calcHash_rollingHash::thread_ap_sig_4287() {
    ap_sig_4287 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(32, 32));
}

void calcHash_rollingHash::thread_ap_sig_4312() {
    ap_sig_4312 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(33, 33));
}

void calcHash_rollingHash::thread_ap_sig_4337() {
    ap_sig_4337 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(34, 34));
}

void calcHash_rollingHash::thread_ap_sig_4362() {
    ap_sig_4362 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(35, 35));
}

void calcHash_rollingHash::thread_ap_sig_4387() {
    ap_sig_4387 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(36, 36));
}

void calcHash_rollingHash::thread_ap_sig_4412() {
    ap_sig_4412 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(37, 37));
}

void calcHash_rollingHash::thread_ap_sig_4437() {
    ap_sig_4437 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(38, 38));
}

void calcHash_rollingHash::thread_ap_sig_4462() {
    ap_sig_4462 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(39, 39));
}

void calcHash_rollingHash::thread_ap_sig_4487() {
    ap_sig_4487 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(40, 40));
}

void calcHash_rollingHash::thread_ap_sig_4512() {
    ap_sig_4512 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(41, 41));
}

void calcHash_rollingHash::thread_ap_sig_4537() {
    ap_sig_4537 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(42, 42));
}

void calcHash_rollingHash::thread_ap_sig_4562() {
    ap_sig_4562 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(43, 43));
}

void calcHash_rollingHash::thread_ap_sig_4587() {
    ap_sig_4587 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(44, 44));
}

void calcHash_rollingHash::thread_ap_sig_4612() {
    ap_sig_4612 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(45, 45));
}

void calcHash_rollingHash::thread_ap_sig_4637() {
    ap_sig_4637 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(46, 46));
}

void calcHash_rollingHash::thread_ap_sig_4662() {
    ap_sig_4662 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(47, 47));
}

void calcHash_rollingHash::thread_ap_sig_4687() {
    ap_sig_4687 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(48, 48));
}

void calcHash_rollingHash::thread_ap_sig_4712() {
    ap_sig_4712 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(49, 49));
}

void calcHash_rollingHash::thread_ap_sig_4737() {
    ap_sig_4737 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(50, 50));
}

void calcHash_rollingHash::thread_ap_sig_4762() {
    ap_sig_4762 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(51, 51));
}

void calcHash_rollingHash::thread_ap_sig_4787() {
    ap_sig_4787 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(52, 52));
}

void calcHash_rollingHash::thread_ap_sig_4812() {
    ap_sig_4812 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(53, 53));
}

void calcHash_rollingHash::thread_ap_sig_4837() {
    ap_sig_4837 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(54, 54));
}

void calcHash_rollingHash::thread_ap_sig_4862() {
    ap_sig_4862 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(55, 55));
}

void calcHash_rollingHash::thread_ap_sig_4887() {
    ap_sig_4887 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(56, 56));
}

void calcHash_rollingHash::thread_ap_sig_4912() {
    ap_sig_4912 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(57, 57));
}

void calcHash_rollingHash::thread_ap_sig_4937() {
    ap_sig_4937 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(58, 58));
}

void calcHash_rollingHash::thread_ap_sig_4962() {
    ap_sig_4962 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(59, 59));
}

void calcHash_rollingHash::thread_ap_sig_4987() {
    ap_sig_4987 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(60, 60));
}

void calcHash_rollingHash::thread_ap_sig_5012() {
    ap_sig_5012 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(61, 61));
}

void calcHash_rollingHash::thread_ap_sig_5037() {
    ap_sig_5037 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(62, 62));
}

void calcHash_rollingHash::thread_ap_sig_5062() {
    ap_sig_5062 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(63, 63));
}

void calcHash_rollingHash::thread_ap_sig_5087() {
    ap_sig_5087 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(64, 64));
}

void calcHash_rollingHash::thread_ap_sig_5112() {
    ap_sig_5112 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(65, 65));
}

void calcHash_rollingHash::thread_ap_sig_5137() {
    ap_sig_5137 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(66, 66));
}

void calcHash_rollingHash::thread_ap_sig_5162() {
    ap_sig_5162 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(67, 67));
}

void calcHash_rollingHash::thread_ap_sig_5187() {
    ap_sig_5187 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(68, 68));
}

void calcHash_rollingHash::thread_ap_sig_5212() {
    ap_sig_5212 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(69, 69));
}

void calcHash_rollingHash::thread_ap_sig_5237() {
    ap_sig_5237 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(70, 70));
}

void calcHash_rollingHash::thread_ap_sig_5293() {
    ap_sig_5293 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(72, 72));
}

void calcHash_rollingHash::thread_ap_sig_5559() {
    ap_sig_5559 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(73, 73));
}

void calcHash_rollingHash::thread_ap_sig_5782() {
    ap_sig_5782 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(74, 74));
}

void calcHash_rollingHash::thread_ap_sig_5793() {
    ap_sig_5793 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(75, 75));
}

void calcHash_rollingHash::thread_ap_sig_5802() {
    ap_sig_5802 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(76, 76));
}

void calcHash_rollingHash::thread_ap_sig_6320() {
    ap_sig_6320 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(77, 77));
}

void calcHash_rollingHash::thread_ap_sig_6473() {
    ap_sig_6473 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(78, 78));
}

void calcHash_rollingHash::thread_ap_sig_6482() {
    ap_sig_6482 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(79, 79));
}

void calcHash_rollingHash::thread_ap_sig_6491() {
    ap_sig_6491 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(80, 80));
}

void calcHash_rollingHash::thread_ap_sig_7009() {
    ap_sig_7009 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(81, 81));
}

void calcHash_rollingHash::thread_ap_sig_7162() {
    ap_sig_7162 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(82, 82));
}

void calcHash_rollingHash::thread_ap_sig_8592() {
    ap_sig_8592 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(71, 71));
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg0_fsm_7() {
    if (ap_sig_3668.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_7 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg10_fsm_17() {
    if (ap_sig_3912.read()) {
        ap_sig_cseq_ST_pp0_stg10_fsm_17 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg10_fsm_17 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg11_fsm_18() {
    if (ap_sig_3937.read()) {
        ap_sig_cseq_ST_pp0_stg11_fsm_18 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg11_fsm_18 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg12_fsm_19() {
    if (ap_sig_3962.read()) {
        ap_sig_cseq_ST_pp0_stg12_fsm_19 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg12_fsm_19 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg13_fsm_20() {
    if (ap_sig_3987.read()) {
        ap_sig_cseq_ST_pp0_stg13_fsm_20 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg13_fsm_20 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg14_fsm_21() {
    if (ap_sig_4012.read()) {
        ap_sig_cseq_ST_pp0_stg14_fsm_21 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg14_fsm_21 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg15_fsm_22() {
    if (ap_sig_4037.read()) {
        ap_sig_cseq_ST_pp0_stg15_fsm_22 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg15_fsm_22 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg16_fsm_23() {
    if (ap_sig_4062.read()) {
        ap_sig_cseq_ST_pp0_stg16_fsm_23 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg16_fsm_23 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg17_fsm_24() {
    if (ap_sig_4087.read()) {
        ap_sig_cseq_ST_pp0_stg17_fsm_24 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg17_fsm_24 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg18_fsm_25() {
    if (ap_sig_4112.read()) {
        ap_sig_cseq_ST_pp0_stg18_fsm_25 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg18_fsm_25 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg19_fsm_26() {
    if (ap_sig_4137.read()) {
        ap_sig_cseq_ST_pp0_stg19_fsm_26 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg19_fsm_26 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg1_fsm_8() {
    if (ap_sig_3688.read()) {
        ap_sig_cseq_ST_pp0_stg1_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg1_fsm_8 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg20_fsm_27() {
    if (ap_sig_4162.read()) {
        ap_sig_cseq_ST_pp0_stg20_fsm_27 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg20_fsm_27 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg21_fsm_28() {
    if (ap_sig_4187.read()) {
        ap_sig_cseq_ST_pp0_stg21_fsm_28 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg21_fsm_28 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg22_fsm_29() {
    if (ap_sig_4212.read()) {
        ap_sig_cseq_ST_pp0_stg22_fsm_29 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg22_fsm_29 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg23_fsm_30() {
    if (ap_sig_4237.read()) {
        ap_sig_cseq_ST_pp0_stg23_fsm_30 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg23_fsm_30 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg24_fsm_31() {
    if (ap_sig_4262.read()) {
        ap_sig_cseq_ST_pp0_stg24_fsm_31 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg24_fsm_31 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg25_fsm_32() {
    if (ap_sig_4287.read()) {
        ap_sig_cseq_ST_pp0_stg25_fsm_32 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg25_fsm_32 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg26_fsm_33() {
    if (ap_sig_4312.read()) {
        ap_sig_cseq_ST_pp0_stg26_fsm_33 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg26_fsm_33 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg27_fsm_34() {
    if (ap_sig_4337.read()) {
        ap_sig_cseq_ST_pp0_stg27_fsm_34 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg27_fsm_34 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg28_fsm_35() {
    if (ap_sig_4362.read()) {
        ap_sig_cseq_ST_pp0_stg28_fsm_35 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg28_fsm_35 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg29_fsm_36() {
    if (ap_sig_4387.read()) {
        ap_sig_cseq_ST_pp0_stg29_fsm_36 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg29_fsm_36 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg2_fsm_9() {
    if (ap_sig_3712.read()) {
        ap_sig_cseq_ST_pp0_stg2_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg2_fsm_9 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg30_fsm_37() {
    if (ap_sig_4412.read()) {
        ap_sig_cseq_ST_pp0_stg30_fsm_37 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg30_fsm_37 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg31_fsm_38() {
    if (ap_sig_4437.read()) {
        ap_sig_cseq_ST_pp0_stg31_fsm_38 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg31_fsm_38 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg32_fsm_39() {
    if (ap_sig_4462.read()) {
        ap_sig_cseq_ST_pp0_stg32_fsm_39 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg32_fsm_39 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg33_fsm_40() {
    if (ap_sig_4487.read()) {
        ap_sig_cseq_ST_pp0_stg33_fsm_40 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg33_fsm_40 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg34_fsm_41() {
    if (ap_sig_4512.read()) {
        ap_sig_cseq_ST_pp0_stg34_fsm_41 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg34_fsm_41 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg35_fsm_42() {
    if (ap_sig_4537.read()) {
        ap_sig_cseq_ST_pp0_stg35_fsm_42 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg35_fsm_42 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg36_fsm_43() {
    if (ap_sig_4562.read()) {
        ap_sig_cseq_ST_pp0_stg36_fsm_43 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg36_fsm_43 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg37_fsm_44() {
    if (ap_sig_4587.read()) {
        ap_sig_cseq_ST_pp0_stg37_fsm_44 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg37_fsm_44 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg38_fsm_45() {
    if (ap_sig_4612.read()) {
        ap_sig_cseq_ST_pp0_stg38_fsm_45 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg38_fsm_45 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg39_fsm_46() {
    if (ap_sig_4637.read()) {
        ap_sig_cseq_ST_pp0_stg39_fsm_46 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg39_fsm_46 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg3_fsm_10() {
    if (ap_sig_3737.read()) {
        ap_sig_cseq_ST_pp0_stg3_fsm_10 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg3_fsm_10 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg40_fsm_47() {
    if (ap_sig_4662.read()) {
        ap_sig_cseq_ST_pp0_stg40_fsm_47 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg40_fsm_47 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg41_fsm_48() {
    if (ap_sig_4687.read()) {
        ap_sig_cseq_ST_pp0_stg41_fsm_48 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg41_fsm_48 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg42_fsm_49() {
    if (ap_sig_4712.read()) {
        ap_sig_cseq_ST_pp0_stg42_fsm_49 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg42_fsm_49 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg43_fsm_50() {
    if (ap_sig_4737.read()) {
        ap_sig_cseq_ST_pp0_stg43_fsm_50 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg43_fsm_50 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg44_fsm_51() {
    if (ap_sig_4762.read()) {
        ap_sig_cseq_ST_pp0_stg44_fsm_51 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg44_fsm_51 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg45_fsm_52() {
    if (ap_sig_4787.read()) {
        ap_sig_cseq_ST_pp0_stg45_fsm_52 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg45_fsm_52 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg46_fsm_53() {
    if (ap_sig_4812.read()) {
        ap_sig_cseq_ST_pp0_stg46_fsm_53 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg46_fsm_53 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg47_fsm_54() {
    if (ap_sig_4837.read()) {
        ap_sig_cseq_ST_pp0_stg47_fsm_54 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg47_fsm_54 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg48_fsm_55() {
    if (ap_sig_4862.read()) {
        ap_sig_cseq_ST_pp0_stg48_fsm_55 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg48_fsm_55 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg49_fsm_56() {
    if (ap_sig_4887.read()) {
        ap_sig_cseq_ST_pp0_stg49_fsm_56 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg49_fsm_56 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg4_fsm_11() {
    if (ap_sig_3762.read()) {
        ap_sig_cseq_ST_pp0_stg4_fsm_11 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg4_fsm_11 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg50_fsm_57() {
    if (ap_sig_4912.read()) {
        ap_sig_cseq_ST_pp0_stg50_fsm_57 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg50_fsm_57 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg51_fsm_58() {
    if (ap_sig_4937.read()) {
        ap_sig_cseq_ST_pp0_stg51_fsm_58 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg51_fsm_58 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg52_fsm_59() {
    if (ap_sig_4962.read()) {
        ap_sig_cseq_ST_pp0_stg52_fsm_59 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg52_fsm_59 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg53_fsm_60() {
    if (ap_sig_4987.read()) {
        ap_sig_cseq_ST_pp0_stg53_fsm_60 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg53_fsm_60 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg54_fsm_61() {
    if (ap_sig_5012.read()) {
        ap_sig_cseq_ST_pp0_stg54_fsm_61 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg54_fsm_61 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg55_fsm_62() {
    if (ap_sig_5037.read()) {
        ap_sig_cseq_ST_pp0_stg55_fsm_62 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg55_fsm_62 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg56_fsm_63() {
    if (ap_sig_5062.read()) {
        ap_sig_cseq_ST_pp0_stg56_fsm_63 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg56_fsm_63 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg57_fsm_64() {
    if (ap_sig_5087.read()) {
        ap_sig_cseq_ST_pp0_stg57_fsm_64 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg57_fsm_64 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg58_fsm_65() {
    if (ap_sig_5112.read()) {
        ap_sig_cseq_ST_pp0_stg58_fsm_65 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg58_fsm_65 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg59_fsm_66() {
    if (ap_sig_5137.read()) {
        ap_sig_cseq_ST_pp0_stg59_fsm_66 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg59_fsm_66 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg5_fsm_12() {
    if (ap_sig_3787.read()) {
        ap_sig_cseq_ST_pp0_stg5_fsm_12 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg5_fsm_12 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg60_fsm_67() {
    if (ap_sig_5162.read()) {
        ap_sig_cseq_ST_pp0_stg60_fsm_67 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg60_fsm_67 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg61_fsm_68() {
    if (ap_sig_5187.read()) {
        ap_sig_cseq_ST_pp0_stg61_fsm_68 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg61_fsm_68 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg62_fsm_69() {
    if (ap_sig_5212.read()) {
        ap_sig_cseq_ST_pp0_stg62_fsm_69 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg62_fsm_69 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg63_fsm_70() {
    if (ap_sig_5237.read()) {
        ap_sig_cseq_ST_pp0_stg63_fsm_70 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg63_fsm_70 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg6_fsm_13() {
    if (ap_sig_3812.read()) {
        ap_sig_cseq_ST_pp0_stg6_fsm_13 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg6_fsm_13 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg7_fsm_14() {
    if (ap_sig_3837.read()) {
        ap_sig_cseq_ST_pp0_stg7_fsm_14 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg7_fsm_14 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg8_fsm_15() {
    if (ap_sig_3862.read()) {
        ap_sig_cseq_ST_pp0_stg8_fsm_15 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg8_fsm_15 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_pp0_stg9_fsm_16() {
    if (ap_sig_3887.read()) {
        ap_sig_cseq_ST_pp0_stg9_fsm_16 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg9_fsm_16 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_101.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_1272.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_1279.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st4_fsm_3() {
    if (ap_sig_1288.read()) {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st5_fsm_4() {
    if (ap_sig_3565.read()) {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st6_fsm_5() {
    if (ap_sig_3644.read()) {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st75_fsm_71() {
    if (ap_sig_8592.read()) {
        ap_sig_cseq_ST_st75_fsm_71 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st75_fsm_71 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st76_fsm_72() {
    if (ap_sig_5293.read()) {
        ap_sig_cseq_ST_st76_fsm_72 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st76_fsm_72 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st77_fsm_73() {
    if (ap_sig_5559.read()) {
        ap_sig_cseq_ST_st77_fsm_73 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st77_fsm_73 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st78_fsm_74() {
    if (ap_sig_5782.read()) {
        ap_sig_cseq_ST_st78_fsm_74 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st78_fsm_74 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st79_fsm_75() {
    if (ap_sig_5793.read()) {
        ap_sig_cseq_ST_st79_fsm_75 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st79_fsm_75 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st7_fsm_6() {
    if (ap_sig_3659.read()) {
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st80_fsm_76() {
    if (ap_sig_5802.read()) {
        ap_sig_cseq_ST_st80_fsm_76 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st80_fsm_76 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st81_fsm_77() {
    if (ap_sig_6320.read()) {
        ap_sig_cseq_ST_st81_fsm_77 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st81_fsm_77 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st82_fsm_78() {
    if (ap_sig_6473.read()) {
        ap_sig_cseq_ST_st82_fsm_78 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st82_fsm_78 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st83_fsm_79() {
    if (ap_sig_6482.read()) {
        ap_sig_cseq_ST_st83_fsm_79 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st83_fsm_79 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st84_fsm_80() {
    if (ap_sig_6491.read()) {
        ap_sig_cseq_ST_st84_fsm_80 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st84_fsm_80 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st85_fsm_81() {
    if (ap_sig_7009.read()) {
        ap_sig_cseq_ST_st85_fsm_81 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st85_fsm_81 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st86_fsm_82() {
    if (ap_sig_7162.read()) {
        ap_sig_cseq_ST_st86_fsm_82 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st86_fsm_82 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_ap_sig_cseq_ST_st87_fsm_83() {
    if (ap_sig_31709.read()) {
        ap_sig_cseq_ST_st87_fsm_83 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st87_fsm_83 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_exitcond2_fu_36571_p2() {
    exitcond2_fu_36571_p2 = (!i_1_phi_fu_18710_p4.read().is_01() || !ap_const_lv12_C01.is_01())? sc_lv<1>(): sc_lv<1>(i_1_phi_fu_18710_p4.read() == ap_const_lv12_C01);
}

void calcHash_rollingHash::thread_exitcond_1_fu_49913_p2() {
    exitcond_1_fu_49913_p2 = (!j_s_reg_18764.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_s_reg_18764.read() == ap_const_lv11_400);
}

void calcHash_rollingHash::thread_exitcond_2_fu_57813_p2() {
    exitcond_2_fu_57813_p2 = (!j_2_reg_18788.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_2_reg_18788.read() == ap_const_lv11_400);
}

void calcHash_rollingHash::thread_exitcond_fu_44346_p2() {
    exitcond_fu_44346_p2 = (!j_reg_18740.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_18740.read() == ap_const_lv11_400);
}

void calcHash_rollingHash::thread_grp_fu_18800_p4() {
    grp_fu_18800_p4 = hash_0_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18810_p3() {
    grp_fu_18810_p3 = hash_0_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18818_p4() {
    grp_fu_18818_p4 = hash_0_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18828_p4() {
    grp_fu_18828_p4 = hash_1_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18838_p3() {
    grp_fu_18838_p3 = hash_1_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18846_p4() {
    grp_fu_18846_p4 = hash_1_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18856_p4() {
    grp_fu_18856_p4 = hash_2_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18866_p3() {
    grp_fu_18866_p3 = hash_2_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18874_p4() {
    grp_fu_18874_p4 = hash_2_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18884_p4() {
    grp_fu_18884_p4 = hash_3_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18894_p3() {
    grp_fu_18894_p3 = hash_3_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18902_p4() {
    grp_fu_18902_p4 = hash_3_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18912_p4() {
    grp_fu_18912_p4 = hash_4_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18922_p3() {
    grp_fu_18922_p3 = hash_4_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18930_p4() {
    grp_fu_18930_p4 = hash_4_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18940_p4() {
    grp_fu_18940_p4 = hash_5_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18950_p3() {
    grp_fu_18950_p3 = hash_5_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18958_p4() {
    grp_fu_18958_p4 = hash_5_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18968_p4() {
    grp_fu_18968_p4 = hash_6_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_18978_p3() {
    grp_fu_18978_p3 = hash_6_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_18986_p4() {
    grp_fu_18986_p4 = hash_6_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_18996_p4() {
    grp_fu_18996_p4 = hash_7_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19006_p3() {
    grp_fu_19006_p3 = hash_7_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19014_p4() {
    grp_fu_19014_p4 = hash_7_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19024_p4() {
    grp_fu_19024_p4 = hash_8_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19034_p3() {
    grp_fu_19034_p3 = hash_8_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19042_p4() {
    grp_fu_19042_p4 = hash_8_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19052_p4() {
    grp_fu_19052_p4 = hash_9_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19062_p3() {
    grp_fu_19062_p3 = hash_9_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19070_p4() {
    grp_fu_19070_p4 = hash_9_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19080_p4() {
    grp_fu_19080_p4 = hash_10_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19090_p3() {
    grp_fu_19090_p3 = hash_10_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19098_p4() {
    grp_fu_19098_p4 = hash_10_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19108_p4() {
    grp_fu_19108_p4 = hash_11_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19118_p3() {
    grp_fu_19118_p3 = hash_11_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19126_p4() {
    grp_fu_19126_p4 = hash_11_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19136_p4() {
    grp_fu_19136_p4 = hash_12_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19146_p3() {
    grp_fu_19146_p3 = hash_12_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19154_p4() {
    grp_fu_19154_p4 = hash_12_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19164_p4() {
    grp_fu_19164_p4 = hash_13_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19174_p3() {
    grp_fu_19174_p3 = hash_13_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19182_p4() {
    grp_fu_19182_p4 = hash_13_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19192_p4() {
    grp_fu_19192_p4 = hash_14_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19202_p3() {
    grp_fu_19202_p3 = hash_14_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19210_p4() {
    grp_fu_19210_p4 = hash_14_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19220_p4() {
    grp_fu_19220_p4 = hash_15_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19230_p3() {
    grp_fu_19230_p3 = hash_15_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19238_p4() {
    grp_fu_19238_p4 = hash_15_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19248_p4() {
    grp_fu_19248_p4 = hash_16_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19258_p3() {
    grp_fu_19258_p3 = hash_16_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19266_p4() {
    grp_fu_19266_p4 = hash_16_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19276_p4() {
    grp_fu_19276_p4 = hash_17_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19286_p3() {
    grp_fu_19286_p3 = hash_17_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19294_p4() {
    grp_fu_19294_p4 = hash_17_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19304_p4() {
    grp_fu_19304_p4 = hash_18_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19314_p3() {
    grp_fu_19314_p3 = hash_18_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19322_p4() {
    grp_fu_19322_p4 = hash_18_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19332_p4() {
    grp_fu_19332_p4 = hash_19_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19342_p3() {
    grp_fu_19342_p3 = hash_19_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19350_p4() {
    grp_fu_19350_p4 = hash_19_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19360_p4() {
    grp_fu_19360_p4 = hash_20_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19370_p3() {
    grp_fu_19370_p3 = hash_20_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19378_p4() {
    grp_fu_19378_p4 = hash_20_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19388_p4() {
    grp_fu_19388_p4 = hash_21_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19398_p3() {
    grp_fu_19398_p3 = hash_21_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19406_p4() {
    grp_fu_19406_p4 = hash_21_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19416_p4() {
    grp_fu_19416_p4 = hash_22_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19426_p3() {
    grp_fu_19426_p3 = hash_22_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19434_p4() {
    grp_fu_19434_p4 = hash_22_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19444_p4() {
    grp_fu_19444_p4 = hash_23_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19454_p3() {
    grp_fu_19454_p3 = hash_23_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19462_p4() {
    grp_fu_19462_p4 = hash_23_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19472_p4() {
    grp_fu_19472_p4 = hash_24_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19482_p3() {
    grp_fu_19482_p3 = hash_24_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19490_p4() {
    grp_fu_19490_p4 = hash_24_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19500_p4() {
    grp_fu_19500_p4 = hash_25_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19510_p3() {
    grp_fu_19510_p3 = hash_25_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19518_p4() {
    grp_fu_19518_p4 = hash_25_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19528_p4() {
    grp_fu_19528_p4 = hash_26_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19538_p3() {
    grp_fu_19538_p3 = hash_26_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19546_p4() {
    grp_fu_19546_p4 = hash_26_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19556_p4() {
    grp_fu_19556_p4 = hash_27_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19566_p3() {
    grp_fu_19566_p3 = hash_27_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19574_p4() {
    grp_fu_19574_p4 = hash_27_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19584_p4() {
    grp_fu_19584_p4 = hash_28_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19594_p3() {
    grp_fu_19594_p3 = hash_28_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19602_p4() {
    grp_fu_19602_p4 = hash_28_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19612_p4() {
    grp_fu_19612_p4 = hash_29_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19622_p3() {
    grp_fu_19622_p3 = hash_29_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19630_p4() {
    grp_fu_19630_p4 = hash_29_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19640_p4() {
    grp_fu_19640_p4 = hash_30_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19650_p3() {
    grp_fu_19650_p3 = hash_30_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19658_p4() {
    grp_fu_19658_p4 = hash_30_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19668_p4() {
    grp_fu_19668_p4 = hash_31_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19678_p3() {
    grp_fu_19678_p3 = hash_31_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19686_p4() {
    grp_fu_19686_p4 = hash_31_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19696_p4() {
    grp_fu_19696_p4 = hash_32_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19706_p3() {
    grp_fu_19706_p3 = hash_32_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19714_p4() {
    grp_fu_19714_p4 = hash_32_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19724_p4() {
    grp_fu_19724_p4 = hash_33_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19734_p3() {
    grp_fu_19734_p3 = hash_33_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19742_p4() {
    grp_fu_19742_p4 = hash_33_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19752_p4() {
    grp_fu_19752_p4 = hash_34_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19762_p3() {
    grp_fu_19762_p3 = hash_34_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19770_p4() {
    grp_fu_19770_p4 = hash_34_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19780_p4() {
    grp_fu_19780_p4 = hash_35_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19790_p3() {
    grp_fu_19790_p3 = hash_35_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19798_p4() {
    grp_fu_19798_p4 = hash_35_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19808_p4() {
    grp_fu_19808_p4 = hash_36_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19818_p3() {
    grp_fu_19818_p3 = hash_36_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19826_p4() {
    grp_fu_19826_p4 = hash_36_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19836_p4() {
    grp_fu_19836_p4 = hash_37_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19846_p3() {
    grp_fu_19846_p3 = hash_37_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19854_p4() {
    grp_fu_19854_p4 = hash_37_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19864_p4() {
    grp_fu_19864_p4 = hash_38_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19874_p3() {
    grp_fu_19874_p3 = hash_38_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19882_p4() {
    grp_fu_19882_p4 = hash_38_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19892_p4() {
    grp_fu_19892_p4 = hash_39_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19902_p3() {
    grp_fu_19902_p3 = hash_39_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19910_p4() {
    grp_fu_19910_p4 = hash_39_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19920_p4() {
    grp_fu_19920_p4 = hash_40_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19930_p3() {
    grp_fu_19930_p3 = hash_40_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19938_p4() {
    grp_fu_19938_p4 = hash_40_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19948_p4() {
    grp_fu_19948_p4 = hash_41_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19958_p3() {
    grp_fu_19958_p3 = hash_41_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19966_p4() {
    grp_fu_19966_p4 = hash_41_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_19976_p4() {
    grp_fu_19976_p4 = hash_42_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_19986_p3() {
    grp_fu_19986_p3 = hash_42_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_19994_p4() {
    grp_fu_19994_p4 = hash_42_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20004_p4() {
    grp_fu_20004_p4 = hash_43_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20014_p3() {
    grp_fu_20014_p3 = hash_43_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20022_p4() {
    grp_fu_20022_p4 = hash_43_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20032_p4() {
    grp_fu_20032_p4 = hash_44_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20042_p3() {
    grp_fu_20042_p3 = hash_44_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20050_p4() {
    grp_fu_20050_p4 = hash_44_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20060_p4() {
    grp_fu_20060_p4 = hash_45_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20070_p3() {
    grp_fu_20070_p3 = hash_45_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20078_p4() {
    grp_fu_20078_p4 = hash_45_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20088_p4() {
    grp_fu_20088_p4 = hash_46_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20098_p3() {
    grp_fu_20098_p3 = hash_46_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20106_p4() {
    grp_fu_20106_p4 = hash_46_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20116_p4() {
    grp_fu_20116_p4 = hash_47_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20126_p3() {
    grp_fu_20126_p3 = hash_47_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20134_p4() {
    grp_fu_20134_p4 = hash_47_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20144_p4() {
    grp_fu_20144_p4 = hash_48_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20154_p3() {
    grp_fu_20154_p3 = hash_48_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20162_p4() {
    grp_fu_20162_p4 = hash_48_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20172_p4() {
    grp_fu_20172_p4 = hash_49_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20182_p3() {
    grp_fu_20182_p3 = hash_49_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20190_p4() {
    grp_fu_20190_p4 = hash_49_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20200_p4() {
    grp_fu_20200_p4 = hash_50_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20210_p3() {
    grp_fu_20210_p3 = hash_50_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20218_p4() {
    grp_fu_20218_p4 = hash_50_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20228_p4() {
    grp_fu_20228_p4 = hash_51_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20238_p3() {
    grp_fu_20238_p3 = hash_51_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20246_p4() {
    grp_fu_20246_p4 = hash_51_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20256_p4() {
    grp_fu_20256_p4 = hash_52_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20266_p3() {
    grp_fu_20266_p3 = hash_52_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20274_p4() {
    grp_fu_20274_p4 = hash_52_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20284_p4() {
    grp_fu_20284_p4 = hash_53_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20294_p3() {
    grp_fu_20294_p3 = hash_53_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20302_p4() {
    grp_fu_20302_p4 = hash_53_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20312_p4() {
    grp_fu_20312_p4 = hash_54_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20322_p3() {
    grp_fu_20322_p3 = hash_54_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20330_p4() {
    grp_fu_20330_p4 = hash_54_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20340_p4() {
    grp_fu_20340_p4 = hash_55_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20350_p3() {
    grp_fu_20350_p3 = hash_55_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20358_p4() {
    grp_fu_20358_p4 = hash_55_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20368_p4() {
    grp_fu_20368_p4 = hash_56_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20378_p3() {
    grp_fu_20378_p3 = hash_56_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20386_p4() {
    grp_fu_20386_p4 = hash_56_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20396_p4() {
    grp_fu_20396_p4 = hash_57_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20406_p3() {
    grp_fu_20406_p3 = hash_57_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20414_p4() {
    grp_fu_20414_p4 = hash_57_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20424_p4() {
    grp_fu_20424_p4 = hash_58_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20434_p3() {
    grp_fu_20434_p3 = hash_58_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20442_p4() {
    grp_fu_20442_p4 = hash_58_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20452_p4() {
    grp_fu_20452_p4 = hash_59_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20462_p3() {
    grp_fu_20462_p3 = hash_59_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20470_p4() {
    grp_fu_20470_p4 = hash_59_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20480_p4() {
    grp_fu_20480_p4 = hash_60_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20490_p3() {
    grp_fu_20490_p3 = hash_60_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20498_p4() {
    grp_fu_20498_p4 = hash_60_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20508_p4() {
    grp_fu_20508_p4 = hash_61_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20518_p3() {
    grp_fu_20518_p3 = hash_61_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20526_p4() {
    grp_fu_20526_p4 = hash_61_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20536_p4() {
    grp_fu_20536_p4 = hash_62_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20546_p3() {
    grp_fu_20546_p3 = hash_62_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20554_p4() {
    grp_fu_20554_p4 = hash_62_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20564_p4() {
    grp_fu_20564_p4 = hash_63_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20574_p3() {
    grp_fu_20574_p3 = hash_63_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20582_p4() {
    grp_fu_20582_p4 = hash_63_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20592_p4() {
    grp_fu_20592_p4 = hash_64_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20602_p3() {
    grp_fu_20602_p3 = hash_64_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20610_p4() {
    grp_fu_20610_p4 = hash_64_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20620_p4() {
    grp_fu_20620_p4 = hash_65_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20630_p3() {
    grp_fu_20630_p3 = hash_65_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20638_p4() {
    grp_fu_20638_p4 = hash_65_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20648_p4() {
    grp_fu_20648_p4 = hash_66_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20658_p3() {
    grp_fu_20658_p3 = hash_66_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20666_p4() {
    grp_fu_20666_p4 = hash_66_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20676_p4() {
    grp_fu_20676_p4 = hash_67_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20686_p3() {
    grp_fu_20686_p3 = hash_67_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20694_p4() {
    grp_fu_20694_p4 = hash_67_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20704_p4() {
    grp_fu_20704_p4 = hash_68_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20714_p3() {
    grp_fu_20714_p3 = hash_68_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20722_p4() {
    grp_fu_20722_p4 = hash_68_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20732_p4() {
    grp_fu_20732_p4 = hash_69_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20742_p3() {
    grp_fu_20742_p3 = hash_69_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20750_p4() {
    grp_fu_20750_p4 = hash_69_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20760_p4() {
    grp_fu_20760_p4 = hash_70_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20770_p3() {
    grp_fu_20770_p3 = hash_70_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20778_p4() {
    grp_fu_20778_p4 = hash_70_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20788_p4() {
    grp_fu_20788_p4 = hash_71_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20798_p3() {
    grp_fu_20798_p3 = hash_71_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20806_p4() {
    grp_fu_20806_p4 = hash_71_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20816_p4() {
    grp_fu_20816_p4 = hash_72_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20826_p3() {
    grp_fu_20826_p3 = hash_72_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20834_p4() {
    grp_fu_20834_p4 = hash_72_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20844_p4() {
    grp_fu_20844_p4 = hash_73_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20854_p3() {
    grp_fu_20854_p3 = hash_73_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20862_p4() {
    grp_fu_20862_p4 = hash_73_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20872_p4() {
    grp_fu_20872_p4 = hash_74_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20882_p3() {
    grp_fu_20882_p3 = hash_74_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20890_p4() {
    grp_fu_20890_p4 = hash_74_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20900_p4() {
    grp_fu_20900_p4 = hash_75_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20910_p3() {
    grp_fu_20910_p3 = hash_75_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20918_p4() {
    grp_fu_20918_p4 = hash_75_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20928_p4() {
    grp_fu_20928_p4 = hash_76_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20938_p3() {
    grp_fu_20938_p3 = hash_76_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20946_p4() {
    grp_fu_20946_p4 = hash_76_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20956_p4() {
    grp_fu_20956_p4 = hash_77_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20966_p3() {
    grp_fu_20966_p3 = hash_77_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_20974_p4() {
    grp_fu_20974_p4 = hash_77_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_20984_p4() {
    grp_fu_20984_p4 = hash_78_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_20994_p3() {
    grp_fu_20994_p3 = hash_78_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21002_p4() {
    grp_fu_21002_p4 = hash_78_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21012_p4() {
    grp_fu_21012_p4 = hash_79_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21022_p3() {
    grp_fu_21022_p3 = hash_79_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21030_p4() {
    grp_fu_21030_p4 = hash_79_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21040_p4() {
    grp_fu_21040_p4 = hash_80_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21050_p3() {
    grp_fu_21050_p3 = hash_80_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21058_p4() {
    grp_fu_21058_p4 = hash_80_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21068_p4() {
    grp_fu_21068_p4 = hash_81_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21078_p3() {
    grp_fu_21078_p3 = hash_81_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21086_p4() {
    grp_fu_21086_p4 = hash_81_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21096_p4() {
    grp_fu_21096_p4 = hash_82_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21106_p3() {
    grp_fu_21106_p3 = hash_82_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21114_p4() {
    grp_fu_21114_p4 = hash_82_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21124_p4() {
    grp_fu_21124_p4 = hash_83_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21134_p3() {
    grp_fu_21134_p3 = hash_83_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21142_p4() {
    grp_fu_21142_p4 = hash_83_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21152_p4() {
    grp_fu_21152_p4 = hash_84_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21162_p3() {
    grp_fu_21162_p3 = hash_84_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21170_p4() {
    grp_fu_21170_p4 = hash_84_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21180_p4() {
    grp_fu_21180_p4 = hash_85_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21190_p3() {
    grp_fu_21190_p3 = hash_85_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21198_p4() {
    grp_fu_21198_p4 = hash_85_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21208_p4() {
    grp_fu_21208_p4 = hash_86_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21218_p3() {
    grp_fu_21218_p3 = hash_86_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21226_p4() {
    grp_fu_21226_p4 = hash_86_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21236_p4() {
    grp_fu_21236_p4 = hash_87_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21246_p3() {
    grp_fu_21246_p3 = hash_87_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21254_p4() {
    grp_fu_21254_p4 = hash_87_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21264_p4() {
    grp_fu_21264_p4 = hash_88_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21274_p3() {
    grp_fu_21274_p3 = hash_88_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21282_p4() {
    grp_fu_21282_p4 = hash_88_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21292_p4() {
    grp_fu_21292_p4 = hash_89_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21302_p3() {
    grp_fu_21302_p3 = hash_89_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21310_p4() {
    grp_fu_21310_p4 = hash_89_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21320_p4() {
    grp_fu_21320_p4 = hash_90_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21330_p3() {
    grp_fu_21330_p3 = hash_90_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21338_p4() {
    grp_fu_21338_p4 = hash_90_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21348_p4() {
    grp_fu_21348_p4 = hash_91_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21358_p3() {
    grp_fu_21358_p3 = hash_91_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21366_p4() {
    grp_fu_21366_p4 = hash_91_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21376_p4() {
    grp_fu_21376_p4 = hash_92_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21386_p3() {
    grp_fu_21386_p3 = hash_92_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21394_p4() {
    grp_fu_21394_p4 = hash_92_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21404_p4() {
    grp_fu_21404_p4 = hash_93_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21414_p3() {
    grp_fu_21414_p3 = hash_93_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21422_p4() {
    grp_fu_21422_p4 = hash_93_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21432_p4() {
    grp_fu_21432_p4 = hash_94_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21442_p3() {
    grp_fu_21442_p3 = hash_94_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21450_p4() {
    grp_fu_21450_p4 = hash_94_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21460_p4() {
    grp_fu_21460_p4 = hash_95_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21470_p3() {
    grp_fu_21470_p3 = hash_95_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21478_p4() {
    grp_fu_21478_p4 = hash_95_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21488_p4() {
    grp_fu_21488_p4 = hash_96_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21498_p3() {
    grp_fu_21498_p3 = hash_96_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21506_p4() {
    grp_fu_21506_p4 = hash_96_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21516_p4() {
    grp_fu_21516_p4 = hash_97_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21526_p3() {
    grp_fu_21526_p3 = hash_97_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21534_p4() {
    grp_fu_21534_p4 = hash_97_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21544_p4() {
    grp_fu_21544_p4 = hash_98_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21554_p3() {
    grp_fu_21554_p3 = hash_98_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21562_p4() {
    grp_fu_21562_p4 = hash_98_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21572_p4() {
    grp_fu_21572_p4 = hash_99_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21582_p3() {
    grp_fu_21582_p3 = hash_99_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21590_p4() {
    grp_fu_21590_p4 = hash_99_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21600_p4() {
    grp_fu_21600_p4 = hash_100_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21610_p3() {
    grp_fu_21610_p3 = hash_100_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21618_p4() {
    grp_fu_21618_p4 = hash_100_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21628_p4() {
    grp_fu_21628_p4 = hash_101_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21638_p3() {
    grp_fu_21638_p3 = hash_101_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21646_p4() {
    grp_fu_21646_p4 = hash_101_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21656_p4() {
    grp_fu_21656_p4 = hash_102_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21666_p3() {
    grp_fu_21666_p3 = hash_102_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21674_p4() {
    grp_fu_21674_p4 = hash_102_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21684_p4() {
    grp_fu_21684_p4 = hash_103_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21694_p3() {
    grp_fu_21694_p3 = hash_103_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21702_p4() {
    grp_fu_21702_p4 = hash_103_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21712_p4() {
    grp_fu_21712_p4 = hash_104_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21722_p3() {
    grp_fu_21722_p3 = hash_104_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21730_p4() {
    grp_fu_21730_p4 = hash_104_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21740_p4() {
    grp_fu_21740_p4 = hash_105_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21750_p3() {
    grp_fu_21750_p3 = hash_105_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21758_p4() {
    grp_fu_21758_p4 = hash_105_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21768_p4() {
    grp_fu_21768_p4 = hash_106_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21778_p3() {
    grp_fu_21778_p3 = hash_106_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21786_p4() {
    grp_fu_21786_p4 = hash_106_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21796_p4() {
    grp_fu_21796_p4 = hash_107_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21806_p3() {
    grp_fu_21806_p3 = hash_107_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21814_p4() {
    grp_fu_21814_p4 = hash_107_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21824_p4() {
    grp_fu_21824_p4 = hash_108_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21834_p3() {
    grp_fu_21834_p3 = hash_108_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21842_p4() {
    grp_fu_21842_p4 = hash_108_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21852_p4() {
    grp_fu_21852_p4 = hash_109_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21862_p3() {
    grp_fu_21862_p3 = hash_109_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21870_p4() {
    grp_fu_21870_p4 = hash_109_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21880_p4() {
    grp_fu_21880_p4 = hash_110_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21890_p3() {
    grp_fu_21890_p3 = hash_110_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21898_p4() {
    grp_fu_21898_p4 = hash_110_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21908_p4() {
    grp_fu_21908_p4 = hash_111_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21918_p3() {
    grp_fu_21918_p3 = hash_111_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21926_p4() {
    grp_fu_21926_p4 = hash_111_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21936_p4() {
    grp_fu_21936_p4 = hash_112_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21946_p3() {
    grp_fu_21946_p3 = hash_112_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21954_p4() {
    grp_fu_21954_p4 = hash_112_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21964_p4() {
    grp_fu_21964_p4 = hash_113_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_21974_p3() {
    grp_fu_21974_p3 = hash_113_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_21982_p4() {
    grp_fu_21982_p4 = hash_113_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_21992_p4() {
    grp_fu_21992_p4 = hash_114_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22002_p3() {
    grp_fu_22002_p3 = hash_114_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22010_p4() {
    grp_fu_22010_p4 = hash_114_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22020_p4() {
    grp_fu_22020_p4 = hash_115_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22030_p3() {
    grp_fu_22030_p3 = hash_115_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22038_p4() {
    grp_fu_22038_p4 = hash_115_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22048_p4() {
    grp_fu_22048_p4 = hash_116_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22058_p3() {
    grp_fu_22058_p3 = hash_116_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22066_p4() {
    grp_fu_22066_p4 = hash_116_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22076_p4() {
    grp_fu_22076_p4 = hash_117_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22086_p3() {
    grp_fu_22086_p3 = hash_117_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22094_p4() {
    grp_fu_22094_p4 = hash_117_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22104_p4() {
    grp_fu_22104_p4 = hash_118_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22114_p3() {
    grp_fu_22114_p3 = hash_118_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22122_p4() {
    grp_fu_22122_p4 = hash_118_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22132_p4() {
    grp_fu_22132_p4 = hash_119_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22142_p3() {
    grp_fu_22142_p3 = hash_119_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22150_p4() {
    grp_fu_22150_p4 = hash_119_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22160_p4() {
    grp_fu_22160_p4 = hash_120_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22170_p3() {
    grp_fu_22170_p3 = hash_120_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22178_p4() {
    grp_fu_22178_p4 = hash_120_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22188_p4() {
    grp_fu_22188_p4 = hash_121_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22198_p3() {
    grp_fu_22198_p3 = hash_121_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22206_p4() {
    grp_fu_22206_p4 = hash_121_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22216_p4() {
    grp_fu_22216_p4 = hash_122_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22226_p3() {
    grp_fu_22226_p3 = hash_122_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22234_p4() {
    grp_fu_22234_p4 = hash_122_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22244_p4() {
    grp_fu_22244_p4 = hash_123_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22254_p3() {
    grp_fu_22254_p3 = hash_123_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22262_p4() {
    grp_fu_22262_p4 = hash_123_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22272_p4() {
    grp_fu_22272_p4 = hash_124_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22282_p3() {
    grp_fu_22282_p3 = hash_124_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22290_p4() {
    grp_fu_22290_p4 = hash_124_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22300_p4() {
    grp_fu_22300_p4 = hash_125_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22310_p3() {
    grp_fu_22310_p3 = hash_125_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22318_p4() {
    grp_fu_22318_p4 = hash_125_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22328_p4() {
    grp_fu_22328_p4 = hash_126_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22338_p3() {
    grp_fu_22338_p3 = hash_126_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22346_p4() {
    grp_fu_22346_p4 = hash_126_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_grp_fu_22356_p4() {
    grp_fu_22356_p4 = hash_127_q0.read().range(9, 8);
}

void calcHash_rollingHash::thread_grp_fu_22366_p3() {
    grp_fu_22366_p3 = hash_127_q0.read().range(6, 6);
}

void calcHash_rollingHash::thread_grp_fu_22374_p4() {
    grp_fu_22374_p4 = hash_127_q0.read().range(4, 3);
}

void calcHash_rollingHash::thread_hash_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st85_fsm_81.read())) {
        hash_0_address0 =  (sc_lv<5>) (newIndex591_fu_61528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st81_fsm_77.read())) {
        hash_0_address0 =  (sc_lv<5>) (newIndex3358433585_fu_52610_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_0_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_0_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        hash_0_address1 =  (sc_lv<5>) (newIndex422_fu_44342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        hash_0_address1 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        hash_0_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st81_fsm_77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st85_fsm_81.read()))) {
        hash_0_ce0 = ap_const_logic_1;
    } else {
        hash_0_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read())))) {
        hash_0_ce1 = ap_const_logic_1;
    } else {
        hash_0_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        hash_0_d1 = sum_3_126_reg_76399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        hash_0_d1 = sum_2_1022_cast_fu_36566_p1.read();
    } else {
        hash_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void calcHash_rollingHash::thread_hash_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond2_reg_73628_pp0_iter1.read(), ap_const_lv1_0)))) {
        hash_0_we1 = ap_const_logic_1;
    } else {
        hash_0_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_100_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_100_address0 =  (sc_lv<5>) (newIndex792_fu_60714_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_100_address0 =  (sc_lv<5>) (newIndex534_fu_52018_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_100_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_100_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_100_address1() {
    hash_100_address1 =  (sc_lv<5>) (newIndex336_reg_75811.read());
}

void calcHash_rollingHash::thread_hash_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_100_ce0 = ap_const_logic_1;
    } else {
        hash_100_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_100_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read()))) {
        hash_100_ce1 = ap_const_logic_1;
    } else {
        hash_100_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_100_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read())))) {
        hash_100_we1 = ap_const_logic_1;
    } else {
        hash_100_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_101_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_101_address0 =  (sc_lv<5>) (newIndex794_fu_60743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_101_address0 =  (sc_lv<5>) (newIndex536_fu_52039_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_101_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_101_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_101_address1() {
    hash_101_address1 =  (sc_lv<5>) (newIndex339_reg_75826.read());
}

void calcHash_rollingHash::thread_hash_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_101_ce0 = ap_const_logic_1;
    } else {
        hash_101_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_101_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read()))) {
        hash_101_ce1 = ap_const_logic_1;
    } else {
        hash_101_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_101_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read())))) {
        hash_101_we1 = ap_const_logic_1;
    } else {
        hash_101_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_102_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_102_address0 =  (sc_lv<5>) (newIndex796_fu_60772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_102_address0 =  (sc_lv<5>) (newIndex538_fu_52060_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_102_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_102_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_102_address1() {
    hash_102_address1 =  (sc_lv<5>) (newIndex342_reg_75852.read());
}

void calcHash_rollingHash::thread_hash_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_102_ce0 = ap_const_logic_1;
    } else {
        hash_102_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_102_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read()))) {
        hash_102_ce1 = ap_const_logic_1;
    } else {
        hash_102_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_102_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read())))) {
        hash_102_we1 = ap_const_logic_1;
    } else {
        hash_102_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_103_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_103_address0 =  (sc_lv<5>) (newIndex798_fu_60801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_103_address0 =  (sc_lv<5>) (newIndex540_fu_52081_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_103_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_103_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_103_address1() {
    hash_103_address1 =  (sc_lv<5>) (newIndex345_reg_75867.read());
}

void calcHash_rollingHash::thread_hash_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_103_ce0 = ap_const_logic_1;
    } else {
        hash_103_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_103_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read()))) {
        hash_103_ce1 = ap_const_logic_1;
    } else {
        hash_103_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_103_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read())))) {
        hash_103_we1 = ap_const_logic_1;
    } else {
        hash_103_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_104_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_104_address0 =  (sc_lv<5>) (newIndex800_fu_60830_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_104_address0 =  (sc_lv<5>) (newIndex542_fu_52102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_104_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_104_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_104_address1() {
    hash_104_address1 =  (sc_lv<5>) (newIndex348_reg_75893.read());
}

void calcHash_rollingHash::thread_hash_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_104_ce0 = ap_const_logic_1;
    } else {
        hash_104_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_104_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read()))) {
        hash_104_ce1 = ap_const_logic_1;
    } else {
        hash_104_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_104_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read())))) {
        hash_104_we1 = ap_const_logic_1;
    } else {
        hash_104_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_105_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_105_address0 =  (sc_lv<5>) (newIndex802_fu_60859_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_105_address0 =  (sc_lv<5>) (newIndex544_fu_52123_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_105_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_105_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_105_address1() {
    hash_105_address1 =  (sc_lv<5>) (newIndex351_reg_75908.read());
}

void calcHash_rollingHash::thread_hash_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_105_ce0 = ap_const_logic_1;
    } else {
        hash_105_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_105_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read()))) {
        hash_105_ce1 = ap_const_logic_1;
    } else {
        hash_105_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_105_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read())))) {
        hash_105_we1 = ap_const_logic_1;
    } else {
        hash_105_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_106_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_106_address0 =  (sc_lv<5>) (newIndex804_fu_60888_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_106_address0 =  (sc_lv<5>) (newIndex546_fu_52144_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_106_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_106_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_106_address1() {
    hash_106_address1 =  (sc_lv<5>) (newIndex354_reg_75934.read());
}

void calcHash_rollingHash::thread_hash_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_106_ce0 = ap_const_logic_1;
    } else {
        hash_106_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_106_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read()))) {
        hash_106_ce1 = ap_const_logic_1;
    } else {
        hash_106_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_106_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read())))) {
        hash_106_we1 = ap_const_logic_1;
    } else {
        hash_106_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_107_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_107_address0 =  (sc_lv<5>) (newIndex806_fu_60917_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_107_address0 =  (sc_lv<5>) (newIndex548_fu_52165_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_107_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_107_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_107_address1() {
    hash_107_address1 =  (sc_lv<5>) (newIndex357_reg_75949.read());
}

void calcHash_rollingHash::thread_hash_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_107_ce0 = ap_const_logic_1;
    } else {
        hash_107_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_107_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read()))) {
        hash_107_ce1 = ap_const_logic_1;
    } else {
        hash_107_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_107_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read())))) {
        hash_107_we1 = ap_const_logic_1;
    } else {
        hash_107_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_108_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_108_address0 =  (sc_lv<5>) (newIndex808_fu_60946_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_108_address0 =  (sc_lv<5>) (newIndex550_fu_52186_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_108_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_108_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_108_address1() {
    hash_108_address1 =  (sc_lv<5>) (newIndex360_reg_75975.read());
}

void calcHash_rollingHash::thread_hash_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_108_ce0 = ap_const_logic_1;
    } else {
        hash_108_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_108_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read()))) {
        hash_108_ce1 = ap_const_logic_1;
    } else {
        hash_108_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_108_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read())))) {
        hash_108_we1 = ap_const_logic_1;
    } else {
        hash_108_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_109_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_109_address0 =  (sc_lv<5>) (newIndex810_fu_60975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_109_address0 =  (sc_lv<5>) (newIndex552_fu_52207_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_109_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_109_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_109_address1() {
    hash_109_address1 =  (sc_lv<5>) (newIndex363_reg_75990.read());
}

void calcHash_rollingHash::thread_hash_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_109_ce0 = ap_const_logic_1;
    } else {
        hash_109_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_109_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read()))) {
        hash_109_ce1 = ap_const_logic_1;
    } else {
        hash_109_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_109_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read())))) {
        hash_109_we1 = ap_const_logic_1;
    } else {
        hash_109_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_10_address0 =  (sc_lv<5>) (newIndex611_fu_58104_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_10_address0 =  (sc_lv<5>) (newIndex3227432275_fu_50128_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_10_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_10_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_10_address1() {
    hash_10_address1 =  (sc_lv<5>) (newIndex6594165942_reg_73966.read());
}

void calcHash_rollingHash::thread_hash_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_10_ce0 = ap_const_logic_1;
    } else {
        hash_10_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read()))) {
        hash_10_ce1 = ap_const_logic_1;
    } else {
        hash_10_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_10_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read())))) {
        hash_10_we1 = ap_const_logic_1;
    } else {
        hash_10_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_110_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_110_address0 =  (sc_lv<5>) (newIndex812_fu_61004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_110_address0 =  (sc_lv<5>) (newIndex554_fu_52228_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_110_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_110_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_110_address1() {
    hash_110_address1 =  (sc_lv<5>) (newIndex366_reg_76016.read());
}

void calcHash_rollingHash::thread_hash_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_110_ce0 = ap_const_logic_1;
    } else {
        hash_110_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_110_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read()))) {
        hash_110_ce1 = ap_const_logic_1;
    } else {
        hash_110_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_110_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read())))) {
        hash_110_we1 = ap_const_logic_1;
    } else {
        hash_110_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_111_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_111_address0 =  (sc_lv<5>) (newIndex814_fu_61033_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_111_address0 =  (sc_lv<5>) (newIndex556_fu_52249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_111_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_111_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_111_address1() {
    hash_111_address1 =  (sc_lv<5>) (newIndex369_reg_76031.read());
}

void calcHash_rollingHash::thread_hash_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_111_ce0 = ap_const_logic_1;
    } else {
        hash_111_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_111_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read()))) {
        hash_111_ce1 = ap_const_logic_1;
    } else {
        hash_111_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_111_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read())))) {
        hash_111_we1 = ap_const_logic_1;
    } else {
        hash_111_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_112_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_112_address0 =  (sc_lv<5>) (newIndex816_fu_61062_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_112_address0 =  (sc_lv<5>) (newIndex558_fu_52270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_112_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_112_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_112_address1() {
    hash_112_address1 =  (sc_lv<5>) (newIndex372_reg_76057.read());
}

void calcHash_rollingHash::thread_hash_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_112_ce0 = ap_const_logic_1;
    } else {
        hash_112_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_112_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read()))) {
        hash_112_ce1 = ap_const_logic_1;
    } else {
        hash_112_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_112_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read())))) {
        hash_112_we1 = ap_const_logic_1;
    } else {
        hash_112_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_113_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_113_address0 =  (sc_lv<5>) (newIndex818_fu_61091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_113_address0 =  (sc_lv<5>) (newIndex560_fu_52291_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_113_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_113_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_113_address1() {
    hash_113_address1 =  (sc_lv<5>) (newIndex375_reg_76072.read());
}

void calcHash_rollingHash::thread_hash_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_113_ce0 = ap_const_logic_1;
    } else {
        hash_113_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_113_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read()))) {
        hash_113_ce1 = ap_const_logic_1;
    } else {
        hash_113_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_113_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read())))) {
        hash_113_we1 = ap_const_logic_1;
    } else {
        hash_113_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_114_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_114_address0 =  (sc_lv<5>) (newIndex820_fu_61120_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_114_address0 =  (sc_lv<5>) (newIndex562_fu_52312_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_114_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_114_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_114_address1() {
    hash_114_address1 =  (sc_lv<5>) (newIndex378_reg_76098.read());
}

void calcHash_rollingHash::thread_hash_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_114_ce0 = ap_const_logic_1;
    } else {
        hash_114_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_114_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read()))) {
        hash_114_ce1 = ap_const_logic_1;
    } else {
        hash_114_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_114_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read())))) {
        hash_114_we1 = ap_const_logic_1;
    } else {
        hash_114_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_115_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_115_address0 =  (sc_lv<5>) (newIndex822_fu_61149_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_115_address0 =  (sc_lv<5>) (newIndex564_fu_52333_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_115_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_115_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_115_address1() {
    hash_115_address1 =  (sc_lv<5>) (newIndex381_reg_76113.read());
}

void calcHash_rollingHash::thread_hash_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_115_ce0 = ap_const_logic_1;
    } else {
        hash_115_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_115_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read()))) {
        hash_115_ce1 = ap_const_logic_1;
    } else {
        hash_115_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_115_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read())))) {
        hash_115_we1 = ap_const_logic_1;
    } else {
        hash_115_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_116_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_116_address0 =  (sc_lv<5>) (newIndex824_fu_61178_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_116_address0 =  (sc_lv<5>) (newIndex566_fu_52354_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_116_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_116_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_116_address1() {
    hash_116_address1 =  (sc_lv<5>) (newIndex384_reg_76139.read());
}

void calcHash_rollingHash::thread_hash_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_116_ce0 = ap_const_logic_1;
    } else {
        hash_116_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_116_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read()))) {
        hash_116_ce1 = ap_const_logic_1;
    } else {
        hash_116_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_116_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read())))) {
        hash_116_we1 = ap_const_logic_1;
    } else {
        hash_116_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_117_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_117_address0 =  (sc_lv<5>) (newIndex826_fu_61207_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_117_address0 =  (sc_lv<5>) (newIndex568_fu_52375_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_117_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_117_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_117_address1() {
    hash_117_address1 =  (sc_lv<5>) (newIndex387_reg_76154.read());
}

void calcHash_rollingHash::thread_hash_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_117_ce0 = ap_const_logic_1;
    } else {
        hash_117_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_117_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read()))) {
        hash_117_ce1 = ap_const_logic_1;
    } else {
        hash_117_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_117_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read())))) {
        hash_117_we1 = ap_const_logic_1;
    } else {
        hash_117_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_118_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_118_address0 =  (sc_lv<5>) (newIndex828_fu_61236_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_118_address0 =  (sc_lv<5>) (newIndex570_fu_52396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_118_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_118_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_118_address1() {
    hash_118_address1 =  (sc_lv<5>) (newIndex390_reg_76180.read());
}

void calcHash_rollingHash::thread_hash_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_118_ce0 = ap_const_logic_1;
    } else {
        hash_118_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_118_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read()))) {
        hash_118_ce1 = ap_const_logic_1;
    } else {
        hash_118_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_118_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read())))) {
        hash_118_we1 = ap_const_logic_1;
    } else {
        hash_118_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_119_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_119_address0 =  (sc_lv<5>) (newIndex830_fu_61265_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_119_address0 =  (sc_lv<5>) (newIndex573_fu_52417_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_119_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_119_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_119_address1() {
    hash_119_address1 =  (sc_lv<5>) (newIndex393_reg_76195.read());
}

void calcHash_rollingHash::thread_hash_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_119_ce0 = ap_const_logic_1;
    } else {
        hash_119_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_119_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read()))) {
        hash_119_ce1 = ap_const_logic_1;
    } else {
        hash_119_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_119_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read())))) {
        hash_119_we1 = ap_const_logic_1;
    } else {
        hash_119_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_11_address0 =  (sc_lv<5>) (newIndex613_fu_58133_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_11_address0 =  (sc_lv<5>) (newIndex3214332144_fu_50149_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_11_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_11_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_11_address1() {
    hash_11_address1 =  (sc_lv<5>) (newIndex6581065811_reg_73981.read());
}

void calcHash_rollingHash::thread_hash_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_11_ce0 = ap_const_logic_1;
    } else {
        hash_11_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read()))) {
        hash_11_ce1 = ap_const_logic_1;
    } else {
        hash_11_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_11_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read())))) {
        hash_11_we1 = ap_const_logic_1;
    } else {
        hash_11_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_120_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_120_address0 =  (sc_lv<5>) (newIndex832_fu_61294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_120_address0 =  (sc_lv<5>) (newIndex575_fu_52438_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_120_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_120_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_120_address1() {
    hash_120_address1 =  (sc_lv<5>) (newIndex396_reg_76221.read());
}

void calcHash_rollingHash::thread_hash_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_120_ce0 = ap_const_logic_1;
    } else {
        hash_120_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_120_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read()))) {
        hash_120_ce1 = ap_const_logic_1;
    } else {
        hash_120_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_120_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read())))) {
        hash_120_we1 = ap_const_logic_1;
    } else {
        hash_120_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_121_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_121_address0 =  (sc_lv<5>) (newIndex835_fu_61323_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_121_address0 =  (sc_lv<5>) (newIndex577_fu_52459_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_121_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_121_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_121_address1() {
    hash_121_address1 =  (sc_lv<5>) (newIndex399_reg_76236.read());
}

void calcHash_rollingHash::thread_hash_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_121_ce0 = ap_const_logic_1;
    } else {
        hash_121_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_121_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read()))) {
        hash_121_ce1 = ap_const_logic_1;
    } else {
        hash_121_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_121_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read())))) {
        hash_121_we1 = ap_const_logic_1;
    } else {
        hash_121_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_122_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_122_address0 =  (sc_lv<5>) (newIndex836_fu_61352_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_122_address0 =  (sc_lv<5>) (newIndex579_fu_52480_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_122_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_122_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_122_address1() {
    hash_122_address1 =  (sc_lv<5>) (newIndex402_reg_76262.read());
}

void calcHash_rollingHash::thread_hash_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_122_ce0 = ap_const_logic_1;
    } else {
        hash_122_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_122_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read()))) {
        hash_122_ce1 = ap_const_logic_1;
    } else {
        hash_122_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_122_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read())))) {
        hash_122_we1 = ap_const_logic_1;
    } else {
        hash_122_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_123_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_123_address0 =  (sc_lv<5>) (newIndex837_fu_61381_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_123_address0 =  (sc_lv<5>) (newIndex581_fu_52501_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_123_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_123_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_123_address1() {
    hash_123_address1 =  (sc_lv<5>) (newIndex405_reg_76277.read());
}

void calcHash_rollingHash::thread_hash_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_123_ce0 = ap_const_logic_1;
    } else {
        hash_123_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_123_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read()))) {
        hash_123_ce1 = ap_const_logic_1;
    } else {
        hash_123_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_123_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read())))) {
        hash_123_we1 = ap_const_logic_1;
    } else {
        hash_123_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_124_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_124_address0 =  (sc_lv<5>) (newIndex838_fu_61410_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_124_address0 =  (sc_lv<5>) (newIndex583_fu_52522_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_124_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_124_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_124_address1() {
    hash_124_address1 =  (sc_lv<5>) (newIndex408_reg_76303.read());
}

void calcHash_rollingHash::thread_hash_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_124_ce0 = ap_const_logic_1;
    } else {
        hash_124_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_124_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        hash_124_ce1 = ap_const_logic_1;
    } else {
        hash_124_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_124_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0)))) {
        hash_124_we1 = ap_const_logic_1;
    } else {
        hash_124_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_125_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_125_address0 =  (sc_lv<5>) (newIndex839_fu_61439_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_125_address0 =  (sc_lv<5>) (newIndex585_fu_52543_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_125_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_125_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_125_address1() {
    hash_125_address1 =  (sc_lv<5>) (newIndex412_reg_76318.read());
}

void calcHash_rollingHash::thread_hash_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_125_ce0 = ap_const_logic_1;
    } else {
        hash_125_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_125_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        hash_125_ce1 = ap_const_logic_1;
    } else {
        hash_125_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_125_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0)))) {
        hash_125_we1 = ap_const_logic_1;
    } else {
        hash_125_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_126_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_126_address0 =  (sc_lv<5>) (newIndex840_fu_61468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_126_address0 =  (sc_lv<5>) (newIndex587_fu_52564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_126_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_126_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_126_address1() {
    hash_126_address1 =  (sc_lv<5>) (newIndex415_reg_76369.read());
}

void calcHash_rollingHash::thread_hash_126_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_126_ce0 = ap_const_logic_1;
    } else {
        hash_126_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_126_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()))) {
        hash_126_ce1 = ap_const_logic_1;
    } else {
        hash_126_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_126_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond2_reg_73628_pp0_iter1.read(), ap_const_lv1_0)))) {
        hash_126_we1 = ap_const_logic_1;
    } else {
        hash_126_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_127_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_127_address0 =  (sc_lv<5>) (newIndex181_fu_61497_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_127_address0 =  (sc_lv<5>) (newIndex589_fu_52585_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_127_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_127_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_127_address1() {
    hash_127_address1 =  (sc_lv<5>) (newIndex418_reg_76384.read());
}

void calcHash_rollingHash::thread_hash_127_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_127_ce0 = ap_const_logic_1;
    } else {
        hash_127_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_127_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()))) {
        hash_127_ce1 = ap_const_logic_1;
    } else {
        hash_127_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_127_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond2_reg_73628_pp0_iter1.read(), ap_const_lv1_0)))) {
        hash_127_we1 = ap_const_logic_1;
    } else {
        hash_127_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_12_address0 =  (sc_lv<5>) (newIndex615_fu_58162_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_12_address0 =  (sc_lv<5>) (newIndex3201232013_fu_50170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_12_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_12_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_12_address1() {
    hash_12_address1 =  (sc_lv<5>) (newIndex6567965680_reg_74007.read());
}

void calcHash_rollingHash::thread_hash_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_12_ce0 = ap_const_logic_1;
    } else {
        hash_12_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read()))) {
        hash_12_ce1 = ap_const_logic_1;
    } else {
        hash_12_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_12_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read())))) {
        hash_12_we1 = ap_const_logic_1;
    } else {
        hash_12_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_13_address0 =  (sc_lv<5>) (newIndex617_fu_58191_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_13_address0 =  (sc_lv<5>) (newIndex3188131882_fu_50191_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_13_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_13_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_13_address1() {
    hash_13_address1 =  (sc_lv<5>) (newIndex6554865549_reg_74022.read());
}

void calcHash_rollingHash::thread_hash_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_13_ce0 = ap_const_logic_1;
    } else {
        hash_13_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read()))) {
        hash_13_ce1 = ap_const_logic_1;
    } else {
        hash_13_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_13_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read())))) {
        hash_13_we1 = ap_const_logic_1;
    } else {
        hash_13_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_14_address0 =  (sc_lv<5>) (newIndex619_fu_58220_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_14_address0 =  (sc_lv<5>) (newIndex3175031751_fu_50212_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_14_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_14_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_14_address1() {
    hash_14_address1 =  (sc_lv<5>) (newIndex6541765418_reg_74048.read());
}

void calcHash_rollingHash::thread_hash_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_14_ce0 = ap_const_logic_1;
    } else {
        hash_14_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read()))) {
        hash_14_ce1 = ap_const_logic_1;
    } else {
        hash_14_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_14_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read())))) {
        hash_14_we1 = ap_const_logic_1;
    } else {
        hash_14_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_15_address0 =  (sc_lv<5>) (newIndex621_fu_58249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_15_address0 =  (sc_lv<5>) (newIndex3161931620_fu_50233_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_15_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_15_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_15_address1() {
    hash_15_address1 =  (sc_lv<5>) (newIndex6528665287_reg_74063.read());
}

void calcHash_rollingHash::thread_hash_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_15_ce0 = ap_const_logic_1;
    } else {
        hash_15_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read()))) {
        hash_15_ce1 = ap_const_logic_1;
    } else {
        hash_15_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_15_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read())))) {
        hash_15_we1 = ap_const_logic_1;
    } else {
        hash_15_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_16_address0 =  (sc_lv<5>) (newIndex623_fu_58278_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_16_address0 =  (sc_lv<5>) (newIndex3148831489_fu_50254_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_16_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_16_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_16_address1() {
    hash_16_address1 =  (sc_lv<5>) (newIndex6515565156_reg_74089.read());
}

void calcHash_rollingHash::thread_hash_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_16_ce0 = ap_const_logic_1;
    } else {
        hash_16_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read()))) {
        hash_16_ce1 = ap_const_logic_1;
    } else {
        hash_16_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_16_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read())))) {
        hash_16_we1 = ap_const_logic_1;
    } else {
        hash_16_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_17_address0 =  (sc_lv<5>) (newIndex625_fu_58307_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_17_address0 =  (sc_lv<5>) (newIndex3135731358_fu_50275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_17_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_17_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_17_address1() {
    hash_17_address1 =  (sc_lv<5>) (newIndex6502465025_reg_74104.read());
}

void calcHash_rollingHash::thread_hash_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_17_ce0 = ap_const_logic_1;
    } else {
        hash_17_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read()))) {
        hash_17_ce1 = ap_const_logic_1;
    } else {
        hash_17_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_17_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read())))) {
        hash_17_we1 = ap_const_logic_1;
    } else {
        hash_17_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_18_address0 =  (sc_lv<5>) (newIndex627_fu_58336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_18_address0 =  (sc_lv<5>) (newIndex3122631227_fu_50296_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_18_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_18_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_18_address1() {
    hash_18_address1 =  (sc_lv<5>) (newIndex6489364894_reg_74130.read());
}

void calcHash_rollingHash::thread_hash_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_18_ce0 = ap_const_logic_1;
    } else {
        hash_18_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read()))) {
        hash_18_ce1 = ap_const_logic_1;
    } else {
        hash_18_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_18_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read())))) {
        hash_18_we1 = ap_const_logic_1;
    } else {
        hash_18_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_19_address0 =  (sc_lv<5>) (newIndex629_fu_58365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_19_address0 =  (sc_lv<5>) (newIndex3109531096_fu_50317_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_19_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_19_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_19_address1() {
    hash_19_address1 =  (sc_lv<5>) (newIndex6476264763_reg_74145.read());
}

void calcHash_rollingHash::thread_hash_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_19_ce0 = ap_const_logic_1;
    } else {
        hash_19_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read()))) {
        hash_19_ce1 = ap_const_logic_1;
    } else {
        hash_19_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_19_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read())))) {
        hash_19_we1 = ap_const_logic_1;
    } else {
        hash_19_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_1_address0 =  (sc_lv<5>) (newIndex593_fu_57843_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_1_address0 =  (sc_lv<5>) (newIndex3345333454_fu_49939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_1_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_1_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_1_address1() {
    hash_1_address1 =  (sc_lv<5>) (newIndex6712067121_reg_73776.read());
}

void calcHash_rollingHash::thread_hash_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_1_ce0 = ap_const_logic_1;
    } else {
        hash_1_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        hash_1_ce1 = ap_const_logic_1;
    } else {
        hash_1_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read())))) {
        hash_1_we1 = ap_const_logic_1;
    } else {
        hash_1_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_20_address0 =  (sc_lv<5>) (newIndex631_fu_58394_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_20_address0 =  (sc_lv<5>) (newIndex3096430965_fu_50338_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_20_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_20_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_20_address1() {
    hash_20_address1 =  (sc_lv<5>) (newIndex6463164632_reg_74171.read());
}

void calcHash_rollingHash::thread_hash_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_20_ce0 = ap_const_logic_1;
    } else {
        hash_20_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read()))) {
        hash_20_ce1 = ap_const_logic_1;
    } else {
        hash_20_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_20_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read())))) {
        hash_20_we1 = ap_const_logic_1;
    } else {
        hash_20_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_21_address0 =  (sc_lv<5>) (newIndex633_fu_58423_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_21_address0 =  (sc_lv<5>) (newIndex3083330834_fu_50359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_21_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_21_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_21_address1() {
    hash_21_address1 =  (sc_lv<5>) (newIndex6450064501_reg_74186.read());
}

void calcHash_rollingHash::thread_hash_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_21_ce0 = ap_const_logic_1;
    } else {
        hash_21_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read()))) {
        hash_21_ce1 = ap_const_logic_1;
    } else {
        hash_21_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_21_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read())))) {
        hash_21_we1 = ap_const_logic_1;
    } else {
        hash_21_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_22_address0 =  (sc_lv<5>) (newIndex635_fu_58452_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_22_address0 =  (sc_lv<5>) (newIndex3070230703_fu_50380_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_22_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_22_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_22_address1() {
    hash_22_address1 =  (sc_lv<5>) (newIndex69_reg_74212.read());
}

void calcHash_rollingHash::thread_hash_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_22_ce0 = ap_const_logic_1;
    } else {
        hash_22_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read()))) {
        hash_22_ce1 = ap_const_logic_1;
    } else {
        hash_22_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_22_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read())))) {
        hash_22_we1 = ap_const_logic_1;
    } else {
        hash_22_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_23_address0 =  (sc_lv<5>) (newIndex637_fu_58481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_23_address0 =  (sc_lv<5>) (newIndex3057130572_fu_50401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_23_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_23_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_23_address1() {
    hash_23_address1 =  (sc_lv<5>) (newIndex73_reg_74227.read());
}

void calcHash_rollingHash::thread_hash_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_23_ce0 = ap_const_logic_1;
    } else {
        hash_23_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read()))) {
        hash_23_ce1 = ap_const_logic_1;
    } else {
        hash_23_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_23_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read())))) {
        hash_23_we1 = ap_const_logic_1;
    } else {
        hash_23_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_24_address0 =  (sc_lv<5>) (newIndex639_fu_58510_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_24_address0 =  (sc_lv<5>) (newIndex3044030441_fu_50422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_24_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_24_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_24_address1() {
    hash_24_address1 =  (sc_lv<5>) (newIndex77_reg_74253.read());
}

void calcHash_rollingHash::thread_hash_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_24_ce0 = ap_const_logic_1;
    } else {
        hash_24_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read()))) {
        hash_24_ce1 = ap_const_logic_1;
    } else {
        hash_24_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_24_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read())))) {
        hash_24_we1 = ap_const_logic_1;
    } else {
        hash_24_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_25_address0 =  (sc_lv<5>) (newIndex641_fu_58539_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_25_address0 =  (sc_lv<5>) (newIndex3030930310_fu_50443_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_25_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_25_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_25_address1() {
    hash_25_address1 =  (sc_lv<5>) (newIndex81_reg_74268.read());
}

void calcHash_rollingHash::thread_hash_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_25_ce0 = ap_const_logic_1;
    } else {
        hash_25_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read()))) {
        hash_25_ce1 = ap_const_logic_1;
    } else {
        hash_25_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_25_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read())))) {
        hash_25_we1 = ap_const_logic_1;
    } else {
        hash_25_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_26_address0 =  (sc_lv<5>) (newIndex643_fu_58568_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_26_address0 =  (sc_lv<5>) (newIndex3017830179_fu_50464_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_26_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_26_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_26_address1() {
    hash_26_address1 =  (sc_lv<5>) (newIndex85_reg_74294.read());
}

void calcHash_rollingHash::thread_hash_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_26_ce0 = ap_const_logic_1;
    } else {
        hash_26_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read()))) {
        hash_26_ce1 = ap_const_logic_1;
    } else {
        hash_26_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_26_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read())))) {
        hash_26_we1 = ap_const_logic_1;
    } else {
        hash_26_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_27_address0 =  (sc_lv<5>) (newIndex645_fu_58597_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_27_address0 =  (sc_lv<5>) (newIndex3004730048_fu_50485_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_27_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_27_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_27_address1() {
    hash_27_address1 =  (sc_lv<5>) (newIndex89_reg_74309.read());
}

void calcHash_rollingHash::thread_hash_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_27_ce0 = ap_const_logic_1;
    } else {
        hash_27_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read()))) {
        hash_27_ce1 = ap_const_logic_1;
    } else {
        hash_27_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_27_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read())))) {
        hash_27_we1 = ap_const_logic_1;
    } else {
        hash_27_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_28_address0 =  (sc_lv<5>) (newIndex647_fu_58626_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_28_address0 =  (sc_lv<5>) (newIndex2991629917_fu_50506_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_28_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_28_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_28_address1() {
    hash_28_address1 =  (sc_lv<5>) (newIndex93_reg_74335.read());
}

void calcHash_rollingHash::thread_hash_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_28_ce0 = ap_const_logic_1;
    } else {
        hash_28_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read()))) {
        hash_28_ce1 = ap_const_logic_1;
    } else {
        hash_28_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_28_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read())))) {
        hash_28_we1 = ap_const_logic_1;
    } else {
        hash_28_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_29_address0 =  (sc_lv<5>) (newIndex649_fu_58655_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_29_address0 =  (sc_lv<5>) (newIndex2978529786_fu_50527_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_29_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_29_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_29_address1() {
    hash_29_address1 =  (sc_lv<5>) (newIndex97_reg_74350.read());
}

void calcHash_rollingHash::thread_hash_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_29_ce0 = ap_const_logic_1;
    } else {
        hash_29_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read()))) {
        hash_29_ce1 = ap_const_logic_1;
    } else {
        hash_29_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_29_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read())))) {
        hash_29_we1 = ap_const_logic_1;
    } else {
        hash_29_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_2_address0 =  (sc_lv<5>) (newIndex595_fu_57872_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_2_address0 =  (sc_lv<5>) (newIndex3332233323_fu_49960_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_2_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_2_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_2_address1() {
    hash_2_address1 =  (sc_lv<5>) (newIndex6698966990_reg_73802.read());
}

void calcHash_rollingHash::thread_hash_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_2_ce0 = ap_const_logic_1;
    } else {
        hash_2_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read()))) {
        hash_2_ce1 = ap_const_logic_1;
    } else {
        hash_2_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read())))) {
        hash_2_we1 = ap_const_logic_1;
    } else {
        hash_2_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_30_address0 =  (sc_lv<5>) (newIndex651_fu_58684_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_30_address0 =  (sc_lv<5>) (newIndex2965429655_fu_50548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_30_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_30_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_30_address1() {
    hash_30_address1 =  (sc_lv<5>) (newIndex101_reg_74376.read());
}

void calcHash_rollingHash::thread_hash_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_30_ce0 = ap_const_logic_1;
    } else {
        hash_30_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read()))) {
        hash_30_ce1 = ap_const_logic_1;
    } else {
        hash_30_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_30_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read())))) {
        hash_30_we1 = ap_const_logic_1;
    } else {
        hash_30_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_31_address0 =  (sc_lv<5>) (newIndex653_fu_58713_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_31_address0 =  (sc_lv<5>) (newIndex2952329524_fu_50569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_31_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_31_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_31_address1() {
    hash_31_address1 =  (sc_lv<5>) (newIndex105_reg_74391.read());
}

void calcHash_rollingHash::thread_hash_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_31_ce0 = ap_const_logic_1;
    } else {
        hash_31_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read()))) {
        hash_31_ce1 = ap_const_logic_1;
    } else {
        hash_31_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_31_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read())))) {
        hash_31_we1 = ap_const_logic_1;
    } else {
        hash_31_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_32_address0 =  (sc_lv<5>) (newIndex655_fu_58742_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_32_address0 =  (sc_lv<5>) (newIndex2939229393_fu_50590_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_32_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_32_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_32_address1() {
    hash_32_address1 =  (sc_lv<5>) (newIndex109_reg_74417.read());
}

void calcHash_rollingHash::thread_hash_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_32_ce0 = ap_const_logic_1;
    } else {
        hash_32_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read()))) {
        hash_32_ce1 = ap_const_logic_1;
    } else {
        hash_32_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_32_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read())))) {
        hash_32_we1 = ap_const_logic_1;
    } else {
        hash_32_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_33_address0 =  (sc_lv<5>) (newIndex657_fu_58771_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_33_address0 =  (sc_lv<5>) (newIndex2926129262_fu_50611_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_33_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_33_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_33_address1() {
    hash_33_address1 =  (sc_lv<5>) (newIndex113_reg_74432.read());
}

void calcHash_rollingHash::thread_hash_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_33_ce0 = ap_const_logic_1;
    } else {
        hash_33_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read()))) {
        hash_33_ce1 = ap_const_logic_1;
    } else {
        hash_33_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_33_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read())))) {
        hash_33_we1 = ap_const_logic_1;
    } else {
        hash_33_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_34_address0 =  (sc_lv<5>) (newIndex659_fu_58800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_34_address0 =  (sc_lv<5>) (newIndex2913029131_fu_50632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_34_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_34_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_34_address1() {
    hash_34_address1 =  (sc_lv<5>) (newIndex117_reg_74458.read());
}

void calcHash_rollingHash::thread_hash_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_34_ce0 = ap_const_logic_1;
    } else {
        hash_34_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read()))) {
        hash_34_ce1 = ap_const_logic_1;
    } else {
        hash_34_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_34_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read())))) {
        hash_34_we1 = ap_const_logic_1;
    } else {
        hash_34_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_35_address0 =  (sc_lv<5>) (newIndex661_fu_58829_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_35_address0 =  (sc_lv<5>) (newIndex2899929000_fu_50653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_35_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_35_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_35_address1() {
    hash_35_address1 =  (sc_lv<5>) (newIndex121_reg_74473.read());
}

void calcHash_rollingHash::thread_hash_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_35_ce0 = ap_const_logic_1;
    } else {
        hash_35_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read()))) {
        hash_35_ce1 = ap_const_logic_1;
    } else {
        hash_35_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_35_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read())))) {
        hash_35_we1 = ap_const_logic_1;
    } else {
        hash_35_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_36_address0 =  (sc_lv<5>) (newIndex663_fu_58858_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_36_address0 =  (sc_lv<5>) (newIndex2886828869_fu_50674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_36_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_36_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_36_address1() {
    hash_36_address1 =  (sc_lv<5>) (newIndex125_reg_74499.read());
}

void calcHash_rollingHash::thread_hash_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_36_ce0 = ap_const_logic_1;
    } else {
        hash_36_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read()))) {
        hash_36_ce1 = ap_const_logic_1;
    } else {
        hash_36_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_36_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read())))) {
        hash_36_we1 = ap_const_logic_1;
    } else {
        hash_36_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_37_address0 =  (sc_lv<5>) (newIndex665_fu_58887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_37_address0 =  (sc_lv<5>) (newIndex2873728738_fu_50695_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_37_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_37_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_37_address1() {
    hash_37_address1 =  (sc_lv<5>) (newIndex129_reg_74514.read());
}

void calcHash_rollingHash::thread_hash_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_37_ce0 = ap_const_logic_1;
    } else {
        hash_37_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read()))) {
        hash_37_ce1 = ap_const_logic_1;
    } else {
        hash_37_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_37_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read())))) {
        hash_37_we1 = ap_const_logic_1;
    } else {
        hash_37_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_38_address0 =  (sc_lv<5>) (newIndex667_fu_58916_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_38_address0 =  (sc_lv<5>) (newIndex2860628607_fu_50716_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_38_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_38_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_38_address1() {
    hash_38_address1 =  (sc_lv<5>) (newIndex133_reg_74540.read());
}

void calcHash_rollingHash::thread_hash_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_38_ce0 = ap_const_logic_1;
    } else {
        hash_38_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read()))) {
        hash_38_ce1 = ap_const_logic_1;
    } else {
        hash_38_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_38_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read())))) {
        hash_38_we1 = ap_const_logic_1;
    } else {
        hash_38_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_39_address0 =  (sc_lv<5>) (newIndex669_fu_58945_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_39_address0 =  (sc_lv<5>) (newIndex2847528476_fu_50737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_39_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_39_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_39_address1() {
    hash_39_address1 =  (sc_lv<5>) (newIndex137_reg_74555.read());
}

void calcHash_rollingHash::thread_hash_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_39_ce0 = ap_const_logic_1;
    } else {
        hash_39_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read()))) {
        hash_39_ce1 = ap_const_logic_1;
    } else {
        hash_39_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_39_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read())))) {
        hash_39_we1 = ap_const_logic_1;
    } else {
        hash_39_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_3_address0 =  (sc_lv<5>) (newIndex597_fu_57901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_3_address0 =  (sc_lv<5>) (newIndex3319133192_fu_49981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_3_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_3_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_3_address1() {
    hash_3_address1 =  (sc_lv<5>) (newIndex6685866859_reg_73817.read());
}

void calcHash_rollingHash::thread_hash_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_3_ce0 = ap_const_logic_1;
    } else {
        hash_3_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read()))) {
        hash_3_ce1 = ap_const_logic_1;
    } else {
        hash_3_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read())))) {
        hash_3_we1 = ap_const_logic_1;
    } else {
        hash_3_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_40_address0 =  (sc_lv<5>) (newIndex671_fu_58974_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_40_address0 =  (sc_lv<5>) (newIndex2834428345_fu_50758_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_40_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_40_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_40_address1() {
    hash_40_address1 =  (sc_lv<5>) (newIndex141_reg_74581.read());
}

void calcHash_rollingHash::thread_hash_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_40_ce0 = ap_const_logic_1;
    } else {
        hash_40_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read()))) {
        hash_40_ce1 = ap_const_logic_1;
    } else {
        hash_40_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_40_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read())))) {
        hash_40_we1 = ap_const_logic_1;
    } else {
        hash_40_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_41_address0 =  (sc_lv<5>) (newIndex673_fu_59003_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_41_address0 =  (sc_lv<5>) (newIndex2821328214_fu_50779_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_41_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_41_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_41_address1() {
    hash_41_address1 =  (sc_lv<5>) (newIndex145_reg_74596.read());
}

void calcHash_rollingHash::thread_hash_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_41_ce0 = ap_const_logic_1;
    } else {
        hash_41_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read()))) {
        hash_41_ce1 = ap_const_logic_1;
    } else {
        hash_41_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_41_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read())))) {
        hash_41_we1 = ap_const_logic_1;
    } else {
        hash_41_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_42_address0 =  (sc_lv<5>) (newIndex675_fu_59032_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_42_address0 =  (sc_lv<5>) (newIndex2808228083_fu_50800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_42_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_42_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_42_address1() {
    hash_42_address1 =  (sc_lv<5>) (newIndex149_reg_74622.read());
}

void calcHash_rollingHash::thread_hash_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_42_ce0 = ap_const_logic_1;
    } else {
        hash_42_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read()))) {
        hash_42_ce1 = ap_const_logic_1;
    } else {
        hash_42_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_42_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read())))) {
        hash_42_we1 = ap_const_logic_1;
    } else {
        hash_42_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_43_address0 =  (sc_lv<5>) (newIndex677_fu_59061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_43_address0 =  (sc_lv<5>) (newIndex2795127952_fu_50821_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_43_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_43_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_43_address1() {
    hash_43_address1 =  (sc_lv<5>) (newIndex153_reg_74637.read());
}

void calcHash_rollingHash::thread_hash_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_43_ce0 = ap_const_logic_1;
    } else {
        hash_43_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read()))) {
        hash_43_ce1 = ap_const_logic_1;
    } else {
        hash_43_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_43_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read())))) {
        hash_43_we1 = ap_const_logic_1;
    } else {
        hash_43_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_44_address0 =  (sc_lv<5>) (newIndex679_fu_59090_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_44_address0 =  (sc_lv<5>) (newIndex2782027821_fu_50842_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_44_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_44_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_44_address1() {
    hash_44_address1 =  (sc_lv<5>) (newIndex157_reg_74663.read());
}

void calcHash_rollingHash::thread_hash_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_44_ce0 = ap_const_logic_1;
    } else {
        hash_44_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read()))) {
        hash_44_ce1 = ap_const_logic_1;
    } else {
        hash_44_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_44_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read())))) {
        hash_44_we1 = ap_const_logic_1;
    } else {
        hash_44_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_45_address0 =  (sc_lv<5>) (newIndex681_fu_59119_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_45_address0 =  (sc_lv<5>) (newIndex2768927690_fu_50863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_45_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_45_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_45_address1() {
    hash_45_address1 =  (sc_lv<5>) (newIndex161_reg_74678.read());
}

void calcHash_rollingHash::thread_hash_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_45_ce0 = ap_const_logic_1;
    } else {
        hash_45_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read()))) {
        hash_45_ce1 = ap_const_logic_1;
    } else {
        hash_45_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_45_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read())))) {
        hash_45_we1 = ap_const_logic_1;
    } else {
        hash_45_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_46_address0 =  (sc_lv<5>) (newIndex683_fu_59148_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_46_address0 =  (sc_lv<5>) (newIndex2755827559_fu_50884_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_46_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_46_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_46_address1() {
    hash_46_address1 =  (sc_lv<5>) (newIndex165_reg_74704.read());
}

void calcHash_rollingHash::thread_hash_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_46_ce0 = ap_const_logic_1;
    } else {
        hash_46_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read()))) {
        hash_46_ce1 = ap_const_logic_1;
    } else {
        hash_46_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_46_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read())))) {
        hash_46_we1 = ap_const_logic_1;
    } else {
        hash_46_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_47_address0 =  (sc_lv<5>) (newIndex685_fu_59177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_47_address0 =  (sc_lv<5>) (newIndex2742727428_fu_50905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_47_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_47_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_47_address1() {
    hash_47_address1 =  (sc_lv<5>) (newIndex169_reg_74719.read());
}

void calcHash_rollingHash::thread_hash_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_47_ce0 = ap_const_logic_1;
    } else {
        hash_47_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read()))) {
        hash_47_ce1 = ap_const_logic_1;
    } else {
        hash_47_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_47_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read())))) {
        hash_47_we1 = ap_const_logic_1;
    } else {
        hash_47_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_48_address0 =  (sc_lv<5>) (newIndex687_fu_59206_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_48_address0 =  (sc_lv<5>) (newIndex2729627297_fu_50926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_48_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_48_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_48_address1() {
    hash_48_address1 =  (sc_lv<5>) (newIndex173_reg_74745.read());
}

void calcHash_rollingHash::thread_hash_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_48_ce0 = ap_const_logic_1;
    } else {
        hash_48_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read()))) {
        hash_48_ce1 = ap_const_logic_1;
    } else {
        hash_48_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_48_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read())))) {
        hash_48_we1 = ap_const_logic_1;
    } else {
        hash_48_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_49_address0 =  (sc_lv<5>) (newIndex689_fu_59235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_49_address0 =  (sc_lv<5>) (newIndex2716527166_fu_50947_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_49_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_49_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_49_address1() {
    hash_49_address1 =  (sc_lv<5>) (newIndex177_reg_74760.read());
}

void calcHash_rollingHash::thread_hash_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_49_ce0 = ap_const_logic_1;
    } else {
        hash_49_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read()))) {
        hash_49_ce1 = ap_const_logic_1;
    } else {
        hash_49_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_49_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read())))) {
        hash_49_we1 = ap_const_logic_1;
    } else {
        hash_49_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_4_address0 =  (sc_lv<5>) (newIndex599_fu_57930_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_4_address0 =  (sc_lv<5>) (newIndex3306033061_fu_50002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_4_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_4_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_4_address1() {
    hash_4_address1 =  (sc_lv<5>) (newIndex6672766728_reg_73843.read());
}

void calcHash_rollingHash::thread_hash_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_4_ce0 = ap_const_logic_1;
    } else {
        hash_4_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read()))) {
        hash_4_ce1 = ap_const_logic_1;
    } else {
        hash_4_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read())))) {
        hash_4_we1 = ap_const_logic_1;
    } else {
        hash_4_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_50_address0 =  (sc_lv<5>) (newIndex691_fu_59264_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_50_address0 =  (sc_lv<5>) (newIndex2703427035_fu_50968_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_50_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_50_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_50_address1() {
    hash_50_address1 =  (sc_lv<5>) (newIndex182_reg_74786.read());
}

void calcHash_rollingHash::thread_hash_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_50_ce0 = ap_const_logic_1;
    } else {
        hash_50_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read()))) {
        hash_50_ce1 = ap_const_logic_1;
    } else {
        hash_50_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_50_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read())))) {
        hash_50_we1 = ap_const_logic_1;
    } else {
        hash_50_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_51_address0 =  (sc_lv<5>) (newIndex693_fu_59293_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_51_address0 =  (sc_lv<5>) (newIndex2690326904_fu_50989_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_51_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_51_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_51_address1() {
    hash_51_address1 =  (sc_lv<5>) (newIndex186_reg_74801.read());
}

void calcHash_rollingHash::thread_hash_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_51_ce0 = ap_const_logic_1;
    } else {
        hash_51_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read()))) {
        hash_51_ce1 = ap_const_logic_1;
    } else {
        hash_51_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_51_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read())))) {
        hash_51_we1 = ap_const_logic_1;
    } else {
        hash_51_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_52_address0 =  (sc_lv<5>) (newIndex695_fu_59322_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_52_address0 =  (sc_lv<5>) (newIndex2677226773_fu_51010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_52_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_52_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_52_address1() {
    hash_52_address1 =  (sc_lv<5>) (newIndex190_reg_74827.read());
}

void calcHash_rollingHash::thread_hash_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_52_ce0 = ap_const_logic_1;
    } else {
        hash_52_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read()))) {
        hash_52_ce1 = ap_const_logic_1;
    } else {
        hash_52_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_52_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read())))) {
        hash_52_we1 = ap_const_logic_1;
    } else {
        hash_52_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_53_address0 =  (sc_lv<5>) (newIndex697_fu_59351_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_53_address0 =  (sc_lv<5>) (newIndex2664126642_fu_51031_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_53_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_53_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_53_address1() {
    hash_53_address1 =  (sc_lv<5>) (newIndex194_reg_74842.read());
}

void calcHash_rollingHash::thread_hash_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_53_ce0 = ap_const_logic_1;
    } else {
        hash_53_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read()))) {
        hash_53_ce1 = ap_const_logic_1;
    } else {
        hash_53_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_53_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read())))) {
        hash_53_we1 = ap_const_logic_1;
    } else {
        hash_53_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_54_address0 =  (sc_lv<5>) (newIndex699_fu_59380_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_54_address0 =  (sc_lv<5>) (newIndex2651026511_fu_51052_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_54_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_54_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_54_address1() {
    hash_54_address1 =  (sc_lv<5>) (newIndex197_reg_74868.read());
}

void calcHash_rollingHash::thread_hash_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_54_ce0 = ap_const_logic_1;
    } else {
        hash_54_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read()))) {
        hash_54_ce1 = ap_const_logic_1;
    } else {
        hash_54_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_54_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read())))) {
        hash_54_we1 = ap_const_logic_1;
    } else {
        hash_54_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_55_address0 =  (sc_lv<5>) (newIndex701_fu_59409_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_55_address0 =  (sc_lv<5>) (newIndex2637926380_fu_51073_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_55_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_55_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_55_address1() {
    hash_55_address1 =  (sc_lv<5>) (newIndex200_reg_74883.read());
}

void calcHash_rollingHash::thread_hash_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_55_ce0 = ap_const_logic_1;
    } else {
        hash_55_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read()))) {
        hash_55_ce1 = ap_const_logic_1;
    } else {
        hash_55_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_55_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read())))) {
        hash_55_we1 = ap_const_logic_1;
    } else {
        hash_55_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_56_address0 =  (sc_lv<5>) (newIndex704_fu_59438_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_56_address0 =  (sc_lv<5>) (newIndex2624826249_fu_51094_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_56_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_56_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_56_address1() {
    hash_56_address1 =  (sc_lv<5>) (newIndex203_reg_74909.read());
}

void calcHash_rollingHash::thread_hash_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_56_ce0 = ap_const_logic_1;
    } else {
        hash_56_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read()))) {
        hash_56_ce1 = ap_const_logic_1;
    } else {
        hash_56_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_56_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read())))) {
        hash_56_we1 = ap_const_logic_1;
    } else {
        hash_56_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_57_address0 =  (sc_lv<5>) (newIndex706_fu_59467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_57_address0 =  (sc_lv<5>) (newIndex2611726118_fu_51115_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_57_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_57_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_57_address1() {
    hash_57_address1 =  (sc_lv<5>) (newIndex206_reg_74924.read());
}

void calcHash_rollingHash::thread_hash_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_57_ce0 = ap_const_logic_1;
    } else {
        hash_57_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read()))) {
        hash_57_ce1 = ap_const_logic_1;
    } else {
        hash_57_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_57_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read())))) {
        hash_57_we1 = ap_const_logic_1;
    } else {
        hash_57_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_58_address0 =  (sc_lv<5>) (newIndex708_fu_59496_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_58_address0 =  (sc_lv<5>) (newIndex2598625987_fu_51136_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_58_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_58_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_58_address1() {
    hash_58_address1 =  (sc_lv<5>) (newIndex209_reg_74950.read());
}

void calcHash_rollingHash::thread_hash_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_58_ce0 = ap_const_logic_1;
    } else {
        hash_58_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read()))) {
        hash_58_ce1 = ap_const_logic_1;
    } else {
        hash_58_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_58_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read())))) {
        hash_58_we1 = ap_const_logic_1;
    } else {
        hash_58_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_59_address0 =  (sc_lv<5>) (newIndex710_fu_59525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_59_address0 =  (sc_lv<5>) (newIndex2585525856_fu_51157_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_59_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_59_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_59_address1() {
    hash_59_address1 =  (sc_lv<5>) (newIndex212_reg_74965.read());
}

void calcHash_rollingHash::thread_hash_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_59_ce0 = ap_const_logic_1;
    } else {
        hash_59_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read()))) {
        hash_59_ce1 = ap_const_logic_1;
    } else {
        hash_59_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_59_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read())))) {
        hash_59_we1 = ap_const_logic_1;
    } else {
        hash_59_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_5_address0 =  (sc_lv<5>) (newIndex601_fu_57959_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_5_address0 =  (sc_lv<5>) (newIndex3292932930_fu_50023_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_5_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_5_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_5_address1() {
    hash_5_address1 =  (sc_lv<5>) (newIndex6659666597_reg_73858.read());
}

void calcHash_rollingHash::thread_hash_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_5_ce0 = ap_const_logic_1;
    } else {
        hash_5_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read()))) {
        hash_5_ce1 = ap_const_logic_1;
    } else {
        hash_5_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read())))) {
        hash_5_we1 = ap_const_logic_1;
    } else {
        hash_5_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_60_address0 =  (sc_lv<5>) (newIndex712_fu_59554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_60_address0 =  (sc_lv<5>) (newIndex2572425725_fu_51178_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_60_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_60_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_60_address1() {
    hash_60_address1 =  (sc_lv<5>) (newIndex215_reg_74991.read());
}

void calcHash_rollingHash::thread_hash_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_60_ce0 = ap_const_logic_1;
    } else {
        hash_60_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read()))) {
        hash_60_ce1 = ap_const_logic_1;
    } else {
        hash_60_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_60_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read())))) {
        hash_60_we1 = ap_const_logic_1;
    } else {
        hash_60_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_61_address0 =  (sc_lv<5>) (newIndex714_fu_59583_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_61_address0 =  (sc_lv<5>) (newIndex2559325594_fu_51199_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_61_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_61_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_61_address1() {
    hash_61_address1 =  (sc_lv<5>) (newIndex218_reg_75006.read());
}

void calcHash_rollingHash::thread_hash_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_61_ce0 = ap_const_logic_1;
    } else {
        hash_61_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read()))) {
        hash_61_ce1 = ap_const_logic_1;
    } else {
        hash_61_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_61_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read())))) {
        hash_61_we1 = ap_const_logic_1;
    } else {
        hash_61_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_62_address0 =  (sc_lv<5>) (newIndex716_fu_59612_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_62_address0 =  (sc_lv<5>) (newIndex2546225463_fu_51220_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_62_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_62_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_62_address1() {
    hash_62_address1 =  (sc_lv<5>) (newIndex221_reg_75032.read());
}

void calcHash_rollingHash::thread_hash_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_62_ce0 = ap_const_logic_1;
    } else {
        hash_62_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read()))) {
        hash_62_ce1 = ap_const_logic_1;
    } else {
        hash_62_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_62_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read())))) {
        hash_62_we1 = ap_const_logic_1;
    } else {
        hash_62_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_63_address0 =  (sc_lv<5>) (newIndex718_fu_59641_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_63_address0 =  (sc_lv<5>) (newIndex2533125332_fu_51241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_63_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_63_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_63_address1() {
    hash_63_address1 =  (sc_lv<5>) (newIndex224_reg_75047.read());
}

}

