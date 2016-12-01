#include "dedupDriver_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dedupDriver_rollingHash::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_4.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_4.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it1() {
    ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it1 =  (sc_lv<8>) ("XXXXXXXX");
}

void dedupDriver_rollingHash::thread_ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it1() {
    ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it1 =  (sc_lv<8>) ("XXXXXXXX");
}

void dedupDriver_rollingHash::thread_ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it1() {
    ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it1 =  (sc_lv<8>) ("XXXXXXXX");
}

void dedupDriver_rollingHash::thread_ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it1() {
    ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it1 =  (sc_lv<8>) ("XXXXXXXX");
}

void dedupDriver_rollingHash::thread_ap_sig_2103() {
    ap_sig_2103 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void dedupDriver_rollingHash::thread_ap_sig_22() {
    ap_sig_22 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void dedupDriver_rollingHash::thread_ap_sig_2385() {
    ap_sig_2385 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void dedupDriver_rollingHash::thread_ap_sig_2394() {
    ap_sig_2394 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void dedupDriver_rollingHash::thread_ap_sig_2945() {
    ap_sig_2945 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3322() {
    ap_sig_3322 = (!esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_9) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_11) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_13) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_15) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_17) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_19) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_21) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_23) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_25) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_27) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_29) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_31) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_33) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_35) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_37) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_39) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_41) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_43) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_45) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_47) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_49) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_51) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_53) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_55) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_57) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_59) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_61) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_63) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_65) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_67) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_69) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_71) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_73) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_75) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_77) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_79) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7D));
}

void dedupDriver_rollingHash::thread_ap_sig_3701() {
    ap_sig_3701 = (!esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_0) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_8) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_10) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_12) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_14) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_16) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_18) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_1A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_1C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_1E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_20) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_22) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_24) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_26) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_28) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_2E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_30) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_32) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_34) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_36) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_38) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_3A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_3C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_3E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_40) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_42) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_44) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_46) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_48) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_4E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_50) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_52) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_54) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_56) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_58) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_5A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_5C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_5E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_60) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_62) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_64) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_66) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_68) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6C) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_6E) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_70) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_72) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_74) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_76) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_78) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_7A) && !esl_seteq<1,7,7>(tmp_8_reg_8876.read(), ap_const_lv7_7C));
}

void dedupDriver_rollingHash::thread_ap_sig_3705() {
    ap_sig_3705 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3708() {
    ap_sig_3708 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3711() {
    ap_sig_3711 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_79) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3714() {
    ap_sig_3714 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_77) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3717() {
    ap_sig_3717 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_75) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3720() {
    ap_sig_3720 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_73) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3723() {
    ap_sig_3723 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_71) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3726() {
    ap_sig_3726 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3729() {
    ap_sig_3729 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3732() {
    ap_sig_3732 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3735() {
    ap_sig_3735 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_69) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3738() {
    ap_sig_3738 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_67) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3741() {
    ap_sig_3741 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_65) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3744() {
    ap_sig_3744 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_63) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3747() {
    ap_sig_3747 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_61) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3750() {
    ap_sig_3750 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3753() {
    ap_sig_3753 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3756() {
    ap_sig_3756 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3759() {
    ap_sig_3759 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_59) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3762() {
    ap_sig_3762 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_57) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3765() {
    ap_sig_3765 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_55) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3768() {
    ap_sig_3768 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_53) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3771() {
    ap_sig_3771 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_51) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3774() {
    ap_sig_3774 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3777() {
    ap_sig_3777 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3780() {
    ap_sig_3780 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3783() {
    ap_sig_3783 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_49) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3786() {
    ap_sig_3786 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_47) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3789() {
    ap_sig_3789 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_45) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3792() {
    ap_sig_3792 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_43) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3795() {
    ap_sig_3795 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_41) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3798() {
    ap_sig_3798 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3801() {
    ap_sig_3801 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3804() {
    ap_sig_3804 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3807() {
    ap_sig_3807 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_39) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3810() {
    ap_sig_3810 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_37) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3813() {
    ap_sig_3813 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_35) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3816() {
    ap_sig_3816 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_33) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3819() {
    ap_sig_3819 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_31) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3822() {
    ap_sig_3822 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3825() {
    ap_sig_3825 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3828() {
    ap_sig_3828 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3831() {
    ap_sig_3831 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_29) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3834() {
    ap_sig_3834 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_27) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3837() {
    ap_sig_3837 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_25) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3840() {
    ap_sig_3840 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_23) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3843() {
    ap_sig_3843 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_21) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3846() {
    ap_sig_3846 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3849() {
    ap_sig_3849 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3852() {
    ap_sig_3852 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3855() {
    ap_sig_3855 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_19) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3858() {
    ap_sig_3858 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_17) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3861() {
    ap_sig_3861 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_15) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3864() {
    ap_sig_3864 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_13) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3867() {
    ap_sig_3867 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_11) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3870() {
    ap_sig_3870 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_F) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3873() {
    ap_sig_3873 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3876() {
    ap_sig_3876 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_B) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3879() {
    ap_sig_3879 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_9) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3882() {
    ap_sig_3882 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3885() {
    ap_sig_3885 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3888() {
    ap_sig_3888 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3891() {
    ap_sig_3891 = (esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_3894() {
    ap_sig_3894 = (!esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_9) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_11) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_13) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_15) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_17) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_19) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_1F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_21) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_23) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_25) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_27) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_29) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_2F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_31) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_33) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_35) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_37) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_39) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_3F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_41) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_43) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_45) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_47) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_49) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_4F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_51) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_53) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_55) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_57) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_59) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_5F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_61) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_63) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_65) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_67) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_69) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6D) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_6F) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_71) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_73) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_75) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_77) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_79) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7B) && !esl_seteq<1,7,7>(tmp_5_reg_8552.read(), ap_const_lv7_7D) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_9273.read()));
}

void dedupDriver_rollingHash::thread_ap_sig_5080() {
    ap_sig_5080 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void dedupDriver_rollingHash::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_2103.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_sig_cseq_ST_pp1_stg0_fsm_3() {
    if (ap_sig_2394.read()) {
        ap_sig_cseq_ST_pp1_stg0_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp1_stg0_fsm_3 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_22.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_sig_cseq_ST_st4_fsm_2() {
    if (ap_sig_2385.read()) {
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_ap_sig_cseq_ST_st9_fsm_4() {
    if (ap_sig_5080.read()) {
        ap_sig_cseq_ST_st9_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st9_fsm_4 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_exitcond1_fu_6913_p2() {
    exitcond1_fu_6913_p2 = (!i_reg_6338.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_6338.read() == ap_const_lv11_400);
}

void dedupDriver_rollingHash::thread_exitcond_1_fu_7607_p2() {
    exitcond_1_fu_7607_p2 = (!i_3_fu_7601_p2.read().is_01() || !ap_const_lv32_1C00.is_01())? sc_lv<1>(): sc_lv<1>(i_3_fu_7601_p2.read() == ap_const_lv32_1C00);
}

void dedupDriver_rollingHash::thread_hash_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_0_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
        hash_0_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else {
        hash_0_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_hash_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()))) {
        hash_0_ce0 = ap_const_logic_1;
    } else {
        hash_0_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_0_d0 = sum_3_1_reg_11202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
        hash_0_d0 = sum_cast_fu_7342_p1.read();
    } else {
        hash_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dedupDriver_rollingHash::thread_hash_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_61) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_63) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_65) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_67) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_69) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_6B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_6D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_6F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_71) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_73) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_75) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_77) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_79) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_7B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_7D)))) {
        hash_0_we0 = ap_const_logic_1;
    } else {
        hash_0_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_100_address0() {
    hash_100_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_100_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_100_ce0 = ap_const_logic_1;
    } else {
        hash_100_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_100_d0() {
    hash_100_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_100_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_63)))) {
        hash_100_we0 = ap_const_logic_1;
    } else {
        hash_100_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_101_address0() {
    hash_101_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_101_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_101_ce0 = ap_const_logic_1;
    } else {
        hash_101_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_101_d0() {
    hash_101_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_101_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_65)))) {
        hash_101_we0 = ap_const_logic_1;
    } else {
        hash_101_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_102_address0() {
    hash_102_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_102_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_102_ce0 = ap_const_logic_1;
    } else {
        hash_102_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_102_d0() {
    hash_102_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_102_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_65)))) {
        hash_102_we0 = ap_const_logic_1;
    } else {
        hash_102_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_103_address0() {
    hash_103_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_103_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_103_ce0 = ap_const_logic_1;
    } else {
        hash_103_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_103_d0() {
    hash_103_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_103_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_67)))) {
        hash_103_we0 = ap_const_logic_1;
    } else {
        hash_103_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_104_address0() {
    hash_104_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_104_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_104_ce0 = ap_const_logic_1;
    } else {
        hash_104_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_104_d0() {
    hash_104_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_104_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_67)))) {
        hash_104_we0 = ap_const_logic_1;
    } else {
        hash_104_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_105_address0() {
    hash_105_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_105_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_105_ce0 = ap_const_logic_1;
    } else {
        hash_105_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_105_d0() {
    hash_105_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_105_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_69)))) {
        hash_105_we0 = ap_const_logic_1;
    } else {
        hash_105_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_106_address0() {
    hash_106_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_106_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_106_ce0 = ap_const_logic_1;
    } else {
        hash_106_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_106_d0() {
    hash_106_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_106_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_69)))) {
        hash_106_we0 = ap_const_logic_1;
    } else {
        hash_106_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_107_address0() {
    hash_107_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_107_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_107_ce0 = ap_const_logic_1;
    } else {
        hash_107_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_107_d0() {
    hash_107_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_107_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_6B)))) {
        hash_107_we0 = ap_const_logic_1;
    } else {
        hash_107_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_108_address0() {
    hash_108_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_108_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_108_ce0 = ap_const_logic_1;
    } else {
        hash_108_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_108_d0() {
    hash_108_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_108_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_6B)))) {
        hash_108_we0 = ap_const_logic_1;
    } else {
        hash_108_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_109_address0() {
    hash_109_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_109_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_109_ce0 = ap_const_logic_1;
    } else {
        hash_109_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_109_d0() {
    hash_109_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_109_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_6D)))) {
        hash_109_we0 = ap_const_logic_1;
    } else {
        hash_109_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_10_address0() {
    hash_10_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_10_ce0 = ap_const_logic_1;
    } else {
        hash_10_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_10_d0() {
    hash_10_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_9)))) {
        hash_10_we0 = ap_const_logic_1;
    } else {
        hash_10_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_110_address0() {
    hash_110_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_110_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_110_ce0 = ap_const_logic_1;
    } else {
        hash_110_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_110_d0() {
    hash_110_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_110_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_6D)))) {
        hash_110_we0 = ap_const_logic_1;
    } else {
        hash_110_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_111_address0() {
    hash_111_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_111_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_111_ce0 = ap_const_logic_1;
    } else {
        hash_111_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_111_d0() {
    hash_111_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_111_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_6F)))) {
        hash_111_we0 = ap_const_logic_1;
    } else {
        hash_111_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_112_address0() {
    hash_112_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_112_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_112_ce0 = ap_const_logic_1;
    } else {
        hash_112_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_112_d0() {
    hash_112_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_112_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_6F)))) {
        hash_112_we0 = ap_const_logic_1;
    } else {
        hash_112_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_113_address0() {
    hash_113_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_113_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_113_ce0 = ap_const_logic_1;
    } else {
        hash_113_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_113_d0() {
    hash_113_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_113_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_71)))) {
        hash_113_we0 = ap_const_logic_1;
    } else {
        hash_113_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_114_address0() {
    hash_114_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_114_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_114_ce0 = ap_const_logic_1;
    } else {
        hash_114_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_114_d0() {
    hash_114_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_114_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_71)))) {
        hash_114_we0 = ap_const_logic_1;
    } else {
        hash_114_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_115_address0() {
    hash_115_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_115_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_115_ce0 = ap_const_logic_1;
    } else {
        hash_115_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_115_d0() {
    hash_115_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_115_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_73)))) {
        hash_115_we0 = ap_const_logic_1;
    } else {
        hash_115_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_116_address0() {
    hash_116_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_116_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_116_ce0 = ap_const_logic_1;
    } else {
        hash_116_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_116_d0() {
    hash_116_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_116_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_73)))) {
        hash_116_we0 = ap_const_logic_1;
    } else {
        hash_116_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_117_address0() {
    hash_117_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_117_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_117_ce0 = ap_const_logic_1;
    } else {
        hash_117_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_117_d0() {
    hash_117_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_117_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_75)))) {
        hash_117_we0 = ap_const_logic_1;
    } else {
        hash_117_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_118_address0() {
    hash_118_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_118_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_118_ce0 = ap_const_logic_1;
    } else {
        hash_118_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_118_d0() {
    hash_118_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_118_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_75)))) {
        hash_118_we0 = ap_const_logic_1;
    } else {
        hash_118_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_119_address0() {
    hash_119_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_119_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_119_ce0 = ap_const_logic_1;
    } else {
        hash_119_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_119_d0() {
    hash_119_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_119_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_77)))) {
        hash_119_we0 = ap_const_logic_1;
    } else {
        hash_119_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_11_address0() {
    hash_11_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_11_ce0 = ap_const_logic_1;
    } else {
        hash_11_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_11_d0() {
    hash_11_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_B)))) {
        hash_11_we0 = ap_const_logic_1;
    } else {
        hash_11_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_120_address0() {
    hash_120_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_120_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_120_ce0 = ap_const_logic_1;
    } else {
        hash_120_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_120_d0() {
    hash_120_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_120_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_77)))) {
        hash_120_we0 = ap_const_logic_1;
    } else {
        hash_120_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_121_address0() {
    hash_121_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_121_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_121_ce0 = ap_const_logic_1;
    } else {
        hash_121_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_121_d0() {
    hash_121_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_121_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_79)))) {
        hash_121_we0 = ap_const_logic_1;
    } else {
        hash_121_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_122_address0() {
    hash_122_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_122_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_122_ce0 = ap_const_logic_1;
    } else {
        hash_122_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_122_d0() {
    hash_122_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_122_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_79)))) {
        hash_122_we0 = ap_const_logic_1;
    } else {
        hash_122_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_123_address0() {
    hash_123_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_123_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_123_ce0 = ap_const_logic_1;
    } else {
        hash_123_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_123_d0() {
    hash_123_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_123_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_7B)))) {
        hash_123_we0 = ap_const_logic_1;
    } else {
        hash_123_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_124_address0() {
    hash_124_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_124_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_124_ce0 = ap_const_logic_1;
    } else {
        hash_124_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_124_d0() {
    hash_124_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_124_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_7B)))) {
        hash_124_we0 = ap_const_logic_1;
    } else {
        hash_124_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_125_address0() {
    hash_125_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_125_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_125_ce0 = ap_const_logic_1;
    } else {
        hash_125_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_125_d0() {
    hash_125_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_125_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_7D)))) {
        hash_125_we0 = ap_const_logic_1;
    } else {
        hash_125_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_126_address0() {
    hash_126_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_126_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_126_ce0 = ap_const_logic_1;
    } else {
        hash_126_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_126_d0() {
    hash_126_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_126_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_7D)))) {
        hash_126_we0 = ap_const_logic_1;
    } else {
        hash_126_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_127_address0() {
    hash_127_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_127_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_127_ce0 = ap_const_logic_1;
    } else {
        hash_127_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_127_d0() {
    hash_127_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_127_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_61) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_63) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_65) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_67) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_69) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_6B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_6D) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_6F) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_71) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_73) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_75) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_77) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_79) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_7B) && 
          !esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_7D)))) {
        hash_127_we0 = ap_const_logic_1;
    } else {
        hash_127_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_12_address0() {
    hash_12_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_12_ce0 = ap_const_logic_1;
    } else {
        hash_12_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_12_d0() {
    hash_12_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_B)))) {
        hash_12_we0 = ap_const_logic_1;
    } else {
        hash_12_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_13_address0() {
    hash_13_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_13_ce0 = ap_const_logic_1;
    } else {
        hash_13_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_13_d0() {
    hash_13_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_D)))) {
        hash_13_we0 = ap_const_logic_1;
    } else {
        hash_13_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_14_address0() {
    hash_14_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_14_ce0 = ap_const_logic_1;
    } else {
        hash_14_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_14_d0() {
    hash_14_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_D)))) {
        hash_14_we0 = ap_const_logic_1;
    } else {
        hash_14_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_15_address0() {
    hash_15_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_15_ce0 = ap_const_logic_1;
    } else {
        hash_15_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_15_d0() {
    hash_15_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_F)))) {
        hash_15_we0 = ap_const_logic_1;
    } else {
        hash_15_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_16_address0() {
    hash_16_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_16_ce0 = ap_const_logic_1;
    } else {
        hash_16_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_16_d0() {
    hash_16_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_F)))) {
        hash_16_we0 = ap_const_logic_1;
    } else {
        hash_16_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_17_address0() {
    hash_17_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_17_ce0 = ap_const_logic_1;
    } else {
        hash_17_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_17_d0() {
    hash_17_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_11)))) {
        hash_17_we0 = ap_const_logic_1;
    } else {
        hash_17_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_18_address0() {
    hash_18_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_18_ce0 = ap_const_logic_1;
    } else {
        hash_18_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_18_d0() {
    hash_18_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_11)))) {
        hash_18_we0 = ap_const_logic_1;
    } else {
        hash_18_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_19_address0() {
    hash_19_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_19_ce0 = ap_const_logic_1;
    } else {
        hash_19_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_19_d0() {
    hash_19_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_13)))) {
        hash_19_we0 = ap_const_logic_1;
    } else {
        hash_19_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_1_address0() {
    hash_1_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_1_ce0 = ap_const_logic_1;
    } else {
        hash_1_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_1_d0() {
    hash_1_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1)))) {
        hash_1_we0 = ap_const_logic_1;
    } else {
        hash_1_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_20_address0() {
    hash_20_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_20_ce0 = ap_const_logic_1;
    } else {
        hash_20_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_20_d0() {
    hash_20_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_13)))) {
        hash_20_we0 = ap_const_logic_1;
    } else {
        hash_20_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_21_address0() {
    hash_21_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_21_ce0 = ap_const_logic_1;
    } else {
        hash_21_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_21_d0() {
    hash_21_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_15)))) {
        hash_21_we0 = ap_const_logic_1;
    } else {
        hash_21_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_22_address0() {
    hash_22_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_22_ce0 = ap_const_logic_1;
    } else {
        hash_22_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_22_d0() {
    hash_22_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_15)))) {
        hash_22_we0 = ap_const_logic_1;
    } else {
        hash_22_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_23_address0() {
    hash_23_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_23_ce0 = ap_const_logic_1;
    } else {
        hash_23_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_23_d0() {
    hash_23_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_17)))) {
        hash_23_we0 = ap_const_logic_1;
    } else {
        hash_23_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_24_address0() {
    hash_24_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_24_ce0 = ap_const_logic_1;
    } else {
        hash_24_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_24_d0() {
    hash_24_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_24_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_17)))) {
        hash_24_we0 = ap_const_logic_1;
    } else {
        hash_24_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_25_address0() {
    hash_25_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_25_ce0 = ap_const_logic_1;
    } else {
        hash_25_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_25_d0() {
    hash_25_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_25_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_19)))) {
        hash_25_we0 = ap_const_logic_1;
    } else {
        hash_25_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_26_address0() {
    hash_26_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_26_ce0 = ap_const_logic_1;
    } else {
        hash_26_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_26_d0() {
    hash_26_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_26_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_19)))) {
        hash_26_we0 = ap_const_logic_1;
    } else {
        hash_26_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_27_address0() {
    hash_27_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_27_ce0 = ap_const_logic_1;
    } else {
        hash_27_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_27_d0() {
    hash_27_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_27_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1B)))) {
        hash_27_we0 = ap_const_logic_1;
    } else {
        hash_27_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_28_address0() {
    hash_28_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_28_ce0 = ap_const_logic_1;
    } else {
        hash_28_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_28_d0() {
    hash_28_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_28_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1B)))) {
        hash_28_we0 = ap_const_logic_1;
    } else {
        hash_28_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_29_address0() {
    hash_29_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_29_ce0 = ap_const_logic_1;
    } else {
        hash_29_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_29_d0() {
    hash_29_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_29_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1D)))) {
        hash_29_we0 = ap_const_logic_1;
    } else {
        hash_29_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_2_address0() {
    hash_2_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_2_ce0 = ap_const_logic_1;
    } else {
        hash_2_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_2_d0() {
    hash_2_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1)))) {
        hash_2_we0 = ap_const_logic_1;
    } else {
        hash_2_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_30_address0() {
    hash_30_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_30_ce0 = ap_const_logic_1;
    } else {
        hash_30_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_30_d0() {
    hash_30_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_30_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1D)))) {
        hash_30_we0 = ap_const_logic_1;
    } else {
        hash_30_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_31_address0() {
    hash_31_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_31_ce0 = ap_const_logic_1;
    } else {
        hash_31_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_31_d0() {
    hash_31_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_31_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_1F)))) {
        hash_31_we0 = ap_const_logic_1;
    } else {
        hash_31_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_32_address0() {
    hash_32_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_32_ce0 = ap_const_logic_1;
    } else {
        hash_32_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_32_d0() {
    hash_32_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_32_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_1F)))) {
        hash_32_we0 = ap_const_logic_1;
    } else {
        hash_32_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_33_address0() {
    hash_33_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_33_ce0 = ap_const_logic_1;
    } else {
        hash_33_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_33_d0() {
    hash_33_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_33_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_21)))) {
        hash_33_we0 = ap_const_logic_1;
    } else {
        hash_33_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_34_address0() {
    hash_34_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_34_ce0 = ap_const_logic_1;
    } else {
        hash_34_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_34_d0() {
    hash_34_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_34_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_21)))) {
        hash_34_we0 = ap_const_logic_1;
    } else {
        hash_34_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_35_address0() {
    hash_35_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_35_ce0 = ap_const_logic_1;
    } else {
        hash_35_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_35_d0() {
    hash_35_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_35_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_23)))) {
        hash_35_we0 = ap_const_logic_1;
    } else {
        hash_35_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_36_address0() {
    hash_36_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_36_ce0 = ap_const_logic_1;
    } else {
        hash_36_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_36_d0() {
    hash_36_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_36_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_23)))) {
        hash_36_we0 = ap_const_logic_1;
    } else {
        hash_36_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_37_address0() {
    hash_37_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_37_ce0 = ap_const_logic_1;
    } else {
        hash_37_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_37_d0() {
    hash_37_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_37_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_25)))) {
        hash_37_we0 = ap_const_logic_1;
    } else {
        hash_37_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_38_address0() {
    hash_38_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_38_ce0 = ap_const_logic_1;
    } else {
        hash_38_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_38_d0() {
    hash_38_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_38_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_25)))) {
        hash_38_we0 = ap_const_logic_1;
    } else {
        hash_38_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_39_address0() {
    hash_39_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_39_ce0 = ap_const_logic_1;
    } else {
        hash_39_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_39_d0() {
    hash_39_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_39_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_27)))) {
        hash_39_we0 = ap_const_logic_1;
    } else {
        hash_39_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_3_address0() {
    hash_3_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_3_ce0 = ap_const_logic_1;
    } else {
        hash_3_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_3_d0() {
    hash_3_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3)))) {
        hash_3_we0 = ap_const_logic_1;
    } else {
        hash_3_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_40_address0() {
    hash_40_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_40_ce0 = ap_const_logic_1;
    } else {
        hash_40_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_40_d0() {
    hash_40_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_40_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_27)))) {
        hash_40_we0 = ap_const_logic_1;
    } else {
        hash_40_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_41_address0() {
    hash_41_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_41_ce0 = ap_const_logic_1;
    } else {
        hash_41_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_41_d0() {
    hash_41_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_41_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_29)))) {
        hash_41_we0 = ap_const_logic_1;
    } else {
        hash_41_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_42_address0() {
    hash_42_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_42_ce0 = ap_const_logic_1;
    } else {
        hash_42_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_42_d0() {
    hash_42_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_42_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_29)))) {
        hash_42_we0 = ap_const_logic_1;
    } else {
        hash_42_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_43_address0() {
    hash_43_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_43_ce0 = ap_const_logic_1;
    } else {
        hash_43_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_43_d0() {
    hash_43_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_43_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_2B)))) {
        hash_43_we0 = ap_const_logic_1;
    } else {
        hash_43_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_44_address0() {
    hash_44_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_44_ce0 = ap_const_logic_1;
    } else {
        hash_44_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_44_d0() {
    hash_44_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_44_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_2B)))) {
        hash_44_we0 = ap_const_logic_1;
    } else {
        hash_44_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_45_address0() {
    hash_45_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_45_ce0 = ap_const_logic_1;
    } else {
        hash_45_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_45_d0() {
    hash_45_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_45_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_2D)))) {
        hash_45_we0 = ap_const_logic_1;
    } else {
        hash_45_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_46_address0() {
    hash_46_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_46_ce0 = ap_const_logic_1;
    } else {
        hash_46_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_46_d0() {
    hash_46_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_46_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_2D)))) {
        hash_46_we0 = ap_const_logic_1;
    } else {
        hash_46_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_47_address0() {
    hash_47_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_47_ce0 = ap_const_logic_1;
    } else {
        hash_47_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_47_d0() {
    hash_47_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_47_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_2F)))) {
        hash_47_we0 = ap_const_logic_1;
    } else {
        hash_47_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_48_address0() {
    hash_48_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_48_ce0 = ap_const_logic_1;
    } else {
        hash_48_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_48_d0() {
    hash_48_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_48_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_2F)))) {
        hash_48_we0 = ap_const_logic_1;
    } else {
        hash_48_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_49_address0() {
    hash_49_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_49_ce0 = ap_const_logic_1;
    } else {
        hash_49_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_49_d0() {
    hash_49_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_49_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_31)))) {
        hash_49_we0 = ap_const_logic_1;
    } else {
        hash_49_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_4_address0() {
    hash_4_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_4_ce0 = ap_const_logic_1;
    } else {
        hash_4_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_4_d0() {
    hash_4_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3)))) {
        hash_4_we0 = ap_const_logic_1;
    } else {
        hash_4_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_50_address0() {
    hash_50_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_50_ce0 = ap_const_logic_1;
    } else {
        hash_50_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_50_d0() {
    hash_50_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_50_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_31)))) {
        hash_50_we0 = ap_const_logic_1;
    } else {
        hash_50_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_51_address0() {
    hash_51_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_51_ce0 = ap_const_logic_1;
    } else {
        hash_51_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_51_d0() {
    hash_51_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_51_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_33)))) {
        hash_51_we0 = ap_const_logic_1;
    } else {
        hash_51_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_52_address0() {
    hash_52_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_52_ce0 = ap_const_logic_1;
    } else {
        hash_52_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_52_d0() {
    hash_52_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_52_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_33)))) {
        hash_52_we0 = ap_const_logic_1;
    } else {
        hash_52_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_53_address0() {
    hash_53_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_53_ce0 = ap_const_logic_1;
    } else {
        hash_53_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_53_d0() {
    hash_53_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_53_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_35)))) {
        hash_53_we0 = ap_const_logic_1;
    } else {
        hash_53_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_54_address0() {
    hash_54_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_54_ce0 = ap_const_logic_1;
    } else {
        hash_54_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_54_d0() {
    hash_54_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_54_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_35)))) {
        hash_54_we0 = ap_const_logic_1;
    } else {
        hash_54_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_55_address0() {
    hash_55_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_55_ce0 = ap_const_logic_1;
    } else {
        hash_55_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_55_d0() {
    hash_55_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_55_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_37)))) {
        hash_55_we0 = ap_const_logic_1;
    } else {
        hash_55_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_56_address0() {
    hash_56_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_56_ce0 = ap_const_logic_1;
    } else {
        hash_56_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_56_d0() {
    hash_56_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_56_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_37)))) {
        hash_56_we0 = ap_const_logic_1;
    } else {
        hash_56_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_57_address0() {
    hash_57_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_57_ce0 = ap_const_logic_1;
    } else {
        hash_57_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_57_d0() {
    hash_57_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_57_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_39)))) {
        hash_57_we0 = ap_const_logic_1;
    } else {
        hash_57_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_58_address0() {
    hash_58_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_58_ce0 = ap_const_logic_1;
    } else {
        hash_58_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_58_d0() {
    hash_58_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_58_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_39)))) {
        hash_58_we0 = ap_const_logic_1;
    } else {
        hash_58_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_59_address0() {
    hash_59_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_59_ce0 = ap_const_logic_1;
    } else {
        hash_59_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_59_d0() {
    hash_59_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_59_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3B)))) {
        hash_59_we0 = ap_const_logic_1;
    } else {
        hash_59_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_5_address0() {
    hash_5_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_5_ce0 = ap_const_logic_1;
    } else {
        hash_5_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_5_d0() {
    hash_5_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5)))) {
        hash_5_we0 = ap_const_logic_1;
    } else {
        hash_5_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_60_address0() {
    hash_60_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_60_ce0 = ap_const_logic_1;
    } else {
        hash_60_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_60_d0() {
    hash_60_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_60_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3B)))) {
        hash_60_we0 = ap_const_logic_1;
    } else {
        hash_60_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_61_address0() {
    hash_61_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_61_ce0 = ap_const_logic_1;
    } else {
        hash_61_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_61_d0() {
    hash_61_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_61_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3D)))) {
        hash_61_we0 = ap_const_logic_1;
    } else {
        hash_61_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_62_address0() {
    hash_62_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_62_ce0 = ap_const_logic_1;
    } else {
        hash_62_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_62_d0() {
    hash_62_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_62_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3D)))) {
        hash_62_we0 = ap_const_logic_1;
    } else {
        hash_62_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_63_address0() {
    hash_63_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_63_ce0 = ap_const_logic_1;
    } else {
        hash_63_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_63_d0() {
    hash_63_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_63_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_3F)))) {
        hash_63_we0 = ap_const_logic_1;
    } else {
        hash_63_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_64_address0() {
    hash_64_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_64_ce0 = ap_const_logic_1;
    } else {
        hash_64_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_64_d0() {
    hash_64_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_64_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_3F)))) {
        hash_64_we0 = ap_const_logic_1;
    } else {
        hash_64_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_65_address0() {
    hash_65_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_65_ce0 = ap_const_logic_1;
    } else {
        hash_65_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_65_d0() {
    hash_65_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_65_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_41)))) {
        hash_65_we0 = ap_const_logic_1;
    } else {
        hash_65_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_66_address0() {
    hash_66_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_66_ce0 = ap_const_logic_1;
    } else {
        hash_66_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_66_d0() {
    hash_66_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_66_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_41)))) {
        hash_66_we0 = ap_const_logic_1;
    } else {
        hash_66_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_67_address0() {
    hash_67_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_67_ce0 = ap_const_logic_1;
    } else {
        hash_67_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_67_d0() {
    hash_67_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_67_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_43)))) {
        hash_67_we0 = ap_const_logic_1;
    } else {
        hash_67_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_68_address0() {
    hash_68_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_68_ce0 = ap_const_logic_1;
    } else {
        hash_68_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_68_d0() {
    hash_68_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_68_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_43)))) {
        hash_68_we0 = ap_const_logic_1;
    } else {
        hash_68_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_69_address0() {
    hash_69_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_69_ce0 = ap_const_logic_1;
    } else {
        hash_69_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_69_d0() {
    hash_69_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_69_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_45)))) {
        hash_69_we0 = ap_const_logic_1;
    } else {
        hash_69_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_6_address0() {
    hash_6_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_6_ce0 = ap_const_logic_1;
    } else {
        hash_6_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_6_d0() {
    hash_6_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5)))) {
        hash_6_we0 = ap_const_logic_1;
    } else {
        hash_6_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_70_address0() {
    hash_70_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_70_ce0 = ap_const_logic_1;
    } else {
        hash_70_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_70_d0() {
    hash_70_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_70_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_45)))) {
        hash_70_we0 = ap_const_logic_1;
    } else {
        hash_70_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_71_address0() {
    hash_71_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_71_ce0 = ap_const_logic_1;
    } else {
        hash_71_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_71_d0() {
    hash_71_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_71_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_47)))) {
        hash_71_we0 = ap_const_logic_1;
    } else {
        hash_71_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_72_address0() {
    hash_72_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_72_ce0 = ap_const_logic_1;
    } else {
        hash_72_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_72_d0() {
    hash_72_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_72_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_47)))) {
        hash_72_we0 = ap_const_logic_1;
    } else {
        hash_72_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_73_address0() {
    hash_73_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_73_ce0 = ap_const_logic_1;
    } else {
        hash_73_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_73_d0() {
    hash_73_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_73_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_49)))) {
        hash_73_we0 = ap_const_logic_1;
    } else {
        hash_73_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_74_address0() {
    hash_74_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_74_ce0 = ap_const_logic_1;
    } else {
        hash_74_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_74_d0() {
    hash_74_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_74_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_49)))) {
        hash_74_we0 = ap_const_logic_1;
    } else {
        hash_74_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_75_address0() {
    hash_75_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_75_ce0 = ap_const_logic_1;
    } else {
        hash_75_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_75_d0() {
    hash_75_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_75_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_4B)))) {
        hash_75_we0 = ap_const_logic_1;
    } else {
        hash_75_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_76_address0() {
    hash_76_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_76_ce0 = ap_const_logic_1;
    } else {
        hash_76_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_76_d0() {
    hash_76_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_76_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_4B)))) {
        hash_76_we0 = ap_const_logic_1;
    } else {
        hash_76_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_77_address0() {
    hash_77_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_77_ce0 = ap_const_logic_1;
    } else {
        hash_77_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_77_d0() {
    hash_77_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_77_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_4D)))) {
        hash_77_we0 = ap_const_logic_1;
    } else {
        hash_77_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_78_address0() {
    hash_78_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_78_ce0 = ap_const_logic_1;
    } else {
        hash_78_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_78_d0() {
    hash_78_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_78_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_4D)))) {
        hash_78_we0 = ap_const_logic_1;
    } else {
        hash_78_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_79_address0() {
    hash_79_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_79_ce0 = ap_const_logic_1;
    } else {
        hash_79_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_79_d0() {
    hash_79_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_79_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_4F)))) {
        hash_79_we0 = ap_const_logic_1;
    } else {
        hash_79_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_7_address0() {
    hash_7_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_7_ce0 = ap_const_logic_1;
    } else {
        hash_7_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_7_d0() {
    hash_7_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_7)))) {
        hash_7_we0 = ap_const_logic_1;
    } else {
        hash_7_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_80_address0() {
    hash_80_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_80_ce0 = ap_const_logic_1;
    } else {
        hash_80_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_80_d0() {
    hash_80_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_80_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_4F)))) {
        hash_80_we0 = ap_const_logic_1;
    } else {
        hash_80_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_81_address0() {
    hash_81_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_81_ce0 = ap_const_logic_1;
    } else {
        hash_81_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_81_d0() {
    hash_81_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_81_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_51)))) {
        hash_81_we0 = ap_const_logic_1;
    } else {
        hash_81_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_82_address0() {
    hash_82_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_82_ce0 = ap_const_logic_1;
    } else {
        hash_82_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_82_d0() {
    hash_82_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_82_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_51)))) {
        hash_82_we0 = ap_const_logic_1;
    } else {
        hash_82_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_83_address0() {
    hash_83_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_83_ce0 = ap_const_logic_1;
    } else {
        hash_83_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_83_d0() {
    hash_83_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_83_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_53)))) {
        hash_83_we0 = ap_const_logic_1;
    } else {
        hash_83_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_84_address0() {
    hash_84_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_84_ce0 = ap_const_logic_1;
    } else {
        hash_84_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_84_d0() {
    hash_84_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_84_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_53)))) {
        hash_84_we0 = ap_const_logic_1;
    } else {
        hash_84_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_85_address0() {
    hash_85_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_85_ce0 = ap_const_logic_1;
    } else {
        hash_85_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_85_d0() {
    hash_85_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_85_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_55)))) {
        hash_85_we0 = ap_const_logic_1;
    } else {
        hash_85_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_86_address0() {
    hash_86_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_86_ce0 = ap_const_logic_1;
    } else {
        hash_86_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_86_d0() {
    hash_86_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_86_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_55)))) {
        hash_86_we0 = ap_const_logic_1;
    } else {
        hash_86_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_87_address0() {
    hash_87_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_87_ce0 = ap_const_logic_1;
    } else {
        hash_87_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_87_d0() {
    hash_87_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_87_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_57)))) {
        hash_87_we0 = ap_const_logic_1;
    } else {
        hash_87_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_88_address0() {
    hash_88_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_88_ce0 = ap_const_logic_1;
    } else {
        hash_88_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_88_d0() {
    hash_88_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_88_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_57)))) {
        hash_88_we0 = ap_const_logic_1;
    } else {
        hash_88_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_89_address0() {
    hash_89_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_89_ce0 = ap_const_logic_1;
    } else {
        hash_89_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_89_d0() {
    hash_89_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_89_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_59)))) {
        hash_89_we0 = ap_const_logic_1;
    } else {
        hash_89_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_8_address0() {
    hash_8_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_8_ce0 = ap_const_logic_1;
    } else {
        hash_8_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_8_d0() {
    hash_8_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_7)))) {
        hash_8_we0 = ap_const_logic_1;
    } else {
        hash_8_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_90_address0() {
    hash_90_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_90_ce0 = ap_const_logic_1;
    } else {
        hash_90_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_90_d0() {
    hash_90_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_90_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_59)))) {
        hash_90_we0 = ap_const_logic_1;
    } else {
        hash_90_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_91_address0() {
    hash_91_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_91_ce0 = ap_const_logic_1;
    } else {
        hash_91_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_91_d0() {
    hash_91_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_91_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5B)))) {
        hash_91_we0 = ap_const_logic_1;
    } else {
        hash_91_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_92_address0() {
    hash_92_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_92_ce0 = ap_const_logic_1;
    } else {
        hash_92_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_92_d0() {
    hash_92_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_92_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5B)))) {
        hash_92_we0 = ap_const_logic_1;
    } else {
        hash_92_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_93_address0() {
    hash_93_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_93_ce0 = ap_const_logic_1;
    } else {
        hash_93_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_93_d0() {
    hash_93_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_93_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5D)))) {
        hash_93_we0 = ap_const_logic_1;
    } else {
        hash_93_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_94_address0() {
    hash_94_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_94_ce0 = ap_const_logic_1;
    } else {
        hash_94_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_94_d0() {
    hash_94_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_94_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5D)))) {
        hash_94_we0 = ap_const_logic_1;
    } else {
        hash_94_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_95_address0() {
    hash_95_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_95_ce0 = ap_const_logic_1;
    } else {
        hash_95_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_95_d0() {
    hash_95_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_95_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_5F)))) {
        hash_95_we0 = ap_const_logic_1;
    } else {
        hash_95_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_96_address0() {
    hash_96_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_96_ce0 = ap_const_logic_1;
    } else {
        hash_96_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_96_d0() {
    hash_96_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_96_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_5F)))) {
        hash_96_we0 = ap_const_logic_1;
    } else {
        hash_96_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_97_address0() {
    hash_97_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_97_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_97_ce0 = ap_const_logic_1;
    } else {
        hash_97_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_97_d0() {
    hash_97_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_97_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_61)))) {
        hash_97_we0 = ap_const_logic_1;
    } else {
        hash_97_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_98_address0() {
    hash_98_address0 =  (sc_lv<6>) (newIndex11_fu_7816_p1.read());
}

void dedupDriver_rollingHash::thread_hash_98_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read())) {
        hash_98_ce0 = ap_const_logic_1;
    } else {
        hash_98_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_98_d0() {
    hash_98_d0 = sum_3_1_reg_11202.read();
}

void dedupDriver_rollingHash::thread_hash_98_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter2.read(), ap_const_lv7_61)))) {
        hash_98_we0 = ap_const_logic_1;
    } else {
        hash_98_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_99_address0() {
    hash_99_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_99_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_99_ce0 = ap_const_logic_1;
    } else {
        hash_99_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_99_d0() {
    hash_99_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_99_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_63)))) {
        hash_99_we0 = ap_const_logic_1;
    } else {
        hash_99_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_9_address0() {
    hash_9_address0 =  (sc_lv<6>) (ap_reg_ppstg_newIndex7_reg_9200_pp1_iter1.read());
}

void dedupDriver_rollingHash::thread_hash_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read())) {
        hash_9_ce0 = ap_const_logic_1;
    } else {
        hash_9_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_hash_9_d0() {
    hash_9_d0 = sum_3_fu_7717_p2.read();
}

void dedupDriver_rollingHash::thread_hash_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it2.read()) && 
          esl_seteq<1,7,7>(ap_reg_ppstg_tmp_5_reg_8552_pp1_iter1.read(), ap_const_lv7_9)))) {
        hash_9_we0 = ap_const_logic_1;
    } else {
        hash_9_we0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_i_1_fu_6919_p2() {
    i_1_fu_6919_p2 = (!i_reg_6338.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(i_reg_6338.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void dedupDriver_rollingHash::thread_i_3_1_fu_7697_p2() {
    i_3_1_fu_7697_p2 = (!i_s_reg_6361.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<32>(): (sc_biguint<32>(i_s_reg_6361.read()) + sc_biguint<32>(ap_const_lv32_2));
}

void dedupDriver_rollingHash::thread_i_3_fu_7601_p2() {
    i_3_fu_7601_p2 = (!i_s_reg_6361.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(i_s_reg_6361.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void dedupDriver_rollingHash::thread_newIndex11_fu_7816_p1() {
    newIndex11_fu_7816_p1 = esl_zext<64,25>(newIndex10_reg_11271.read());
}

void dedupDriver_rollingHash::thread_newIndex1_fu_6939_p1() {
    newIndex1_fu_6939_p1 = esl_zext<64,4>(newIndex_fu_6929_p4.read());
}

void dedupDriver_rollingHash::thread_newIndex2_fu_7357_p4() {
    newIndex2_fu_7357_p4 = tmp_4_fu_7347_p2.read().range(31, 7);
}

void dedupDriver_rollingHash::thread_newIndex3_fu_7367_p1() {
    newIndex3_fu_7367_p1 = esl_zext<64,25>(newIndex2_fu_7357_p4.read());
}

void dedupDriver_rollingHash::thread_newIndex4_fu_7445_p4() {
    newIndex4_fu_7445_p4 = tmp_7_fu_7435_p2.read().range(31, 7);
}

void dedupDriver_rollingHash::thread_newIndex5_fu_7455_p1() {
    newIndex5_fu_7455_p1 = esl_zext<64,25>(newIndex4_fu_7445_p4.read());
}

void dedupDriver_rollingHash::thread_newIndex6_fu_7523_p4() {
    newIndex6_fu_7523_p4 = i_s_reg_6361.read().range(31, 7);
}

void dedupDriver_rollingHash::thread_newIndex7_fu_7533_p1() {
    newIndex7_fu_7533_p1 = esl_zext<64,25>(newIndex6_fu_7523_p4.read());
}

void dedupDriver_rollingHash::thread_newIndex8_fu_7619_p4() {
    newIndex8_fu_7619_p4 = tmp_4_1_fu_7613_p2.read().range(31, 7);
}

void dedupDriver_rollingHash::thread_newIndex9_fu_7629_p1() {
    newIndex9_fu_7629_p1 = esl_zext<64,25>(newIndex8_fu_7619_p4.read());
}

void dedupDriver_rollingHash::thread_newIndex_fu_6929_p4() {
    newIndex_fu_6929_p4 = i_reg_6338.read().range(10, 7);
}

void dedupDriver_rollingHash::thread_str_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_0_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_0_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_0_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_0_address1() {
    str_0_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_0_ce0 = ap_const_logic_1;
    } else {
        str_0_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_0_ce1 = ap_const_logic_1;
    } else {
        str_0_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_100_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_100_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_100_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_100_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_100_address1() {
    str_100_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_100_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_100_ce0 = ap_const_logic_1;
    } else {
        str_100_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_100_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_100_ce1 = ap_const_logic_1;
    } else {
        str_100_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_101_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_101_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_101_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_101_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_101_address1() {
    str_101_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_101_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_101_ce0 = ap_const_logic_1;
    } else {
        str_101_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_101_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_101_ce1 = ap_const_logic_1;
    } else {
        str_101_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_102_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_102_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_102_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_102_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_102_address1() {
    str_102_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_102_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_102_ce0 = ap_const_logic_1;
    } else {
        str_102_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_102_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_102_ce1 = ap_const_logic_1;
    } else {
        str_102_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_103_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_103_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_103_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_103_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_103_address1() {
    str_103_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_103_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_103_ce0 = ap_const_logic_1;
    } else {
        str_103_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_103_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_103_ce1 = ap_const_logic_1;
    } else {
        str_103_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_104_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_104_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_104_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_104_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_104_address1() {
    str_104_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_104_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_104_ce0 = ap_const_logic_1;
    } else {
        str_104_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_104_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_104_ce1 = ap_const_logic_1;
    } else {
        str_104_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_105_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_105_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_105_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_105_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_105_address1() {
    str_105_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_105_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_105_ce0 = ap_const_logic_1;
    } else {
        str_105_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_105_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_105_ce1 = ap_const_logic_1;
    } else {
        str_105_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_106_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_106_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_106_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_106_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_106_address1() {
    str_106_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_106_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_106_ce0 = ap_const_logic_1;
    } else {
        str_106_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_106_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_106_ce1 = ap_const_logic_1;
    } else {
        str_106_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_107_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_107_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_107_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_107_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_107_address1() {
    str_107_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_107_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_107_ce0 = ap_const_logic_1;
    } else {
        str_107_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_107_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_107_ce1 = ap_const_logic_1;
    } else {
        str_107_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_108_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_108_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_108_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_108_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_108_address1() {
    str_108_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_108_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_108_ce0 = ap_const_logic_1;
    } else {
        str_108_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_108_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_108_ce1 = ap_const_logic_1;
    } else {
        str_108_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_109_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_109_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_109_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_109_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_109_address1() {
    str_109_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_109_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_109_ce0 = ap_const_logic_1;
    } else {
        str_109_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_109_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_109_ce1 = ap_const_logic_1;
    } else {
        str_109_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_10_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_10_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_10_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_10_address1() {
    str_10_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_10_ce0 = ap_const_logic_1;
    } else {
        str_10_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_10_ce1 = ap_const_logic_1;
    } else {
        str_10_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_110_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_110_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_110_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_110_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_110_address1() {
    str_110_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_110_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_110_ce0 = ap_const_logic_1;
    } else {
        str_110_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_110_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_110_ce1 = ap_const_logic_1;
    } else {
        str_110_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_111_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_111_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_111_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_111_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_111_address1() {
    str_111_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_111_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_111_ce0 = ap_const_logic_1;
    } else {
        str_111_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_111_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_111_ce1 = ap_const_logic_1;
    } else {
        str_111_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_112_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_112_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_112_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_112_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_112_address1() {
    str_112_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_112_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_112_ce0 = ap_const_logic_1;
    } else {
        str_112_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_112_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_112_ce1 = ap_const_logic_1;
    } else {
        str_112_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_113_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_113_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_113_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_113_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_113_address1() {
    str_113_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_113_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_113_ce0 = ap_const_logic_1;
    } else {
        str_113_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_113_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_113_ce1 = ap_const_logic_1;
    } else {
        str_113_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_114_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_114_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_114_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_114_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_114_address1() {
    str_114_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_114_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_114_ce0 = ap_const_logic_1;
    } else {
        str_114_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_114_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_114_ce1 = ap_const_logic_1;
    } else {
        str_114_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_115_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_115_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_115_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_115_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_115_address1() {
    str_115_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_115_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_115_ce0 = ap_const_logic_1;
    } else {
        str_115_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_115_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_115_ce1 = ap_const_logic_1;
    } else {
        str_115_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_116_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_116_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_116_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_116_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_116_address1() {
    str_116_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_116_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_116_ce0 = ap_const_logic_1;
    } else {
        str_116_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_116_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_116_ce1 = ap_const_logic_1;
    } else {
        str_116_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_117_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_117_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_117_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_117_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_117_address1() {
    str_117_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_117_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_117_ce0 = ap_const_logic_1;
    } else {
        str_117_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_117_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_117_ce1 = ap_const_logic_1;
    } else {
        str_117_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_118_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_118_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_118_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_118_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_118_address1() {
    str_118_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_118_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_118_ce0 = ap_const_logic_1;
    } else {
        str_118_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_118_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_118_ce1 = ap_const_logic_1;
    } else {
        str_118_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_119_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_119_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_119_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_119_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_119_address1() {
    str_119_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_119_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_119_ce0 = ap_const_logic_1;
    } else {
        str_119_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_119_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_119_ce1 = ap_const_logic_1;
    } else {
        str_119_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_11_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_11_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_11_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_11_address1() {
    str_11_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_11_ce0 = ap_const_logic_1;
    } else {
        str_11_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_11_ce1 = ap_const_logic_1;
    } else {
        str_11_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_120_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_120_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_120_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_120_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_120_address1() {
    str_120_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_120_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_120_ce0 = ap_const_logic_1;
    } else {
        str_120_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_120_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_120_ce1 = ap_const_logic_1;
    } else {
        str_120_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_121_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_121_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_121_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_121_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_121_address1() {
    str_121_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_121_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_121_ce0 = ap_const_logic_1;
    } else {
        str_121_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_121_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_121_ce1 = ap_const_logic_1;
    } else {
        str_121_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_122_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_122_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_122_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_122_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_122_address1() {
    str_122_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_122_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_122_ce0 = ap_const_logic_1;
    } else {
        str_122_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_122_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_122_ce1 = ap_const_logic_1;
    } else {
        str_122_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_123_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_123_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_123_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_123_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_123_address1() {
    str_123_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_123_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_123_ce0 = ap_const_logic_1;
    } else {
        str_123_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_123_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_123_ce1 = ap_const_logic_1;
    } else {
        str_123_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_124_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_124_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_124_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_124_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_124_address1() {
    str_124_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_124_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_124_ce0 = ap_const_logic_1;
    } else {
        str_124_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_124_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_124_ce1 = ap_const_logic_1;
    } else {
        str_124_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_125_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_125_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_125_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_125_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_125_address1() {
    str_125_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_125_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_125_ce0 = ap_const_logic_1;
    } else {
        str_125_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_125_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_125_ce1 = ap_const_logic_1;
    } else {
        str_125_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_126_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_126_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_126_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_126_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_126_address1() {
    str_126_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_126_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_126_ce0 = ap_const_logic_1;
    } else {
        str_126_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_126_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_126_ce1 = ap_const_logic_1;
    } else {
        str_126_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_127_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_127_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_127_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_127_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_127_address1() {
    str_127_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_127_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_127_ce0 = ap_const_logic_1;
    } else {
        str_127_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_127_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_127_ce1 = ap_const_logic_1;
    } else {
        str_127_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_12_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_12_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_12_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_12_address1() {
    str_12_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_12_ce0 = ap_const_logic_1;
    } else {
        str_12_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_12_ce1 = ap_const_logic_1;
    } else {
        str_12_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_13_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_13_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_13_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_13_address1() {
    str_13_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_13_ce0 = ap_const_logic_1;
    } else {
        str_13_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_13_ce1 = ap_const_logic_1;
    } else {
        str_13_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_14_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_14_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_14_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_14_address1() {
    str_14_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_14_ce0 = ap_const_logic_1;
    } else {
        str_14_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_14_ce1 = ap_const_logic_1;
    } else {
        str_14_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_15_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_15_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_15_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_15_address1() {
    str_15_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_15_ce0 = ap_const_logic_1;
    } else {
        str_15_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_15_ce1 = ap_const_logic_1;
    } else {
        str_15_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_16_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_16_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_16_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_16_address1() {
    str_16_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_16_ce0 = ap_const_logic_1;
    } else {
        str_16_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_16_ce1 = ap_const_logic_1;
    } else {
        str_16_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_17_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_17_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_17_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_17_address1() {
    str_17_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_17_ce0 = ap_const_logic_1;
    } else {
        str_17_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_17_ce1 = ap_const_logic_1;
    } else {
        str_17_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_18_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_18_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_18_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_18_address1() {
    str_18_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_18_ce0 = ap_const_logic_1;
    } else {
        str_18_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_18_ce1 = ap_const_logic_1;
    } else {
        str_18_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_19_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_19_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_19_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_19_address1() {
    str_19_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_19_ce0 = ap_const_logic_1;
    } else {
        str_19_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_19_ce1 = ap_const_logic_1;
    } else {
        str_19_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_1_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_1_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_1_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_1_address1() {
    str_1_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_1_ce0 = ap_const_logic_1;
    } else {
        str_1_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_1_ce1 = ap_const_logic_1;
    } else {
        str_1_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_20_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_20_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_20_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_20_address1() {
    str_20_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_20_ce0 = ap_const_logic_1;
    } else {
        str_20_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_20_ce1 = ap_const_logic_1;
    } else {
        str_20_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_21_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_21_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_21_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_21_address1() {
    str_21_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_21_ce0 = ap_const_logic_1;
    } else {
        str_21_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_21_ce1 = ap_const_logic_1;
    } else {
        str_21_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_22_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_22_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_22_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_22_address1() {
    str_22_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_22_ce0 = ap_const_logic_1;
    } else {
        str_22_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_22_ce1 = ap_const_logic_1;
    } else {
        str_22_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_23_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_23_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_23_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_23_address1() {
    str_23_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_23_ce0 = ap_const_logic_1;
    } else {
        str_23_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_23_ce1 = ap_const_logic_1;
    } else {
        str_23_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_24_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_24_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_24_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_24_address1() {
    str_24_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_24_ce0 = ap_const_logic_1;
    } else {
        str_24_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_24_ce1 = ap_const_logic_1;
    } else {
        str_24_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_25_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_25_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_25_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_25_address1() {
    str_25_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_25_ce0 = ap_const_logic_1;
    } else {
        str_25_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_25_ce1 = ap_const_logic_1;
    } else {
        str_25_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_26_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_26_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_26_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_26_address1() {
    str_26_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_26_ce0 = ap_const_logic_1;
    } else {
        str_26_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_26_ce1 = ap_const_logic_1;
    } else {
        str_26_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_27_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_27_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_27_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_27_address1() {
    str_27_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_27_ce0 = ap_const_logic_1;
    } else {
        str_27_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_27_ce1 = ap_const_logic_1;
    } else {
        str_27_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_28_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_28_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_28_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_28_address1() {
    str_28_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_28_ce0 = ap_const_logic_1;
    } else {
        str_28_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_28_ce1 = ap_const_logic_1;
    } else {
        str_28_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_29_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_29_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_29_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_29_address1() {
    str_29_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_29_ce0 = ap_const_logic_1;
    } else {
        str_29_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_29_ce1 = ap_const_logic_1;
    } else {
        str_29_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_2_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_2_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_2_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_2_address1() {
    str_2_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_2_ce0 = ap_const_logic_1;
    } else {
        str_2_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_2_ce1 = ap_const_logic_1;
    } else {
        str_2_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_30_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_30_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_30_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_30_address1() {
    str_30_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_30_ce0 = ap_const_logic_1;
    } else {
        str_30_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_30_ce1 = ap_const_logic_1;
    } else {
        str_30_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_31_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_31_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_31_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_31_address1() {
    str_31_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_31_ce0 = ap_const_logic_1;
    } else {
        str_31_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_31_ce1 = ap_const_logic_1;
    } else {
        str_31_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_32_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_32_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_32_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_32_address1() {
    str_32_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_32_ce0 = ap_const_logic_1;
    } else {
        str_32_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_32_ce1 = ap_const_logic_1;
    } else {
        str_32_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_33_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_33_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_33_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_33_address1() {
    str_33_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_33_ce0 = ap_const_logic_1;
    } else {
        str_33_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_33_ce1 = ap_const_logic_1;
    } else {
        str_33_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_34_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_34_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_34_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_34_address1() {
    str_34_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_34_ce0 = ap_const_logic_1;
    } else {
        str_34_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_34_ce1 = ap_const_logic_1;
    } else {
        str_34_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_35_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_35_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_35_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_35_address1() {
    str_35_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_35_ce0 = ap_const_logic_1;
    } else {
        str_35_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_35_ce1 = ap_const_logic_1;
    } else {
        str_35_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_36_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_36_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_36_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_36_address1() {
    str_36_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_36_ce0 = ap_const_logic_1;
    } else {
        str_36_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_36_ce1 = ap_const_logic_1;
    } else {
        str_36_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_37_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_37_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_37_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_37_address1() {
    str_37_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_37_ce0 = ap_const_logic_1;
    } else {
        str_37_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_37_ce1 = ap_const_logic_1;
    } else {
        str_37_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_38_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_38_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_38_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_38_address1() {
    str_38_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_38_ce0 = ap_const_logic_1;
    } else {
        str_38_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_38_ce1 = ap_const_logic_1;
    } else {
        str_38_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_39_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_39_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_39_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_39_address1() {
    str_39_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_39_ce0 = ap_const_logic_1;
    } else {
        str_39_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_39_ce1 = ap_const_logic_1;
    } else {
        str_39_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_3_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_3_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_3_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_3_address1() {
    str_3_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_3_ce0 = ap_const_logic_1;
    } else {
        str_3_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_3_ce1 = ap_const_logic_1;
    } else {
        str_3_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_40_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_40_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_40_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_40_address1() {
    str_40_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_40_ce0 = ap_const_logic_1;
    } else {
        str_40_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_40_ce1 = ap_const_logic_1;
    } else {
        str_40_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_41_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_41_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_41_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_41_address1() {
    str_41_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_41_ce0 = ap_const_logic_1;
    } else {
        str_41_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_41_ce1 = ap_const_logic_1;
    } else {
        str_41_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_42_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_42_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_42_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_42_address1() {
    str_42_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_42_ce0 = ap_const_logic_1;
    } else {
        str_42_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_42_ce1 = ap_const_logic_1;
    } else {
        str_42_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_43_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_43_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_43_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_43_address1() {
    str_43_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_43_ce0 = ap_const_logic_1;
    } else {
        str_43_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_43_ce1 = ap_const_logic_1;
    } else {
        str_43_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_44_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_44_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_44_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_44_address1() {
    str_44_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_44_ce0 = ap_const_logic_1;
    } else {
        str_44_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_44_ce1 = ap_const_logic_1;
    } else {
        str_44_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_45_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_45_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_45_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_45_address1() {
    str_45_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_45_ce0 = ap_const_logic_1;
    } else {
        str_45_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_45_ce1 = ap_const_logic_1;
    } else {
        str_45_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_46_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_46_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_46_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_46_address1() {
    str_46_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_46_ce0 = ap_const_logic_1;
    } else {
        str_46_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_46_ce1 = ap_const_logic_1;
    } else {
        str_46_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_47_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_47_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_47_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_47_address1() {
    str_47_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_47_ce0 = ap_const_logic_1;
    } else {
        str_47_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_47_ce1 = ap_const_logic_1;
    } else {
        str_47_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_48_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_48_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_48_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_48_address1() {
    str_48_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_48_ce0 = ap_const_logic_1;
    } else {
        str_48_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_48_ce1 = ap_const_logic_1;
    } else {
        str_48_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_49_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_49_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_49_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_49_address1() {
    str_49_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_49_ce0 = ap_const_logic_1;
    } else {
        str_49_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_49_ce1 = ap_const_logic_1;
    } else {
        str_49_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_4_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_4_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_4_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_4_address1() {
    str_4_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_4_ce0 = ap_const_logic_1;
    } else {
        str_4_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_4_ce1 = ap_const_logic_1;
    } else {
        str_4_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_50_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_50_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_50_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_50_address1() {
    str_50_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_50_ce0 = ap_const_logic_1;
    } else {
        str_50_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_50_ce1 = ap_const_logic_1;
    } else {
        str_50_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_51_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_51_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_51_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_51_address1() {
    str_51_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_51_ce0 = ap_const_logic_1;
    } else {
        str_51_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_51_ce1 = ap_const_logic_1;
    } else {
        str_51_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_52_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_52_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_52_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_52_address1() {
    str_52_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_52_ce0 = ap_const_logic_1;
    } else {
        str_52_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_52_ce1 = ap_const_logic_1;
    } else {
        str_52_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_53_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_53_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_53_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_53_address1() {
    str_53_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_53_ce0 = ap_const_logic_1;
    } else {
        str_53_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_53_ce1 = ap_const_logic_1;
    } else {
        str_53_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_54_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_54_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_54_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_54_address1() {
    str_54_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_54_ce0 = ap_const_logic_1;
    } else {
        str_54_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_54_ce1 = ap_const_logic_1;
    } else {
        str_54_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_55_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_55_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_55_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_55_address1() {
    str_55_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_55_ce0 = ap_const_logic_1;
    } else {
        str_55_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_55_ce1 = ap_const_logic_1;
    } else {
        str_55_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_56_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_56_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_56_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_56_address1() {
    str_56_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_56_ce0 = ap_const_logic_1;
    } else {
        str_56_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_56_ce1 = ap_const_logic_1;
    } else {
        str_56_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_57_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_57_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_57_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_57_address1() {
    str_57_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_57_ce0 = ap_const_logic_1;
    } else {
        str_57_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_57_ce1 = ap_const_logic_1;
    } else {
        str_57_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_58_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_58_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_58_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_58_address1() {
    str_58_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_58_ce0 = ap_const_logic_1;
    } else {
        str_58_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_58_ce1 = ap_const_logic_1;
    } else {
        str_58_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_59_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_59_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_59_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_59_address1() {
    str_59_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_59_ce0 = ap_const_logic_1;
    } else {
        str_59_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_59_ce1 = ap_const_logic_1;
    } else {
        str_59_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_5_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_5_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_5_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_5_address1() {
    str_5_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_5_ce0 = ap_const_logic_1;
    } else {
        str_5_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_5_ce1 = ap_const_logic_1;
    } else {
        str_5_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_60_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_60_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_60_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_60_address1() {
    str_60_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_60_ce0 = ap_const_logic_1;
    } else {
        str_60_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_60_ce1 = ap_const_logic_1;
    } else {
        str_60_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_61_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_61_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_61_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_61_address1() {
    str_61_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_61_ce0 = ap_const_logic_1;
    } else {
        str_61_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_61_ce1 = ap_const_logic_1;
    } else {
        str_61_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_62_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_62_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_62_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_62_address1() {
    str_62_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_62_ce0 = ap_const_logic_1;
    } else {
        str_62_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_62_ce1 = ap_const_logic_1;
    } else {
        str_62_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_63_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_63_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_63_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_63_address1() {
    str_63_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_63_ce0 = ap_const_logic_1;
    } else {
        str_63_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_63_ce1 = ap_const_logic_1;
    } else {
        str_63_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_64_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_64_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_64_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_64_address1() {
    str_64_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_64_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_64_ce0 = ap_const_logic_1;
    } else {
        str_64_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_64_ce1 = ap_const_logic_1;
    } else {
        str_64_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_65_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_65_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_65_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_65_address1() {
    str_65_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_65_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_65_ce0 = ap_const_logic_1;
    } else {
        str_65_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_65_ce1 = ap_const_logic_1;
    } else {
        str_65_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_66_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_66_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_66_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_66_address1() {
    str_66_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_66_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_66_ce0 = ap_const_logic_1;
    } else {
        str_66_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_66_ce1 = ap_const_logic_1;
    } else {
        str_66_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_67_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_67_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_67_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_67_address1() {
    str_67_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_67_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_67_ce0 = ap_const_logic_1;
    } else {
        str_67_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_67_ce1 = ap_const_logic_1;
    } else {
        str_67_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_68_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_68_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_68_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_68_address1() {
    str_68_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_68_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_68_ce0 = ap_const_logic_1;
    } else {
        str_68_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_68_ce1 = ap_const_logic_1;
    } else {
        str_68_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_69_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_69_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_69_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_69_address1() {
    str_69_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_69_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_69_ce0 = ap_const_logic_1;
    } else {
        str_69_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_69_ce1 = ap_const_logic_1;
    } else {
        str_69_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_6_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_6_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_6_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_6_address1() {
    str_6_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_6_ce0 = ap_const_logic_1;
    } else {
        str_6_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_6_ce1 = ap_const_logic_1;
    } else {
        str_6_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_70_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_70_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_70_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_70_address1() {
    str_70_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_70_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_70_ce0 = ap_const_logic_1;
    } else {
        str_70_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_70_ce1 = ap_const_logic_1;
    } else {
        str_70_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_71_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_71_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_71_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_71_address1() {
    str_71_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_71_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_71_ce0 = ap_const_logic_1;
    } else {
        str_71_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_71_ce1 = ap_const_logic_1;
    } else {
        str_71_ce1 = ap_const_logic_0;
    }
}

}

