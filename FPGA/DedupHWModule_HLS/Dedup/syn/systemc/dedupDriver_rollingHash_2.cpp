#include "dedupDriver_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dedupDriver_rollingHash::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (ap_sig_2945.read()) {
        if (ap_sig_3322.read()) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_126_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_124_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_122_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_79)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_120_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_77)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_118_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_75)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_116_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_73)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_114_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_71)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_112_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_110_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_108_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_106_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_69)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_104_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_67)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_102_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_65)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_100_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_63)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_98_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_61)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_96_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_94_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_92_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_90_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_59)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_88_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_57)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_86_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_55)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_84_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_53)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_82_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_51)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_80_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_78_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_76_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_74_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_49)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_72_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_47)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_70_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_45)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_68_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_43)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_66_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_41)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_64_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_62_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_60_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_58_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_39)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_56_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_37)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_54_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_35)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_52_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_33)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_50_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_31)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_48_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_46_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_44_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_42_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_29)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_40_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_27)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_38_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_25)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_36_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_23)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_34_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_21)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_32_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_30_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_28_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_26_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_19)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_24_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_17)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_22_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_15)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_20_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_13)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_18_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_11)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_16_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_F)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_14_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_D)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_12_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_B)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_10_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_9)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_8_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_6_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_4_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_2_q0.read();
        } else if (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = str_0_q0.read();
        } else if (esl_seteq<1,1,1>(ap_true, ap_true)) {
            ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2 = ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it1.read();
        }
    }
    if (ap_sig_2945.read()) {
        if (ap_sig_3894.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_127_q0.read();
        } else if (ap_sig_3705.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_125_q0.read();
        } else if (ap_sig_3708.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_123_q0.read();
        } else if (ap_sig_3711.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_121_q0.read();
        } else if (ap_sig_3714.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_119_q0.read();
        } else if (ap_sig_3717.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_117_q0.read();
        } else if (ap_sig_3720.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_115_q0.read();
        } else if (ap_sig_3723.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_113_q0.read();
        } else if (ap_sig_3726.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_111_q0.read();
        } else if (ap_sig_3729.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_109_q0.read();
        } else if (ap_sig_3732.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_107_q0.read();
        } else if (ap_sig_3735.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_105_q0.read();
        } else if (ap_sig_3738.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_103_q0.read();
        } else if (ap_sig_3741.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_101_q0.read();
        } else if (ap_sig_3744.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_99_q0.read();
        } else if (ap_sig_3747.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_97_q0.read();
        } else if (ap_sig_3750.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_95_q0.read();
        } else if (ap_sig_3753.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_93_q0.read();
        } else if (ap_sig_3756.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_91_q0.read();
        } else if (ap_sig_3759.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_89_q0.read();
        } else if (ap_sig_3762.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_87_q0.read();
        } else if (ap_sig_3765.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_85_q0.read();
        } else if (ap_sig_3768.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_83_q0.read();
        } else if (ap_sig_3771.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_81_q0.read();
        } else if (ap_sig_3774.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_79_q0.read();
        } else if (ap_sig_3777.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_77_q0.read();
        } else if (ap_sig_3780.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_75_q0.read();
        } else if (ap_sig_3783.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_73_q0.read();
        } else if (ap_sig_3786.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_71_q0.read();
        } else if (ap_sig_3789.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_69_q0.read();
        } else if (ap_sig_3792.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_67_q0.read();
        } else if (ap_sig_3795.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_65_q0.read();
        } else if (ap_sig_3798.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_63_q0.read();
        } else if (ap_sig_3801.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_61_q0.read();
        } else if (ap_sig_3804.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_59_q0.read();
        } else if (ap_sig_3807.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_57_q0.read();
        } else if (ap_sig_3810.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_55_q0.read();
        } else if (ap_sig_3813.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_53_q0.read();
        } else if (ap_sig_3816.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_51_q0.read();
        } else if (ap_sig_3819.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_49_q0.read();
        } else if (ap_sig_3822.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_47_q0.read();
        } else if (ap_sig_3825.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_45_q0.read();
        } else if (ap_sig_3828.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_43_q0.read();
        } else if (ap_sig_3831.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_41_q0.read();
        } else if (ap_sig_3834.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_39_q0.read();
        } else if (ap_sig_3837.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_37_q0.read();
        } else if (ap_sig_3840.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_35_q0.read();
        } else if (ap_sig_3843.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_33_q0.read();
        } else if (ap_sig_3846.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_31_q0.read();
        } else if (ap_sig_3849.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_29_q0.read();
        } else if (ap_sig_3852.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_27_q0.read();
        } else if (ap_sig_3855.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_25_q0.read();
        } else if (ap_sig_3858.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_23_q0.read();
        } else if (ap_sig_3861.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_21_q0.read();
        } else if (ap_sig_3864.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_19_q0.read();
        } else if (ap_sig_3867.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_17_q0.read();
        } else if (ap_sig_3870.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_15_q0.read();
        } else if (ap_sig_3873.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_13_q0.read();
        } else if (ap_sig_3876.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_11_q0.read();
        } else if (ap_sig_3879.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_9_q0.read();
        } else if (ap_sig_3882.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_7_q0.read();
        } else if (ap_sig_3885.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_5_q0.read();
        } else if (ap_sig_3888.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_3_q0.read();
        } else if (ap_sig_3891.read()) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = str_1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_true, ap_true)) {
            ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2 = ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it1.read();
        }
    }
    if (ap_sig_2945.read()) {
        if (ap_sig_3701.read()) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_126_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_7C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_124_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_7A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_122_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_78)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_120_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_76)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_118_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_74)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_116_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_72)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_114_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_70)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_112_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_110_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_108_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_106_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_68)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_104_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_66)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_102_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_64)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_100_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_62)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_98_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_60)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_96_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_5E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_94_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_5C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_92_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_5A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_90_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_58)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_88_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_56)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_86_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_54)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_84_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_52)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_82_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_50)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_80_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_78_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_76_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_74_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_48)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_72_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_46)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_70_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_44)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_68_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_42)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_66_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_40)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_64_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_3E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_62_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_3C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_60_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_3A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_58_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_38)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_56_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_36)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_54_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_34)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_52_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_32)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_50_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_30)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_48_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_46_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_44_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_42_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_28)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_40_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_26)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_38_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_24)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_36_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_22)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_34_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_20)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_32_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_1E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_30_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_1C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_28_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_1A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_26_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_18)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_24_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_16)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_22_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_14)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_20_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_12)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_18_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_10)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_16_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_E)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_14_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_C)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_12_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_A)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_10_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_8)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_8_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_6_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_4_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_2_q1.read();
        } else if (esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_0)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = str_0_q1.read();
        } else if (esl_seteq<1,1,1>(ap_true, ap_true)) {
            ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2 = ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it1.read();
        }
    }
    if (ap_sig_2945.read()) {
        if (ap_sig_3894.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_127_q1.read();
        } else if (ap_sig_3705.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_125_q1.read();
        } else if (ap_sig_3708.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_123_q1.read();
        } else if (ap_sig_3711.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_121_q1.read();
        } else if (ap_sig_3714.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_119_q1.read();
        } else if (ap_sig_3717.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_117_q1.read();
        } else if (ap_sig_3720.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_115_q1.read();
        } else if (ap_sig_3723.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_113_q1.read();
        } else if (ap_sig_3726.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_111_q1.read();
        } else if (ap_sig_3729.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_109_q1.read();
        } else if (ap_sig_3732.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_107_q1.read();
        } else if (ap_sig_3735.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_105_q1.read();
        } else if (ap_sig_3738.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_103_q1.read();
        } else if (ap_sig_3741.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_101_q1.read();
        } else if (ap_sig_3744.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_99_q1.read();
        } else if (ap_sig_3747.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_97_q1.read();
        } else if (ap_sig_3750.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_95_q1.read();
        } else if (ap_sig_3753.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_93_q1.read();
        } else if (ap_sig_3756.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_91_q1.read();
        } else if (ap_sig_3759.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_89_q1.read();
        } else if (ap_sig_3762.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_87_q1.read();
        } else if (ap_sig_3765.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_85_q1.read();
        } else if (ap_sig_3768.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_83_q1.read();
        } else if (ap_sig_3771.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_81_q1.read();
        } else if (ap_sig_3774.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_79_q1.read();
        } else if (ap_sig_3777.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_77_q1.read();
        } else if (ap_sig_3780.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_75_q1.read();
        } else if (ap_sig_3783.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_73_q1.read();
        } else if (ap_sig_3786.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_71_q1.read();
        } else if (ap_sig_3789.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_69_q1.read();
        } else if (ap_sig_3792.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_67_q1.read();
        } else if (ap_sig_3795.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_65_q1.read();
        } else if (ap_sig_3798.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_63_q1.read();
        } else if (ap_sig_3801.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_61_q1.read();
        } else if (ap_sig_3804.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_59_q1.read();
        } else if (ap_sig_3807.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_57_q1.read();
        } else if (ap_sig_3810.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_55_q1.read();
        } else if (ap_sig_3813.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_53_q1.read();
        } else if (ap_sig_3816.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_51_q1.read();
        } else if (ap_sig_3819.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_49_q1.read();
        } else if (ap_sig_3822.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_47_q1.read();
        } else if (ap_sig_3825.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_45_q1.read();
        } else if (ap_sig_3828.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_43_q1.read();
        } else if (ap_sig_3831.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_41_q1.read();
        } else if (ap_sig_3834.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_39_q1.read();
        } else if (ap_sig_3837.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_37_q1.read();
        } else if (ap_sig_3840.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_35_q1.read();
        } else if (ap_sig_3843.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_33_q1.read();
        } else if (ap_sig_3846.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_31_q1.read();
        } else if (ap_sig_3849.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_29_q1.read();
        } else if (ap_sig_3852.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_27_q1.read();
        } else if (ap_sig_3855.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_25_q1.read();
        } else if (ap_sig_3858.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_23_q1.read();
        } else if (ap_sig_3861.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_21_q1.read();
        } else if (ap_sig_3864.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_19_q1.read();
        } else if (ap_sig_3867.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_17_q1.read();
        } else if (ap_sig_3870.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_15_q1.read();
        } else if (ap_sig_3873.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_13_q1.read();
        } else if (ap_sig_3876.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_11_q1.read();
        } else if (ap_sig_3879.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_9_q1.read();
        } else if (ap_sig_3882.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_7_q1.read();
        } else if (ap_sig_3885.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_5_q1.read();
        } else if (ap_sig_3888.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_3_q1.read();
        } else if (ap_sig_3891.read()) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = str_1_q1.read();
        } else if (esl_seteq<1,1,1>(ap_true, ap_true)) {
            ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2 = ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !esl_seteq<1,1,1>(exitcond1_fu_6913_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             esl_seteq<1,1,1>(exitcond1_fu_6913_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                     !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                     !esl_seteq<1,1,1>(exitcond1_fu_6913_p2.read(), ap_const_lv1_0)))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp1_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_fu_7607_p2.read()))) {
            ap_reg_ppiten_pp1_it0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
            ap_reg_ppiten_pp1_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp1_it1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read())) {
            ap_reg_ppiten_pp1_it1 = ap_reg_ppiten_pp1_it0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
            ap_reg_ppiten_pp1_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp1_it2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_true, ap_true)) {
            ap_reg_ppiten_pp1_it2 = ap_reg_ppiten_pp1_it1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
            ap_reg_ppiten_pp1_it2 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp1_it3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read())) {
            ap_reg_ppiten_pp1_it3 = ap_reg_ppiten_pp1_it2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read()) || 
                    !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()))) {
            ap_reg_ppiten_pp1_it3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_6913_p2.read(), ap_const_lv1_0))) {
        i_reg_6338 = i_1_fu_6919_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        i_reg_6338 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_fu_7607_p2.read()))) {
        i_s_reg_6361 = i_3_1_fu_7697_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
        i_s_reg_6361 = ap_const_lv32_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_7888.read(), ap_const_lv1_0))) {
        sum_reg_6349 = sum_1_fu_7336_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        sum_reg_6349 = ap_const_lv18_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()))) {
        sum_s_reg_6372 = sum_3_1_reg_11202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
        sum_s_reg_6372 = sum_cast_fu_7342_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read())) {
        ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter1 = exitcond_1_reg_9273.read();
        ap_reg_ppstg_i_3_reg_9268_pp1_iter1 = i_3_reg_9268.read();
        ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1 = newIndex7_reg_9200.read();
        ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1 = tmp_5_reg_8552.read();
        exitcond_1_reg_9273 = exitcond_1_fu_7607_p2.read();
        i_3_reg_9268 = i_3_fu_7601_p2.read();
        newIndex7_reg_9200 = newIndex7_fu_7533_p1.read();
        tmp_5_reg_8552 = tmp_5_fu_7353_p1.read();
        tmp_8_reg_8876 = tmp_8_fu_7441_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_true, ap_true)) {
        ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2 = ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter1.read();
        ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2 = ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
        exitcond1_reg_7888 = exitcond1_fu_6913_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter1.read())) {
        newIndex10_reg_11271 = ap_reg_ppstg_i_3_reg_9268_pp1_iter1.read().range(31, 7);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter1.read()))) {
        sum_3_1_reg_11202 = sum_3_1_fu_7801_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(exitcond1_fu_6913_p2.read(), ap_const_lv1_0))) {
        tmp_2_reg_7897 = tmp_2_fu_6925_p1.read();
    }
}

void dedupDriver_rollingHash::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !esl_seteq<1,1,1>(exitcond1_fu_6913_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st4_fsm_2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_pp1_stg0_fsm_3;
            break;
        case 8 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()))) {
                ap_NS_fsm = ap_ST_pp1_stg0_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_st9_fsm_4;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

