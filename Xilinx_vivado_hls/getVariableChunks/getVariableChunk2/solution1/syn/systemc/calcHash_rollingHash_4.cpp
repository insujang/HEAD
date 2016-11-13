#include "calcHash_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void calcHash_rollingHash::thread_hash_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_63_ce0 = ap_const_logic_1;
    } else {
        hash_63_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read()))) {
        hash_63_ce1 = ap_const_logic_1;
    } else {
        hash_63_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_63_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read())))) {
        hash_63_we1 = ap_const_logic_1;
    } else {
        hash_63_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_64_address0 =  (sc_lv<5>) (newIndex720_fu_59670_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_64_address0 =  (sc_lv<5>) (newIndex2520025201_fu_51262_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_64_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_64_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_64_address1() {
    hash_64_address1 =  (sc_lv<5>) (newIndex227_reg_75073.read());
}

void calcHash_rollingHash::thread_hash_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_64_ce0 = ap_const_logic_1;
    } else {
        hash_64_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read()))) {
        hash_64_ce1 = ap_const_logic_1;
    } else {
        hash_64_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_64_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read())))) {
        hash_64_we1 = ap_const_logic_1;
    } else {
        hash_64_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_65_address0 =  (sc_lv<5>) (newIndex722_fu_59699_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_65_address0 =  (sc_lv<5>) (newIndex2506925070_fu_51283_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_65_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_65_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_65_address1() {
    hash_65_address1 =  (sc_lv<5>) (newIndex230_reg_75088.read());
}

void calcHash_rollingHash::thread_hash_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_65_ce0 = ap_const_logic_1;
    } else {
        hash_65_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read()))) {
        hash_65_ce1 = ap_const_logic_1;
    } else {
        hash_65_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_65_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read())))) {
        hash_65_we1 = ap_const_logic_1;
    } else {
        hash_65_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_66_address0 =  (sc_lv<5>) (newIndex724_fu_59728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_66_address0 =  (sc_lv<5>) (newIndex2493824939_fu_51304_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_66_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_66_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_66_address1() {
    hash_66_address1 =  (sc_lv<5>) (newIndex233_reg_75114.read());
}

void calcHash_rollingHash::thread_hash_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_66_ce0 = ap_const_logic_1;
    } else {
        hash_66_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read()))) {
        hash_66_ce1 = ap_const_logic_1;
    } else {
        hash_66_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_66_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read())))) {
        hash_66_we1 = ap_const_logic_1;
    } else {
        hash_66_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_67_address0 =  (sc_lv<5>) (newIndex726_fu_59757_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_67_address0 =  (sc_lv<5>) (newIndex2480724808_fu_51325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_67_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_67_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_67_address1() {
    hash_67_address1 =  (sc_lv<5>) (newIndex236_reg_75129.read());
}

void calcHash_rollingHash::thread_hash_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_67_ce0 = ap_const_logic_1;
    } else {
        hash_67_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read()))) {
        hash_67_ce1 = ap_const_logic_1;
    } else {
        hash_67_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_67_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read())))) {
        hash_67_we1 = ap_const_logic_1;
    } else {
        hash_67_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_68_address0 =  (sc_lv<5>) (newIndex728_fu_59786_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_68_address0 =  (sc_lv<5>) (newIndex2467624677_fu_51346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_68_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_68_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_68_address1() {
    hash_68_address1 =  (sc_lv<5>) (newIndex239_reg_75155.read());
}

void calcHash_rollingHash::thread_hash_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_68_ce0 = ap_const_logic_1;
    } else {
        hash_68_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read()))) {
        hash_68_ce1 = ap_const_logic_1;
    } else {
        hash_68_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_68_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read())))) {
        hash_68_we1 = ap_const_logic_1;
    } else {
        hash_68_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_69_address0 =  (sc_lv<5>) (newIndex730_fu_59815_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_69_address0 =  (sc_lv<5>) (newIndex2454524546_fu_51367_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_69_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_69_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_69_address1() {
    hash_69_address1 =  (sc_lv<5>) (newIndex242_reg_75170.read());
}

void calcHash_rollingHash::thread_hash_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_69_ce0 = ap_const_logic_1;
    } else {
        hash_69_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read()))) {
        hash_69_ce1 = ap_const_logic_1;
    } else {
        hash_69_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_69_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read())))) {
        hash_69_we1 = ap_const_logic_1;
    } else {
        hash_69_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_6_address0 =  (sc_lv<5>) (newIndex603_fu_57988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_6_address0 =  (sc_lv<5>) (newIndex3279832799_fu_50044_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_6_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_6_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_6_address1() {
    hash_6_address1 =  (sc_lv<5>) (newIndex6646566466_reg_73884.read());
}

void calcHash_rollingHash::thread_hash_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_6_ce0 = ap_const_logic_1;
    } else {
        hash_6_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read()))) {
        hash_6_ce1 = ap_const_logic_1;
    } else {
        hash_6_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read())))) {
        hash_6_we1 = ap_const_logic_1;
    } else {
        hash_6_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_70_address0 =  (sc_lv<5>) (newIndex732_fu_59844_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_70_address0 =  (sc_lv<5>) (newIndex2441424415_fu_51388_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_70_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_70_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_70_address1() {
    hash_70_address1 =  (sc_lv<5>) (newIndex245_reg_75196.read());
}

void calcHash_rollingHash::thread_hash_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_70_ce0 = ap_const_logic_1;
    } else {
        hash_70_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read()))) {
        hash_70_ce1 = ap_const_logic_1;
    } else {
        hash_70_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_70_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read())))) {
        hash_70_we1 = ap_const_logic_1;
    } else {
        hash_70_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_71_address0 =  (sc_lv<5>) (newIndex734_fu_59873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_71_address0 =  (sc_lv<5>) (newIndex2428324284_fu_51409_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_71_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_71_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_71_address1() {
    hash_71_address1 =  (sc_lv<5>) (newIndex248_reg_75211.read());
}

void calcHash_rollingHash::thread_hash_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_71_ce0 = ap_const_logic_1;
    } else {
        hash_71_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read()))) {
        hash_71_ce1 = ap_const_logic_1;
    } else {
        hash_71_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_71_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read())))) {
        hash_71_we1 = ap_const_logic_1;
    } else {
        hash_71_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_72_address0 =  (sc_lv<5>) (newIndex736_fu_59902_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_72_address0 =  (sc_lv<5>) (newIndex2415224153_fu_51430_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_72_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_72_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_72_address1() {
    hash_72_address1 =  (sc_lv<5>) (newIndex251_reg_75237.read());
}

void calcHash_rollingHash::thread_hash_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_72_ce0 = ap_const_logic_1;
    } else {
        hash_72_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read()))) {
        hash_72_ce1 = ap_const_logic_1;
    } else {
        hash_72_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_72_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read())))) {
        hash_72_we1 = ap_const_logic_1;
    } else {
        hash_72_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_73_address0 =  (sc_lv<5>) (newIndex738_fu_59931_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_73_address0 =  (sc_lv<5>) (newIndex2402124022_fu_51451_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_73_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_73_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_73_address1() {
    hash_73_address1 =  (sc_lv<5>) (newIndex254_reg_75252.read());
}

void calcHash_rollingHash::thread_hash_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_73_ce0 = ap_const_logic_1;
    } else {
        hash_73_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read()))) {
        hash_73_ce1 = ap_const_logic_1;
    } else {
        hash_73_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_73_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read())))) {
        hash_73_we1 = ap_const_logic_1;
    } else {
        hash_73_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_74_address0 =  (sc_lv<5>) (newIndex740_fu_59960_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_74_address0 =  (sc_lv<5>) (newIndex2389023891_fu_51472_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_74_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_74_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_74_address1() {
    hash_74_address1 =  (sc_lv<5>) (newIndex257_reg_75278.read());
}

void calcHash_rollingHash::thread_hash_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_74_ce0 = ap_const_logic_1;
    } else {
        hash_74_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read()))) {
        hash_74_ce1 = ap_const_logic_1;
    } else {
        hash_74_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_74_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read())))) {
        hash_74_we1 = ap_const_logic_1;
    } else {
        hash_74_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_75_address0 =  (sc_lv<5>) (newIndex742_fu_59989_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_75_address0 =  (sc_lv<5>) (newIndex2375923760_fu_51493_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_75_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_75_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_75_address1() {
    hash_75_address1 =  (sc_lv<5>) (newIndex260_reg_75293.read());
}

void calcHash_rollingHash::thread_hash_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_75_ce0 = ap_const_logic_1;
    } else {
        hash_75_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read()))) {
        hash_75_ce1 = ap_const_logic_1;
    } else {
        hash_75_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_75_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read())))) {
        hash_75_we1 = ap_const_logic_1;
    } else {
        hash_75_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_76_address0 =  (sc_lv<5>) (newIndex744_fu_60018_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_76_address0 =  (sc_lv<5>) (newIndex2362823629_fu_51514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_76_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_76_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_76_address1() {
    hash_76_address1 =  (sc_lv<5>) (newIndex263_reg_75319.read());
}

void calcHash_rollingHash::thread_hash_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_76_ce0 = ap_const_logic_1;
    } else {
        hash_76_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read()))) {
        hash_76_ce1 = ap_const_logic_1;
    } else {
        hash_76_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_76_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read())))) {
        hash_76_we1 = ap_const_logic_1;
    } else {
        hash_76_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_77_address0 =  (sc_lv<5>) (newIndex746_fu_60047_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_77_address0 =  (sc_lv<5>) (newIndex2349723498_fu_51535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_77_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_77_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_77_address1() {
    hash_77_address1 =  (sc_lv<5>) (newIndex266_reg_75334.read());
}

void calcHash_rollingHash::thread_hash_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_77_ce0 = ap_const_logic_1;
    } else {
        hash_77_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read()))) {
        hash_77_ce1 = ap_const_logic_1;
    } else {
        hash_77_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_77_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read())))) {
        hash_77_we1 = ap_const_logic_1;
    } else {
        hash_77_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_78_address0 =  (sc_lv<5>) (newIndex748_fu_60076_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_78_address0 =  (sc_lv<5>) (newIndex2336623367_fu_51556_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_78_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_78_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_78_address1() {
    hash_78_address1 =  (sc_lv<5>) (newIndex269_reg_75360.read());
}

void calcHash_rollingHash::thread_hash_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_78_ce0 = ap_const_logic_1;
    } else {
        hash_78_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read()))) {
        hash_78_ce1 = ap_const_logic_1;
    } else {
        hash_78_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_78_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read())))) {
        hash_78_we1 = ap_const_logic_1;
    } else {
        hash_78_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_79_address0 =  (sc_lv<5>) (newIndex750_fu_60105_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_79_address0 =  (sc_lv<5>) (newIndex2323523236_fu_51577_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_79_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_79_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_79_address1() {
    hash_79_address1 =  (sc_lv<5>) (newIndex272_reg_75375.read());
}

void calcHash_rollingHash::thread_hash_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_79_ce0 = ap_const_logic_1;
    } else {
        hash_79_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read()))) {
        hash_79_ce1 = ap_const_logic_1;
    } else {
        hash_79_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_79_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read())))) {
        hash_79_we1 = ap_const_logic_1;
    } else {
        hash_79_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_7_address0 =  (sc_lv<5>) (newIndex605_fu_58017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_7_address0 =  (sc_lv<5>) (newIndex3266732668_fu_50065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_7_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_7_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_7_address1() {
    hash_7_address1 =  (sc_lv<5>) (newIndex6633466335_reg_73899.read());
}

void calcHash_rollingHash::thread_hash_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_7_ce0 = ap_const_logic_1;
    } else {
        hash_7_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read()))) {
        hash_7_ce1 = ap_const_logic_1;
    } else {
        hash_7_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read())))) {
        hash_7_we1 = ap_const_logic_1;
    } else {
        hash_7_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_80_address0 =  (sc_lv<5>) (newIndex752_fu_60134_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_80_address0 =  (sc_lv<5>) (newIndex2310423105_fu_51598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_80_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_80_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_80_address1() {
    hash_80_address1 =  (sc_lv<5>) (newIndex275_reg_75401.read());
}

void calcHash_rollingHash::thread_hash_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_80_ce0 = ap_const_logic_1;
    } else {
        hash_80_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read()))) {
        hash_80_ce1 = ap_const_logic_1;
    } else {
        hash_80_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_80_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read())))) {
        hash_80_we1 = ap_const_logic_1;
    } else {
        hash_80_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_81_address0 =  (sc_lv<5>) (newIndex754_fu_60163_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_81_address0 =  (sc_lv<5>) (newIndex2297322974_fu_51619_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_81_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_81_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_81_address1() {
    hash_81_address1 =  (sc_lv<5>) (newIndex278_reg_75416.read());
}

void calcHash_rollingHash::thread_hash_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_81_ce0 = ap_const_logic_1;
    } else {
        hash_81_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read()))) {
        hash_81_ce1 = ap_const_logic_1;
    } else {
        hash_81_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_81_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read())))) {
        hash_81_we1 = ap_const_logic_1;
    } else {
        hash_81_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_82_address0 =  (sc_lv<5>) (newIndex756_fu_60192_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_82_address0 =  (sc_lv<5>) (newIndex2284222843_fu_51640_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_82_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_82_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_82_address1() {
    hash_82_address1 =  (sc_lv<5>) (newIndex281_reg_75442.read());
}

void calcHash_rollingHash::thread_hash_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_82_ce0 = ap_const_logic_1;
    } else {
        hash_82_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read()))) {
        hash_82_ce1 = ap_const_logic_1;
    } else {
        hash_82_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_82_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read())))) {
        hash_82_we1 = ap_const_logic_1;
    } else {
        hash_82_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_83_address0 =  (sc_lv<5>) (newIndex758_fu_60221_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_83_address0 =  (sc_lv<5>) (newIndex2271122712_fu_51661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_83_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_83_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_83_address1() {
    hash_83_address1 =  (sc_lv<5>) (newIndex284_reg_75457.read());
}

void calcHash_rollingHash::thread_hash_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_83_ce0 = ap_const_logic_1;
    } else {
        hash_83_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read()))) {
        hash_83_ce1 = ap_const_logic_1;
    } else {
        hash_83_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_83_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read())))) {
        hash_83_we1 = ap_const_logic_1;
    } else {
        hash_83_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_84_address0 =  (sc_lv<5>) (newIndex760_fu_60250_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_84_address0 =  (sc_lv<5>) (newIndex2258022581_fu_51682_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_84_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_84_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_84_address1() {
    hash_84_address1 =  (sc_lv<5>) (newIndex287_reg_75483.read());
}

void calcHash_rollingHash::thread_hash_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_84_ce0 = ap_const_logic_1;
    } else {
        hash_84_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read()))) {
        hash_84_ce1 = ap_const_logic_1;
    } else {
        hash_84_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_84_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read())))) {
        hash_84_we1 = ap_const_logic_1;
    } else {
        hash_84_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_85_address0 =  (sc_lv<5>) (newIndex762_fu_60279_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_85_address0 =  (sc_lv<5>) (newIndex2244922450_fu_51703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_85_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_85_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_85_address1() {
    hash_85_address1 =  (sc_lv<5>) (newIndex290_reg_75498.read());
}

void calcHash_rollingHash::thread_hash_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_85_ce0 = ap_const_logic_1;
    } else {
        hash_85_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read()))) {
        hash_85_ce1 = ap_const_logic_1;
    } else {
        hash_85_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_85_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read())))) {
        hash_85_we1 = ap_const_logic_1;
    } else {
        hash_85_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_86_address0 =  (sc_lv<5>) (newIndex764_fu_60308_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_86_address0 =  (sc_lv<5>) (newIndex2231822319_fu_51724_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_86_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_86_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_86_address1() {
    hash_86_address1 =  (sc_lv<5>) (newIndex293_reg_75524.read());
}

void calcHash_rollingHash::thread_hash_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_86_ce0 = ap_const_logic_1;
    } else {
        hash_86_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read()))) {
        hash_86_ce1 = ap_const_logic_1;
    } else {
        hash_86_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_86_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read())))) {
        hash_86_we1 = ap_const_logic_1;
    } else {
        hash_86_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_87_address0 =  (sc_lv<5>) (newIndex766_fu_60337_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_87_address0 =  (sc_lv<5>) (newIndex2218722188_fu_51745_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_87_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_87_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_87_address1() {
    hash_87_address1 =  (sc_lv<5>) (newIndex296_reg_75539.read());
}

void calcHash_rollingHash::thread_hash_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_87_ce0 = ap_const_logic_1;
    } else {
        hash_87_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read()))) {
        hash_87_ce1 = ap_const_logic_1;
    } else {
        hash_87_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_87_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read())))) {
        hash_87_we1 = ap_const_logic_1;
    } else {
        hash_87_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_88_address0 =  (sc_lv<5>) (newIndex768_fu_60366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_88_address0 =  (sc_lv<5>) (newIndex2205622057_fu_51766_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_88_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_88_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_88_address1() {
    hash_88_address1 =  (sc_lv<5>) (newIndex299_reg_75565.read());
}

void calcHash_rollingHash::thread_hash_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_88_ce0 = ap_const_logic_1;
    } else {
        hash_88_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read()))) {
        hash_88_ce1 = ap_const_logic_1;
    } else {
        hash_88_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_88_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read())))) {
        hash_88_we1 = ap_const_logic_1;
    } else {
        hash_88_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_89_address0 =  (sc_lv<5>) (newIndex770_fu_60395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_89_address0 =  (sc_lv<5>) (newIndex2192521926_fu_51787_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_89_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_89_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_89_address1() {
    hash_89_address1 =  (sc_lv<5>) (newIndex302_reg_75580.read());
}

void calcHash_rollingHash::thread_hash_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_89_ce0 = ap_const_logic_1;
    } else {
        hash_89_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read()))) {
        hash_89_ce1 = ap_const_logic_1;
    } else {
        hash_89_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_89_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read())))) {
        hash_89_we1 = ap_const_logic_1;
    } else {
        hash_89_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_8_address0 =  (sc_lv<5>) (newIndex607_fu_58046_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_8_address0 =  (sc_lv<5>) (newIndex3253632537_fu_50086_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_8_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_8_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_8_address1() {
    hash_8_address1 =  (sc_lv<5>) (newIndex6620366204_reg_73925.read());
}

void calcHash_rollingHash::thread_hash_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_8_ce0 = ap_const_logic_1;
    } else {
        hash_8_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read()))) {
        hash_8_ce1 = ap_const_logic_1;
    } else {
        hash_8_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read())))) {
        hash_8_we1 = ap_const_logic_1;
    } else {
        hash_8_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_90_address0 =  (sc_lv<5>) (newIndex772_fu_60424_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_90_address0 =  (sc_lv<5>) (newIndex2179421795_fu_51808_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_90_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_90_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_90_address1() {
    hash_90_address1 =  (sc_lv<5>) (newIndex305_reg_75606.read());
}

void calcHash_rollingHash::thread_hash_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_90_ce0 = ap_const_logic_1;
    } else {
        hash_90_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read()))) {
        hash_90_ce1 = ap_const_logic_1;
    } else {
        hash_90_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_90_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read())))) {
        hash_90_we1 = ap_const_logic_1;
    } else {
        hash_90_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_91_address0 =  (sc_lv<5>) (newIndex774_fu_60453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_91_address0 =  (sc_lv<5>) (newIndex2166321664_fu_51829_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_91_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_91_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_91_address1() {
    hash_91_address1 =  (sc_lv<5>) (newIndex308_reg_75621.read());
}

void calcHash_rollingHash::thread_hash_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_91_ce0 = ap_const_logic_1;
    } else {
        hash_91_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read()))) {
        hash_91_ce1 = ap_const_logic_1;
    } else {
        hash_91_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_91_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read())))) {
        hash_91_we1 = ap_const_logic_1;
    } else {
        hash_91_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_92_address0 =  (sc_lv<5>) (newIndex776_fu_60482_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_92_address0 =  (sc_lv<5>) (newIndex2153221533_fu_51850_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_92_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_92_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_92_address1() {
    hash_92_address1 =  (sc_lv<5>) (newIndex312_reg_75647.read());
}

void calcHash_rollingHash::thread_hash_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_92_ce0 = ap_const_logic_1;
    } else {
        hash_92_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read()))) {
        hash_92_ce1 = ap_const_logic_1;
    } else {
        hash_92_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_92_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read())))) {
        hash_92_we1 = ap_const_logic_1;
    } else {
        hash_92_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_93_address0 =  (sc_lv<5>) (newIndex778_fu_60511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_93_address0 =  (sc_lv<5>) (newIndex520_fu_51871_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_93_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_93_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_93_address1() {
    hash_93_address1 =  (sc_lv<5>) (newIndex315_reg_75662.read());
}

void calcHash_rollingHash::thread_hash_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_93_ce0 = ap_const_logic_1;
    } else {
        hash_93_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read()))) {
        hash_93_ce1 = ap_const_logic_1;
    } else {
        hash_93_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_93_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read())))) {
        hash_93_we1 = ap_const_logic_1;
    } else {
        hash_93_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_94_address0 =  (sc_lv<5>) (newIndex780_fu_60540_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_94_address0 =  (sc_lv<5>) (newIndex522_fu_51892_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_94_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_94_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_94_address1() {
    hash_94_address1 =  (sc_lv<5>) (newIndex318_reg_75688.read());
}

void calcHash_rollingHash::thread_hash_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_94_ce0 = ap_const_logic_1;
    } else {
        hash_94_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read()))) {
        hash_94_ce1 = ap_const_logic_1;
    } else {
        hash_94_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_94_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read())))) {
        hash_94_we1 = ap_const_logic_1;
    } else {
        hash_94_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_95_address0 =  (sc_lv<5>) (newIndex782_fu_60569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_95_address0 =  (sc_lv<5>) (newIndex524_fu_51913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_95_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_95_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_95_address1() {
    hash_95_address1 =  (sc_lv<5>) (newIndex321_reg_75703.read());
}

void calcHash_rollingHash::thread_hash_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_95_ce0 = ap_const_logic_1;
    } else {
        hash_95_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read()))) {
        hash_95_ce1 = ap_const_logic_1;
    } else {
        hash_95_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_95_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read())))) {
        hash_95_we1 = ap_const_logic_1;
    } else {
        hash_95_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_96_address0 =  (sc_lv<5>) (newIndex784_fu_60598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_96_address0 =  (sc_lv<5>) (newIndex526_fu_51934_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_96_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_96_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_96_address1() {
    hash_96_address1 =  (sc_lv<5>) (newIndex324_reg_75729.read());
}

void calcHash_rollingHash::thread_hash_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_96_ce0 = ap_const_logic_1;
    } else {
        hash_96_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read()))) {
        hash_96_ce1 = ap_const_logic_1;
    } else {
        hash_96_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_96_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read())))) {
        hash_96_we1 = ap_const_logic_1;
    } else {
        hash_96_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_97_address0 =  (sc_lv<5>) (newIndex786_fu_60627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_97_address0 =  (sc_lv<5>) (newIndex528_fu_51955_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_97_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_97_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_97_address1() {
    hash_97_address1 =  (sc_lv<5>) (newIndex327_reg_75744.read());
}

void calcHash_rollingHash::thread_hash_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_97_ce0 = ap_const_logic_1;
    } else {
        hash_97_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read()))) {
        hash_97_ce1 = ap_const_logic_1;
    } else {
        hash_97_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_97_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read())))) {
        hash_97_we1 = ap_const_logic_1;
    } else {
        hash_97_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_98_address0 =  (sc_lv<5>) (newIndex788_fu_60656_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_98_address0 =  (sc_lv<5>) (newIndex530_fu_51976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_98_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_98_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_98_address1() {
    hash_98_address1 =  (sc_lv<5>) (newIndex330_reg_75770.read());
}

void calcHash_rollingHash::thread_hash_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_98_ce0 = ap_const_logic_1;
    } else {
        hash_98_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read()))) {
        hash_98_ce1 = ap_const_logic_1;
    } else {
        hash_98_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_98_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read())))) {
        hash_98_we1 = ap_const_logic_1;
    } else {
        hash_98_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_99_address0 =  (sc_lv<5>) (newIndex790_fu_60685_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_99_address0 =  (sc_lv<5>) (newIndex532_fu_51997_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_99_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_99_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_99_address1() {
    hash_99_address1 =  (sc_lv<5>) (newIndex333_reg_75785.read());
}

void calcHash_rollingHash::thread_hash_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_99_ce0 = ap_const_logic_1;
    } else {
        hash_99_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read()))) {
        hash_99_ce1 = ap_const_logic_1;
    } else {
        hash_99_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_99_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read())))) {
        hash_99_we1 = ap_const_logic_1;
    } else {
        hash_99_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read())) {
        hash_9_address0 =  (sc_lv<5>) (newIndex609_fu_58075_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read())) {
        hash_9_address0 =  (sc_lv<5>) (newIndex3240532406_fu_50107_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read())) {
        hash_9_address0 =  (sc_lv<5>) (newIndex424_fu_44362_p1.read());
    } else {
        hash_9_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_hash_9_address1() {
    hash_9_address1 =  (sc_lv<5>) (newIndex6607266073_reg_73940.read());
}

void calcHash_rollingHash::thread_hash_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st76_fsm_72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st80_fsm_76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st84_fsm_80.read()))) {
        hash_9_ce0 = ap_const_logic_1;
    } else {
        hash_9_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read()))) {
        hash_9_ce1 = ap_const_logic_1;
    } else {
        hash_9_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_hash_9_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read())))) {
        hash_9_we1 = ap_const_logic_1;
    } else {
        hash_9_we1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_i_1_cast_fu_36598_p1() {
    i_1_cast_fu_36598_p1 = esl_zext<13,12>(i_1_reg_18706.read());
}

void calcHash_rollingHash::thread_i_1_phi_fu_18710_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond2_reg_73628.read(), ap_const_lv1_0))) {
        i_1_phi_fu_18710_p4 = i_4_126_reg_76358.read();
    } else {
        i_1_phi_fu_18710_p4 = i_1_reg_18706.read();
    }
}

void calcHash_rollingHash::thread_i_4_100_fu_42791_p2() {
    i_4_100_fu_42791_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_66.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_66));
}

void calcHash_rollingHash::thread_i_4_101_fu_42871_p2() {
    i_4_101_fu_42871_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_67.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_67));
}

void calcHash_rollingHash::thread_i_4_102_fu_42912_p2() {
    i_4_102_fu_42912_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_68.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_68));
}

void calcHash_rollingHash::thread_i_4_103_fu_42992_p2() {
    i_4_103_fu_42992_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_69.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_69));
}

void calcHash_rollingHash::thread_i_4_104_fu_43033_p2() {
    i_4_104_fu_43033_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6A));
}

void calcHash_rollingHash::thread_i_4_105_fu_43113_p2() {
    i_4_105_fu_43113_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6B));
}

void calcHash_rollingHash::thread_i_4_106_fu_43154_p2() {
    i_4_106_fu_43154_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6C));
}

void calcHash_rollingHash::thread_i_4_107_fu_43234_p2() {
    i_4_107_fu_43234_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6D));
}

void calcHash_rollingHash::thread_i_4_108_fu_43275_p2() {
    i_4_108_fu_43275_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6E));
}

void calcHash_rollingHash::thread_i_4_109_fu_43355_p2() {
    i_4_109_fu_43355_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6F));
}

void calcHash_rollingHash::thread_i_4_10_fu_37346_p2() {
    i_4_10_fu_37346_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_C));
}

void calcHash_rollingHash::thread_i_4_110_fu_43396_p2() {
    i_4_110_fu_43396_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_70.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_70));
}

void calcHash_rollingHash::thread_i_4_111_fu_43476_p2() {
    i_4_111_fu_43476_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_71.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_71));
}

void calcHash_rollingHash::thread_i_4_112_fu_43517_p2() {
    i_4_112_fu_43517_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_72.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_72));
}

void calcHash_rollingHash::thread_i_4_113_fu_43597_p2() {
    i_4_113_fu_43597_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_73.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_73));
}

void calcHash_rollingHash::thread_i_4_114_fu_43638_p2() {
    i_4_114_fu_43638_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_74.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_74));
}

void calcHash_rollingHash::thread_i_4_115_fu_43718_p2() {
    i_4_115_fu_43718_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_75.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_75));
}

void calcHash_rollingHash::thread_i_4_116_fu_43759_p2() {
    i_4_116_fu_43759_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_76.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_76));
}

void calcHash_rollingHash::thread_i_4_117_fu_43839_p2() {
    i_4_117_fu_43839_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_77.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_77));
}

void calcHash_rollingHash::thread_i_4_118_fu_43880_p2() {
    i_4_118_fu_43880_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_78.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_78));
}

void calcHash_rollingHash::thread_i_4_119_fu_43960_p2() {
    i_4_119_fu_43960_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_79.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_79));
}

void calcHash_rollingHash::thread_i_4_11_fu_37426_p2() {
    i_4_11_fu_37426_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_D));
}

void calcHash_rollingHash::thread_i_4_120_fu_44001_p2() {
    i_4_120_fu_44001_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7A));
}

void calcHash_rollingHash::thread_i_4_121_fu_44081_p2() {
    i_4_121_fu_44081_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7B));
}

void calcHash_rollingHash::thread_i_4_122_fu_44122_p2() {
    i_4_122_fu_44122_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7C));
}

void calcHash_rollingHash::thread_i_4_123_fu_44143_p2() {
    i_4_123_fu_44143_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7D));
}

void calcHash_rollingHash::thread_i_4_124_fu_44179_p2() {
    i_4_124_fu_44179_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7E));
}

void calcHash_rollingHash::thread_i_4_125_fu_44215_p2() {
    i_4_125_fu_44215_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7F));
}

void calcHash_rollingHash::thread_i_4_126_fu_44246_p2() {
    i_4_126_fu_44246_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void calcHash_rollingHash::thread_i_4_12_fu_37467_p2() {
    i_4_12_fu_37467_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_E));
}

void calcHash_rollingHash::thread_i_4_13_fu_37547_p2() {
    i_4_13_fu_37547_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_F));
}

void calcHash_rollingHash::thread_i_4_14_fu_37588_p2() {
    i_4_14_fu_37588_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void calcHash_rollingHash::thread_i_4_15_fu_37668_p2() {
    i_4_15_fu_37668_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void calcHash_rollingHash::thread_i_4_16_fu_37709_p2() {
    i_4_16_fu_37709_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_12.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_12));
}

void calcHash_rollingHash::thread_i_4_17_fu_37789_p2() {
    i_4_17_fu_37789_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_13.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_13));
}

void calcHash_rollingHash::thread_i_4_18_fu_37830_p2() {
    i_4_18_fu_37830_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_14));
}

void calcHash_rollingHash::thread_i_4_19_fu_37910_p2() {
    i_4_19_fu_37910_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_15.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_15));
}

void calcHash_rollingHash::thread_i_4_1_fu_36741_p2() {
    i_4_1_fu_36741_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2));
}

void calcHash_rollingHash::thread_i_4_20_fu_37951_p2() {
    i_4_20_fu_37951_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_16.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_16));
}

void calcHash_rollingHash::thread_i_4_21_fu_38031_p2() {
    i_4_21_fu_38031_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_17.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_17));
}

void calcHash_rollingHash::thread_i_4_22_fu_38072_p2() {
    i_4_22_fu_38072_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_18.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_18));
}

void calcHash_rollingHash::thread_i_4_23_fu_38152_p2() {
    i_4_23_fu_38152_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_19.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_19));
}

void calcHash_rollingHash::thread_i_4_24_fu_38193_p2() {
    i_4_24_fu_38193_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1A));
}

void calcHash_rollingHash::thread_i_4_25_fu_38273_p2() {
    i_4_25_fu_38273_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1B));
}

void calcHash_rollingHash::thread_i_4_26_fu_38314_p2() {
    i_4_26_fu_38314_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1C));
}

void calcHash_rollingHash::thread_i_4_27_fu_38394_p2() {
    i_4_27_fu_38394_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1D));
}

void calcHash_rollingHash::thread_i_4_28_fu_38435_p2() {
    i_4_28_fu_38435_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1E));
}

void calcHash_rollingHash::thread_i_4_29_fu_38515_p2() {
    i_4_29_fu_38515_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1F));
}

void calcHash_rollingHash::thread_i_4_2_fu_36821_p2() {
    i_4_2_fu_36821_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3));
}

void calcHash_rollingHash::thread_i_4_30_fu_38556_p2() {
    i_4_30_fu_38556_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_20.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_20));
}

void calcHash_rollingHash::thread_i_4_31_fu_38636_p2() {
    i_4_31_fu_38636_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_21.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_21));
}

void calcHash_rollingHash::thread_i_4_32_fu_38677_p2() {
    i_4_32_fu_38677_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_22.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_22));
}

void calcHash_rollingHash::thread_i_4_33_fu_38757_p2() {
    i_4_33_fu_38757_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_23.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_23));
}

void calcHash_rollingHash::thread_i_4_34_fu_38798_p2() {
    i_4_34_fu_38798_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_24.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_24));
}

void calcHash_rollingHash::thread_i_4_35_fu_38878_p2() {
    i_4_35_fu_38878_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_25.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_25));
}

void calcHash_rollingHash::thread_i_4_36_fu_38919_p2() {
    i_4_36_fu_38919_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_26.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_26));
}

void calcHash_rollingHash::thread_i_4_37_fu_38999_p2() {
    i_4_37_fu_38999_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_27.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_27));
}

void calcHash_rollingHash::thread_i_4_38_fu_39040_p2() {
    i_4_38_fu_39040_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_28.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_28));
}

void calcHash_rollingHash::thread_i_4_39_fu_39120_p2() {
    i_4_39_fu_39120_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_29.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_29));
}

void calcHash_rollingHash::thread_i_4_3_fu_36862_p2() {
    i_4_3_fu_36862_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4));
}

void calcHash_rollingHash::thread_i_4_40_fu_39161_p2() {
    i_4_40_fu_39161_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2A));
}

void calcHash_rollingHash::thread_i_4_41_fu_39241_p2() {
    i_4_41_fu_39241_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2B));
}

void calcHash_rollingHash::thread_i_4_42_fu_39282_p2() {
    i_4_42_fu_39282_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2C));
}

void calcHash_rollingHash::thread_i_4_43_fu_39362_p2() {
    i_4_43_fu_39362_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2D));
}

void calcHash_rollingHash::thread_i_4_44_fu_39403_p2() {
    i_4_44_fu_39403_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2E));
}

void calcHash_rollingHash::thread_i_4_45_fu_39483_p2() {
    i_4_45_fu_39483_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_2F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_2F));
}

void calcHash_rollingHash::thread_i_4_46_fu_39524_p2() {
    i_4_46_fu_39524_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_30.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_30));
}

void calcHash_rollingHash::thread_i_4_47_fu_39604_p2() {
    i_4_47_fu_39604_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_31.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_31));
}

void calcHash_rollingHash::thread_i_4_48_fu_39645_p2() {
    i_4_48_fu_39645_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_32.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_32));
}

void calcHash_rollingHash::thread_i_4_49_fu_39725_p2() {
    i_4_49_fu_39725_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_33.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_33));
}

void calcHash_rollingHash::thread_i_4_4_fu_36942_p2() {
    i_4_4_fu_36942_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5));
}

void calcHash_rollingHash::thread_i_4_50_fu_39766_p2() {
    i_4_50_fu_39766_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_34.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_34));
}

void calcHash_rollingHash::thread_i_4_51_fu_39846_p2() {
    i_4_51_fu_39846_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_35));
}

void calcHash_rollingHash::thread_i_4_52_fu_39887_p2() {
    i_4_52_fu_39887_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_36));
}

void calcHash_rollingHash::thread_i_4_53_fu_39967_p2() {
    i_4_53_fu_39967_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_37.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_37));
}

void calcHash_rollingHash::thread_i_4_54_fu_40008_p2() {
    i_4_54_fu_40008_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_38.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_38));
}

void calcHash_rollingHash::thread_i_4_55_fu_40088_p2() {
    i_4_55_fu_40088_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_39.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_39));
}

void calcHash_rollingHash::thread_i_4_56_fu_40129_p2() {
    i_4_56_fu_40129_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3A));
}

void calcHash_rollingHash::thread_i_4_57_fu_40209_p2() {
    i_4_57_fu_40209_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3B));
}

void calcHash_rollingHash::thread_i_4_58_fu_40250_p2() {
    i_4_58_fu_40250_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3C));
}

void calcHash_rollingHash::thread_i_4_59_fu_40330_p2() {
    i_4_59_fu_40330_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3D));
}

void calcHash_rollingHash::thread_i_4_5_fu_36983_p2() {
    i_4_5_fu_36983_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_6));
}

void calcHash_rollingHash::thread_i_4_60_fu_40371_p2() {
    i_4_60_fu_40371_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3E));
}

void calcHash_rollingHash::thread_i_4_61_fu_40451_p2() {
    i_4_61_fu_40451_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_3F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_3F));
}

void calcHash_rollingHash::thread_i_4_62_fu_40492_p2() {
    i_4_62_fu_40492_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_40.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_40));
}

void calcHash_rollingHash::thread_i_4_63_fu_40572_p2() {
    i_4_63_fu_40572_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_41.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_41));
}

void calcHash_rollingHash::thread_i_4_64_fu_40613_p2() {
    i_4_64_fu_40613_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_42.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_42));
}

void calcHash_rollingHash::thread_i_4_65_fu_40693_p2() {
    i_4_65_fu_40693_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_43.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_43));
}

void calcHash_rollingHash::thread_i_4_66_fu_40734_p2() {
    i_4_66_fu_40734_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_44.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_44));
}

void calcHash_rollingHash::thread_i_4_67_fu_40814_p2() {
    i_4_67_fu_40814_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_45.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_45));
}

void calcHash_rollingHash::thread_i_4_68_fu_40855_p2() {
    i_4_68_fu_40855_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_46.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_46));
}

void calcHash_rollingHash::thread_i_4_69_fu_40935_p2() {
    i_4_69_fu_40935_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_47.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_47));
}

void calcHash_rollingHash::thread_i_4_6_fu_37063_p2() {
    i_4_6_fu_37063_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_7.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_7));
}

void calcHash_rollingHash::thread_i_4_70_fu_40976_p2() {
    i_4_70_fu_40976_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_48.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_48));
}

void calcHash_rollingHash::thread_i_4_71_fu_41056_p2() {
    i_4_71_fu_41056_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_49.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_49));
}

void calcHash_rollingHash::thread_i_4_72_fu_41097_p2() {
    i_4_72_fu_41097_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4A));
}

void calcHash_rollingHash::thread_i_4_73_fu_41177_p2() {
    i_4_73_fu_41177_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4B));
}

void calcHash_rollingHash::thread_i_4_74_fu_41218_p2() {
    i_4_74_fu_41218_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4C));
}

void calcHash_rollingHash::thread_i_4_75_fu_41298_p2() {
    i_4_75_fu_41298_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4D));
}

void calcHash_rollingHash::thread_i_4_76_fu_41339_p2() {
    i_4_76_fu_41339_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4E));
}

void calcHash_rollingHash::thread_i_4_77_fu_41419_p2() {
    i_4_77_fu_41419_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_4F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_4F));
}

void calcHash_rollingHash::thread_i_4_78_fu_41460_p2() {
    i_4_78_fu_41460_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_50.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_50));
}

void calcHash_rollingHash::thread_i_4_79_fu_41540_p2() {
    i_4_79_fu_41540_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_51.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_51));
}

void calcHash_rollingHash::thread_i_4_7_fu_37104_p2() {
    i_4_7_fu_37104_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_8.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_8));
}

void calcHash_rollingHash::thread_i_4_80_fu_41581_p2() {
    i_4_80_fu_41581_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_52.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_52));
}

void calcHash_rollingHash::thread_i_4_81_fu_41661_p2() {
    i_4_81_fu_41661_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_53.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_53));
}

void calcHash_rollingHash::thread_i_4_82_fu_41702_p2() {
    i_4_82_fu_41702_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_54.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_54));
}

void calcHash_rollingHash::thread_i_4_83_fu_41782_p2() {
    i_4_83_fu_41782_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_55.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_55));
}

void calcHash_rollingHash::thread_i_4_84_fu_41823_p2() {
    i_4_84_fu_41823_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_56.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_56));
}

void calcHash_rollingHash::thread_i_4_85_fu_41903_p2() {
    i_4_85_fu_41903_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_57.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_57));
}

void calcHash_rollingHash::thread_i_4_86_fu_41944_p2() {
    i_4_86_fu_41944_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_58.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_58));
}

void calcHash_rollingHash::thread_i_4_87_fu_42024_p2() {
    i_4_87_fu_42024_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_59.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_59));
}

void calcHash_rollingHash::thread_i_4_88_fu_42065_p2() {
    i_4_88_fu_42065_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5A));
}

void calcHash_rollingHash::thread_i_4_89_fu_42145_p2() {
    i_4_89_fu_42145_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5B));
}

void calcHash_rollingHash::thread_i_4_8_fu_37184_p2() {
    i_4_8_fu_37184_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_9.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_9));
}

void calcHash_rollingHash::thread_i_4_90_fu_42186_p2() {
    i_4_90_fu_42186_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5C.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5C));
}

void calcHash_rollingHash::thread_i_4_91_fu_42266_p2() {
    i_4_91_fu_42266_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5D.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5D));
}

void calcHash_rollingHash::thread_i_4_92_fu_42307_p2() {
    i_4_92_fu_42307_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5E.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5E));
}

void calcHash_rollingHash::thread_i_4_93_fu_42387_p2() {
    i_4_93_fu_42387_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_5F.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_5F));
}

void calcHash_rollingHash::thread_i_4_94_fu_42428_p2() {
    i_4_94_fu_42428_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_60.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_60));
}

void calcHash_rollingHash::thread_i_4_95_fu_42508_p2() {
    i_4_95_fu_42508_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_61.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_61));
}

void calcHash_rollingHash::thread_i_4_96_fu_42549_p2() {
    i_4_96_fu_42549_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_62.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_62));
}

void calcHash_rollingHash::thread_i_4_97_fu_42629_p2() {
    i_4_97_fu_42629_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_63.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_63));
}

void calcHash_rollingHash::thread_i_4_98_fu_42670_p2() {
    i_4_98_fu_42670_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_64.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_64));
}

void calcHash_rollingHash::thread_i_4_99_fu_42750_p2() {
    i_4_99_fu_42750_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_65.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_65));
}

void calcHash_rollingHash::thread_i_4_9_fu_37225_p2() {
    i_4_9_fu_37225_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_A));
}

void calcHash_rollingHash::thread_i_4_fu_36700_p2() {
    i_4_fu_36700_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void calcHash_rollingHash::thread_i_4_s_fu_37305_p2() {
    i_4_s_fu_37305_p2 = (!i_1_reg_18706.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): (sc_biguint<12>(i_1_reg_18706.read()) + sc_biguint<12>(ap_const_lv12_B));
}

void calcHash_rollingHash::thread_index_0_s_fu_44526_p2() {
    index_0_s_fu_44526_p2 = (tmp_1024_fu_44494_p1.read() | ap_const_lv10_1);
}

void calcHash_rollingHash::thread_index_1_100_fu_52023_p2() {
    index_1_100_fu_52023_p2 = (!ap_const_lv12_465.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_465) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_101_fu_52044_p2() {
    index_1_101_fu_52044_p2 = (!ap_const_lv12_466.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_466) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_102_fu_52065_p2() {
    index_1_102_fu_52065_p2 = (!ap_const_lv12_467.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_467) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_103_fu_52086_p2() {
    index_1_103_fu_52086_p2 = (!ap_const_lv12_468.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_468) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_104_fu_52107_p2() {
    index_1_104_fu_52107_p2 = (!ap_const_lv12_469.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_469) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_105_fu_52128_p2() {
    index_1_105_fu_52128_p2 = (!ap_const_lv12_46A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_46A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_106_fu_52149_p2() {
    index_1_106_fu_52149_p2 = (!ap_const_lv12_46B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_46B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_107_fu_52170_p2() {
    index_1_107_fu_52170_p2 = (!ap_const_lv12_46C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_46C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_108_fu_52191_p2() {
    index_1_108_fu_52191_p2 = (!ap_const_lv12_46D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_46D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_109_fu_52212_p2() {
    index_1_109_fu_52212_p2 = (!ap_const_lv12_46E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_46E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_10_fu_50133_p2() {
    index_1_10_fu_50133_p2 = (!ap_const_lv12_40B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_40B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_110_fu_52233_p2() {
    index_1_110_fu_52233_p2 = (!ap_const_lv12_46F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_46F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_111_fu_52254_p2() {
    index_1_111_fu_52254_p2 = (!ap_const_lv12_470.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_470) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_112_fu_52275_p2() {
    index_1_112_fu_52275_p2 = (!ap_const_lv12_471.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_471) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_113_fu_52296_p2() {
    index_1_113_fu_52296_p2 = (!ap_const_lv12_472.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_472) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_114_fu_52317_p2() {
    index_1_114_fu_52317_p2 = (!ap_const_lv12_473.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_473) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_115_fu_52338_p2() {
    index_1_115_fu_52338_p2 = (!ap_const_lv12_474.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_474) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_116_fu_52359_p2() {
    index_1_116_fu_52359_p2 = (!ap_const_lv12_475.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_475) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_117_fu_52380_p2() {
    index_1_117_fu_52380_p2 = (!ap_const_lv12_476.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_476) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_118_fu_52401_p2() {
    index_1_118_fu_52401_p2 = (!ap_const_lv12_477.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_477) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_119_fu_52422_p2() {
    index_1_119_fu_52422_p2 = (!ap_const_lv12_478.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_478) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_11_fu_50154_p2() {
    index_1_11_fu_50154_p2 = (!ap_const_lv12_40C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_40C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_120_fu_52443_p2() {
    index_1_120_fu_52443_p2 = (!ap_const_lv12_479.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_479) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_121_fu_52464_p2() {
    index_1_121_fu_52464_p2 = (!ap_const_lv12_47A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_47A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_122_fu_52485_p2() {
    index_1_122_fu_52485_p2 = (!ap_const_lv12_47B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_47B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_123_fu_52506_p2() {
    index_1_123_fu_52506_p2 = (!ap_const_lv12_47C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_47C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_124_fu_52527_p2() {
    index_1_124_fu_52527_p2 = (!ap_const_lv12_47D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_47D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_125_fu_52548_p2() {
    index_1_125_fu_52548_p2 = (!ap_const_lv12_47E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_47E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_126_fu_52569_p2() {
    index_1_126_fu_52569_p2 = (!ap_const_lv12_47F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_47F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_12_fu_50175_p2() {
    index_1_12_fu_50175_p2 = (!ap_const_lv12_40D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_40D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_13_fu_50196_p2() {
    index_1_13_fu_50196_p2 = (!ap_const_lv12_40E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_40E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_14_fu_50217_p2() {
    index_1_14_fu_50217_p2 = (!ap_const_lv12_40F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_40F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_15_fu_50238_p2() {
    index_1_15_fu_50238_p2 = (!ap_const_lv12_410.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_410) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_16_fu_50259_p2() {
    index_1_16_fu_50259_p2 = (!ap_const_lv12_411.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_411) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_17_fu_50280_p2() {
    index_1_17_fu_50280_p2 = (!ap_const_lv12_412.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_412) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_18_fu_50301_p2() {
    index_1_18_fu_50301_p2 = (!ap_const_lv12_413.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_413) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_19_fu_50322_p2() {
    index_1_19_fu_50322_p2 = (!ap_const_lv12_414.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_414) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_1_fu_49923_p2() {
    index_1_1_fu_49923_p2 = (!ap_const_lv12_401.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_401) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_20_fu_50343_p2() {
    index_1_20_fu_50343_p2 = (!ap_const_lv12_415.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_415) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_21_fu_50364_p2() {
    index_1_21_fu_50364_p2 = (!ap_const_lv12_416.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_416) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_22_fu_50385_p2() {
    index_1_22_fu_50385_p2 = (!ap_const_lv12_417.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_417) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_23_fu_50406_p2() {
    index_1_23_fu_50406_p2 = (!ap_const_lv12_418.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_418) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_24_fu_50427_p2() {
    index_1_24_fu_50427_p2 = (!ap_const_lv12_419.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_419) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_25_fu_50448_p2() {
    index_1_25_fu_50448_p2 = (!ap_const_lv12_41A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_41A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_26_fu_50469_p2() {
    index_1_26_fu_50469_p2 = (!ap_const_lv12_41B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_41B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_27_fu_50490_p2() {
    index_1_27_fu_50490_p2 = (!ap_const_lv12_41C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_41C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_28_fu_50511_p2() {
    index_1_28_fu_50511_p2 = (!ap_const_lv12_41D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_41D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_29_fu_50532_p2() {
    index_1_29_fu_50532_p2 = (!ap_const_lv12_41E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_41E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_2_fu_49944_p2() {
    index_1_2_fu_49944_p2 = (!ap_const_lv12_402.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_402) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_30_fu_50553_p2() {
    index_1_30_fu_50553_p2 = (!ap_const_lv12_41F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_41F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_31_fu_50574_p2() {
    index_1_31_fu_50574_p2 = (!ap_const_lv12_420.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_420) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_32_fu_50595_p2() {
    index_1_32_fu_50595_p2 = (!ap_const_lv12_421.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_421) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_33_fu_50616_p2() {
    index_1_33_fu_50616_p2 = (!ap_const_lv12_422.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_422) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_34_fu_50637_p2() {
    index_1_34_fu_50637_p2 = (!ap_const_lv12_423.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_423) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_35_fu_50658_p2() {
    index_1_35_fu_50658_p2 = (!ap_const_lv12_424.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_424) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_36_fu_50679_p2() {
    index_1_36_fu_50679_p2 = (!ap_const_lv12_425.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_425) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_37_fu_50700_p2() {
    index_1_37_fu_50700_p2 = (!ap_const_lv12_426.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_426) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_38_fu_50721_p2() {
    index_1_38_fu_50721_p2 = (!ap_const_lv12_427.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_427) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_39_fu_50742_p2() {
    index_1_39_fu_50742_p2 = (!ap_const_lv12_428.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_428) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_3_fu_49965_p2() {
    index_1_3_fu_49965_p2 = (!ap_const_lv12_403.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_403) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_40_fu_50763_p2() {
    index_1_40_fu_50763_p2 = (!ap_const_lv12_429.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_429) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_41_fu_50784_p2() {
    index_1_41_fu_50784_p2 = (!ap_const_lv12_42A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_42A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_42_fu_50805_p2() {
    index_1_42_fu_50805_p2 = (!ap_const_lv12_42B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_42B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_43_fu_50826_p2() {
    index_1_43_fu_50826_p2 = (!ap_const_lv12_42C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_42C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_44_fu_50847_p2() {
    index_1_44_fu_50847_p2 = (!ap_const_lv12_42D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_42D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_45_fu_50868_p2() {
    index_1_45_fu_50868_p2 = (!ap_const_lv12_42E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_42E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_46_fu_50889_p2() {
    index_1_46_fu_50889_p2 = (!ap_const_lv12_42F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_42F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_47_fu_50910_p2() {
    index_1_47_fu_50910_p2 = (!ap_const_lv12_430.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_430) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_48_fu_50931_p2() {
    index_1_48_fu_50931_p2 = (!ap_const_lv12_431.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_431) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_49_fu_50952_p2() {
    index_1_49_fu_50952_p2 = (!ap_const_lv12_432.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_432) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_4_fu_49986_p2() {
    index_1_4_fu_49986_p2 = (!ap_const_lv12_404.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_404) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_50_fu_50973_p2() {
    index_1_50_fu_50973_p2 = (!ap_const_lv12_433.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_51_fu_50994_p2() {
    index_1_51_fu_50994_p2 = (!ap_const_lv12_434.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_434) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_52_fu_51015_p2() {
    index_1_52_fu_51015_p2 = (!ap_const_lv12_435.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_435) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_53_fu_51036_p2() {
    index_1_53_fu_51036_p2 = (!ap_const_lv12_436.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_436) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_54_fu_51057_p2() {
    index_1_54_fu_51057_p2 = (!ap_const_lv12_437.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_437) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_55_fu_51078_p2() {
    index_1_55_fu_51078_p2 = (!ap_const_lv12_438.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_438) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_56_fu_51099_p2() {
    index_1_56_fu_51099_p2 = (!ap_const_lv12_439.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_439) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_57_fu_51120_p2() {
    index_1_57_fu_51120_p2 = (!ap_const_lv12_43A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_43A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_58_fu_51141_p2() {
    index_1_58_fu_51141_p2 = (!ap_const_lv12_43B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_43B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_59_fu_51162_p2() {
    index_1_59_fu_51162_p2 = (!ap_const_lv12_43C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_43C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_5_fu_50007_p2() {
    index_1_5_fu_50007_p2 = (!ap_const_lv12_405.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_405) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_60_fu_51183_p2() {
    index_1_60_fu_51183_p2 = (!ap_const_lv12_43D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_43D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_61_fu_51204_p2() {
    index_1_61_fu_51204_p2 = (!ap_const_lv12_43E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_43E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_62_fu_51225_p2() {
    index_1_62_fu_51225_p2 = (!ap_const_lv12_43F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_43F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_63_fu_51246_p2() {
    index_1_63_fu_51246_p2 = (!ap_const_lv12_440.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_440) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_64_fu_51267_p2() {
    index_1_64_fu_51267_p2 = (!ap_const_lv12_441.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_441) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_65_fu_51288_p2() {
    index_1_65_fu_51288_p2 = (!ap_const_lv12_442.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_442) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_66_fu_51309_p2() {
    index_1_66_fu_51309_p2 = (!ap_const_lv12_443.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_443) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_67_fu_51330_p2() {
    index_1_67_fu_51330_p2 = (!ap_const_lv12_444.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_444) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_68_fu_51351_p2() {
    index_1_68_fu_51351_p2 = (!ap_const_lv12_445.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_445) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_69_fu_51372_p2() {
    index_1_69_fu_51372_p2 = (!ap_const_lv12_446.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_446) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_6_fu_50028_p2() {
    index_1_6_fu_50028_p2 = (!ap_const_lv12_406.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_406) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_70_fu_51393_p2() {
    index_1_70_fu_51393_p2 = (!ap_const_lv12_447.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_447) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_71_fu_51414_p2() {
    index_1_71_fu_51414_p2 = (!ap_const_lv12_448.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_448) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_72_fu_51435_p2() {
    index_1_72_fu_51435_p2 = (!ap_const_lv12_449.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_449) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_73_fu_51456_p2() {
    index_1_73_fu_51456_p2 = (!ap_const_lv12_44A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_44A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_74_fu_51477_p2() {
    index_1_74_fu_51477_p2 = (!ap_const_lv12_44B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_44B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_75_fu_51498_p2() {
    index_1_75_fu_51498_p2 = (!ap_const_lv12_44C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_44C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_76_fu_51519_p2() {
    index_1_76_fu_51519_p2 = (!ap_const_lv12_44D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_44D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_77_fu_51540_p2() {
    index_1_77_fu_51540_p2 = (!ap_const_lv12_44E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_44E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_78_fu_51561_p2() {
    index_1_78_fu_51561_p2 = (!ap_const_lv12_44F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_44F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_79_fu_51582_p2() {
    index_1_79_fu_51582_p2 = (!ap_const_lv12_450.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_450) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_7_fu_50049_p2() {
    index_1_7_fu_50049_p2 = (!ap_const_lv12_407.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_407) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_80_fu_51603_p2() {
    index_1_80_fu_51603_p2 = (!ap_const_lv12_451.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_451) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_81_fu_51624_p2() {
    index_1_81_fu_51624_p2 = (!ap_const_lv12_452.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_452) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_82_fu_51645_p2() {
    index_1_82_fu_51645_p2 = (!ap_const_lv12_453.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_453) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_83_fu_51666_p2() {
    index_1_83_fu_51666_p2 = (!ap_const_lv12_454.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_454) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_84_fu_51687_p2() {
    index_1_84_fu_51687_p2 = (!ap_const_lv12_455.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_455) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_85_fu_51708_p2() {
    index_1_85_fu_51708_p2 = (!ap_const_lv12_456.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_456) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_86_fu_51729_p2() {
    index_1_86_fu_51729_p2 = (!ap_const_lv12_457.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_457) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_87_fu_51750_p2() {
    index_1_87_fu_51750_p2 = (!ap_const_lv12_458.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_458) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_88_fu_51771_p2() {
    index_1_88_fu_51771_p2 = (!ap_const_lv12_459.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_459) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_89_fu_51792_p2() {
    index_1_89_fu_51792_p2 = (!ap_const_lv12_45A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_45A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_8_fu_50070_p2() {
    index_1_8_fu_50070_p2 = (!ap_const_lv12_408.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_408) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_90_fu_51813_p2() {
    index_1_90_fu_51813_p2 = (!ap_const_lv12_45B.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_45B) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_91_fu_51834_p2() {
    index_1_91_fu_51834_p2 = (!ap_const_lv12_45C.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_45C) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_92_fu_51855_p2() {
    index_1_92_fu_51855_p2 = (!ap_const_lv12_45D.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_45D) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_93_fu_51876_p2() {
    index_1_93_fu_51876_p2 = (!ap_const_lv12_45E.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_45E) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_94_fu_51897_p2() {
    index_1_94_fu_51897_p2 = (!ap_const_lv12_45F.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_45F) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_95_fu_51918_p2() {
    index_1_95_fu_51918_p2 = (!ap_const_lv12_460.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_460) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_96_fu_51939_p2() {
    index_1_96_fu_51939_p2 = (!ap_const_lv12_461.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_461) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_97_fu_51960_p2() {
    index_1_97_fu_51960_p2 = (!ap_const_lv12_462.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_462) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_98_fu_51981_p2() {
    index_1_98_fu_51981_p2 = (!ap_const_lv12_463.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_463) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_99_fu_52002_p2() {
    index_1_99_fu_52002_p2 = (!ap_const_lv12_464.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_464) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_9_fu_50091_p2() {
    index_1_9_fu_50091_p2 = (!ap_const_lv12_409.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_409) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_1_cast_fu_52596_p1() {
    index_1_cast_fu_52596_p1 = esl_zext<12,11>(index_1_fu_52590_p2.read());
}

void calcHash_rollingHash::thread_index_1_fu_52590_p2() {
    index_1_fu_52590_p2 = (j_s_reg_18764.read() ^ ap_const_lv11_400);
}

void calcHash_rollingHash::thread_index_1_s_fu_50112_p2() {
    index_1_s_fu_50112_p2 = (!ap_const_lv12_40A.is_01() || !j_cast_fu_49919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_40A) + sc_biguint<12>(j_cast_fu_49919_p1.read()));
}

void calcHash_rollingHash::thread_index_2_100_fu_65033_p3() {
    index_2_100_fu_65033_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_934_reg_80297.read());
}

void calcHash_rollingHash::thread_index_2_101_fu_65068_p3() {
    index_2_101_fu_65068_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_938_reg_80307.read());
}

void calcHash_rollingHash::thread_index_2_102_fu_65103_p3() {
    index_2_102_fu_65103_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_942_reg_80317.read());
}

void calcHash_rollingHash::thread_index_2_103_fu_65138_p3() {
    index_2_103_fu_65138_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_946_reg_80327.read());
}

void calcHash_rollingHash::thread_index_2_104_fu_65173_p3() {
    index_2_104_fu_65173_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_950_reg_80337.read());
}

void calcHash_rollingHash::thread_index_2_105_fu_65208_p3() {
    index_2_105_fu_65208_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_954_reg_80347.read());
}

void calcHash_rollingHash::thread_index_2_106_fu_65243_p3() {
    index_2_106_fu_65243_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_958_reg_80357.read());
}

void calcHash_rollingHash::thread_index_2_107_fu_65278_p3() {
    index_2_107_fu_65278_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_962_reg_80367.read());
}

void calcHash_rollingHash::thread_index_2_108_fu_65313_p3() {
    index_2_108_fu_65313_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_966_reg_80377.read());
}

void calcHash_rollingHash::thread_index_2_109_fu_65348_p3() {
    index_2_109_fu_65348_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_970_reg_80387.read());
}

void calcHash_rollingHash::thread_index_2_10_fu_61883_p3() {
    index_2_10_fu_61883_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_574_reg_79397.read());
}

void calcHash_rollingHash::thread_index_2_110_fu_65383_p3() {
    index_2_110_fu_65383_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_974_reg_80397.read());
}

void calcHash_rollingHash::thread_index_2_111_fu_65418_p3() {
    index_2_111_fu_65418_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_978_reg_80407.read());
}

void calcHash_rollingHash::thread_index_2_112_fu_65453_p3() {
    index_2_112_fu_65453_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_982_reg_80417.read());
}

void calcHash_rollingHash::thread_index_2_113_fu_65488_p3() {
    index_2_113_fu_65488_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_986_reg_80427.read());
}

void calcHash_rollingHash::thread_index_2_114_fu_65523_p3() {
    index_2_114_fu_65523_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_990_reg_80437.read());
}

void calcHash_rollingHash::thread_index_2_115_fu_65558_p3() {
    index_2_115_fu_65558_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_994_reg_80447.read());
}

void calcHash_rollingHash::thread_index_2_116_fu_65593_p3() {
    index_2_116_fu_65593_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_998_reg_80457.read());
}

void calcHash_rollingHash::thread_index_2_117_fu_65628_p3() {
    index_2_117_fu_65628_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1002_reg_80467.read());
}

void calcHash_rollingHash::thread_index_2_118_fu_65663_p3() {
    index_2_118_fu_65663_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1006_reg_80477.read());
}

void calcHash_rollingHash::thread_index_2_119_fu_65698_p3() {
    index_2_119_fu_65698_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1010_reg_80487.read());
}

void calcHash_rollingHash::thread_index_2_11_fu_61918_p3() {
    index_2_11_fu_61918_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_578_reg_79407.read());
}

void calcHash_rollingHash::thread_index_2_120_fu_65733_p3() {
    index_2_120_fu_65733_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1014_reg_80497.read());
}

void calcHash_rollingHash::thread_index_2_121_fu_65768_p3() {
    index_2_121_fu_65768_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1018_reg_80507.read());
}

void calcHash_rollingHash::thread_index_2_122_fu_65803_p3() {
    index_2_122_fu_65803_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1788_reg_80517.read());
}

void calcHash_rollingHash::thread_index_2_123_fu_65838_p3() {
    index_2_123_fu_65838_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1794_reg_80527.read());
}

void calcHash_rollingHash::thread_index_2_124_fu_65873_p3() {
    index_2_124_fu_65873_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1800_reg_80537.read());
}

void calcHash_rollingHash::thread_index_2_125_fu_65908_p3() {
    index_2_125_fu_65908_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1806_reg_80547.read());
}

void calcHash_rollingHash::thread_index_2_126_fu_65943_p3() {
    index_2_126_fu_65943_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_1812_reg_80557.read());
}

void calcHash_rollingHash::thread_index_2_12_fu_61953_p3() {
    index_2_12_fu_61953_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_582_reg_79417.read());
}

void calcHash_rollingHash::thread_index_2_13_fu_61988_p3() {
    index_2_13_fu_61988_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_586_reg_79427.read());
}

void calcHash_rollingHash::thread_index_2_14_fu_62023_p3() {
    index_2_14_fu_62023_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_590_reg_79437.read());
}

void calcHash_rollingHash::thread_index_2_15_fu_62058_p3() {
    index_2_15_fu_62058_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_594_reg_79447.read());
}

void calcHash_rollingHash::thread_index_2_16_fu_62093_p3() {
    index_2_16_fu_62093_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_598_reg_79457.read());
}

void calcHash_rollingHash::thread_index_2_17_fu_62128_p3() {
    index_2_17_fu_62128_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_602_reg_79467.read());
}

void calcHash_rollingHash::thread_index_2_18_fu_62163_p3() {
    index_2_18_fu_62163_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_606_reg_79477.read());
}

void calcHash_rollingHash::thread_index_2_19_fu_62198_p3() {
    index_2_19_fu_62198_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_610_reg_79487.read());
}

void calcHash_rollingHash::thread_index_2_1_fu_61568_p3() {
    index_2_1_fu_61568_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_538_reg_79307.read());
}

void calcHash_rollingHash::thread_index_2_20_fu_62233_p3() {
    index_2_20_fu_62233_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_614_reg_79497.read());
}

void calcHash_rollingHash::thread_index_2_21_fu_62268_p3() {
    index_2_21_fu_62268_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_618_reg_79507.read());
}

void calcHash_rollingHash::thread_index_2_22_fu_62303_p3() {
    index_2_22_fu_62303_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_622_reg_79517.read());
}

void calcHash_rollingHash::thread_index_2_23_fu_62338_p3() {
    index_2_23_fu_62338_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_626_reg_79527.read());
}

void calcHash_rollingHash::thread_index_2_24_fu_62373_p3() {
    index_2_24_fu_62373_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_630_reg_79537.read());
}

void calcHash_rollingHash::thread_index_2_25_fu_62408_p3() {
    index_2_25_fu_62408_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_634_reg_79547.read());
}

void calcHash_rollingHash::thread_index_2_26_fu_62443_p3() {
    index_2_26_fu_62443_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_638_reg_79557.read());
}

void calcHash_rollingHash::thread_index_2_27_fu_62478_p3() {
    index_2_27_fu_62478_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_642_reg_79567.read());
}

void calcHash_rollingHash::thread_index_2_28_fu_62513_p3() {
    index_2_28_fu_62513_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_646_reg_79577.read());
}

void calcHash_rollingHash::thread_index_2_29_fu_62548_p3() {
    index_2_29_fu_62548_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_650_reg_79587.read());
}

void calcHash_rollingHash::thread_index_2_2_fu_61603_p3() {
    index_2_2_fu_61603_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_542_reg_79317.read());
}

void calcHash_rollingHash::thread_index_2_30_fu_62583_p3() {
    index_2_30_fu_62583_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_654_reg_79597.read());
}

void calcHash_rollingHash::thread_index_2_31_fu_62618_p3() {
    index_2_31_fu_62618_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_658_reg_79607.read());
}

void calcHash_rollingHash::thread_index_2_32_fu_62653_p3() {
    index_2_32_fu_62653_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_662_reg_79617.read());
}

void calcHash_rollingHash::thread_index_2_33_fu_62688_p3() {
    index_2_33_fu_62688_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_666_reg_79627.read());
}

void calcHash_rollingHash::thread_index_2_34_fu_62723_p3() {
    index_2_34_fu_62723_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_670_reg_79637.read());
}

void calcHash_rollingHash::thread_index_2_35_fu_62758_p3() {
    index_2_35_fu_62758_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_674_reg_79647.read());
}

void calcHash_rollingHash::thread_index_2_36_fu_62793_p3() {
    index_2_36_fu_62793_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_678_reg_79657.read());
}

void calcHash_rollingHash::thread_index_2_37_fu_62828_p3() {
    index_2_37_fu_62828_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_682_reg_79667.read());
}

void calcHash_rollingHash::thread_index_2_38_fu_62863_p3() {
    index_2_38_fu_62863_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_686_reg_79677.read());
}

void calcHash_rollingHash::thread_index_2_39_fu_62898_p3() {
    index_2_39_fu_62898_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_690_reg_79687.read());
}

void calcHash_rollingHash::thread_index_2_3_fu_61638_p3() {
    index_2_3_fu_61638_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_546_reg_79327.read());
}

void calcHash_rollingHash::thread_index_2_40_fu_62933_p3() {
    index_2_40_fu_62933_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_694_reg_79697.read());
}

void calcHash_rollingHash::thread_index_2_41_fu_62968_p3() {
    index_2_41_fu_62968_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_698_reg_79707.read());
}

void calcHash_rollingHash::thread_index_2_42_fu_63003_p3() {
    index_2_42_fu_63003_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_702_reg_79717.read());
}

void calcHash_rollingHash::thread_index_2_43_fu_63038_p3() {
    index_2_43_fu_63038_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_706_reg_79727.read());
}

void calcHash_rollingHash::thread_index_2_44_fu_63073_p3() {
    index_2_44_fu_63073_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_710_reg_79737.read());
}

void calcHash_rollingHash::thread_index_2_45_fu_63108_p3() {
    index_2_45_fu_63108_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_714_reg_79747.read());
}

void calcHash_rollingHash::thread_index_2_46_fu_63143_p3() {
    index_2_46_fu_63143_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_718_reg_79757.read());
}

void calcHash_rollingHash::thread_index_2_47_fu_63178_p3() {
    index_2_47_fu_63178_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_722_reg_79767.read());
}

void calcHash_rollingHash::thread_index_2_48_fu_63213_p3() {
    index_2_48_fu_63213_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_726_reg_79777.read());
}

void calcHash_rollingHash::thread_index_2_49_fu_63248_p3() {
    index_2_49_fu_63248_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_730_reg_79787.read());
}

void calcHash_rollingHash::thread_index_2_4_fu_61673_p3() {
    index_2_4_fu_61673_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_550_reg_79337.read());
}

void calcHash_rollingHash::thread_index_2_50_fu_63283_p3() {
    index_2_50_fu_63283_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_734_reg_79797.read());
}

void calcHash_rollingHash::thread_index_2_51_fu_63318_p3() {
    index_2_51_fu_63318_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_738_reg_79807.read());
}

void calcHash_rollingHash::thread_index_2_52_fu_63353_p3() {
    index_2_52_fu_63353_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_742_reg_79817.read());
}

void calcHash_rollingHash::thread_index_2_53_fu_63388_p3() {
    index_2_53_fu_63388_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_746_reg_79827.read());
}

void calcHash_rollingHash::thread_index_2_54_fu_63423_p3() {
    index_2_54_fu_63423_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_750_reg_79837.read());
}

void calcHash_rollingHash::thread_index_2_55_fu_63458_p3() {
    index_2_55_fu_63458_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_754_reg_79847.read());
}

void calcHash_rollingHash::thread_index_2_56_fu_63493_p3() {
    index_2_56_fu_63493_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_758_reg_79857.read());
}

void calcHash_rollingHash::thread_index_2_57_fu_63528_p3() {
    index_2_57_fu_63528_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_762_reg_79867.read());
}

void calcHash_rollingHash::thread_index_2_58_fu_63563_p3() {
    index_2_58_fu_63563_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_766_reg_79877.read());
}

void calcHash_rollingHash::thread_index_2_59_fu_63598_p3() {
    index_2_59_fu_63598_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_770_reg_79887.read());
}

void calcHash_rollingHash::thread_index_2_5_fu_61708_p3() {
    index_2_5_fu_61708_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_554_reg_79347.read());
}

void calcHash_rollingHash::thread_index_2_60_fu_63633_p3() {
    index_2_60_fu_63633_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_774_reg_79897.read());
}

void calcHash_rollingHash::thread_index_2_61_fu_63668_p3() {
    index_2_61_fu_63668_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_778_reg_79907.read());
}

void calcHash_rollingHash::thread_index_2_62_fu_63703_p3() {
    index_2_62_fu_63703_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_782_reg_79917.read());
}

void calcHash_rollingHash::thread_index_2_63_fu_63738_p3() {
    index_2_63_fu_63738_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_786_reg_79927.read());
}

void calcHash_rollingHash::thread_index_2_64_fu_63773_p3() {
    index_2_64_fu_63773_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_790_reg_79937.read());
}

void calcHash_rollingHash::thread_index_2_65_fu_63808_p3() {
    index_2_65_fu_63808_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_794_reg_79947.read());
}

void calcHash_rollingHash::thread_index_2_66_fu_63843_p3() {
    index_2_66_fu_63843_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_798_reg_79957.read());
}

void calcHash_rollingHash::thread_index_2_67_fu_63878_p3() {
    index_2_67_fu_63878_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_802_reg_79967.read());
}

void calcHash_rollingHash::thread_index_2_68_fu_63913_p3() {
    index_2_68_fu_63913_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_806_reg_79977.read());
}

void calcHash_rollingHash::thread_index_2_69_fu_63948_p3() {
    index_2_69_fu_63948_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_810_reg_79987.read());
}

void calcHash_rollingHash::thread_index_2_6_fu_61743_p3() {
    index_2_6_fu_61743_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_558_reg_79357.read());
}

void calcHash_rollingHash::thread_index_2_70_fu_63983_p3() {
    index_2_70_fu_63983_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_814_reg_79997.read());
}

void calcHash_rollingHash::thread_index_2_71_fu_64018_p3() {
    index_2_71_fu_64018_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_818_reg_80007.read());
}

void calcHash_rollingHash::thread_index_2_72_fu_64053_p3() {
    index_2_72_fu_64053_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_822_reg_80017.read());
}

void calcHash_rollingHash::thread_index_2_73_fu_64088_p3() {
    index_2_73_fu_64088_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_826_reg_80027.read());
}

void calcHash_rollingHash::thread_index_2_74_fu_64123_p3() {
    index_2_74_fu_64123_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_830_reg_80037.read());
}

void calcHash_rollingHash::thread_index_2_75_fu_64158_p3() {
    index_2_75_fu_64158_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_834_reg_80047.read());
}

void calcHash_rollingHash::thread_index_2_76_fu_64193_p3() {
    index_2_76_fu_64193_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_838_reg_80057.read());
}

void calcHash_rollingHash::thread_index_2_77_fu_64228_p3() {
    index_2_77_fu_64228_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_842_reg_80067.read());
}

void calcHash_rollingHash::thread_index_2_78_fu_64263_p3() {
    index_2_78_fu_64263_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_846_reg_80077.read());
}

void calcHash_rollingHash::thread_index_2_79_fu_64298_p3() {
    index_2_79_fu_64298_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_850_reg_80087.read());
}

void calcHash_rollingHash::thread_index_2_7_fu_61778_p3() {
    index_2_7_fu_61778_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_562_reg_79367.read());
}

void calcHash_rollingHash::thread_index_2_80_fu_64333_p3() {
    index_2_80_fu_64333_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_854_reg_80097.read());
}

void calcHash_rollingHash::thread_index_2_81_fu_64368_p3() {
    index_2_81_fu_64368_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_858_reg_80107.read());
}

void calcHash_rollingHash::thread_index_2_82_fu_64403_p3() {
    index_2_82_fu_64403_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_862_reg_80117.read());
}

void calcHash_rollingHash::thread_index_2_83_fu_64438_p3() {
    index_2_83_fu_64438_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_866_reg_80127.read());
}

void calcHash_rollingHash::thread_index_2_84_fu_64473_p3() {
    index_2_84_fu_64473_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_870_reg_80137.read());
}

void calcHash_rollingHash::thread_index_2_85_fu_64508_p3() {
    index_2_85_fu_64508_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_874_reg_80147.read());
}

void calcHash_rollingHash::thread_index_2_86_fu_64543_p3() {
    index_2_86_fu_64543_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_878_reg_80157.read());
}

void calcHash_rollingHash::thread_index_2_87_fu_64578_p3() {
    index_2_87_fu_64578_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_882_reg_80167.read());
}

void calcHash_rollingHash::thread_index_2_88_fu_64613_p3() {
    index_2_88_fu_64613_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_886_reg_80177.read());
}

void calcHash_rollingHash::thread_index_2_89_fu_64648_p3() {
    index_2_89_fu_64648_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_890_reg_80187.read());
}

void calcHash_rollingHash::thread_index_2_8_fu_61813_p3() {
    index_2_8_fu_61813_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_566_reg_79377.read());
}

void calcHash_rollingHash::thread_index_2_90_fu_64683_p3() {
    index_2_90_fu_64683_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_894_reg_80197.read());
}

void calcHash_rollingHash::thread_index_2_91_fu_64718_p3() {
    index_2_91_fu_64718_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_898_reg_80207.read());
}

void calcHash_rollingHash::thread_index_2_92_fu_64753_p3() {
    index_2_92_fu_64753_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_902_reg_80217.read());
}

void calcHash_rollingHash::thread_index_2_93_fu_64788_p3() {
    index_2_93_fu_64788_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_906_reg_80227.read());
}

void calcHash_rollingHash::thread_index_2_94_fu_64823_p3() {
    index_2_94_fu_64823_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_910_reg_80237.read());
}

void calcHash_rollingHash::thread_index_2_95_fu_64858_p3() {
    index_2_95_fu_64858_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_914_reg_80247.read());
}

void calcHash_rollingHash::thread_index_2_96_fu_64893_p3() {
    index_2_96_fu_64893_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_918_reg_80257.read());
}

void calcHash_rollingHash::thread_index_2_97_fu_64928_p3() {
    index_2_97_fu_64928_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_922_reg_80267.read());
}

void calcHash_rollingHash::thread_index_2_98_fu_64963_p3() {
    index_2_98_fu_64963_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_926_reg_80277.read());
}

void calcHash_rollingHash::thread_index_2_99_fu_64998_p3() {
    index_2_99_fu_64998_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_930_reg_80287.read());
}

void calcHash_rollingHash::thread_index_2_9_fu_61848_p3() {
    index_2_9_fu_61848_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_570_reg_79387.read());
}

void calcHash_rollingHash::thread_index_2_s_fu_61533_p3() {
    index_2_s_fu_61533_p3 = esl_concat<1,11>(ap_const_lv1_1, tmp_534_reg_79297.read());
}

void calcHash_rollingHash::thread_index_s_fu_61502_p3() {
    index_s_fu_61502_p3 = esl_concat<1,11>(ap_const_lv1_1, j_2_reg_18788.read());
}

void calcHash_rollingHash::thread_indices1_cast_fu_57809_p1() {
    indices1_cast_fu_57809_p1 = esl_zext<32,31>(indices1_fu_57801_p3.read());
}

void calcHash_rollingHash::thread_indices1_fu_57801_p3() {
    indices1_fu_57801_p3 = (!tmp_1283_fu_57793_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_1283_fu_57793_p3.read()[0].to_bool())? ap_const_lv31_800: tmp_1282_fu_57789_p1.read());
}

void calcHash_rollingHash::thread_indices2_cast_fu_67743_p1() {
    indices2_cast_fu_67743_p1 = esl_zext<32,31>(indices2_fu_67735_p3.read());
}

void calcHash_rollingHash::thread_indices2_fu_67735_p3() {
    indices2_fu_67735_p3 = (!tmp_1541_fu_67727_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_1541_fu_67727_p3.read()[0].to_bool())? ap_const_lv31_C00: tmp_1540_fu_67723_p1.read());
}

void calcHash_rollingHash::thread_indices_cast_fu_49909_p1() {
    indices_cast_fu_49909_p1 = esl_zext<32,31>(indices_fu_49901_p3.read());
}

void calcHash_rollingHash::thread_indices_fu_49901_p3() {
    indices_fu_49901_p3 = (!tmp_1023_fu_49893_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_1023_fu_49893_p3.read()[0].to_bool())? ap_const_lv31_400: tmp_1022_fu_49889_p1.read());
}

void calcHash_rollingHash::thread_j_1_0_s_fu_49883_p2() {
    j_1_0_s_fu_49883_p2 = (!ap_const_lv11_80.is_01() || !j_reg_18740.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_80) + sc_biguint<11>(j_reg_18740.read()));
}

void calcHash_rollingHash::thread_j_1_1_s_fu_57404_p2() {
    j_1_1_s_fu_57404_p2 = (!ap_const_lv11_80.is_01() || !j_s_reg_18764.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_80) + sc_biguint<11>(j_s_reg_18764.read()));
}

void calcHash_rollingHash::thread_j_1_2_s_fu_67338_p2() {
    j_1_2_s_fu_67338_p2 = (!ap_const_lv11_80.is_01() || !j_2_reg_18788.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_80) + sc_biguint<11>(j_2_reg_18788.read()));
}

void calcHash_rollingHash::thread_j_cast_fu_49919_p1() {
    j_cast_fu_49919_p1 = esl_zext<12,11>(j_s_reg_18764.read());
}

void calcHash_rollingHash::thread_newIndex100_fu_38420_p4() {
    newIndex100_fu_38420_p4 = i_4_27_fu_38394_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex101_fu_38430_p1() {
    newIndex101_fu_38430_p1 = esl_zext<64,5>(newIndex100_fu_38420_p4.read());
}

void calcHash_rollingHash::thread_newIndex102_fu_38360_p4() {
    newIndex102_fu_38360_p4 = tmp_4_29_fu_38355_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex103_fu_38370_p1() {
    newIndex103_fu_38370_p1 = esl_zext<64,6>(newIndex102_fu_38360_p4.read());
}

void calcHash_rollingHash::thread_newIndex104_fu_38441_p4() {
    newIndex104_fu_38441_p4 = i_4_28_fu_38435_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex105_fu_38451_p1() {
    newIndex105_fu_38451_p1 = esl_zext<64,5>(newIndex104_fu_38441_p4.read());
}

void calcHash_rollingHash::thread_newIndex106_fu_38461_p4() {
    newIndex106_fu_38461_p4 = tmp_4_30_fu_38456_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex107_fu_38471_p1() {
    newIndex107_fu_38471_p1 = esl_zext<64,6>(newIndex106_fu_38461_p4.read());
}

void calcHash_rollingHash::thread_newIndex108_fu_38541_p4() {
    newIndex108_fu_38541_p4 = i_4_29_fu_38515_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex109_fu_38551_p1() {
    newIndex109_fu_38551_p1 = esl_zext<64,5>(newIndex108_fu_38541_p4.read());
}

void calcHash_rollingHash::thread_newIndex10_fu_36675_p1() {
    newIndex10_fu_36675_p1 = esl_zext<64,6>(newIndex9_fu_36665_p4.read());
}

void calcHash_rollingHash::thread_newIndex110_fu_38481_p4() {
    newIndex110_fu_38481_p4 = tmp_4_31_fu_38476_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex111_fu_38491_p1() {
    newIndex111_fu_38491_p1 = esl_zext<64,6>(newIndex110_fu_38481_p4.read());
}

void calcHash_rollingHash::thread_newIndex112_fu_38562_p4() {
    newIndex112_fu_38562_p4 = i_4_30_fu_38556_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex113_fu_38572_p1() {
    newIndex113_fu_38572_p1 = esl_zext<64,5>(newIndex112_fu_38562_p4.read());
}

void calcHash_rollingHash::thread_newIndex114_fu_38582_p4() {
    newIndex114_fu_38582_p4 = tmp_4_32_fu_38577_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex115_fu_38592_p1() {
    newIndex115_fu_38592_p1 = esl_zext<64,6>(newIndex114_fu_38582_p4.read());
}

void calcHash_rollingHash::thread_newIndex116_fu_38662_p4() {
    newIndex116_fu_38662_p4 = i_4_31_fu_38636_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex117_fu_38672_p1() {
    newIndex117_fu_38672_p1 = esl_zext<64,5>(newIndex116_fu_38662_p4.read());
}

void calcHash_rollingHash::thread_newIndex118_fu_38602_p4() {
    newIndex118_fu_38602_p4 = tmp_4_33_fu_38597_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex119_fu_38612_p1() {
    newIndex119_fu_38612_p1 = esl_zext<64,6>(newIndex118_fu_38602_p4.read());
}

void calcHash_rollingHash::thread_newIndex11_fu_36747_p4() {
    newIndex11_fu_36747_p4 = i_4_1_fu_36741_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex120_fu_38683_p4() {
    newIndex120_fu_38683_p4 = i_4_32_fu_38677_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex121_fu_38693_p1() {
    newIndex121_fu_38693_p1 = esl_zext<64,5>(newIndex120_fu_38683_p4.read());
}

void calcHash_rollingHash::thread_newIndex122_fu_38703_p4() {
    newIndex122_fu_38703_p4 = tmp_4_34_fu_38698_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex123_fu_38713_p1() {
    newIndex123_fu_38713_p1 = esl_zext<64,6>(newIndex122_fu_38703_p4.read());
}

void calcHash_rollingHash::thread_newIndex124_fu_38783_p4() {
    newIndex124_fu_38783_p4 = i_4_33_fu_38757_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex125_fu_38793_p1() {
    newIndex125_fu_38793_p1 = esl_zext<64,5>(newIndex124_fu_38783_p4.read());
}

void calcHash_rollingHash::thread_newIndex126_fu_38723_p4() {
    newIndex126_fu_38723_p4 = tmp_4_35_fu_38718_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex127_fu_38733_p1() {
    newIndex127_fu_38733_p1 = esl_zext<64,6>(newIndex126_fu_38723_p4.read());
}

void calcHash_rollingHash::thread_newIndex128_fu_38804_p4() {
    newIndex128_fu_38804_p4 = i_4_34_fu_38798_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex129_fu_38814_p1() {
    newIndex129_fu_38814_p1 = esl_zext<64,5>(newIndex128_fu_38804_p4.read());
}

void calcHash_rollingHash::thread_newIndex12_fu_36767_p4() {
    newIndex12_fu_36767_p4 = tmp_4_3_fu_36762_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex130_fu_38824_p4() {
    newIndex130_fu_38824_p4 = tmp_4_36_fu_38819_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex131_fu_38834_p1() {
    newIndex131_fu_38834_p1 = esl_zext<64,6>(newIndex130_fu_38824_p4.read());
}

void calcHash_rollingHash::thread_newIndex132_fu_38904_p4() {
    newIndex132_fu_38904_p4 = i_4_35_fu_38878_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex133_fu_38914_p1() {
    newIndex133_fu_38914_p1 = esl_zext<64,5>(newIndex132_fu_38904_p4.read());
}

void calcHash_rollingHash::thread_newIndex134_fu_38844_p4() {
    newIndex134_fu_38844_p4 = tmp_4_37_fu_38839_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex135_fu_38854_p1() {
    newIndex135_fu_38854_p1 = esl_zext<64,6>(newIndex134_fu_38844_p4.read());
}

void calcHash_rollingHash::thread_newIndex136_fu_38925_p4() {
    newIndex136_fu_38925_p4 = i_4_36_fu_38919_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex137_fu_38935_p1() {
    newIndex137_fu_38935_p1 = esl_zext<64,5>(newIndex136_fu_38925_p4.read());
}

void calcHash_rollingHash::thread_newIndex138_fu_38945_p4() {
    newIndex138_fu_38945_p4 = tmp_4_38_fu_38940_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex139_fu_38955_p1() {
    newIndex139_fu_38955_p1 = esl_zext<64,6>(newIndex138_fu_38945_p4.read());
}

void calcHash_rollingHash::thread_newIndex13_fu_36777_p1() {
    newIndex13_fu_36777_p1 = esl_zext<64,6>(newIndex12_fu_36767_p4.read());
}

void calcHash_rollingHash::thread_newIndex140_fu_39025_p4() {
    newIndex140_fu_39025_p4 = i_4_37_fu_38999_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex141_fu_39035_p1() {
    newIndex141_fu_39035_p1 = esl_zext<64,5>(newIndex140_fu_39025_p4.read());
}

void calcHash_rollingHash::thread_newIndex142_fu_38965_p4() {
    newIndex142_fu_38965_p4 = tmp_4_39_fu_38960_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex143_fu_38975_p1() {
    newIndex143_fu_38975_p1 = esl_zext<64,6>(newIndex142_fu_38965_p4.read());
}

void calcHash_rollingHash::thread_newIndex144_fu_39046_p4() {
    newIndex144_fu_39046_p4 = i_4_38_fu_39040_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex145_fu_39056_p1() {
    newIndex145_fu_39056_p1 = esl_zext<64,5>(newIndex144_fu_39046_p4.read());
}

void calcHash_rollingHash::thread_newIndex146_fu_39066_p4() {
    newIndex146_fu_39066_p4 = tmp_4_40_fu_39061_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex147_fu_39076_p1() {
    newIndex147_fu_39076_p1 = esl_zext<64,6>(newIndex146_fu_39066_p4.read());
}

void calcHash_rollingHash::thread_newIndex148_fu_39146_p4() {
    newIndex148_fu_39146_p4 = i_4_39_fu_39120_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex149_fu_39156_p1() {
    newIndex149_fu_39156_p1 = esl_zext<64,5>(newIndex148_fu_39146_p4.read());
}

void calcHash_rollingHash::thread_newIndex14_fu_36847_p4() {
    newIndex14_fu_36847_p4 = i_4_2_fu_36821_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex150_fu_39086_p4() {
    newIndex150_fu_39086_p4 = tmp_4_41_fu_39081_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex151_fu_39096_p1() {
    newIndex151_fu_39096_p1 = esl_zext<64,6>(newIndex150_fu_39086_p4.read());
}

void calcHash_rollingHash::thread_newIndex152_fu_39167_p4() {
    newIndex152_fu_39167_p4 = i_4_40_fu_39161_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex153_fu_39177_p1() {
    newIndex153_fu_39177_p1 = esl_zext<64,5>(newIndex152_fu_39167_p4.read());
}

void calcHash_rollingHash::thread_newIndex154_fu_39187_p4() {
    newIndex154_fu_39187_p4 = tmp_4_42_fu_39182_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex155_fu_39197_p1() {
    newIndex155_fu_39197_p1 = esl_zext<64,6>(newIndex154_fu_39187_p4.read());
}

void calcHash_rollingHash::thread_newIndex156_fu_39267_p4() {
    newIndex156_fu_39267_p4 = i_4_41_fu_39241_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex157_fu_39277_p1() {
    newIndex157_fu_39277_p1 = esl_zext<64,5>(newIndex156_fu_39267_p4.read());
}

void calcHash_rollingHash::thread_newIndex158_fu_39207_p4() {
    newIndex158_fu_39207_p4 = tmp_4_43_fu_39202_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex159_fu_39217_p1() {
    newIndex159_fu_39217_p1 = esl_zext<64,6>(newIndex158_fu_39207_p4.read());
}

void calcHash_rollingHash::thread_newIndex15_fu_36787_p4() {
    newIndex15_fu_36787_p4 = tmp_4_4_fu_36782_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex160_fu_39288_p4() {
    newIndex160_fu_39288_p4 = i_4_42_fu_39282_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex161_fu_39298_p1() {
    newIndex161_fu_39298_p1 = esl_zext<64,5>(newIndex160_fu_39288_p4.read());
}

void calcHash_rollingHash::thread_newIndex162_fu_39308_p4() {
    newIndex162_fu_39308_p4 = tmp_4_44_fu_39303_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex163_fu_39318_p1() {
    newIndex163_fu_39318_p1 = esl_zext<64,6>(newIndex162_fu_39308_p4.read());
}

void calcHash_rollingHash::thread_newIndex164_fu_39388_p4() {
    newIndex164_fu_39388_p4 = i_4_43_fu_39362_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex165_fu_39398_p1() {
    newIndex165_fu_39398_p1 = esl_zext<64,5>(newIndex164_fu_39388_p4.read());
}

void calcHash_rollingHash::thread_newIndex166_fu_39328_p4() {
    newIndex166_fu_39328_p4 = tmp_4_45_fu_39323_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex167_fu_39338_p1() {
    newIndex167_fu_39338_p1 = esl_zext<64,6>(newIndex166_fu_39328_p4.read());
}

void calcHash_rollingHash::thread_newIndex168_fu_39409_p4() {
    newIndex168_fu_39409_p4 = i_4_44_fu_39403_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex169_fu_39419_p1() {
    newIndex169_fu_39419_p1 = esl_zext<64,5>(newIndex168_fu_39409_p4.read());
}

void calcHash_rollingHash::thread_newIndex16_fu_36797_p1() {
    newIndex16_fu_36797_p1 = esl_zext<64,6>(newIndex15_fu_36787_p4.read());
}

void calcHash_rollingHash::thread_newIndex170_fu_39429_p4() {
    newIndex170_fu_39429_p4 = tmp_4_46_fu_39424_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex171_fu_39439_p1() {
    newIndex171_fu_39439_p1 = esl_zext<64,6>(newIndex170_fu_39429_p4.read());
}

void calcHash_rollingHash::thread_newIndex172_fu_39509_p4() {
    newIndex172_fu_39509_p4 = i_4_45_fu_39483_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex173_fu_39519_p1() {
    newIndex173_fu_39519_p1 = esl_zext<64,5>(newIndex172_fu_39509_p4.read());
}

void calcHash_rollingHash::thread_newIndex174_fu_39449_p4() {
    newIndex174_fu_39449_p4 = tmp_4_47_fu_39444_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex175_fu_39459_p1() {
    newIndex175_fu_39459_p1 = esl_zext<64,6>(newIndex174_fu_39449_p4.read());
}

void calcHash_rollingHash::thread_newIndex176_fu_39530_p4() {
    newIndex176_fu_39530_p4 = i_4_46_fu_39524_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex177_fu_39540_p1() {
    newIndex177_fu_39540_p1 = esl_zext<64,5>(newIndex176_fu_39530_p4.read());
}

void calcHash_rollingHash::thread_newIndex178_fu_39550_p4() {
    newIndex178_fu_39550_p4 = tmp_4_48_fu_39545_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex179_fu_39560_p1() {
    newIndex179_fu_39560_p1 = esl_zext<64,6>(newIndex178_fu_39550_p4.read());
}

void calcHash_rollingHash::thread_newIndex17_fu_36868_p4() {
    newIndex17_fu_36868_p4 = i_4_3_fu_36862_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex180_fu_39630_p4() {
    newIndex180_fu_39630_p4 = i_4_47_fu_39604_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex181_fu_61497_p1() {
    newIndex181_fu_61497_p1 = esl_zext<64,5>(newIndex_fu_61489_p3.read());
}

void calcHash_rollingHash::thread_newIndex182_fu_39640_p1() {
    newIndex182_fu_39640_p1 = esl_zext<64,5>(newIndex180_fu_39630_p4.read());
}

void calcHash_rollingHash::thread_newIndex183_fu_39570_p4() {
    newIndex183_fu_39570_p4 = tmp_4_49_fu_39565_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex184_fu_39580_p1() {
    newIndex184_fu_39580_p1 = esl_zext<64,6>(newIndex183_fu_39570_p4.read());
}

void calcHash_rollingHash::thread_newIndex185_fu_39651_p4() {
    newIndex185_fu_39651_p4 = i_4_48_fu_39645_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex186_fu_39661_p1() {
    newIndex186_fu_39661_p1 = esl_zext<64,5>(newIndex185_fu_39651_p4.read());
}

void calcHash_rollingHash::thread_newIndex187_fu_39671_p4() {
    newIndex187_fu_39671_p4 = tmp_4_50_fu_39666_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex188_fu_39681_p1() {
    newIndex188_fu_39681_p1 = esl_zext<64,6>(newIndex187_fu_39671_p4.read());
}

void calcHash_rollingHash::thread_newIndex189_fu_39751_p4() {
    newIndex189_fu_39751_p4 = i_4_49_fu_39725_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex18_fu_36888_p4() {
    newIndex18_fu_36888_p4 = tmp_4_5_fu_36883_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex190_fu_39761_p1() {
    newIndex190_fu_39761_p1 = esl_zext<64,5>(newIndex189_fu_39751_p4.read());
}

void calcHash_rollingHash::thread_newIndex191_fu_39691_p4() {
    newIndex191_fu_39691_p4 = tmp_4_51_fu_39686_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex192_fu_39701_p1() {
    newIndex192_fu_39701_p1 = esl_zext<64,6>(newIndex191_fu_39691_p4.read());
}

void calcHash_rollingHash::thread_newIndex193_fu_39772_p4() {
    newIndex193_fu_39772_p4 = i_4_50_fu_39766_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex194_fu_39782_p1() {
    newIndex194_fu_39782_p1 = esl_zext<64,5>(newIndex193_fu_39772_p4.read());
}

void calcHash_rollingHash::thread_newIndex195_fu_39792_p4() {
    newIndex195_fu_39792_p4 = tmp_4_52_fu_39787_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex196_fu_39872_p4() {
    newIndex196_fu_39872_p4 = i_4_51_fu_39846_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex197_fu_39882_p1() {
    newIndex197_fu_39882_p1 = esl_zext<64,5>(newIndex196_fu_39872_p4.read());
}

void calcHash_rollingHash::thread_newIndex198_fu_39812_p4() {
    newIndex198_fu_39812_p4 = tmp_4_53_fu_39807_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex199_fu_39893_p4() {
    newIndex199_fu_39893_p4 = i_4_52_fu_39887_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex19_fu_36898_p1() {
    newIndex19_fu_36898_p1 = esl_zext<64,6>(newIndex18_fu_36888_p4.read());
}

void calcHash_rollingHash::thread_newIndex1_fu_36583_p4() {
    newIndex1_fu_36583_p4 = tmp_4_fu_36577_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex200_fu_39903_p1() {
    newIndex200_fu_39903_p1 = esl_zext<64,5>(newIndex199_fu_39893_p4.read());
}

void calcHash_rollingHash::thread_newIndex201_fu_39913_p4() {
    newIndex201_fu_39913_p4 = tmp_4_54_fu_39908_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex202_fu_39993_p4() {
    newIndex202_fu_39993_p4 = i_4_53_fu_39967_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex203_fu_40003_p1() {
    newIndex203_fu_40003_p1 = esl_zext<64,5>(newIndex202_fu_39993_p4.read());
}

void calcHash_rollingHash::thread_newIndex204_fu_39933_p4() {
    newIndex204_fu_39933_p4 = tmp_4_55_fu_39928_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex205_fu_40014_p4() {
    newIndex205_fu_40014_p4 = i_4_54_fu_40008_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex206_fu_40024_p1() {
    newIndex206_fu_40024_p1 = esl_zext<64,5>(newIndex205_fu_40014_p4.read());
}

void calcHash_rollingHash::thread_newIndex207_fu_40034_p4() {
    newIndex207_fu_40034_p4 = tmp_4_56_fu_40029_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex208_fu_40114_p4() {
    newIndex208_fu_40114_p4 = i_4_55_fu_40088_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex209_fu_40124_p1() {
    newIndex209_fu_40124_p1 = esl_zext<64,5>(newIndex208_fu_40114_p4.read());
}

void calcHash_rollingHash::thread_newIndex20_fu_36968_p4() {
    newIndex20_fu_36968_p4 = i_4_4_fu_36942_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex210_fu_40054_p4() {
    newIndex210_fu_40054_p4 = tmp_4_57_fu_40049_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex211_fu_40135_p4() {
    newIndex211_fu_40135_p4 = i_4_56_fu_40129_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex212_fu_40145_p1() {
    newIndex212_fu_40145_p1 = esl_zext<64,5>(newIndex211_fu_40135_p4.read());
}

void calcHash_rollingHash::thread_newIndex213_fu_40155_p4() {
    newIndex213_fu_40155_p4 = tmp_4_58_fu_40150_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex214_fu_40235_p4() {
    newIndex214_fu_40235_p4 = i_4_57_fu_40209_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2153221533_fu_51850_p1() {
    newIndex2153221533_fu_51850_p1 = esl_zext<64,5>(newIndex518_fu_51840_p4.read());
}

void calcHash_rollingHash::thread_newIndex215_fu_40245_p1() {
    newIndex215_fu_40245_p1 = esl_zext<64,5>(newIndex214_fu_40235_p4.read());
}

void calcHash_rollingHash::thread_newIndex2166321664_fu_51829_p1() {
    newIndex2166321664_fu_51829_p1 = esl_zext<64,5>(newIndex517_fu_51819_p4.read());
}

void calcHash_rollingHash::thread_newIndex216_fu_40175_p4() {
    newIndex216_fu_40175_p4 = tmp_4_59_fu_40170_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2179421795_fu_51808_p1() {
    newIndex2179421795_fu_51808_p1 = esl_zext<64,5>(newIndex516_fu_51798_p4.read());
}

void calcHash_rollingHash::thread_newIndex217_fu_40256_p4() {
    newIndex217_fu_40256_p4 = i_4_58_fu_40250_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex218_fu_40266_p1() {
    newIndex218_fu_40266_p1 = esl_zext<64,5>(newIndex217_fu_40256_p4.read());
}

void calcHash_rollingHash::thread_newIndex2192521926_fu_51787_p1() {
    newIndex2192521926_fu_51787_p1 = esl_zext<64,5>(newIndex515_fu_51777_p4.read());
}

void calcHash_rollingHash::thread_newIndex219_fu_40276_p4() {
    newIndex219_fu_40276_p4 = tmp_4_60_fu_40271_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex21_fu_36908_p4() {
    newIndex21_fu_36908_p4 = tmp_4_6_fu_36903_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2205622057_fu_51766_p1() {
    newIndex2205622057_fu_51766_p1 = esl_zext<64,5>(newIndex514_fu_51756_p4.read());
}

void calcHash_rollingHash::thread_newIndex220_fu_40356_p4() {
    newIndex220_fu_40356_p4 = i_4_59_fu_40330_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2218722188_fu_51745_p1() {
    newIndex2218722188_fu_51745_p1 = esl_zext<64,5>(newIndex513_fu_51735_p4.read());
}

void calcHash_rollingHash::thread_newIndex221_fu_40366_p1() {
    newIndex221_fu_40366_p1 = esl_zext<64,5>(newIndex220_fu_40356_p4.read());
}

void calcHash_rollingHash::thread_newIndex222_fu_40296_p4() {
    newIndex222_fu_40296_p4 = tmp_4_61_fu_40291_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2231822319_fu_51724_p1() {
    newIndex2231822319_fu_51724_p1 = esl_zext<64,5>(newIndex512_fu_51714_p4.read());
}

void calcHash_rollingHash::thread_newIndex223_fu_40377_p4() {
    newIndex223_fu_40377_p4 = i_4_60_fu_40371_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2244922450_fu_51703_p1() {
    newIndex2244922450_fu_51703_p1 = esl_zext<64,5>(newIndex511_fu_51693_p4.read());
}

void calcHash_rollingHash::thread_newIndex2245022451_fu_44200_p1() {
    newIndex2245022451_fu_44200_p1 = esl_zext<64,6>(newIndex416_fu_44190_p4.read());
}

void calcHash_rollingHash::thread_newIndex224_fu_40387_p1() {
    newIndex224_fu_40387_p1 = esl_zext<64,5>(newIndex223_fu_40377_p4.read());
}

void calcHash_rollingHash::thread_newIndex2258022581_fu_51682_p1() {
    newIndex2258022581_fu_51682_p1 = esl_zext<64,5>(newIndex510_fu_51672_p4.read());
}

void calcHash_rollingHash::thread_newIndex225_fu_40397_p4() {
    newIndex225_fu_40397_p4 = tmp_4_62_fu_40392_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex226_fu_40477_p4() {
    newIndex226_fu_40477_p4 = i_4_61_fu_40451_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2271122712_fu_51661_p1() {
    newIndex2271122712_fu_51661_p1 = esl_zext<64,5>(newIndex509_fu_51651_p4.read());
}

void calcHash_rollingHash::thread_newIndex227_fu_40487_p1() {
    newIndex227_fu_40487_p1 = esl_zext<64,5>(newIndex226_fu_40477_p4.read());
}

void calcHash_rollingHash::thread_newIndex2284222843_fu_51640_p1() {
    newIndex2284222843_fu_51640_p1 = esl_zext<64,5>(newIndex508_fu_51630_p4.read());
}

void calcHash_rollingHash::thread_newIndex228_fu_40417_p4() {
    newIndex228_fu_40417_p4 = tmp_4_63_fu_40412_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2297322974_fu_51619_p1() {
    newIndex2297322974_fu_51619_p1 = esl_zext<64,5>(newIndex507_fu_51609_p4.read());
}

void calcHash_rollingHash::thread_newIndex229_fu_40498_p4() {
    newIndex229_fu_40498_p4 = i_4_62_fu_40492_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex22_fu_36918_p1() {
    newIndex22_fu_36918_p1 = esl_zext<64,6>(newIndex21_fu_36908_p4.read());
}

void calcHash_rollingHash::thread_newIndex230_fu_40508_p1() {
    newIndex230_fu_40508_p1 = esl_zext<64,5>(newIndex229_fu_40498_p4.read());
}

void calcHash_rollingHash::thread_newIndex2310423105_fu_51598_p1() {
    newIndex2310423105_fu_51598_p1 = esl_zext<64,5>(newIndex506_fu_51588_p4.read());
}

void calcHash_rollingHash::thread_newIndex231_fu_40518_p4() {
    newIndex231_fu_40518_p4 = tmp_4_64_fu_40513_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2323523236_fu_51577_p1() {
    newIndex2323523236_fu_51577_p1 = esl_zext<64,5>(newIndex505_fu_51567_p4.read());
}

void calcHash_rollingHash::thread_newIndex232_fu_40598_p4() {
    newIndex232_fu_40598_p4 = i_4_63_fu_40572_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2336623367_fu_51556_p1() {
    newIndex2336623367_fu_51556_p1 = esl_zext<64,5>(newIndex504_fu_51546_p4.read());
}

void calcHash_rollingHash::thread_newIndex233_fu_40608_p1() {
    newIndex233_fu_40608_p1 = esl_zext<64,5>(newIndex232_fu_40598_p4.read());
}

void calcHash_rollingHash::thread_newIndex2349723498_fu_51535_p1() {
    newIndex2349723498_fu_51535_p1 = esl_zext<64,5>(newIndex503_fu_51525_p4.read());
}

void calcHash_rollingHash::thread_newIndex234_fu_40538_p4() {
    newIndex234_fu_40538_p4 = tmp_4_65_fu_40533_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex235_fu_40619_p4() {
    newIndex235_fu_40619_p4 = i_4_64_fu_40613_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2362823629_fu_51514_p1() {
    newIndex2362823629_fu_51514_p1 = esl_zext<64,5>(newIndex502_fu_51504_p4.read());
}

void calcHash_rollingHash::thread_newIndex236_fu_40629_p1() {
    newIndex236_fu_40629_p1 = esl_zext<64,5>(newIndex235_fu_40619_p4.read());
}

void calcHash_rollingHash::thread_newIndex2375923760_fu_51493_p1() {
    newIndex2375923760_fu_51493_p1 = esl_zext<64,5>(newIndex501_fu_51483_p4.read());
}

void calcHash_rollingHash::thread_newIndex237_fu_40639_p4() {
    newIndex237_fu_40639_p4 = tmp_4_66_fu_40634_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2389023891_fu_51472_p1() {
    newIndex2389023891_fu_51472_p1 = esl_zext<64,5>(newIndex500_fu_51462_p4.read());
}

void calcHash_rollingHash::thread_newIndex238_fu_40719_p4() {
    newIndex238_fu_40719_p4 = i_4_65_fu_40693_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex239_fu_40729_p1() {
    newIndex239_fu_40729_p1 = esl_zext<64,5>(newIndex238_fu_40719_p4.read());
}

void calcHash_rollingHash::thread_newIndex23_fu_36989_p4() {
    newIndex23_fu_36989_p4 = i_4_5_fu_36983_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2402124022_fu_51451_p1() {
    newIndex2402124022_fu_51451_p1 = esl_zext<64,5>(newIndex499_fu_51441_p4.read());
}

void calcHash_rollingHash::thread_newIndex240_fu_40659_p4() {
    newIndex240_fu_40659_p4 = tmp_4_67_fu_40654_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2415224153_fu_51430_p1() {
    newIndex2415224153_fu_51430_p1 = esl_zext<64,5>(newIndex498_fu_51420_p4.read());
}

void calcHash_rollingHash::thread_newIndex241_fu_40740_p4() {
    newIndex241_fu_40740_p4 = i_4_66_fu_40734_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2428324284_fu_51409_p1() {
    newIndex2428324284_fu_51409_p1 = esl_zext<64,5>(newIndex497_fu_51399_p4.read());
}

void calcHash_rollingHash::thread_newIndex242_fu_40750_p1() {
    newIndex242_fu_40750_p1 = esl_zext<64,5>(newIndex241_fu_40740_p4.read());
}

void calcHash_rollingHash::thread_newIndex243_fu_40760_p4() {
    newIndex243_fu_40760_p4 = tmp_4_68_fu_40755_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2441424415_fu_51388_p1() {
    newIndex2441424415_fu_51388_p1 = esl_zext<64,5>(newIndex496_fu_51378_p4.read());
}

void calcHash_rollingHash::thread_newIndex244_fu_40840_p4() {
    newIndex244_fu_40840_p4 = i_4_67_fu_40814_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2454524546_fu_51367_p1() {
    newIndex2454524546_fu_51367_p1 = esl_zext<64,5>(newIndex495_fu_51357_p4.read());
}

void calcHash_rollingHash::thread_newIndex245_fu_40850_p1() {
    newIndex245_fu_40850_p1 = esl_zext<64,5>(newIndex244_fu_40840_p4.read());
}

void calcHash_rollingHash::thread_newIndex2467624677_fu_51346_p1() {
    newIndex2467624677_fu_51346_p1 = esl_zext<64,5>(newIndex494_fu_51336_p4.read());
}

void calcHash_rollingHash::thread_newIndex246_fu_40780_p4() {
    newIndex246_fu_40780_p4 = tmp_4_69_fu_40775_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex247_fu_40861_p4() {
    newIndex247_fu_40861_p4 = i_4_68_fu_40855_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2480724808_fu_51325_p1() {
    newIndex2480724808_fu_51325_p1 = esl_zext<64,5>(newIndex493_fu_51315_p4.read());
}

void calcHash_rollingHash::thread_newIndex248_fu_40871_p1() {
    newIndex248_fu_40871_p1 = esl_zext<64,5>(newIndex247_fu_40861_p4.read());
}

void calcHash_rollingHash::thread_newIndex2493824939_fu_51304_p1() {
    newIndex2493824939_fu_51304_p1 = esl_zext<64,5>(newIndex492_fu_51294_p4.read());
}

void calcHash_rollingHash::thread_newIndex249_fu_40881_p4() {
    newIndex249_fu_40881_p4 = tmp_4_70_fu_40876_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex24_fu_37009_p4() {
    newIndex24_fu_37009_p4 = tmp_4_7_fu_37004_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2506925070_fu_51283_p1() {
    newIndex2506925070_fu_51283_p1 = esl_zext<64,5>(newIndex491_fu_51273_p4.read());
}

void calcHash_rollingHash::thread_newIndex250_fu_40961_p4() {
    newIndex250_fu_40961_p4 = i_4_69_fu_40935_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex251_fu_40971_p1() {
    newIndex251_fu_40971_p1 = esl_zext<64,5>(newIndex250_fu_40961_p4.read());
}

void calcHash_rollingHash::thread_newIndex2520025201_fu_51262_p1() {
    newIndex2520025201_fu_51262_p1 = esl_zext<64,5>(newIndex490_fu_51252_p4.read());
}

void calcHash_rollingHash::thread_newIndex252_fu_40901_p4() {
    newIndex252_fu_40901_p4 = tmp_4_71_fu_40896_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2533125332_fu_51241_p1() {
    newIndex2533125332_fu_51241_p1 = esl_zext<64,5>(newIndex489_fu_51231_p4.read());
}

void calcHash_rollingHash::thread_newIndex253_fu_40982_p4() {
    newIndex253_fu_40982_p4 = i_4_70_fu_40976_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2546225463_fu_51220_p1() {
    newIndex2546225463_fu_51220_p1 = esl_zext<64,5>(newIndex488_fu_51210_p4.read());
}

void calcHash_rollingHash::thread_newIndex254_fu_40992_p1() {
    newIndex254_fu_40992_p1 = esl_zext<64,5>(newIndex253_fu_40982_p4.read());
}

void calcHash_rollingHash::thread_newIndex2559325594_fu_51199_p1() {
    newIndex2559325594_fu_51199_p1 = esl_zext<64,5>(newIndex487_fu_51189_p4.read());
}

void calcHash_rollingHash::thread_newIndex255_fu_41002_p4() {
    newIndex255_fu_41002_p4 = tmp_4_72_fu_40997_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex256_fu_41082_p4() {
    newIndex256_fu_41082_p4 = i_4_71_fu_41056_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2572425725_fu_51178_p1() {
    newIndex2572425725_fu_51178_p1 = esl_zext<64,5>(newIndex486_fu_51168_p4.read());
}

void calcHash_rollingHash::thread_newIndex257_fu_41092_p1() {
    newIndex257_fu_41092_p1 = esl_zext<64,5>(newIndex256_fu_41082_p4.read());
}

void calcHash_rollingHash::thread_newIndex2585525856_fu_51157_p1() {
    newIndex2585525856_fu_51157_p1 = esl_zext<64,5>(newIndex485_fu_51147_p4.read());
}

void calcHash_rollingHash::thread_newIndex258_fu_41022_p4() {
    newIndex258_fu_41022_p4 = tmp_4_73_fu_41017_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2598625987_fu_51136_p1() {
    newIndex2598625987_fu_51136_p1 = esl_zext<64,5>(newIndex484_fu_51126_p4.read());
}

void calcHash_rollingHash::thread_newIndex259_fu_41103_p4() {
    newIndex259_fu_41103_p4 = i_4_72_fu_41097_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex25_fu_37019_p1() {
    newIndex25_fu_37019_p1 = esl_zext<64,6>(newIndex24_fu_37009_p4.read());
}

void calcHash_rollingHash::thread_newIndex260_fu_41113_p1() {
    newIndex260_fu_41113_p1 = esl_zext<64,5>(newIndex259_fu_41103_p4.read());
}

void calcHash_rollingHash::thread_newIndex2611726118_fu_51115_p1() {
    newIndex2611726118_fu_51115_p1 = esl_zext<64,5>(newIndex483_fu_51105_p4.read());
}

void calcHash_rollingHash::thread_newIndex261_fu_41123_p4() {
    newIndex261_fu_41123_p4 = tmp_4_74_fu_41118_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2624826249_fu_51094_p1() {
    newIndex2624826249_fu_51094_p1 = esl_zext<64,5>(newIndex482_fu_51084_p4.read());
}

void calcHash_rollingHash::thread_newIndex262_fu_41203_p4() {
    newIndex262_fu_41203_p4 = i_4_73_fu_41177_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2637926380_fu_51073_p1() {
    newIndex2637926380_fu_51073_p1 = esl_zext<64,5>(newIndex481_fu_51063_p4.read());
}

void calcHash_rollingHash::thread_newIndex263_fu_41213_p1() {
    newIndex263_fu_41213_p1 = esl_zext<64,5>(newIndex262_fu_41203_p4.read());
}

void calcHash_rollingHash::thread_newIndex264_fu_41143_p4() {
    newIndex264_fu_41143_p4 = tmp_4_75_fu_41138_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2651026511_fu_51052_p1() {
    newIndex2651026511_fu_51052_p1 = esl_zext<64,5>(newIndex480_fu_51042_p4.read());
}

void calcHash_rollingHash::thread_newIndex265_fu_41224_p4() {
    newIndex265_fu_41224_p4 = i_4_74_fu_41218_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2664126642_fu_51031_p1() {
    newIndex2664126642_fu_51031_p1 = esl_zext<64,5>(newIndex479_fu_51021_p4.read());
}

void calcHash_rollingHash::thread_newIndex266_fu_41234_p1() {
    newIndex266_fu_41234_p1 = esl_zext<64,5>(newIndex265_fu_41224_p4.read());
}

void calcHash_rollingHash::thread_newIndex2677226773_fu_51010_p1() {
    newIndex2677226773_fu_51010_p1 = esl_zext<64,5>(newIndex478_fu_51000_p4.read());
}

void calcHash_rollingHash::thread_newIndex267_fu_41244_p4() {
    newIndex267_fu_41244_p4 = tmp_4_76_fu_41239_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex268_fu_41324_p4() {
    newIndex268_fu_41324_p4 = i_4_75_fu_41298_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2690326904_fu_50989_p1() {
    newIndex2690326904_fu_50989_p1 = esl_zext<64,5>(newIndex477_fu_50979_p4.read());
}

void calcHash_rollingHash::thread_newIndex269_fu_41334_p1() {
    newIndex269_fu_41334_p1 = esl_zext<64,5>(newIndex268_fu_41324_p4.read());
}

void calcHash_rollingHash::thread_newIndex26_fu_37089_p4() {
    newIndex26_fu_37089_p4 = i_4_6_fu_37063_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2703427035_fu_50968_p1() {
    newIndex2703427035_fu_50968_p1 = esl_zext<64,5>(newIndex476_fu_50958_p4.read());
}

void calcHash_rollingHash::thread_newIndex270_fu_41264_p4() {
    newIndex270_fu_41264_p4 = tmp_4_77_fu_41259_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2716527166_fu_50947_p1() {
    newIndex2716527166_fu_50947_p1 = esl_zext<64,5>(newIndex475_fu_50937_p4.read());
}

void calcHash_rollingHash::thread_newIndex271_fu_41345_p4() {
    newIndex271_fu_41345_p4 = i_4_76_fu_41339_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2729627297_fu_50926_p1() {
    newIndex2729627297_fu_50926_p1 = esl_zext<64,5>(newIndex474_fu_50916_p4.read());
}

void calcHash_rollingHash::thread_newIndex272_fu_41355_p1() {
    newIndex272_fu_41355_p1 = esl_zext<64,5>(newIndex271_fu_41345_p4.read());
}

void calcHash_rollingHash::thread_newIndex273_fu_41365_p4() {
    newIndex273_fu_41365_p4 = tmp_4_78_fu_41360_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2742727428_fu_50905_p1() {
    newIndex2742727428_fu_50905_p1 = esl_zext<64,5>(newIndex473_fu_50895_p4.read());
}

void calcHash_rollingHash::thread_newIndex274_fu_41445_p4() {
    newIndex274_fu_41445_p4 = i_4_77_fu_41419_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2755827559_fu_50884_p1() {
    newIndex2755827559_fu_50884_p1 = esl_zext<64,5>(newIndex472_fu_50874_p4.read());
}

void calcHash_rollingHash::thread_newIndex275_fu_41455_p1() {
    newIndex275_fu_41455_p1 = esl_zext<64,5>(newIndex274_fu_41445_p4.read());
}

void calcHash_rollingHash::thread_newIndex2768927690_fu_50863_p1() {
    newIndex2768927690_fu_50863_p1 = esl_zext<64,5>(newIndex471_fu_50853_p4.read());
}

void calcHash_rollingHash::thread_newIndex276_fu_41385_p4() {
    newIndex276_fu_41385_p4 = tmp_4_79_fu_41380_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex277_fu_41466_p4() {
    newIndex277_fu_41466_p4 = i_4_78_fu_41460_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2782027821_fu_50842_p1() {
    newIndex2782027821_fu_50842_p1 = esl_zext<64,5>(newIndex470_fu_50832_p4.read());
}

void calcHash_rollingHash::thread_newIndex278_fu_41476_p1() {
    newIndex278_fu_41476_p1 = esl_zext<64,5>(newIndex277_fu_41466_p4.read());
}

void calcHash_rollingHash::thread_newIndex2795127952_fu_50821_p1() {
    newIndex2795127952_fu_50821_p1 = esl_zext<64,5>(newIndex469_fu_50811_p4.read());
}

void calcHash_rollingHash::thread_newIndex279_fu_41486_p4() {
    newIndex279_fu_41486_p4 = tmp_4_80_fu_41481_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex27_fu_37029_p4() {
    newIndex27_fu_37029_p4 = tmp_4_8_fu_37024_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2808228083_fu_50800_p1() {
    newIndex2808228083_fu_50800_p1 = esl_zext<64,5>(newIndex468_fu_50790_p4.read());
}

void calcHash_rollingHash::thread_newIndex280_fu_41566_p4() {
    newIndex280_fu_41566_p4 = i_4_79_fu_41540_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex281_fu_41576_p1() {
    newIndex281_fu_41576_p1 = esl_zext<64,5>(newIndex280_fu_41566_p4.read());
}

void calcHash_rollingHash::thread_newIndex2821328214_fu_50779_p1() {
    newIndex2821328214_fu_50779_p1 = esl_zext<64,5>(newIndex467_fu_50769_p4.read());
}

void calcHash_rollingHash::thread_newIndex282_fu_41506_p4() {
    newIndex282_fu_41506_p4 = tmp_4_81_fu_41501_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2834428345_fu_50758_p1() {
    newIndex2834428345_fu_50758_p1 = esl_zext<64,5>(newIndex466_fu_50748_p4.read());
}

void calcHash_rollingHash::thread_newIndex283_fu_41587_p4() {
    newIndex283_fu_41587_p4 = i_4_80_fu_41581_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2847528476_fu_50737_p1() {
    newIndex2847528476_fu_50737_p1 = esl_zext<64,5>(newIndex465_fu_50727_p4.read());
}

void calcHash_rollingHash::thread_newIndex284_fu_41597_p1() {
    newIndex284_fu_41597_p1 = esl_zext<64,5>(newIndex283_fu_41587_p4.read());
}

void calcHash_rollingHash::thread_newIndex285_fu_41607_p4() {
    newIndex285_fu_41607_p4 = tmp_4_82_fu_41602_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2860628607_fu_50716_p1() {
    newIndex2860628607_fu_50716_p1 = esl_zext<64,5>(newIndex464_fu_50706_p4.read());
}

void calcHash_rollingHash::thread_newIndex286_fu_41687_p4() {
    newIndex286_fu_41687_p4 = i_4_81_fu_41661_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2873728738_fu_50695_p1() {
    newIndex2873728738_fu_50695_p1 = esl_zext<64,5>(newIndex463_fu_50685_p4.read());
}

void calcHash_rollingHash::thread_newIndex287_fu_41697_p1() {
    newIndex287_fu_41697_p1 = esl_zext<64,5>(newIndex286_fu_41687_p4.read());
}

void calcHash_rollingHash::thread_newIndex2886828869_fu_50674_p1() {
    newIndex2886828869_fu_50674_p1 = esl_zext<64,5>(newIndex462_fu_50664_p4.read());
}

void calcHash_rollingHash::thread_newIndex288_fu_41627_p4() {
    newIndex288_fu_41627_p4 = tmp_4_83_fu_41622_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2899929000_fu_50653_p1() {
    newIndex2899929000_fu_50653_p1 = esl_zext<64,5>(newIndex461_fu_50643_p4.read());
}

void calcHash_rollingHash::thread_newIndex289_fu_41708_p4() {
    newIndex289_fu_41708_p4 = i_4_82_fu_41702_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex28_fu_37039_p1() {
    newIndex28_fu_37039_p1 = esl_zext<64,6>(newIndex27_fu_37029_p4.read());
}

void calcHash_rollingHash::thread_newIndex290_fu_41718_p1() {
    newIndex290_fu_41718_p1 = esl_zext<64,5>(newIndex289_fu_41708_p4.read());
}

void calcHash_rollingHash::thread_newIndex2913029131_fu_50632_p1() {
    newIndex2913029131_fu_50632_p1 = esl_zext<64,5>(newIndex460_fu_50622_p4.read());
}

void calcHash_rollingHash::thread_newIndex291_fu_41728_p4() {
    newIndex291_fu_41728_p4 = tmp_4_84_fu_41723_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2926129262_fu_50611_p1() {
    newIndex2926129262_fu_50611_p1 = esl_zext<64,5>(newIndex459_fu_50601_p4.read());
}

void calcHash_rollingHash::thread_newIndex292_fu_41808_p4() {
    newIndex292_fu_41808_p4 = i_4_83_fu_41782_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2939229393_fu_50590_p1() {
    newIndex2939229393_fu_50590_p1 = esl_zext<64,5>(newIndex458_fu_50580_p4.read());
}

void calcHash_rollingHash::thread_newIndex293_fu_41818_p1() {
    newIndex293_fu_41818_p1 = esl_zext<64,5>(newIndex292_fu_41808_p4.read());
}

void calcHash_rollingHash::thread_newIndex294_fu_41748_p4() {
    newIndex294_fu_41748_p4 = tmp_4_85_fu_41743_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex2952329524_fu_50569_p1() {
    newIndex2952329524_fu_50569_p1 = esl_zext<64,5>(newIndex457_fu_50559_p4.read());
}

void calcHash_rollingHash::thread_newIndex295_fu_41829_p4() {
    newIndex295_fu_41829_p4 = i_4_84_fu_41823_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2965429655_fu_50548_p1() {
    newIndex2965429655_fu_50548_p1 = esl_zext<64,5>(newIndex456_fu_50538_p4.read());
}

void calcHash_rollingHash::thread_newIndex296_fu_41839_p1() {
    newIndex296_fu_41839_p1 = esl_zext<64,5>(newIndex295_fu_41829_p4.read());
}

void calcHash_rollingHash::thread_newIndex2978529786_fu_50527_p1() {
    newIndex2978529786_fu_50527_p1 = esl_zext<64,5>(newIndex455_fu_50517_p4.read());
}

void calcHash_rollingHash::thread_newIndex297_fu_41849_p4() {
    newIndex297_fu_41849_p4 = tmp_4_86_fu_41844_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex298_fu_41929_p4() {
    newIndex298_fu_41929_p4 = i_4_85_fu_41903_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2991629917_fu_50506_p1() {
    newIndex2991629917_fu_50506_p1 = esl_zext<64,5>(newIndex454_fu_50496_p4.read());
}

void calcHash_rollingHash::thread_newIndex299_fu_41939_p1() {
    newIndex299_fu_41939_p1 = esl_zext<64,5>(newIndex298_fu_41929_p4.read());
}

void calcHash_rollingHash::thread_newIndex29_fu_37110_p4() {
    newIndex29_fu_37110_p4 = i_4_7_fu_37104_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex2_fu_36593_p1() {
    newIndex2_fu_36593_p1 = esl_zext<64,5>(newIndex1_fu_36583_p4.read());
}

void calcHash_rollingHash::thread_newIndex3004730048_fu_50485_p1() {
    newIndex3004730048_fu_50485_p1 = esl_zext<64,5>(newIndex453_fu_50475_p4.read());
}

void calcHash_rollingHash::thread_newIndex300_fu_41869_p4() {
    newIndex300_fu_41869_p4 = tmp_4_87_fu_41864_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3017830179_fu_50464_p1() {
    newIndex3017830179_fu_50464_p1 = esl_zext<64,5>(newIndex452_fu_50454_p4.read());
}

void calcHash_rollingHash::thread_newIndex301_fu_41950_p4() {
    newIndex301_fu_41950_p4 = i_4_86_fu_41944_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex302_fu_41960_p1() {
    newIndex302_fu_41960_p1 = esl_zext<64,5>(newIndex301_fu_41950_p4.read());
}

void calcHash_rollingHash::thread_newIndex3030930310_fu_50443_p1() {
    newIndex3030930310_fu_50443_p1 = esl_zext<64,5>(newIndex451_fu_50433_p4.read());
}

void calcHash_rollingHash::thread_newIndex303_fu_41970_p4() {
    newIndex303_fu_41970_p4 = tmp_4_88_fu_41965_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3044030441_fu_50422_p1() {
    newIndex3044030441_fu_50422_p1 = esl_zext<64,5>(newIndex450_fu_50412_p4.read());
}

void calcHash_rollingHash::thread_newIndex304_fu_42050_p4() {
    newIndex304_fu_42050_p4 = i_4_87_fu_42024_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3057130572_fu_50401_p1() {
    newIndex3057130572_fu_50401_p1 = esl_zext<64,5>(newIndex449_fu_50391_p4.read());
}

void calcHash_rollingHash::thread_newIndex305_fu_42060_p1() {
    newIndex305_fu_42060_p1 = esl_zext<64,5>(newIndex304_fu_42050_p4.read());
}

void calcHash_rollingHash::thread_newIndex306_fu_41990_p4() {
    newIndex306_fu_41990_p4 = tmp_4_89_fu_41985_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3070230703_fu_50380_p1() {
    newIndex3070230703_fu_50380_p1 = esl_zext<64,5>(newIndex448_fu_50370_p4.read());
}

void calcHash_rollingHash::thread_newIndex307_fu_42071_p4() {
    newIndex307_fu_42071_p4 = i_4_88_fu_42065_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3083330834_fu_50359_p1() {
    newIndex3083330834_fu_50359_p1 = esl_zext<64,5>(newIndex447_fu_50349_p4.read());
}

void calcHash_rollingHash::thread_newIndex308_fu_42081_p1() {
    newIndex308_fu_42081_p1 = esl_zext<64,5>(newIndex307_fu_42071_p4.read());
}

void calcHash_rollingHash::thread_newIndex3096430965_fu_50338_p1() {
    newIndex3096430965_fu_50338_p1 = esl_zext<64,5>(newIndex446_fu_50328_p4.read());
}

void calcHash_rollingHash::thread_newIndex309_fu_42091_p4() {
    newIndex309_fu_42091_p4 = tmp_4_90_fu_42086_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex30_fu_37130_p4() {
    newIndex30_fu_37130_p4 = tmp_4_9_fu_37125_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3109531096_fu_50317_p1() {
    newIndex3109531096_fu_50317_p1 = esl_zext<64,5>(newIndex445_fu_50307_p4.read());
}

void calcHash_rollingHash::thread_newIndex310_fu_61460_p3() {
    newIndex310_fu_61460_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1807_fu_61450_p4.read());
}

void calcHash_rollingHash::thread_newIndex311_fu_42171_p4() {
    newIndex311_fu_42171_p4 = i_4_89_fu_42145_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3122631227_fu_50296_p1() {
    newIndex3122631227_fu_50296_p1 = esl_zext<64,5>(newIndex444_fu_50286_p4.read());
}

void calcHash_rollingHash::thread_newIndex312_fu_42181_p1() {
    newIndex312_fu_42181_p1 = esl_zext<64,5>(newIndex311_fu_42171_p4.read());
}

void calcHash_rollingHash::thread_newIndex3135731358_fu_50275_p1() {
    newIndex3135731358_fu_50275_p1 = esl_zext<64,5>(newIndex443_fu_50265_p4.read());
}

void calcHash_rollingHash::thread_newIndex313_fu_42111_p4() {
    newIndex313_fu_42111_p4 = tmp_4_91_fu_42106_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3148831489_fu_50254_p1() {
    newIndex3148831489_fu_50254_p1 = esl_zext<64,5>(newIndex442_fu_50244_p4.read());
}

void calcHash_rollingHash::thread_newIndex314_fu_42192_p4() {
    newIndex314_fu_42192_p4 = i_4_90_fu_42186_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex315_fu_42202_p1() {
    newIndex315_fu_42202_p1 = esl_zext<64,5>(newIndex314_fu_42192_p4.read());
}

void calcHash_rollingHash::thread_newIndex3161931620_fu_50233_p1() {
    newIndex3161931620_fu_50233_p1 = esl_zext<64,5>(newIndex440_fu_50223_p4.read());
}

void calcHash_rollingHash::thread_newIndex316_fu_42212_p4() {
    newIndex316_fu_42212_p4 = tmp_4_92_fu_42207_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3175031751_fu_50212_p1() {
    newIndex3175031751_fu_50212_p1 = esl_zext<64,5>(newIndex439_fu_50202_p4.read());
}

void calcHash_rollingHash::thread_newIndex317_fu_42292_p4() {
    newIndex317_fu_42292_p4 = i_4_91_fu_42266_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3188131882_fu_50191_p1() {
    newIndex3188131882_fu_50191_p1 = esl_zext<64,5>(newIndex438_fu_50181_p4.read());
}

void calcHash_rollingHash::thread_newIndex318_fu_42302_p1() {
    newIndex318_fu_42302_p1 = esl_zext<64,5>(newIndex317_fu_42292_p4.read());
}

void calcHash_rollingHash::thread_newIndex319_fu_42232_p4() {
    newIndex319_fu_42232_p4 = tmp_4_93_fu_42227_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex31_fu_37140_p1() {
    newIndex31_fu_37140_p1 = esl_zext<64,6>(newIndex30_fu_37130_p4.read());
}

void calcHash_rollingHash::thread_newIndex3201232013_fu_50170_p1() {
    newIndex3201232013_fu_50170_p1 = esl_zext<64,5>(newIndex437_fu_50160_p4.read());
}

void calcHash_rollingHash::thread_newIndex320_fu_42313_p4() {
    newIndex320_fu_42313_p4 = i_4_92_fu_42307_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3214332144_fu_50149_p1() {
    newIndex3214332144_fu_50149_p1 = esl_zext<64,5>(newIndex436_fu_50139_p4.read());
}

void calcHash_rollingHash::thread_newIndex321_fu_42323_p1() {
    newIndex321_fu_42323_p1 = esl_zext<64,5>(newIndex320_fu_42313_p4.read());
}

void calcHash_rollingHash::thread_newIndex3227432275_fu_50128_p1() {
    newIndex3227432275_fu_50128_p1 = esl_zext<64,5>(newIndex435_fu_50118_p4.read());
}

void calcHash_rollingHash::thread_newIndex322_fu_42333_p4() {
    newIndex322_fu_42333_p4 = tmp_4_94_fu_42328_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex323_fu_42413_p4() {
    newIndex323_fu_42413_p4 = i_4_93_fu_42387_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3240532406_fu_50107_p1() {
    newIndex3240532406_fu_50107_p1 = esl_zext<64,5>(newIndex434_fu_50097_p4.read());
}

void calcHash_rollingHash::thread_newIndex324_fu_42423_p1() {
    newIndex324_fu_42423_p1 = esl_zext<64,5>(newIndex323_fu_42413_p4.read());
}

void calcHash_rollingHash::thread_newIndex3253632537_fu_50086_p1() {
    newIndex3253632537_fu_50086_p1 = esl_zext<64,5>(newIndex433_fu_50076_p4.read());
}

void calcHash_rollingHash::thread_newIndex325_fu_42353_p4() {
    newIndex325_fu_42353_p4 = tmp_4_95_fu_42348_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3266732668_fu_50065_p1() {
    newIndex3266732668_fu_50065_p1 = esl_zext<64,5>(newIndex432_fu_50055_p4.read());
}

void calcHash_rollingHash::thread_newIndex326_fu_42434_p4() {
    newIndex326_fu_42434_p4 = i_4_94_fu_42428_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3279832799_fu_50044_p1() {
    newIndex3279832799_fu_50044_p1 = esl_zext<64,5>(newIndex431_fu_50034_p4.read());
}

void calcHash_rollingHash::thread_newIndex327_fu_42444_p1() {
    newIndex327_fu_42444_p1 = esl_zext<64,5>(newIndex326_fu_42434_p4.read());
}

void calcHash_rollingHash::thread_newIndex328_fu_42454_p4() {
    newIndex328_fu_42454_p4 = tmp_4_96_fu_42449_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3292932930_fu_50023_p1() {
    newIndex3292932930_fu_50023_p1 = esl_zext<64,5>(newIndex430_fu_50013_p4.read());
}

void calcHash_rollingHash::thread_newIndex329_fu_42534_p4() {
    newIndex329_fu_42534_p4 = i_4_95_fu_42508_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex32_fu_37210_p4() {
    newIndex32_fu_37210_p4 = i_4_8_fu_37184_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3306033061_fu_50002_p1() {
    newIndex3306033061_fu_50002_p1 = esl_zext<64,5>(newIndex429_fu_49992_p4.read());
}

void calcHash_rollingHash::thread_newIndex330_fu_42544_p1() {
    newIndex330_fu_42544_p1 = esl_zext<64,5>(newIndex329_fu_42534_p4.read());
}

void calcHash_rollingHash::thread_newIndex3319133192_fu_49981_p1() {
    newIndex3319133192_fu_49981_p1 = esl_zext<64,5>(newIndex428_fu_49971_p4.read());
}

void calcHash_rollingHash::thread_newIndex331_fu_42474_p4() {
    newIndex331_fu_42474_p4 = tmp_4_97_fu_42469_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex332_fu_42555_p4() {
    newIndex332_fu_42555_p4 = i_4_96_fu_42549_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex3332233323_fu_49960_p1() {
    newIndex3332233323_fu_49960_p1 = esl_zext<64,5>(newIndex427_fu_49950_p4.read());
}

void calcHash_rollingHash::thread_newIndex333_fu_42565_p1() {
    newIndex333_fu_42565_p1 = esl_zext<64,5>(newIndex332_fu_42555_p4.read());
}

void calcHash_rollingHash::thread_newIndex3345333454_fu_49939_p1() {
    newIndex3345333454_fu_49939_p1 = esl_zext<64,5>(newIndex426_fu_49929_p4.read());
}

void calcHash_rollingHash::thread_newIndex334_fu_42575_p4() {
    newIndex334_fu_42575_p4 = tmp_4_98_fu_42570_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3358433585_fu_52610_p1() {
    newIndex3358433585_fu_52610_p1 = esl_zext<64,4>(newIndex425_fu_52600_p4.read());
}

void calcHash_rollingHash::thread_newIndex335_fu_42655_p4() {
    newIndex335_fu_42655_p4 = i_4_97_fu_42629_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex336_fu_42665_p1() {
    newIndex336_fu_42665_p1 = esl_zext<64,5>(newIndex335_fu_42655_p4.read());
}

void calcHash_rollingHash::thread_newIndex337_fu_42595_p4() {
    newIndex337_fu_42595_p4 = tmp_4_99_fu_42590_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex338_fu_42676_p4() {
    newIndex338_fu_42676_p4 = i_4_98_fu_42670_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex339_fu_42686_p1() {
    newIndex339_fu_42686_p1 = esl_zext<64,5>(newIndex338_fu_42676_p4.read());
}

void calcHash_rollingHash::thread_newIndex33_fu_37150_p4() {
    newIndex33_fu_37150_p4 = tmp_4_s_fu_37145_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex340_fu_42696_p4() {
    newIndex340_fu_42696_p4 = tmp_4_100_fu_42691_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex341_fu_42776_p4() {
    newIndex341_fu_42776_p4 = i_4_99_fu_42750_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex342_fu_42786_p1() {
    newIndex342_fu_42786_p1 = esl_zext<64,5>(newIndex341_fu_42776_p4.read());
}

void calcHash_rollingHash::thread_newIndex343_fu_42716_p4() {
    newIndex343_fu_42716_p4 = tmp_4_101_fu_42711_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex344_fu_42797_p4() {
    newIndex344_fu_42797_p4 = i_4_100_fu_42791_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex345_fu_42807_p1() {
    newIndex345_fu_42807_p1 = esl_zext<64,5>(newIndex344_fu_42797_p4.read());
}

void calcHash_rollingHash::thread_newIndex346_fu_42817_p4() {
    newIndex346_fu_42817_p4 = tmp_4_102_fu_42812_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex347_fu_42897_p4() {
    newIndex347_fu_42897_p4 = i_4_101_fu_42871_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex348_fu_42907_p1() {
    newIndex348_fu_42907_p1 = esl_zext<64,5>(newIndex347_fu_42897_p4.read());
}

void calcHash_rollingHash::thread_newIndex349_fu_42837_p4() {
    newIndex349_fu_42837_p4 = tmp_4_103_fu_42832_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex34_fu_37160_p1() {
    newIndex34_fu_37160_p1 = esl_zext<64,6>(newIndex33_fu_37150_p4.read());
}

void calcHash_rollingHash::thread_newIndex350_fu_42918_p4() {
    newIndex350_fu_42918_p4 = i_4_102_fu_42912_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex351_fu_42928_p1() {
    newIndex351_fu_42928_p1 = esl_zext<64,5>(newIndex350_fu_42918_p4.read());
}

void calcHash_rollingHash::thread_newIndex352_fu_42938_p4() {
    newIndex352_fu_42938_p4 = tmp_4_104_fu_42933_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex353_fu_43018_p4() {
    newIndex353_fu_43018_p4 = i_4_103_fu_42992_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex354_fu_43028_p1() {
    newIndex354_fu_43028_p1 = esl_zext<64,5>(newIndex353_fu_43018_p4.read());
}

void calcHash_rollingHash::thread_newIndex355_fu_42958_p4() {
    newIndex355_fu_42958_p4 = tmp_4_105_fu_42953_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex356_fu_43039_p4() {
    newIndex356_fu_43039_p4 = i_4_104_fu_43033_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex357_fu_43049_p1() {
    newIndex357_fu_43049_p1 = esl_zext<64,5>(newIndex356_fu_43039_p4.read());
}

void calcHash_rollingHash::thread_newIndex358_fu_43059_p4() {
    newIndex358_fu_43059_p4 = tmp_4_106_fu_43054_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex359_fu_43139_p4() {
    newIndex359_fu_43139_p4 = i_4_105_fu_43113_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex35_fu_37231_p4() {
    newIndex35_fu_37231_p4 = i_4_9_fu_37225_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex360_fu_43149_p1() {
    newIndex360_fu_43149_p1 = esl_zext<64,5>(newIndex359_fu_43139_p4.read());
}

void calcHash_rollingHash::thread_newIndex361_fu_43079_p4() {
    newIndex361_fu_43079_p4 = tmp_4_107_fu_43074_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex362_fu_43160_p4() {
    newIndex362_fu_43160_p4 = i_4_106_fu_43154_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex363_fu_43170_p1() {
    newIndex363_fu_43170_p1 = esl_zext<64,5>(newIndex362_fu_43160_p4.read());
}

void calcHash_rollingHash::thread_newIndex364_fu_43180_p4() {
    newIndex364_fu_43180_p4 = tmp_4_108_fu_43175_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex365_fu_43260_p4() {
    newIndex365_fu_43260_p4 = i_4_107_fu_43234_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex366_fu_43270_p1() {
    newIndex366_fu_43270_p1 = esl_zext<64,5>(newIndex365_fu_43260_p4.read());
}

void calcHash_rollingHash::thread_newIndex367_fu_43200_p4() {
    newIndex367_fu_43200_p4 = tmp_4_109_fu_43195_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex368_fu_43281_p4() {
    newIndex368_fu_43281_p4 = i_4_108_fu_43275_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex369_fu_43291_p1() {
    newIndex369_fu_43291_p1 = esl_zext<64,5>(newIndex368_fu_43281_p4.read());
}

void calcHash_rollingHash::thread_newIndex36_fu_37251_p4() {
    newIndex36_fu_37251_p4 = tmp_4_10_fu_37246_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex370_fu_43301_p4() {
    newIndex370_fu_43301_p4 = tmp_4_110_fu_43296_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex371_fu_43381_p4() {
    newIndex371_fu_43381_p4 = i_4_109_fu_43355_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex372_fu_43391_p1() {
    newIndex372_fu_43391_p1 = esl_zext<64,5>(newIndex371_fu_43381_p4.read());
}

void calcHash_rollingHash::thread_newIndex373_fu_43321_p4() {
    newIndex373_fu_43321_p4 = tmp_4_111_fu_43316_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex374_fu_43402_p4() {
    newIndex374_fu_43402_p4 = i_4_110_fu_43396_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex375_fu_43412_p1() {
    newIndex375_fu_43412_p1 = esl_zext<64,5>(newIndex374_fu_43402_p4.read());
}

}

