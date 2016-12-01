#include "dedupDriver_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dedupDriver_rollingHash::thread_str_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_72_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_72_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_72_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_72_address1() {
    str_72_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_72_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_72_ce0 = ap_const_logic_1;
    } else {
        str_72_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_72_ce1 = ap_const_logic_1;
    } else {
        str_72_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_73_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_73_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_73_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_73_address1() {
    str_73_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_73_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_73_ce0 = ap_const_logic_1;
    } else {
        str_73_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_73_ce1 = ap_const_logic_1;
    } else {
        str_73_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_74_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_74_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_74_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_74_address1() {
    str_74_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_74_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_74_ce0 = ap_const_logic_1;
    } else {
        str_74_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_74_ce1 = ap_const_logic_1;
    } else {
        str_74_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_75_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_75_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_75_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_75_address1() {
    str_75_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_75_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_75_ce0 = ap_const_logic_1;
    } else {
        str_75_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_75_ce1 = ap_const_logic_1;
    } else {
        str_75_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_76_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_76_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_76_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_76_address1() {
    str_76_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_76_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_76_ce0 = ap_const_logic_1;
    } else {
        str_76_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_76_ce1 = ap_const_logic_1;
    } else {
        str_76_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_77_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_77_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_77_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_77_address1() {
    str_77_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_77_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_77_ce0 = ap_const_logic_1;
    } else {
        str_77_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_77_ce1 = ap_const_logic_1;
    } else {
        str_77_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_78_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_78_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_78_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_78_address1() {
    str_78_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_78_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_78_ce0 = ap_const_logic_1;
    } else {
        str_78_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_78_ce1 = ap_const_logic_1;
    } else {
        str_78_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_79_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_79_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_79_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_79_address1() {
    str_79_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_79_ce0 = ap_const_logic_1;
    } else {
        str_79_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_79_ce1 = ap_const_logic_1;
    } else {
        str_79_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_7_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_7_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_7_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_7_address1() {
    str_7_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_7_ce0 = ap_const_logic_1;
    } else {
        str_7_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_7_ce1 = ap_const_logic_1;
    } else {
        str_7_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_80_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_80_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_80_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_80_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_80_address1() {
    str_80_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_80_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_80_ce0 = ap_const_logic_1;
    } else {
        str_80_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_80_ce1 = ap_const_logic_1;
    } else {
        str_80_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_81_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_81_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_81_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_81_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_81_address1() {
    str_81_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_81_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_81_ce0 = ap_const_logic_1;
    } else {
        str_81_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_81_ce1 = ap_const_logic_1;
    } else {
        str_81_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_82_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_82_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_82_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_82_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_82_address1() {
    str_82_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_82_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_82_ce0 = ap_const_logic_1;
    } else {
        str_82_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_82_ce1 = ap_const_logic_1;
    } else {
        str_82_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_83_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_83_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_83_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_83_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_83_address1() {
    str_83_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_83_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_83_ce0 = ap_const_logic_1;
    } else {
        str_83_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_83_ce1 = ap_const_logic_1;
    } else {
        str_83_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_84_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_84_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_84_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_84_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_84_address1() {
    str_84_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_84_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_84_ce0 = ap_const_logic_1;
    } else {
        str_84_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_84_ce1 = ap_const_logic_1;
    } else {
        str_84_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_85_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_85_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_85_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_85_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_85_address1() {
    str_85_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_85_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_85_ce0 = ap_const_logic_1;
    } else {
        str_85_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_85_ce1 = ap_const_logic_1;
    } else {
        str_85_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_86_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_86_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_86_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_86_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_86_address1() {
    str_86_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_86_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_86_ce0 = ap_const_logic_1;
    } else {
        str_86_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_86_ce1 = ap_const_logic_1;
    } else {
        str_86_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_87_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_87_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_87_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_87_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_87_address1() {
    str_87_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_87_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_87_ce0 = ap_const_logic_1;
    } else {
        str_87_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_87_ce1 = ap_const_logic_1;
    } else {
        str_87_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_88_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_88_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_88_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_88_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_88_address1() {
    str_88_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_88_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_88_ce0 = ap_const_logic_1;
    } else {
        str_88_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_88_ce1 = ap_const_logic_1;
    } else {
        str_88_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_89_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_89_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_89_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_89_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_89_address1() {
    str_89_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_89_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_89_ce0 = ap_const_logic_1;
    } else {
        str_89_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_89_ce1 = ap_const_logic_1;
    } else {
        str_89_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_8_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_8_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_8_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_8_address1() {
    str_8_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_8_ce0 = ap_const_logic_1;
    } else {
        str_8_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_8_ce1 = ap_const_logic_1;
    } else {
        str_8_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_90_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_90_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_90_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_90_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_90_address1() {
    str_90_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_90_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_90_ce0 = ap_const_logic_1;
    } else {
        str_90_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_90_ce1 = ap_const_logic_1;
    } else {
        str_90_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_91_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_91_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_91_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_91_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_91_address1() {
    str_91_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_91_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_91_ce0 = ap_const_logic_1;
    } else {
        str_91_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_91_ce1 = ap_const_logic_1;
    } else {
        str_91_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_92_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_92_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_92_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_92_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_92_address1() {
    str_92_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_92_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_92_ce0 = ap_const_logic_1;
    } else {
        str_92_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_92_ce1 = ap_const_logic_1;
    } else {
        str_92_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_93_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_93_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_93_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_93_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_93_address1() {
    str_93_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_93_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_93_ce0 = ap_const_logic_1;
    } else {
        str_93_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_93_ce1 = ap_const_logic_1;
    } else {
        str_93_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_94_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_94_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_94_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_94_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_94_address1() {
    str_94_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_94_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_94_ce0 = ap_const_logic_1;
    } else {
        str_94_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_94_ce1 = ap_const_logic_1;
    } else {
        str_94_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_95_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_95_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_95_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_95_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_95_address1() {
    str_95_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_95_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_95_ce0 = ap_const_logic_1;
    } else {
        str_95_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_95_ce1 = ap_const_logic_1;
    } else {
        str_95_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_96_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_96_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_96_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_96_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_96_address1() {
    str_96_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_96_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_96_ce0 = ap_const_logic_1;
    } else {
        str_96_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_96_ce1 = ap_const_logic_1;
    } else {
        str_96_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_97_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_97_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_97_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_97_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_97_address1() {
    str_97_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_97_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_97_ce0 = ap_const_logic_1;
    } else {
        str_97_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_97_ce1 = ap_const_logic_1;
    } else {
        str_97_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_98_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_98_address0 =  (sc_lv<6>) (newIndex3_fu_7367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_98_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_98_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_98_address1() {
    str_98_address1 =  (sc_lv<6>) (newIndex5_fu_7455_p1.read());
}

void dedupDriver_rollingHash::thread_str_98_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_98_ce0 = ap_const_logic_1;
    } else {
        str_98_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_98_ce1 = ap_const_logic_1;
    } else {
        str_98_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_99_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_99_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_99_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_99_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_99_address1() {
    str_99_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_99_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_99_ce0 = ap_const_logic_1;
    } else {
        str_99_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_99_ce1 = ap_const_logic_1;
    } else {
        str_99_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_9_address0 =  (sc_lv<6>) (newIndex9_fu_7629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_9_address0 =  (sc_lv<6>) (newIndex1_fu_6939_p1.read());
    } else {
        str_9_address0 = "XXXXXX";
    }
}

void dedupDriver_rollingHash::thread_str_9_address1() {
    str_9_address1 =  (sc_lv<6>) (newIndex7_fu_7533_p1.read());
}

void dedupDriver_rollingHash::thread_str_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read())))) {
        str_9_ce0 = ap_const_logic_1;
    } else {
        str_9_ce0 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_str_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it0.read()))) {
        str_9_ce1 = ap_const_logic_1;
    } else {
        str_9_ce1 = ap_const_logic_0;
    }
}

void dedupDriver_rollingHash::thread_sum_1_fu_7336_p2() {
    sum_1_fu_7336_p2 = (!tmp_1_cast_fu_7332_p1.read().is_01() || !sum_reg_6349.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1_cast_fu_7332_p1.read()) + sc_biguint<18>(sum_reg_6349.read()));
}

void dedupDriver_rollingHash::thread_sum_3_1_fu_7801_p2() {
    sum_3_1_fu_7801_p2 = (!tmp_1_18_fu_7795_p2.read().is_01() || !tmp_9_1_fu_7791_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_18_fu_7795_p2.read()) - sc_bigint<32>(tmp_9_1_fu_7791_p1.read()));
}

void dedupDriver_rollingHash::thread_sum_3_fu_7717_p2() {
    sum_3_fu_7717_p2 = (!tmp_s_fu_7711_p2.read().is_01() || !tmp_9_fu_7707_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_s_fu_7711_p2.read()) - sc_bigint<32>(tmp_9_fu_7707_p1.read()));
}

void dedupDriver_rollingHash::thread_sum_cast_fu_7342_p1() {
    sum_cast_fu_7342_p1 = esl_sext<32,18>(sum_reg_6349.read());
}

void dedupDriver_rollingHash::thread_sum_s_phi_fu_6375_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_reg_9273_pp1_iter2.read()))) {
        sum_s_phi_fu_6375_p4 = sum_3_1_reg_11202.read();
    } else {
        sum_s_phi_fu_6375_p4 = sum_s_reg_6372.read();
    }
}

void dedupDriver_rollingHash::thread_tmp_1_18_fu_7795_p2() {
    tmp_1_18_fu_7795_p2 = (!tmp_6_1_fu_7787_p1.read().is_01() || !sum_3_fu_7717_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_6_1_fu_7787_p1.read()) + sc_biguint<32>(sum_3_fu_7717_p2.read()));
}

void dedupDriver_rollingHash::thread_tmp_1_cast_fu_7332_p1() {
    tmp_1_cast_fu_7332_p1 = esl_sext<18,8>(tmp_1_fu_7071_p130.read());
}

void dedupDriver_rollingHash::thread_tmp_2_fu_6925_p1() {
    tmp_2_fu_6925_p1 = i_reg_6338.read().range(7-1, 0);
}

void dedupDriver_rollingHash::thread_tmp_4_1_fu_7613_p2() {
    tmp_4_1_fu_7613_p2 = (!i_s_reg_6361.read().is_01() || !ap_const_lv32_400.is_01())? sc_lv<32>(): (sc_biguint<32>(i_s_reg_6361.read()) + sc_biguint<32>(ap_const_lv32_400));
}

void dedupDriver_rollingHash::thread_tmp_4_fu_7347_p2() {
    tmp_4_fu_7347_p2 = (!ap_const_lv32_3FF.is_01() || !i_s_reg_6361.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_3FF) + sc_biguint<32>(i_s_reg_6361.read()));
}

void dedupDriver_rollingHash::thread_tmp_5_fu_7353_p1() {
    tmp_5_fu_7353_p1 = i_s_reg_6361.read().range(7-1, 0);
}

void dedupDriver_rollingHash::thread_tmp_6_1_fu_7787_p1() {
    tmp_6_1_fu_7787_p1 = esl_sext<32,8>(ap_reg_phiprechg_str_load_1_1_phi_reg_6647pp1_it2.read());
}

void dedupDriver_rollingHash::thread_tmp_6_fu_7703_p1() {
    tmp_6_fu_7703_p1 = esl_sext<32,8>(ap_reg_phiprechg_str_load_1_0_phi_reg_6381pp1_it2.read());
}

void dedupDriver_rollingHash::thread_tmp_7_fu_7435_p2() {
    tmp_7_fu_7435_p2 = (!ap_const_lv32_FFFFFFFF.is_01() || !i_s_reg_6361.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFF) + sc_biguint<32>(i_s_reg_6361.read()));
}

void dedupDriver_rollingHash::thread_tmp_8_fu_7441_p1() {
    tmp_8_fu_7441_p1 = tmp_7_fu_7435_p2.read().range(7-1, 0);
}

void dedupDriver_rollingHash::thread_tmp_9_1_fu_7791_p1() {
    tmp_9_1_fu_7791_p1 = esl_sext<32,8>(ap_reg_phiprechg_str_load_2_1_phi_reg_6780pp1_it2.read());
}

void dedupDriver_rollingHash::thread_tmp_9_fu_7707_p1() {
    tmp_9_fu_7707_p1 = esl_sext<32,8>(ap_reg_phiprechg_str_load_2_0_phi_reg_6514pp1_it2.read());
}

void dedupDriver_rollingHash::thread_tmp_s_fu_7711_p2() {
    tmp_s_fu_7711_p2 = (!tmp_6_fu_7703_p1.read().is_01() || !sum_s_phi_fu_6375_p4.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_6_fu_7703_p1.read()) + sc_biguint<32>(sum_s_phi_fu_6375_p4.read()));
}

}

