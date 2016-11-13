#include "calcHash_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void calcHash_rollingHash::thread_newSel77_fu_56885_p3() {
    newSel77_fu_56885_p3 = (!tmp_13_1_1_fu_52637_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_1_fu_52637_p2.read()[0].to_bool())? index_1_1_reg_77641.read(): index_1_cast_fu_52596_p1.read());
}

void calcHash_rollingHash::thread_newSel78_fu_56892_p3() {
    newSel78_fu_56892_p3 = (!or_cond127_fu_56177_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond127_fu_56177_p2.read()[0].to_bool())? newSel14_fu_56171_p3.read(): newSel15_fu_56183_p3.read());
}

void calcHash_rollingHash::thread_newSel79_fu_56906_p3() {
    newSel79_fu_56906_p3 = (!or_cond129_fu_56201_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond129_fu_56201_p2.read()[0].to_bool())? newSel16_fu_56195_p3.read(): newSel17_fu_56207_p3.read());
}

void calcHash_rollingHash::thread_newSel7_fu_49722_p3() {
    newSel7_fu_49722_p3 = (!or_cond110_reg_77612.read()[0].is_01())? sc_lv<10>(): ((or_cond110_reg_77612.read()[0].to_bool())? newSel4_fu_49598_p3.read(): newSel5_reg_77618.read());
}

void calcHash_rollingHash::thread_newSel80_fu_56920_p3() {
    newSel80_fu_56920_p3 = (!or_cond131_fu_56225_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond131_fu_56225_p2.read()[0].to_bool())? newSel18_fu_56219_p3.read(): newSel19_fu_56231_p3.read());
}

void calcHash_rollingHash::thread_newSel81_fu_56934_p3() {
    newSel81_fu_56934_p3 = (!or_cond133_fu_56249_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond133_fu_56249_p2.read()[0].to_bool())? newSel20_fu_56243_p3.read(): newSel21_fu_56255_p3.read());
}

void calcHash_rollingHash::thread_newSel82_fu_56942_p3() {
    newSel82_fu_56942_p3 = (!or_cond135_fu_56267_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond135_fu_56267_p2.read()[0].to_bool())? newSel22_fu_56261_p3.read(): newSel23_fu_56273_p3.read());
}

void calcHash_rollingHash::thread_newSel83_fu_56956_p3() {
    newSel83_fu_56956_p3 = (!or_cond137_fu_56291_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond137_fu_56291_p2.read()[0].to_bool())? newSel24_fu_56285_p3.read(): newSel25_fu_56297_p3.read());
}

void calcHash_rollingHash::thread_newSel84_fu_56970_p3() {
    newSel84_fu_56970_p3 = (!or_cond139_fu_56315_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond139_fu_56315_p2.read()[0].to_bool())? newSel26_fu_56309_p3.read(): newSel27_fu_56321_p3.read());
}

void calcHash_rollingHash::thread_newSel85_fu_56984_p3() {
    newSel85_fu_56984_p3 = (!or_cond141_fu_56339_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond141_fu_56339_p2.read()[0].to_bool())? newSel28_fu_56333_p3.read(): newSel29_fu_56345_p3.read());
}

void calcHash_rollingHash::thread_newSel86_fu_56992_p3() {
    newSel86_fu_56992_p3 = (!or_cond143_fu_56357_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond143_fu_56357_p2.read()[0].to_bool())? newSel30_fu_56351_p3.read(): newSel31_fu_56363_p3.read());
}

void calcHash_rollingHash::thread_newSel87_fu_57006_p3() {
    newSel87_fu_57006_p3 = (!or_cond145_fu_56381_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond145_fu_56381_p2.read()[0].to_bool())? newSel32_fu_56375_p3.read(): newSel33_fu_56387_p3.read());
}

void calcHash_rollingHash::thread_newSel88_fu_57020_p3() {
    newSel88_fu_57020_p3 = (!or_cond147_fu_56405_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond147_fu_56405_p2.read()[0].to_bool())? newSel34_fu_56399_p3.read(): newSel35_fu_56411_p3.read());
}

void calcHash_rollingHash::thread_newSel89_fu_57034_p3() {
    newSel89_fu_57034_p3 = (!or_cond149_fu_56429_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond149_fu_56429_p2.read()[0].to_bool())? newSel36_fu_56423_p3.read(): newSel37_fu_56435_p3.read());
}

void calcHash_rollingHash::thread_newSel8_fu_49783_p3() {
    newSel8_fu_49783_p3 = esl_concat<4,6>(tmp_18_137_fu_49773_p4.read(), newSel2285_v_fu_49765_p3.read());
}

void calcHash_rollingHash::thread_newSel90_fu_57042_p3() {
    newSel90_fu_57042_p3 = (!or_cond151_fu_56447_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond151_fu_56447_p2.read()[0].to_bool())? newSel38_fu_56441_p3.read(): newSel39_fu_56453_p3.read());
}

void calcHash_rollingHash::thread_newSel91_fu_57056_p3() {
    newSel91_fu_57056_p3 = (!or_cond153_fu_56471_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond153_fu_56471_p2.read()[0].to_bool())? newSel40_fu_56465_p3.read(): newSel41_fu_56477_p3.read());
}

void calcHash_rollingHash::thread_newSel92_fu_57070_p3() {
    newSel92_fu_57070_p3 = (!or_cond155_fu_56495_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond155_fu_56495_p2.read()[0].to_bool())? newSel42_fu_56489_p3.read(): newSel43_fu_56501_p3.read());
}

void calcHash_rollingHash::thread_newSel93_fu_57084_p3() {
    newSel93_fu_57084_p3 = (!or_cond157_fu_56519_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond157_fu_56519_p2.read()[0].to_bool())? newSel44_fu_56513_p3.read(): newSel45_fu_56525_p3.read());
}

void calcHash_rollingHash::thread_newSel94_fu_57092_p3() {
    newSel94_fu_57092_p3 = (!or_cond159_fu_56537_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond159_fu_56537_p2.read()[0].to_bool())? newSel46_fu_56531_p3.read(): newSel47_fu_56543_p3.read());
}

void calcHash_rollingHash::thread_newSel95_fu_57106_p3() {
    newSel95_fu_57106_p3 = (!or_cond161_fu_56561_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond161_fu_56561_p2.read()[0].to_bool())? newSel48_fu_56555_p3.read(): newSel49_fu_56567_p3.read());
}

void calcHash_rollingHash::thread_newSel96_fu_57120_p3() {
    newSel96_fu_57120_p3 = (!or_cond163_fu_56585_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond163_fu_56585_p2.read()[0].to_bool())? newSel50_fu_56579_p3.read(): newSel51_fu_56591_p3.read());
}

void calcHash_rollingHash::thread_newSel97_fu_57134_p3() {
    newSel97_fu_57134_p3 = (!or_cond165_fu_56609_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond165_fu_56609_p2.read()[0].to_bool())? newSel52_fu_56603_p3.read(): newSel53_fu_56615_p3.read());
}

void calcHash_rollingHash::thread_newSel98_fu_57142_p3() {
    newSel98_fu_57142_p3 = (!or_cond167_fu_56627_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond167_fu_56627_p2.read()[0].to_bool())? newSel54_fu_56621_p3.read(): newSel55_fu_56633_p3.read());
}

void calcHash_rollingHash::thread_newSel99_fu_57156_p3() {
    newSel99_fu_57156_p3 = (!or_cond169_fu_56651_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond169_fu_56651_p2.read()[0].to_bool())? newSel56_fu_56645_p3.read(): newSel57_fu_56657_p3.read());
}

void calcHash_rollingHash::thread_newSel9_fu_49797_p3() {
    newSel9_fu_49797_p3 = (!or_cond118_fu_49716_p2.read()[0].is_01())? sc_lv<10>(): ((or_cond118_fu_49716_p2.read()[0].to_bool())? newSel6_fu_49708_p3.read(): newSel7_fu_49722_p3.read());
}

void calcHash_rollingHash::thread_newSel_fu_48516_p3() {
    newSel_fu_48516_p3 = esl_concat<8,2>(tmp_1281_fu_48506_p4.read(), newSel2165_v_cast_fu_48498_p3.read());
}

void calcHash_rollingHash::thread_newSel_v_cast_cast_fu_48798_p3() {
    newSel_v_cast_cast_fu_48798_p3 = (!tmp_13_0_126_reg_77377.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_126_reg_77377.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void calcHash_rollingHash::thread_or_cond100_fu_48750_p2() {
    or_cond100_fu_48750_p2 = (or_cond72_fu_48584_p2.read() | or_cond73_fu_48590_p2.read());
}

void calcHash_rollingHash::thread_or_cond101_fu_49490_p2() {
    or_cond101_fu_49490_p2 = (or_cond74_fu_49266_p2.read() | or_cond75_fu_49279_p2.read());
}

void calcHash_rollingHash::thread_or_cond102_fu_48756_p2() {
    or_cond102_fu_48756_p2 = (or_cond76_fu_48596_p2.read() | or_cond77_fu_48602_p2.read());
}

void calcHash_rollingHash::thread_or_cond103_fu_49511_p2() {
    or_cond103_fu_49511_p2 = (or_cond78_fu_49306_p2.read() | or_cond79_fu_49318_p2.read());
}

void calcHash_rollingHash::thread_or_cond104_fu_49528_p2() {
    or_cond104_fu_49528_p2 = (or_cond80_reg_77535.read() | or_cond81_fu_49341_p2.read());
}

void calcHash_rollingHash::thread_or_cond105_fu_49541_p2() {
    or_cond105_fu_49541_p2 = (or_cond82_fu_49353_p2.read() | or_cond83_fu_49365_p2.read());
}

void calcHash_rollingHash::thread_or_cond106_fu_48770_p2() {
    or_cond106_fu_48770_p2 = (or_cond84_fu_48622_p2.read() | or_cond85_fu_48636_p2.read());
}

void calcHash_rollingHash::thread_or_cond107_fu_49547_p2() {
    or_cond107_fu_49547_p2 = (or_cond86_reg_77541.read() | or_cond87_fu_49370_p2.read());
}

void calcHash_rollingHash::thread_or_cond108_fu_49563_p2() {
    or_cond108_fu_49563_p2 = (or_cond88_reg_77546.read() | or_cond89_fu_49393_p2.read());
}

void calcHash_rollingHash::thread_or_cond109_fu_49576_p2() {
    or_cond109_fu_49576_p2 = (or_cond90_fu_49405_p2.read() | or_cond91_fu_49417_p2.read());
}

void calcHash_rollingHash::thread_or_cond10_fu_48166_p2() {
    or_cond10_fu_48166_p2 = (tmp_13_0_106_fu_47522_p2.read() | tmp_13_0_105_fu_47494_p2.read());
}

void calcHash_rollingHash::thread_or_cond110_fu_48784_p2() {
    or_cond110_fu_48784_p2 = (or_cond92_fu_48670_p2.read() | or_cond93_fu_48684_p2.read());
}

void calcHash_rollingHash::thread_or_cond111_fu_49606_p2() {
    or_cond111_fu_49606_p2 = (or_cond94_reg_77562.read() | or_cond95_fu_49433_p2.read());
}

void calcHash_rollingHash::thread_or_cond112_fu_49622_p2() {
    or_cond112_fu_49622_p2 = (or_cond96_reg_77567.read() | or_cond97_fu_49456_p2.read());
}

void calcHash_rollingHash::thread_or_cond113_fu_49633_p2() {
    or_cond113_fu_49633_p2 = (or_cond98_reg_77578.read() | or_cond99_fu_49469_p2.read());
}

void calcHash_rollingHash::thread_or_cond114_fu_49645_p2() {
    or_cond114_fu_49645_p2 = (or_cond100_reg_77584.read() | or_cond101_fu_49490_p2.read());
}

void calcHash_rollingHash::thread_or_cond115_fu_49657_p2() {
    or_cond115_fu_49657_p2 = (or_cond102_reg_77590.read() | or_cond103_fu_49511_p2.read());
}

void calcHash_rollingHash::thread_or_cond116_fu_49674_p2() {
    or_cond116_fu_49674_p2 = (or_cond104_fu_49528_p2.read() | or_cond105_fu_49541_p2.read());
}

void calcHash_rollingHash::thread_or_cond117_fu_49685_p2() {
    or_cond117_fu_49685_p2 = (or_cond106_reg_77601.read() | or_cond107_fu_49547_p2.read());
}

void calcHash_rollingHash::thread_or_cond118_fu_49716_p2() {
    or_cond118_fu_49716_p2 = (or_cond108_fu_49563_p2.read() | or_cond109_fu_49576_p2.read());
}

void calcHash_rollingHash::thread_or_cond119_fu_49728_p2() {
    or_cond119_fu_49728_p2 = (or_cond110_reg_77612.read() | or_cond111_fu_49606_p2.read());
}

void calcHash_rollingHash::thread_or_cond11_fu_48180_p2() {
    or_cond11_fu_48180_p2 = (tmp_13_0_104_fu_47466_p2.read() | tmp_13_0_103_fu_47438_p2.read());
}

void calcHash_rollingHash::thread_or_cond120_fu_49745_p2() {
    or_cond120_fu_49745_p2 = (or_cond112_fu_49622_p2.read() | or_cond113_fu_49633_p2.read());
}

void calcHash_rollingHash::thread_or_cond121_fu_49759_p2() {
    or_cond121_fu_49759_p2 = (or_cond114_fu_49645_p2.read() | or_cond115_fu_49657_p2.read());
}

void calcHash_rollingHash::thread_or_cond122_fu_49791_p2() {
    or_cond122_fu_49791_p2 = (or_cond116_fu_49674_p2.read() | or_cond117_fu_49685_p2.read());
}

void calcHash_rollingHash::thread_or_cond123_fu_49805_p2() {
    or_cond123_fu_49805_p2 = (or_cond118_fu_49716_p2.read() | or_cond119_fu_49728_p2.read());
}

void calcHash_rollingHash::thread_or_cond124_fu_49837_p2() {
    or_cond124_fu_49837_p2 = (or_cond120_fu_49745_p2.read() | or_cond121_fu_49759_p2.read());
}

void calcHash_rollingHash::thread_or_cond125_fu_49851_p2() {
    or_cond125_fu_49851_p2 = (or_cond122_fu_49791_p2.read() | or_cond123_fu_49805_p2.read());
}

void calcHash_rollingHash::thread_or_cond126_fu_49869_p2() {
    or_cond126_fu_49869_p2 = (or_cond124_fu_49837_p2.read() | or_cond125_fu_49851_p2.read());
}

void calcHash_rollingHash::thread_or_cond127_fu_56177_p2() {
    or_cond127_fu_56177_p2 = (tmp_13_1_126_fu_56165_p2.read() | tmp_13_1_125_fu_56137_p2.read());
}

void calcHash_rollingHash::thread_or_cond128_fu_56189_p2() {
    or_cond128_fu_56189_p2 = (tmp_13_1_124_fu_56109_p2.read() | tmp_13_1_123_fu_56081_p2.read());
}

void calcHash_rollingHash::thread_or_cond129_fu_56201_p2() {
    or_cond129_fu_56201_p2 = (tmp_13_1_122_fu_56053_p2.read() | tmp_13_1_121_fu_56025_p2.read());
}

void calcHash_rollingHash::thread_or_cond12_fu_48186_p2() {
    or_cond12_fu_48186_p2 = (tmp_13_0_102_fu_47410_p2.read() | tmp_13_0_101_fu_47382_p2.read());
}

void calcHash_rollingHash::thread_or_cond130_fu_56213_p2() {
    or_cond130_fu_56213_p2 = (tmp_13_1_120_fu_55997_p2.read() | tmp_13_1_119_fu_55969_p2.read());
}

void calcHash_rollingHash::thread_or_cond131_fu_56225_p2() {
    or_cond131_fu_56225_p2 = (tmp_13_1_118_fu_55941_p2.read() | tmp_13_1_117_fu_55913_p2.read());
}

void calcHash_rollingHash::thread_or_cond132_fu_56237_p2() {
    or_cond132_fu_56237_p2 = (tmp_13_1_116_fu_55885_p2.read() | tmp_13_1_115_fu_55857_p2.read());
}

void calcHash_rollingHash::thread_or_cond133_fu_56249_p2() {
    or_cond133_fu_56249_p2 = (tmp_13_1_114_fu_55829_p2.read() | tmp_13_1_113_fu_55801_p2.read());
}

void calcHash_rollingHash::thread_or_cond134_fu_57438_p2() {
    or_cond134_fu_57438_p2 = (tmp_13_1_112_reg_78986.read() | tmp_13_1_111_reg_78981.read());
}

void calcHash_rollingHash::thread_or_cond135_fu_56267_p2() {
    or_cond135_fu_56267_p2 = (tmp_13_1_110_fu_55717_p2.read() | tmp_13_1_109_fu_55689_p2.read());
}

void calcHash_rollingHash::thread_or_cond136_fu_56279_p2() {
    or_cond136_fu_56279_p2 = (tmp_13_1_108_fu_55661_p2.read() | tmp_13_1_107_fu_55633_p2.read());
}

void calcHash_rollingHash::thread_or_cond137_fu_56291_p2() {
    or_cond137_fu_56291_p2 = (tmp_13_1_106_fu_55605_p2.read() | tmp_13_1_105_fu_55577_p2.read());
}

void calcHash_rollingHash::thread_or_cond138_fu_56303_p2() {
    or_cond138_fu_56303_p2 = (tmp_13_1_104_fu_55549_p2.read() | tmp_13_1_103_fu_55521_p2.read());
}

void calcHash_rollingHash::thread_or_cond139_fu_56315_p2() {
    or_cond139_fu_56315_p2 = (tmp_13_1_102_fu_55493_p2.read() | tmp_13_1_101_fu_55465_p2.read());
}

void calcHash_rollingHash::thread_or_cond13_fu_48872_p2() {
    or_cond13_fu_48872_p2 = (tmp_13_0_100_reg_77325.read() | tmp_13_0_99_reg_77320.read());
}

void calcHash_rollingHash::thread_or_cond140_fu_56327_p2() {
    or_cond140_fu_56327_p2 = (tmp_13_1_100_fu_55437_p2.read() | tmp_13_1_99_fu_55409_p2.read());
}

void calcHash_rollingHash::thread_or_cond141_fu_56339_p2() {
    or_cond141_fu_56339_p2 = (tmp_13_1_98_fu_55381_p2.read() | tmp_13_1_97_fu_55353_p2.read());
}

void calcHash_rollingHash::thread_or_cond142_fu_57442_p2() {
    or_cond142_fu_57442_p2 = (tmp_13_1_96_reg_78976.read() | tmp_13_1_95_reg_78971.read());
}

void calcHash_rollingHash::thread_or_cond143_fu_56357_p2() {
    or_cond143_fu_56357_p2 = (tmp_13_1_94_fu_55269_p2.read() | tmp_13_1_93_fu_55241_p2.read());
}

void calcHash_rollingHash::thread_or_cond144_fu_56369_p2() {
    or_cond144_fu_56369_p2 = (tmp_13_1_92_fu_55213_p2.read() | tmp_13_1_91_fu_55185_p2.read());
}

void calcHash_rollingHash::thread_or_cond145_fu_56381_p2() {
    or_cond145_fu_56381_p2 = (tmp_13_1_90_fu_55157_p2.read() | tmp_13_1_89_fu_55129_p2.read());
}

void calcHash_rollingHash::thread_or_cond146_fu_56393_p2() {
    or_cond146_fu_56393_p2 = (tmp_13_1_88_fu_55101_p2.read() | tmp_13_1_87_fu_55073_p2.read());
}

void calcHash_rollingHash::thread_or_cond147_fu_56405_p2() {
    or_cond147_fu_56405_p2 = (tmp_13_1_86_fu_55045_p2.read() | tmp_13_1_85_fu_55017_p2.read());
}

void calcHash_rollingHash::thread_or_cond148_fu_56417_p2() {
    or_cond148_fu_56417_p2 = (tmp_13_1_84_fu_54989_p2.read() | tmp_13_1_83_fu_54961_p2.read());
}

void calcHash_rollingHash::thread_or_cond149_fu_56429_p2() {
    or_cond149_fu_56429_p2 = (tmp_13_1_82_fu_54933_p2.read() | tmp_13_1_81_fu_54905_p2.read());
}

void calcHash_rollingHash::thread_or_cond14_fu_48192_p2() {
    or_cond14_fu_48192_p2 = (tmp_13_0_98_fu_47298_p2.read() | tmp_13_0_97_fu_47270_p2.read());
}

void calcHash_rollingHash::thread_or_cond150_fu_57446_p2() {
    or_cond150_fu_57446_p2 = (tmp_13_1_80_reg_78966.read() | tmp_13_1_79_reg_78961.read());
}

void calcHash_rollingHash::thread_or_cond151_fu_56447_p2() {
    or_cond151_fu_56447_p2 = (tmp_13_1_78_fu_54821_p2.read() | tmp_13_1_77_fu_54793_p2.read());
}

void calcHash_rollingHash::thread_or_cond152_fu_56459_p2() {
    or_cond152_fu_56459_p2 = (tmp_13_1_76_fu_54765_p2.read() | tmp_13_1_75_fu_54737_p2.read());
}

void calcHash_rollingHash::thread_or_cond153_fu_56471_p2() {
    or_cond153_fu_56471_p2 = (tmp_13_1_74_fu_54709_p2.read() | tmp_13_1_73_fu_54681_p2.read());
}

void calcHash_rollingHash::thread_or_cond154_fu_56483_p2() {
    or_cond154_fu_56483_p2 = (tmp_13_1_72_fu_54653_p2.read() | tmp_13_1_71_fu_54625_p2.read());
}

void calcHash_rollingHash::thread_or_cond155_fu_56495_p2() {
    or_cond155_fu_56495_p2 = (tmp_13_1_70_fu_54597_p2.read() | tmp_13_1_69_fu_54569_p2.read());
}

void calcHash_rollingHash::thread_or_cond156_fu_56507_p2() {
    or_cond156_fu_56507_p2 = (tmp_13_1_68_fu_54541_p2.read() | tmp_13_1_67_fu_54513_p2.read());
}

void calcHash_rollingHash::thread_or_cond157_fu_56519_p2() {
    or_cond157_fu_56519_p2 = (tmp_13_1_66_fu_54485_p2.read() | tmp_13_1_65_fu_54457_p2.read());
}

void calcHash_rollingHash::thread_or_cond158_fu_57450_p2() {
    or_cond158_fu_57450_p2 = (tmp_13_1_64_reg_78956.read() | tmp_13_1_63_reg_78951.read());
}

void calcHash_rollingHash::thread_or_cond159_fu_56537_p2() {
    or_cond159_fu_56537_p2 = (tmp_13_1_62_fu_54373_p2.read() | tmp_13_1_61_fu_54345_p2.read());
}

void calcHash_rollingHash::thread_or_cond15_fu_48890_p2() {
    or_cond15_fu_48890_p2 = (tmp_13_0_96_reg_77309.read() | tmp_13_0_95_reg_77304.read());
}

void calcHash_rollingHash::thread_or_cond160_fu_56549_p2() {
    or_cond160_fu_56549_p2 = (tmp_13_1_60_fu_54317_p2.read() | tmp_13_1_59_fu_54289_p2.read());
}

void calcHash_rollingHash::thread_or_cond161_fu_56561_p2() {
    or_cond161_fu_56561_p2 = (tmp_13_1_58_fu_54261_p2.read() | tmp_13_1_57_fu_54233_p2.read());
}

void calcHash_rollingHash::thread_or_cond162_fu_56573_p2() {
    or_cond162_fu_56573_p2 = (tmp_13_1_56_fu_54205_p2.read() | tmp_13_1_55_fu_54177_p2.read());
}

void calcHash_rollingHash::thread_or_cond163_fu_56585_p2() {
    or_cond163_fu_56585_p2 = (tmp_13_1_54_fu_54149_p2.read() | tmp_13_1_53_fu_54121_p2.read());
}

void calcHash_rollingHash::thread_or_cond164_fu_56597_p2() {
    or_cond164_fu_56597_p2 = (tmp_13_1_52_fu_54093_p2.read() | tmp_13_1_51_fu_54065_p2.read());
}

void calcHash_rollingHash::thread_or_cond165_fu_56609_p2() {
    or_cond165_fu_56609_p2 = (tmp_13_1_50_fu_54037_p2.read() | tmp_13_1_49_fu_54009_p2.read());
}

void calcHash_rollingHash::thread_or_cond166_fu_57454_p2() {
    or_cond166_fu_57454_p2 = (tmp_13_1_48_reg_78946.read() | tmp_13_1_47_reg_78941.read());
}

void calcHash_rollingHash::thread_or_cond167_fu_56627_p2() {
    or_cond167_fu_56627_p2 = (tmp_13_1_46_fu_53925_p2.read() | tmp_13_1_45_fu_53897_p2.read());
}

void calcHash_rollingHash::thread_or_cond168_fu_56639_p2() {
    or_cond168_fu_56639_p2 = (tmp_13_1_44_fu_53869_p2.read() | tmp_13_1_43_fu_53841_p2.read());
}

void calcHash_rollingHash::thread_or_cond169_fu_56651_p2() {
    or_cond169_fu_56651_p2 = (tmp_13_1_42_fu_53813_p2.read() | tmp_13_1_41_fu_53785_p2.read());
}

void calcHash_rollingHash::thread_or_cond16_fu_48198_p2() {
    or_cond16_fu_48198_p2 = (tmp_13_0_94_fu_47186_p2.read() | tmp_13_0_93_fu_47158_p2.read());
}

void calcHash_rollingHash::thread_or_cond170_fu_56663_p2() {
    or_cond170_fu_56663_p2 = (tmp_13_1_40_fu_53757_p2.read() | tmp_13_1_39_fu_53729_p2.read());
}

void calcHash_rollingHash::thread_or_cond171_fu_56675_p2() {
    or_cond171_fu_56675_p2 = (tmp_13_1_38_fu_53701_p2.read() | tmp_13_1_37_fu_53673_p2.read());
}

void calcHash_rollingHash::thread_or_cond172_fu_56687_p2() {
    or_cond172_fu_56687_p2 = (tmp_13_1_36_fu_53645_p2.read() | tmp_13_1_35_fu_53617_p2.read());
}

void calcHash_rollingHash::thread_or_cond173_fu_56699_p2() {
    or_cond173_fu_56699_p2 = (tmp_13_1_34_fu_53589_p2.read() | tmp_13_1_33_fu_53561_p2.read());
}

void calcHash_rollingHash::thread_or_cond174_fu_57458_p2() {
    or_cond174_fu_57458_p2 = (tmp_13_1_32_reg_78936.read() | tmp_13_1_31_reg_78931.read());
}

void calcHash_rollingHash::thread_or_cond175_fu_56717_p2() {
    or_cond175_fu_56717_p2 = (tmp_13_1_30_fu_53477_p2.read() | tmp_13_1_29_fu_53449_p2.read());
}

void calcHash_rollingHash::thread_or_cond176_fu_56729_p2() {
    or_cond176_fu_56729_p2 = (tmp_13_1_28_fu_53421_p2.read() | tmp_13_1_27_fu_53393_p2.read());
}

void calcHash_rollingHash::thread_or_cond177_fu_56741_p2() {
    or_cond177_fu_56741_p2 = (tmp_13_1_26_fu_53365_p2.read() | tmp_13_1_25_fu_53337_p2.read());
}

void calcHash_rollingHash::thread_or_cond178_fu_56753_p2() {
    or_cond178_fu_56753_p2 = (tmp_13_1_24_fu_53309_p2.read() | tmp_13_1_23_fu_53281_p2.read());
}

void calcHash_rollingHash::thread_or_cond179_fu_56765_p2() {
    or_cond179_fu_56765_p2 = (tmp_13_1_22_fu_53253_p2.read() | tmp_13_1_21_fu_53225_p2.read());
}

void calcHash_rollingHash::thread_or_cond17_fu_48204_p2() {
    or_cond17_fu_48204_p2 = (tmp_13_0_92_fu_47130_p2.read() | tmp_13_0_91_fu_47102_p2.read());
}

void calcHash_rollingHash::thread_or_cond180_fu_56777_p2() {
    or_cond180_fu_56777_p2 = (tmp_13_1_20_fu_53197_p2.read() | tmp_13_1_19_fu_53169_p2.read());
}

void calcHash_rollingHash::thread_or_cond181_fu_56789_p2() {
    or_cond181_fu_56789_p2 = (tmp_13_1_18_fu_53141_p2.read() | tmp_13_1_17_fu_53113_p2.read());
}

void calcHash_rollingHash::thread_or_cond182_fu_57462_p2() {
    or_cond182_fu_57462_p2 = (tmp_13_1_16_reg_78926.read() | tmp_13_1_15_reg_78921.read());
}

void calcHash_rollingHash::thread_or_cond183_fu_56807_p2() {
    or_cond183_fu_56807_p2 = (tmp_13_1_14_fu_53029_p2.read() | tmp_13_1_13_fu_53001_p2.read());
}

void calcHash_rollingHash::thread_or_cond184_fu_56819_p2() {
    or_cond184_fu_56819_p2 = (tmp_13_1_12_fu_52973_p2.read() | tmp_13_1_11_fu_52945_p2.read());
}

void calcHash_rollingHash::thread_or_cond185_fu_56831_p2() {
    or_cond185_fu_56831_p2 = (tmp_13_1_10_fu_52917_p2.read() | tmp_13_1_s_fu_52889_p2.read());
}

void calcHash_rollingHash::thread_or_cond186_fu_56843_p2() {
    or_cond186_fu_56843_p2 = (tmp_13_1_9_fu_52861_p2.read() | tmp_13_1_8_fu_52833_p2.read());
}

void calcHash_rollingHash::thread_or_cond187_fu_56855_p2() {
    or_cond187_fu_56855_p2 = (tmp_13_1_7_fu_52805_p2.read() | tmp_13_1_6_fu_52777_p2.read());
}

void calcHash_rollingHash::thread_or_cond188_fu_56867_p2() {
    or_cond188_fu_56867_p2 = (tmp_13_1_5_fu_52749_p2.read() | tmp_13_1_4_fu_52721_p2.read());
}

void calcHash_rollingHash::thread_or_cond189_fu_56879_p2() {
    or_cond189_fu_56879_p2 = (tmp_13_1_3_fu_52693_p2.read() | tmp_13_1_2_fu_52665_p2.read());
}

void calcHash_rollingHash::thread_or_cond18_fu_48210_p2() {
    or_cond18_fu_48210_p2 = (tmp_13_0_90_fu_47074_p2.read() | tmp_13_0_89_fu_47046_p2.read());
}

void calcHash_rollingHash::thread_or_cond190_fu_57466_p2() {
    or_cond190_fu_57466_p2 = (tmp_13_1_1_reg_78916.read() | tmp_13_1_fu_57432_p2.read());
}

void calcHash_rollingHash::thread_or_cond191_fu_56900_p2() {
    or_cond191_fu_56900_p2 = (or_cond127_fu_56177_p2.read() | or_cond128_fu_56189_p2.read());
}

void calcHash_rollingHash::thread_or_cond192_fu_56914_p2() {
    or_cond192_fu_56914_p2 = (or_cond129_fu_56201_p2.read() | or_cond130_fu_56213_p2.read());
}

void calcHash_rollingHash::thread_or_cond193_fu_56928_p2() {
    or_cond193_fu_56928_p2 = (or_cond131_fu_56225_p2.read() | or_cond132_fu_56237_p2.read());
}

void calcHash_rollingHash::thread_or_cond194_fu_57471_p2() {
    or_cond194_fu_57471_p2 = (or_cond133_reg_78991.read() | or_cond134_fu_57438_p2.read());
}

void calcHash_rollingHash::thread_or_cond195_fu_56950_p2() {
    or_cond195_fu_56950_p2 = (or_cond135_fu_56267_p2.read() | or_cond136_fu_56279_p2.read());
}

void calcHash_rollingHash::thread_or_cond196_fu_56964_p2() {
    or_cond196_fu_56964_p2 = (or_cond137_fu_56291_p2.read() | or_cond138_fu_56303_p2.read());
}

void calcHash_rollingHash::thread_or_cond197_fu_56978_p2() {
    or_cond197_fu_56978_p2 = (or_cond139_fu_56315_p2.read() | or_cond140_fu_56327_p2.read());
}

void calcHash_rollingHash::thread_or_cond198_fu_57476_p2() {
    or_cond198_fu_57476_p2 = (or_cond141_reg_78996.read() | or_cond142_fu_57442_p2.read());
}

void calcHash_rollingHash::thread_or_cond199_fu_57000_p2() {
    or_cond199_fu_57000_p2 = (or_cond143_fu_56357_p2.read() | or_cond144_fu_56369_p2.read());
}

void calcHash_rollingHash::thread_or_cond19_fu_48216_p2() {
    or_cond19_fu_48216_p2 = (tmp_13_0_88_fu_47018_p2.read() | tmp_13_0_87_fu_46990_p2.read());
}

void calcHash_rollingHash::thread_or_cond1_fu_48094_p2() {
    or_cond1_fu_48094_p2 = (tmp_13_0_124_fu_48026_p2.read() | tmp_13_0_123_fu_47998_p2.read());
}

void calcHash_rollingHash::thread_or_cond200_fu_57014_p2() {
    or_cond200_fu_57014_p2 = (or_cond145_fu_56381_p2.read() | or_cond146_fu_56393_p2.read());
}

void calcHash_rollingHash::thread_or_cond201_fu_57028_p2() {
    or_cond201_fu_57028_p2 = (or_cond147_fu_56405_p2.read() | or_cond148_fu_56417_p2.read());
}

void calcHash_rollingHash::thread_or_cond202_fu_57481_p2() {
    or_cond202_fu_57481_p2 = (or_cond149_reg_79001.read() | or_cond150_fu_57446_p2.read());
}

void calcHash_rollingHash::thread_or_cond203_fu_57050_p2() {
    or_cond203_fu_57050_p2 = (or_cond151_fu_56447_p2.read() | or_cond152_fu_56459_p2.read());
}

void calcHash_rollingHash::thread_or_cond204_fu_57064_p2() {
    or_cond204_fu_57064_p2 = (or_cond153_fu_56471_p2.read() | or_cond154_fu_56483_p2.read());
}

void calcHash_rollingHash::thread_or_cond205_fu_57078_p2() {
    or_cond205_fu_57078_p2 = (or_cond155_fu_56495_p2.read() | or_cond156_fu_56507_p2.read());
}

void calcHash_rollingHash::thread_or_cond206_fu_57486_p2() {
    or_cond206_fu_57486_p2 = (or_cond157_reg_79006.read() | or_cond158_fu_57450_p2.read());
}

void calcHash_rollingHash::thread_or_cond207_fu_57100_p2() {
    or_cond207_fu_57100_p2 = (or_cond159_fu_56537_p2.read() | or_cond160_fu_56549_p2.read());
}

void calcHash_rollingHash::thread_or_cond208_fu_57114_p2() {
    or_cond208_fu_57114_p2 = (or_cond161_fu_56561_p2.read() | or_cond162_fu_56573_p2.read());
}

void calcHash_rollingHash::thread_or_cond209_fu_57128_p2() {
    or_cond209_fu_57128_p2 = (or_cond163_fu_56585_p2.read() | or_cond164_fu_56597_p2.read());
}

void calcHash_rollingHash::thread_or_cond20_fu_48222_p2() {
    or_cond20_fu_48222_p2 = (tmp_13_0_86_fu_46962_p2.read() | tmp_13_0_85_fu_46934_p2.read());
}

void calcHash_rollingHash::thread_or_cond210_fu_57491_p2() {
    or_cond210_fu_57491_p2 = (or_cond165_reg_79011.read() | or_cond166_fu_57454_p2.read());
}

void calcHash_rollingHash::thread_or_cond211_fu_57150_p2() {
    or_cond211_fu_57150_p2 = (or_cond167_fu_56627_p2.read() | or_cond168_fu_56639_p2.read());
}

void calcHash_rollingHash::thread_or_cond212_fu_57164_p2() {
    or_cond212_fu_57164_p2 = (or_cond169_fu_56651_p2.read() | or_cond170_fu_56663_p2.read());
}

void calcHash_rollingHash::thread_or_cond213_fu_57178_p2() {
    or_cond213_fu_57178_p2 = (or_cond171_fu_56675_p2.read() | or_cond172_fu_56687_p2.read());
}

void calcHash_rollingHash::thread_or_cond214_fu_57496_p2() {
    or_cond214_fu_57496_p2 = (or_cond173_reg_79016.read() | or_cond174_fu_57458_p2.read());
}

void calcHash_rollingHash::thread_or_cond215_fu_57200_p2() {
    or_cond215_fu_57200_p2 = (or_cond175_fu_56717_p2.read() | or_cond176_fu_56729_p2.read());
}

void calcHash_rollingHash::thread_or_cond216_fu_57214_p2() {
    or_cond216_fu_57214_p2 = (or_cond177_fu_56741_p2.read() | or_cond178_fu_56753_p2.read());
}

void calcHash_rollingHash::thread_or_cond217_fu_57228_p2() {
    or_cond217_fu_57228_p2 = (or_cond179_fu_56765_p2.read() | or_cond180_fu_56777_p2.read());
}

void calcHash_rollingHash::thread_or_cond218_fu_57501_p2() {
    or_cond218_fu_57501_p2 = (or_cond181_reg_79021.read() | or_cond182_fu_57462_p2.read());
}

void calcHash_rollingHash::thread_or_cond219_fu_57250_p2() {
    or_cond219_fu_57250_p2 = (or_cond183_fu_56807_p2.read() | or_cond184_fu_56819_p2.read());
}

void calcHash_rollingHash::thread_or_cond21_fu_48936_p2() {
    or_cond21_fu_48936_p2 = (tmp_13_0_84_reg_77273.read() | tmp_13_0_83_reg_77268.read());
}

void calcHash_rollingHash::thread_or_cond220_fu_57264_p2() {
    or_cond220_fu_57264_p2 = (or_cond185_fu_56831_p2.read() | or_cond186_fu_56843_p2.read());
}

void calcHash_rollingHash::thread_or_cond221_fu_57278_p2() {
    or_cond221_fu_57278_p2 = (or_cond187_fu_56855_p2.read() | or_cond188_fu_56867_p2.read());
}

void calcHash_rollingHash::thread_or_cond222_fu_57506_p2() {
    or_cond222_fu_57506_p2 = (or_cond189_reg_79026.read() | or_cond190_fu_57466_p2.read());
}

void calcHash_rollingHash::thread_or_cond223_fu_57292_p2() {
    or_cond223_fu_57292_p2 = (or_cond191_fu_56900_p2.read() | or_cond192_fu_56914_p2.read());
}

void calcHash_rollingHash::thread_or_cond224_fu_57516_p2() {
    or_cond224_fu_57516_p2 = (or_cond193_reg_79046.read() | or_cond194_fu_57471_p2.read());
}

void calcHash_rollingHash::thread_or_cond225_fu_57306_p2() {
    or_cond225_fu_57306_p2 = (or_cond195_fu_56950_p2.read() | or_cond196_fu_56964_p2.read());
}

void calcHash_rollingHash::thread_or_cond226_fu_57526_p2() {
    or_cond226_fu_57526_p2 = (or_cond197_reg_79066.read() | or_cond198_fu_57476_p2.read());
}

void calcHash_rollingHash::thread_or_cond227_fu_57320_p2() {
    or_cond227_fu_57320_p2 = (or_cond199_fu_57000_p2.read() | or_cond200_fu_57014_p2.read());
}

void calcHash_rollingHash::thread_or_cond228_fu_57536_p2() {
    or_cond228_fu_57536_p2 = (or_cond201_reg_79086.read() | or_cond202_fu_57481_p2.read());
}

void calcHash_rollingHash::thread_or_cond229_fu_57334_p2() {
    or_cond229_fu_57334_p2 = (or_cond203_fu_57050_p2.read() | or_cond204_fu_57064_p2.read());
}

void calcHash_rollingHash::thread_or_cond22_fu_48947_p2() {
    or_cond22_fu_48947_p2 = (tmp_13_0_82_reg_77262.read() | tmp_13_0_81_reg_77257.read());
}

void calcHash_rollingHash::thread_or_cond230_fu_57546_p2() {
    or_cond230_fu_57546_p2 = (or_cond205_reg_79106.read() | or_cond206_fu_57486_p2.read());
}

void calcHash_rollingHash::thread_or_cond231_fu_57348_p2() {
    or_cond231_fu_57348_p2 = (or_cond207_fu_57100_p2.read() | or_cond208_fu_57114_p2.read());
}

void calcHash_rollingHash::thread_or_cond232_fu_57556_p2() {
    or_cond232_fu_57556_p2 = (or_cond209_reg_79126.read() | or_cond210_fu_57491_p2.read());
}

void calcHash_rollingHash::thread_or_cond233_fu_57362_p2() {
    or_cond233_fu_57362_p2 = (or_cond211_fu_57150_p2.read() | or_cond212_fu_57164_p2.read());
}

void calcHash_rollingHash::thread_or_cond234_fu_57566_p2() {
    or_cond234_fu_57566_p2 = (or_cond213_reg_79146.read() | or_cond214_fu_57496_p2.read());
}

void calcHash_rollingHash::thread_or_cond235_fu_57376_p2() {
    or_cond235_fu_57376_p2 = (or_cond215_fu_57200_p2.read() | or_cond216_fu_57214_p2.read());
}

void calcHash_rollingHash::thread_or_cond236_fu_57576_p2() {
    or_cond236_fu_57576_p2 = (or_cond217_reg_79166.read() | or_cond218_fu_57501_p2.read());
}

void calcHash_rollingHash::thread_or_cond237_fu_57390_p2() {
    or_cond237_fu_57390_p2 = (or_cond219_fu_57250_p2.read() | or_cond220_fu_57264_p2.read());
}

void calcHash_rollingHash::thread_or_cond238_fu_57586_p2() {
    or_cond238_fu_57586_p2 = (or_cond221_reg_79186.read() | or_cond222_fu_57506_p2.read());
}

void calcHash_rollingHash::thread_or_cond239_fu_57597_p2() {
    or_cond239_fu_57597_p2 = (or_cond223_reg_79191.read() | or_cond224_fu_57516_p2.read());
}

void calcHash_rollingHash::thread_or_cond23_fu_48958_p2() {
    or_cond23_fu_48958_p2 = (tmp_13_0_80_reg_77251.read() | tmp_13_0_79_reg_77246.read());
}

void calcHash_rollingHash::thread_or_cond240_fu_57608_p2() {
    or_cond240_fu_57608_p2 = (or_cond225_reg_79202.read() | or_cond226_fu_57526_p2.read());
}

void calcHash_rollingHash::thread_or_cond241_fu_57619_p2() {
    or_cond241_fu_57619_p2 = (or_cond227_reg_79213.read() | or_cond228_fu_57536_p2.read());
}

void calcHash_rollingHash::thread_or_cond242_fu_57630_p2() {
    or_cond242_fu_57630_p2 = (or_cond229_reg_79224.read() | or_cond230_fu_57546_p2.read());
}

void calcHash_rollingHash::thread_or_cond243_fu_57641_p2() {
    or_cond243_fu_57641_p2 = (or_cond231_reg_79235.read() | or_cond232_fu_57556_p2.read());
}

void calcHash_rollingHash::thread_or_cond244_fu_57652_p2() {
    or_cond244_fu_57652_p2 = (or_cond233_reg_79246.read() | or_cond234_fu_57566_p2.read());
}

void calcHash_rollingHash::thread_or_cond245_fu_57663_p2() {
    or_cond245_fu_57663_p2 = (or_cond235_reg_79257.read() | or_cond236_fu_57576_p2.read());
}

void calcHash_rollingHash::thread_or_cond246_fu_57674_p2() {
    or_cond246_fu_57674_p2 = (or_cond237_reg_79268.read() | or_cond238_fu_57586_p2.read());
}

void calcHash_rollingHash::thread_or_cond247_fu_57687_p2() {
    or_cond247_fu_57687_p2 = (or_cond239_fu_57597_p2.read() | or_cond240_fu_57608_p2.read());
}

void calcHash_rollingHash::thread_or_cond248_fu_57701_p2() {
    or_cond248_fu_57701_p2 = (or_cond241_fu_57619_p2.read() | or_cond242_fu_57630_p2.read());
}

void calcHash_rollingHash::thread_or_cond249_fu_57715_p2() {
    or_cond249_fu_57715_p2 = (or_cond243_fu_57641_p2.read() | or_cond244_fu_57652_p2.read());
}

void calcHash_rollingHash::thread_or_cond24_fu_48228_p2() {
    or_cond24_fu_48228_p2 = (tmp_13_0_78_fu_46738_p2.read() | tmp_13_0_77_fu_46710_p2.read());
}

void calcHash_rollingHash::thread_or_cond250_fu_57729_p2() {
    or_cond250_fu_57729_p2 = (or_cond245_fu_57663_p2.read() | or_cond246_fu_57674_p2.read());
}

void calcHash_rollingHash::thread_or_cond251_fu_57743_p2() {
    or_cond251_fu_57743_p2 = (or_cond247_fu_57687_p2.read() | or_cond248_fu_57701_p2.read());
}

void calcHash_rollingHash::thread_or_cond252_fu_57757_p2() {
    or_cond252_fu_57757_p2 = (or_cond249_fu_57715_p2.read() | or_cond250_fu_57729_p2.read());
}

void calcHash_rollingHash::thread_or_cond253_fu_57775_p2() {
    or_cond253_fu_57775_p2 = (or_cond251_fu_57743_p2.read() | or_cond252_fu_57757_p2.read());
}

void calcHash_rollingHash::thread_or_cond254_fu_65986_p2() {
    or_cond254_fu_65986_p2 = (tmp_13_2_126_fu_65972_p2.read() | tmp_13_2_125_fu_65937_p2.read());
}

void calcHash_rollingHash::thread_or_cond255_fu_66000_p2() {
    or_cond255_fu_66000_p2 = (tmp_13_2_124_fu_65902_p2.read() | tmp_13_2_123_fu_65867_p2.read());
}

void calcHash_rollingHash::thread_or_cond256_fu_66014_p2() {
    or_cond256_fu_66014_p2 = (tmp_13_2_122_fu_65832_p2.read() | tmp_13_2_121_fu_65797_p2.read());
}

void calcHash_rollingHash::thread_or_cond257_fu_66028_p2() {
    or_cond257_fu_66028_p2 = (tmp_13_2_120_fu_65762_p2.read() | tmp_13_2_119_fu_65727_p2.read());
}

void calcHash_rollingHash::thread_or_cond258_fu_66042_p2() {
    or_cond258_fu_66042_p2 = (tmp_13_2_118_fu_65692_p2.read() | tmp_13_2_117_fu_65657_p2.read());
}

void calcHash_rollingHash::thread_or_cond259_fu_66056_p2() {
    or_cond259_fu_66056_p2 = (tmp_13_2_116_fu_65622_p2.read() | tmp_13_2_115_fu_65587_p2.read());
}

void calcHash_rollingHash::thread_or_cond25_fu_48234_p2() {
    or_cond25_fu_48234_p2 = (tmp_13_0_76_fu_46682_p2.read() | tmp_13_0_75_fu_46654_p2.read());
}

void calcHash_rollingHash::thread_or_cond260_fu_66070_p2() {
    or_cond260_fu_66070_p2 = (tmp_13_2_114_fu_65552_p2.read() | tmp_13_2_113_fu_65517_p2.read());
}

void calcHash_rollingHash::thread_or_cond261_fu_67372_p2() {
    or_cond261_fu_67372_p2 = (tmp_13_2_112_reg_80642.read() | tmp_13_2_111_reg_80637.read());
}

void calcHash_rollingHash::thread_or_cond262_fu_66092_p2() {
    or_cond262_fu_66092_p2 = (tmp_13_2_110_fu_65412_p2.read() | tmp_13_2_109_fu_65377_p2.read());
}

void calcHash_rollingHash::thread_or_cond263_fu_66106_p2() {
    or_cond263_fu_66106_p2 = (tmp_13_2_108_fu_65342_p2.read() | tmp_13_2_107_fu_65307_p2.read());
}

void calcHash_rollingHash::thread_or_cond264_fu_66120_p2() {
    or_cond264_fu_66120_p2 = (tmp_13_2_106_fu_65272_p2.read() | tmp_13_2_105_fu_65237_p2.read());
}

void calcHash_rollingHash::thread_or_cond265_fu_66134_p2() {
    or_cond265_fu_66134_p2 = (tmp_13_2_104_fu_65202_p2.read() | tmp_13_2_103_fu_65167_p2.read());
}

void calcHash_rollingHash::thread_or_cond266_fu_66148_p2() {
    or_cond266_fu_66148_p2 = (tmp_13_2_102_fu_65132_p2.read() | tmp_13_2_101_fu_65097_p2.read());
}

void calcHash_rollingHash::thread_or_cond267_fu_66162_p2() {
    or_cond267_fu_66162_p2 = (tmp_13_2_100_fu_65062_p2.read() | tmp_13_2_99_fu_65027_p2.read());
}

void calcHash_rollingHash::thread_or_cond268_fu_66176_p2() {
    or_cond268_fu_66176_p2 = (tmp_13_2_98_fu_64992_p2.read() | tmp_13_2_97_fu_64957_p2.read());
}

void calcHash_rollingHash::thread_or_cond269_fu_67376_p2() {
    or_cond269_fu_67376_p2 = (tmp_13_2_96_reg_80632.read() | tmp_13_2_95_reg_80627.read());
}

void calcHash_rollingHash::thread_or_cond26_fu_48240_p2() {
    or_cond26_fu_48240_p2 = (tmp_13_0_74_fu_46626_p2.read() | tmp_13_0_73_fu_46598_p2.read());
}

void calcHash_rollingHash::thread_or_cond270_fu_66198_p2() {
    or_cond270_fu_66198_p2 = (tmp_13_2_94_fu_64852_p2.read() | tmp_13_2_93_fu_64817_p2.read());
}

void calcHash_rollingHash::thread_or_cond271_fu_66212_p2() {
    or_cond271_fu_66212_p2 = (tmp_13_2_92_fu_64782_p2.read() | tmp_13_2_91_fu_64747_p2.read());
}

void calcHash_rollingHash::thread_or_cond272_fu_66226_p2() {
    or_cond272_fu_66226_p2 = (tmp_13_2_90_fu_64712_p2.read() | tmp_13_2_89_fu_64677_p2.read());
}

void calcHash_rollingHash::thread_or_cond273_fu_66240_p2() {
    or_cond273_fu_66240_p2 = (tmp_13_2_88_fu_64642_p2.read() | tmp_13_2_87_fu_64607_p2.read());
}

void calcHash_rollingHash::thread_or_cond274_fu_66254_p2() {
    or_cond274_fu_66254_p2 = (tmp_13_2_86_fu_64572_p2.read() | tmp_13_2_85_fu_64537_p2.read());
}

void calcHash_rollingHash::thread_or_cond275_fu_66268_p2() {
    or_cond275_fu_66268_p2 = (tmp_13_2_84_fu_64502_p2.read() | tmp_13_2_83_fu_64467_p2.read());
}

void calcHash_rollingHash::thread_or_cond276_fu_66282_p2() {
    or_cond276_fu_66282_p2 = (tmp_13_2_82_fu_64432_p2.read() | tmp_13_2_81_fu_64397_p2.read());
}

void calcHash_rollingHash::thread_or_cond277_fu_67380_p2() {
    or_cond277_fu_67380_p2 = (tmp_13_2_80_reg_80622.read() | tmp_13_2_79_reg_80617.read());
}

void calcHash_rollingHash::thread_or_cond278_fu_66304_p2() {
    or_cond278_fu_66304_p2 = (tmp_13_2_78_fu_64292_p2.read() | tmp_13_2_77_fu_64257_p2.read());
}

void calcHash_rollingHash::thread_or_cond279_fu_66318_p2() {
    or_cond279_fu_66318_p2 = (tmp_13_2_76_fu_64222_p2.read() | tmp_13_2_75_fu_64187_p2.read());
}

void calcHash_rollingHash::thread_or_cond27_fu_48246_p2() {
    or_cond27_fu_48246_p2 = (tmp_13_0_72_fu_46570_p2.read() | tmp_13_0_71_fu_46542_p2.read());
}

void calcHash_rollingHash::thread_or_cond280_fu_66332_p2() {
    or_cond280_fu_66332_p2 = (tmp_13_2_74_fu_64152_p2.read() | tmp_13_2_73_fu_64117_p2.read());
}

void calcHash_rollingHash::thread_or_cond281_fu_66346_p2() {
    or_cond281_fu_66346_p2 = (tmp_13_2_72_fu_64082_p2.read() | tmp_13_2_71_fu_64047_p2.read());
}

void calcHash_rollingHash::thread_or_cond282_fu_66360_p2() {
    or_cond282_fu_66360_p2 = (tmp_13_2_70_fu_64012_p2.read() | tmp_13_2_69_fu_63977_p2.read());
}

void calcHash_rollingHash::thread_or_cond283_fu_66374_p2() {
    or_cond283_fu_66374_p2 = (tmp_13_2_68_fu_63942_p2.read() | tmp_13_2_67_fu_63907_p2.read());
}

void calcHash_rollingHash::thread_or_cond284_fu_66388_p2() {
    or_cond284_fu_66388_p2 = (tmp_13_2_66_fu_63872_p2.read() | tmp_13_2_65_fu_63837_p2.read());
}

void calcHash_rollingHash::thread_or_cond285_fu_67384_p2() {
    or_cond285_fu_67384_p2 = (tmp_13_2_64_reg_80612.read() | tmp_13_2_63_reg_80607.read());
}

void calcHash_rollingHash::thread_or_cond286_fu_66410_p2() {
    or_cond286_fu_66410_p2 = (tmp_13_2_62_fu_63732_p2.read() | tmp_13_2_61_fu_63697_p2.read());
}

void calcHash_rollingHash::thread_or_cond287_fu_66424_p2() {
    or_cond287_fu_66424_p2 = (tmp_13_2_60_fu_63662_p2.read() | tmp_13_2_59_fu_63627_p2.read());
}

void calcHash_rollingHash::thread_or_cond288_fu_66438_p2() {
    or_cond288_fu_66438_p2 = (tmp_13_2_58_fu_63592_p2.read() | tmp_13_2_57_fu_63557_p2.read());
}

void calcHash_rollingHash::thread_or_cond289_fu_66452_p2() {
    or_cond289_fu_66452_p2 = (tmp_13_2_56_fu_63522_p2.read() | tmp_13_2_55_fu_63487_p2.read());
}

void calcHash_rollingHash::thread_or_cond28_fu_48252_p2() {
    or_cond28_fu_48252_p2 = (tmp_13_0_70_fu_46514_p2.read() | tmp_13_0_69_fu_46486_p2.read());
}

void calcHash_rollingHash::thread_or_cond290_fu_66466_p2() {
    or_cond290_fu_66466_p2 = (tmp_13_2_54_fu_63452_p2.read() | tmp_13_2_53_fu_63417_p2.read());
}

void calcHash_rollingHash::thread_or_cond291_fu_66480_p2() {
    or_cond291_fu_66480_p2 = (tmp_13_2_52_fu_63382_p2.read() | tmp_13_2_51_fu_63347_p2.read());
}

void calcHash_rollingHash::thread_or_cond292_fu_66494_p2() {
    or_cond292_fu_66494_p2 = (tmp_13_2_50_fu_63312_p2.read() | tmp_13_2_49_fu_63277_p2.read());
}

void calcHash_rollingHash::thread_or_cond293_fu_67388_p2() {
    or_cond293_fu_67388_p2 = (tmp_13_2_48_reg_80602.read() | tmp_13_2_47_reg_80597.read());
}

void calcHash_rollingHash::thread_or_cond294_fu_66516_p2() {
    or_cond294_fu_66516_p2 = (tmp_13_2_46_fu_63172_p2.read() | tmp_13_2_45_fu_63137_p2.read());
}

void calcHash_rollingHash::thread_or_cond295_fu_66530_p2() {
    or_cond295_fu_66530_p2 = (tmp_13_2_44_fu_63102_p2.read() | tmp_13_2_43_fu_63067_p2.read());
}

void calcHash_rollingHash::thread_or_cond296_fu_66544_p2() {
    or_cond296_fu_66544_p2 = (tmp_13_2_42_fu_63032_p2.read() | tmp_13_2_41_fu_62997_p2.read());
}

void calcHash_rollingHash::thread_or_cond297_fu_66558_p2() {
    or_cond297_fu_66558_p2 = (tmp_13_2_40_fu_62962_p2.read() | tmp_13_2_39_fu_62927_p2.read());
}

void calcHash_rollingHash::thread_or_cond298_fu_66572_p2() {
    or_cond298_fu_66572_p2 = (tmp_13_2_38_fu_62892_p2.read() | tmp_13_2_37_fu_62857_p2.read());
}

void calcHash_rollingHash::thread_or_cond299_fu_66586_p2() {
    or_cond299_fu_66586_p2 = (tmp_13_2_36_fu_62822_p2.read() | tmp_13_2_35_fu_62787_p2.read());
}

void calcHash_rollingHash::thread_or_cond29_fu_49004_p2() {
    or_cond29_fu_49004_p2 = (tmp_13_0_68_reg_77215.read() | tmp_13_0_67_reg_77210.read());
}

void calcHash_rollingHash::thread_or_cond2_fu_48100_p2() {
    or_cond2_fu_48100_p2 = (tmp_13_0_122_fu_47970_p2.read() | tmp_13_0_121_fu_47942_p2.read());
}

void calcHash_rollingHash::thread_or_cond300_fu_66600_p2() {
    or_cond300_fu_66600_p2 = (tmp_13_2_34_fu_62752_p2.read() | tmp_13_2_33_fu_62717_p2.read());
}

void calcHash_rollingHash::thread_or_cond301_fu_67392_p2() {
    or_cond301_fu_67392_p2 = (tmp_13_2_32_reg_80592.read() | tmp_13_2_31_reg_80587.read());
}

void calcHash_rollingHash::thread_or_cond302_fu_66622_p2() {
    or_cond302_fu_66622_p2 = (tmp_13_2_30_fu_62612_p2.read() | tmp_13_2_29_fu_62577_p2.read());
}

void calcHash_rollingHash::thread_or_cond303_fu_66636_p2() {
    or_cond303_fu_66636_p2 = (tmp_13_2_28_fu_62542_p2.read() | tmp_13_2_27_fu_62507_p2.read());
}

void calcHash_rollingHash::thread_or_cond304_fu_66650_p2() {
    or_cond304_fu_66650_p2 = (tmp_13_2_26_fu_62472_p2.read() | tmp_13_2_25_fu_62437_p2.read());
}

void calcHash_rollingHash::thread_or_cond305_fu_66664_p2() {
    or_cond305_fu_66664_p2 = (tmp_13_2_24_fu_62402_p2.read() | tmp_13_2_23_fu_62367_p2.read());
}

void calcHash_rollingHash::thread_or_cond306_fu_66678_p2() {
    or_cond306_fu_66678_p2 = (tmp_13_2_22_fu_62332_p2.read() | tmp_13_2_21_fu_62297_p2.read());
}

void calcHash_rollingHash::thread_or_cond307_fu_66692_p2() {
    or_cond307_fu_66692_p2 = (tmp_13_2_20_fu_62262_p2.read() | tmp_13_2_19_fu_62227_p2.read());
}

void calcHash_rollingHash::thread_or_cond308_fu_66706_p2() {
    or_cond308_fu_66706_p2 = (tmp_13_2_18_fu_62192_p2.read() | tmp_13_2_17_fu_62157_p2.read());
}

void calcHash_rollingHash::thread_or_cond309_fu_67396_p2() {
    or_cond309_fu_67396_p2 = (tmp_13_2_16_reg_80582.read() | tmp_13_2_15_reg_80577.read());
}

void calcHash_rollingHash::thread_or_cond30_fu_48258_p2() {
    or_cond30_fu_48258_p2 = (tmp_13_0_66_fu_46402_p2.read() | tmp_13_0_65_fu_46374_p2.read());
}

void calcHash_rollingHash::thread_or_cond310_fu_66728_p2() {
    or_cond310_fu_66728_p2 = (tmp_13_2_14_fu_62052_p2.read() | tmp_13_2_13_fu_62017_p2.read());
}

void calcHash_rollingHash::thread_or_cond311_fu_66742_p2() {
    or_cond311_fu_66742_p2 = (tmp_13_2_12_fu_61982_p2.read() | tmp_13_2_11_fu_61947_p2.read());
}

void calcHash_rollingHash::thread_or_cond312_fu_66756_p2() {
    or_cond312_fu_66756_p2 = (tmp_13_2_10_fu_61912_p2.read() | tmp_13_2_s_fu_61877_p2.read());
}

void calcHash_rollingHash::thread_or_cond313_fu_66770_p2() {
    or_cond313_fu_66770_p2 = (tmp_13_2_9_fu_61842_p2.read() | tmp_13_2_8_fu_61807_p2.read());
}

void calcHash_rollingHash::thread_or_cond314_fu_66784_p2() {
    or_cond314_fu_66784_p2 = (tmp_13_2_7_fu_61772_p2.read() | tmp_13_2_6_fu_61737_p2.read());
}

void calcHash_rollingHash::thread_or_cond315_fu_66798_p2() {
    or_cond315_fu_66798_p2 = (tmp_13_2_5_fu_61702_p2.read() | tmp_13_2_4_fu_61667_p2.read());
}

void calcHash_rollingHash::thread_or_cond316_fu_66812_p2() {
    or_cond316_fu_66812_p2 = (tmp_13_2_3_fu_61632_p2.read() | tmp_13_2_2_fu_61597_p2.read());
}

void calcHash_rollingHash::thread_or_cond317_fu_67400_p2() {
    or_cond317_fu_67400_p2 = (tmp_13_2_1_reg_80572.read() | tmp_13_2_fu_67366_p2.read());
}

void calcHash_rollingHash::thread_or_cond318_fu_66834_p2() {
    or_cond318_fu_66834_p2 = (or_cond254_fu_65986_p2.read() | or_cond255_fu_66000_p2.read());
}

void calcHash_rollingHash::thread_or_cond319_fu_66848_p2() {
    or_cond319_fu_66848_p2 = (or_cond256_fu_66014_p2.read() | or_cond257_fu_66028_p2.read());
}

void calcHash_rollingHash::thread_or_cond31_fu_49022_p2() {
    or_cond31_fu_49022_p2 = (tmp_13_0_64_reg_77199.read() | tmp_13_0_63_reg_77194.read());
}

void calcHash_rollingHash::thread_or_cond320_fu_66862_p2() {
    or_cond320_fu_66862_p2 = (or_cond258_fu_66042_p2.read() | or_cond259_fu_66056_p2.read());
}

void calcHash_rollingHash::thread_or_cond321_fu_67405_p2() {
    or_cond321_fu_67405_p2 = (or_cond260_reg_80647.read() | or_cond261_fu_67372_p2.read());
}

void calcHash_rollingHash::thread_or_cond322_fu_66884_p2() {
    or_cond322_fu_66884_p2 = (or_cond262_fu_66092_p2.read() | or_cond263_fu_66106_p2.read());
}

void calcHash_rollingHash::thread_or_cond323_fu_66898_p2() {
    or_cond323_fu_66898_p2 = (or_cond264_fu_66120_p2.read() | or_cond265_fu_66134_p2.read());
}

void calcHash_rollingHash::thread_or_cond324_fu_66912_p2() {
    or_cond324_fu_66912_p2 = (or_cond266_fu_66148_p2.read() | or_cond267_fu_66162_p2.read());
}

void calcHash_rollingHash::thread_or_cond325_fu_67410_p2() {
    or_cond325_fu_67410_p2 = (or_cond268_reg_80652.read() | or_cond269_fu_67376_p2.read());
}

void calcHash_rollingHash::thread_or_cond326_fu_66934_p2() {
    or_cond326_fu_66934_p2 = (or_cond270_fu_66198_p2.read() | or_cond271_fu_66212_p2.read());
}

void calcHash_rollingHash::thread_or_cond327_fu_66948_p2() {
    or_cond327_fu_66948_p2 = (or_cond272_fu_66226_p2.read() | or_cond273_fu_66240_p2.read());
}

void calcHash_rollingHash::thread_or_cond328_fu_66962_p2() {
    or_cond328_fu_66962_p2 = (or_cond274_fu_66254_p2.read() | or_cond275_fu_66268_p2.read());
}

void calcHash_rollingHash::thread_or_cond329_fu_67415_p2() {
    or_cond329_fu_67415_p2 = (or_cond276_reg_80657.read() | or_cond277_fu_67380_p2.read());
}

void calcHash_rollingHash::thread_or_cond32_fu_48264_p2() {
    or_cond32_fu_48264_p2 = (tmp_13_0_62_fu_46290_p2.read() | tmp_13_0_61_fu_46262_p2.read());
}

void calcHash_rollingHash::thread_or_cond330_fu_66984_p2() {
    or_cond330_fu_66984_p2 = (or_cond278_fu_66304_p2.read() | or_cond279_fu_66318_p2.read());
}

void calcHash_rollingHash::thread_or_cond331_fu_66998_p2() {
    or_cond331_fu_66998_p2 = (or_cond280_fu_66332_p2.read() | or_cond281_fu_66346_p2.read());
}

void calcHash_rollingHash::thread_or_cond332_fu_67012_p2() {
    or_cond332_fu_67012_p2 = (or_cond282_fu_66360_p2.read() | or_cond283_fu_66374_p2.read());
}

void calcHash_rollingHash::thread_or_cond333_fu_67420_p2() {
    or_cond333_fu_67420_p2 = (or_cond284_reg_80662.read() | or_cond285_fu_67384_p2.read());
}

void calcHash_rollingHash::thread_or_cond334_fu_67034_p2() {
    or_cond334_fu_67034_p2 = (or_cond286_fu_66410_p2.read() | or_cond287_fu_66424_p2.read());
}

void calcHash_rollingHash::thread_or_cond335_fu_67048_p2() {
    or_cond335_fu_67048_p2 = (or_cond288_fu_66438_p2.read() | or_cond289_fu_66452_p2.read());
}

void calcHash_rollingHash::thread_or_cond336_fu_67062_p2() {
    or_cond336_fu_67062_p2 = (or_cond290_fu_66466_p2.read() | or_cond291_fu_66480_p2.read());
}

void calcHash_rollingHash::thread_or_cond337_fu_67425_p2() {
    or_cond337_fu_67425_p2 = (or_cond292_reg_80667.read() | or_cond293_fu_67388_p2.read());
}

void calcHash_rollingHash::thread_or_cond338_fu_67084_p2() {
    or_cond338_fu_67084_p2 = (or_cond294_fu_66516_p2.read() | or_cond295_fu_66530_p2.read());
}

void calcHash_rollingHash::thread_or_cond339_fu_67098_p2() {
    or_cond339_fu_67098_p2 = (or_cond296_fu_66544_p2.read() | or_cond297_fu_66558_p2.read());
}

void calcHash_rollingHash::thread_or_cond33_fu_48270_p2() {
    or_cond33_fu_48270_p2 = (tmp_13_0_60_fu_46234_p2.read() | tmp_13_0_59_fu_46206_p2.read());
}

void calcHash_rollingHash::thread_or_cond340_fu_67112_p2() {
    or_cond340_fu_67112_p2 = (or_cond298_fu_66572_p2.read() | or_cond299_fu_66586_p2.read());
}

void calcHash_rollingHash::thread_or_cond341_fu_67430_p2() {
    or_cond341_fu_67430_p2 = (or_cond300_reg_80672.read() | or_cond301_fu_67392_p2.read());
}

void calcHash_rollingHash::thread_or_cond342_fu_67134_p2() {
    or_cond342_fu_67134_p2 = (or_cond302_fu_66622_p2.read() | or_cond303_fu_66636_p2.read());
}

void calcHash_rollingHash::thread_or_cond343_fu_67148_p2() {
    or_cond343_fu_67148_p2 = (or_cond304_fu_66650_p2.read() | or_cond305_fu_66664_p2.read());
}

void calcHash_rollingHash::thread_or_cond344_fu_67162_p2() {
    or_cond344_fu_67162_p2 = (or_cond306_fu_66678_p2.read() | or_cond307_fu_66692_p2.read());
}

void calcHash_rollingHash::thread_or_cond345_fu_67435_p2() {
    or_cond345_fu_67435_p2 = (or_cond308_reg_80677.read() | or_cond309_fu_67396_p2.read());
}

void calcHash_rollingHash::thread_or_cond346_fu_67184_p2() {
    or_cond346_fu_67184_p2 = (or_cond310_fu_66728_p2.read() | or_cond311_fu_66742_p2.read());
}

void calcHash_rollingHash::thread_or_cond347_fu_67198_p2() {
    or_cond347_fu_67198_p2 = (or_cond312_fu_66756_p2.read() | or_cond313_fu_66770_p2.read());
}

void calcHash_rollingHash::thread_or_cond348_fu_67212_p2() {
    or_cond348_fu_67212_p2 = (or_cond314_fu_66784_p2.read() | or_cond315_fu_66798_p2.read());
}

void calcHash_rollingHash::thread_or_cond349_fu_67440_p2() {
    or_cond349_fu_67440_p2 = (or_cond316_reg_80682.read() | or_cond317_fu_67400_p2.read());
}

void calcHash_rollingHash::thread_or_cond34_fu_48276_p2() {
    or_cond34_fu_48276_p2 = (tmp_13_0_58_fu_46178_p2.read() | tmp_13_0_57_fu_46150_p2.read());
}

void calcHash_rollingHash::thread_or_cond350_fu_67226_p2() {
    or_cond350_fu_67226_p2 = (or_cond318_fu_66834_p2.read() | or_cond319_fu_66848_p2.read());
}

void calcHash_rollingHash::thread_or_cond351_fu_67450_p2() {
    or_cond351_fu_67450_p2 = (or_cond320_reg_80702.read() | or_cond321_fu_67405_p2.read());
}

void calcHash_rollingHash::thread_or_cond352_fu_67240_p2() {
    or_cond352_fu_67240_p2 = (or_cond322_fu_66884_p2.read() | or_cond323_fu_66898_p2.read());
}

void calcHash_rollingHash::thread_or_cond353_fu_67460_p2() {
    or_cond353_fu_67460_p2 = (or_cond324_reg_80722.read() | or_cond325_fu_67410_p2.read());
}

void calcHash_rollingHash::thread_or_cond354_fu_67254_p2() {
    or_cond354_fu_67254_p2 = (or_cond326_fu_66934_p2.read() | or_cond327_fu_66948_p2.read());
}

void calcHash_rollingHash::thread_or_cond355_fu_67470_p2() {
    or_cond355_fu_67470_p2 = (or_cond328_reg_80742.read() | or_cond329_fu_67415_p2.read());
}

void calcHash_rollingHash::thread_or_cond356_fu_67268_p2() {
    or_cond356_fu_67268_p2 = (or_cond330_fu_66984_p2.read() | or_cond331_fu_66998_p2.read());
}

void calcHash_rollingHash::thread_or_cond357_fu_67480_p2() {
    or_cond357_fu_67480_p2 = (or_cond332_reg_80762.read() | or_cond333_fu_67420_p2.read());
}

void calcHash_rollingHash::thread_or_cond358_fu_67282_p2() {
    or_cond358_fu_67282_p2 = (or_cond334_fu_67034_p2.read() | or_cond335_fu_67048_p2.read());
}

void calcHash_rollingHash::thread_or_cond359_fu_67490_p2() {
    or_cond359_fu_67490_p2 = (or_cond336_reg_80782.read() | or_cond337_fu_67425_p2.read());
}

void calcHash_rollingHash::thread_or_cond35_fu_49054_p2() {
    or_cond35_fu_49054_p2 = (tmp_13_0_56_reg_77173.read() | tmp_13_0_55_reg_77168.read());
}

void calcHash_rollingHash::thread_or_cond360_fu_67296_p2() {
    or_cond360_fu_67296_p2 = (or_cond338_fu_67084_p2.read() | or_cond339_fu_67098_p2.read());
}

void calcHash_rollingHash::thread_or_cond361_fu_67500_p2() {
    or_cond361_fu_67500_p2 = (or_cond340_reg_80802.read() | or_cond341_fu_67430_p2.read());
}

void calcHash_rollingHash::thread_or_cond362_fu_67310_p2() {
    or_cond362_fu_67310_p2 = (or_cond342_fu_67134_p2.read() | or_cond343_fu_67148_p2.read());
}

void calcHash_rollingHash::thread_or_cond363_fu_67510_p2() {
    or_cond363_fu_67510_p2 = (or_cond344_reg_80822.read() | or_cond345_fu_67435_p2.read());
}

void calcHash_rollingHash::thread_or_cond364_fu_67324_p2() {
    or_cond364_fu_67324_p2 = (or_cond346_fu_67184_p2.read() | or_cond347_fu_67198_p2.read());
}

void calcHash_rollingHash::thread_or_cond365_fu_67520_p2() {
    or_cond365_fu_67520_p2 = (or_cond348_reg_80842.read() | or_cond349_fu_67440_p2.read());
}

void calcHash_rollingHash::thread_or_cond366_fu_67531_p2() {
    or_cond366_fu_67531_p2 = (or_cond350_reg_80847.read() | or_cond351_fu_67450_p2.read());
}

void calcHash_rollingHash::thread_or_cond367_fu_67542_p2() {
    or_cond367_fu_67542_p2 = (or_cond352_reg_80858.read() | or_cond353_fu_67460_p2.read());
}

void calcHash_rollingHash::thread_or_cond368_fu_67553_p2() {
    or_cond368_fu_67553_p2 = (or_cond354_reg_80869.read() | or_cond355_fu_67470_p2.read());
}

void calcHash_rollingHash::thread_or_cond369_fu_67564_p2() {
    or_cond369_fu_67564_p2 = (or_cond356_reg_80880.read() | or_cond357_fu_67480_p2.read());
}

void calcHash_rollingHash::thread_or_cond36_fu_48282_p2() {
    or_cond36_fu_48282_p2 = (tmp_13_0_54_fu_46066_p2.read() | tmp_13_0_53_fu_46038_p2.read());
}

void calcHash_rollingHash::thread_or_cond370_fu_67575_p2() {
    or_cond370_fu_67575_p2 = (or_cond358_reg_80891.read() | or_cond359_fu_67490_p2.read());
}

void calcHash_rollingHash::thread_or_cond371_fu_67586_p2() {
    or_cond371_fu_67586_p2 = (or_cond360_reg_80902.read() | or_cond361_fu_67500_p2.read());
}

void calcHash_rollingHash::thread_or_cond372_fu_67597_p2() {
    or_cond372_fu_67597_p2 = (or_cond362_reg_80913.read() | or_cond363_fu_67510_p2.read());
}

void calcHash_rollingHash::thread_or_cond373_fu_67608_p2() {
    or_cond373_fu_67608_p2 = (or_cond364_reg_80924.read() | or_cond365_fu_67520_p2.read());
}

void calcHash_rollingHash::thread_or_cond374_fu_67621_p2() {
    or_cond374_fu_67621_p2 = (or_cond366_fu_67531_p2.read() | or_cond367_fu_67542_p2.read());
}

void calcHash_rollingHash::thread_or_cond375_fu_67635_p2() {
    or_cond375_fu_67635_p2 = (or_cond368_fu_67553_p2.read() | or_cond369_fu_67564_p2.read());
}

void calcHash_rollingHash::thread_or_cond376_fu_67649_p2() {
    or_cond376_fu_67649_p2 = (or_cond370_fu_67575_p2.read() | or_cond371_fu_67586_p2.read());
}

void calcHash_rollingHash::thread_or_cond377_fu_67663_p2() {
    or_cond377_fu_67663_p2 = (or_cond372_fu_67597_p2.read() | or_cond373_fu_67608_p2.read());
}

void calcHash_rollingHash::thread_or_cond378_fu_67677_p2() {
    or_cond378_fu_67677_p2 = (or_cond374_fu_67621_p2.read() | or_cond375_fu_67635_p2.read());
}

void calcHash_rollingHash::thread_or_cond379_fu_67691_p2() {
    or_cond379_fu_67691_p2 = (or_cond376_fu_67649_p2.read() | or_cond377_fu_67663_p2.read());
}

void calcHash_rollingHash::thread_or_cond37_fu_49072_p2() {
    or_cond37_fu_49072_p2 = (tmp_13_0_52_reg_77157.read() | tmp_13_0_51_reg_77152.read());
}

void calcHash_rollingHash::thread_or_cond380_fu_67709_p2() {
    or_cond380_fu_67709_p2 = (or_cond378_fu_67677_p2.read() | or_cond379_fu_67691_p2.read());
}

void calcHash_rollingHash::thread_or_cond38_fu_48288_p2() {
    or_cond38_fu_48288_p2 = (tmp_13_0_50_fu_45954_p2.read() | tmp_13_0_49_fu_45926_p2.read());
}

void calcHash_rollingHash::thread_or_cond39_fu_49090_p2() {
    or_cond39_fu_49090_p2 = (tmp_13_0_48_reg_77141.read() | tmp_13_0_47_reg_77136.read());
}

void calcHash_rollingHash::thread_or_cond3_fu_48106_p2() {
    or_cond3_fu_48106_p2 = (tmp_13_0_120_fu_47914_p2.read() | tmp_13_0_119_fu_47886_p2.read());
}

void calcHash_rollingHash::thread_or_cond40_fu_48302_p2() {
    or_cond40_fu_48302_p2 = (tmp_13_0_46_fu_45842_p2.read() | tmp_13_0_45_fu_45814_p2.read());
}

void calcHash_rollingHash::thread_or_cond41_fu_48316_p2() {
    or_cond41_fu_48316_p2 = (tmp_13_0_44_fu_45786_p2.read() | tmp_13_0_43_fu_45758_p2.read());
}

void calcHash_rollingHash::thread_or_cond42_fu_48330_p2() {
    or_cond42_fu_48330_p2 = (tmp_13_0_42_fu_45730_p2.read() | tmp_13_0_41_fu_45702_p2.read());
}

void calcHash_rollingHash::thread_or_cond43_fu_48344_p2() {
    or_cond43_fu_48344_p2 = (tmp_13_0_40_fu_45674_p2.read() | tmp_13_0_39_fu_45646_p2.read());
}

void calcHash_rollingHash::thread_or_cond44_fu_48358_p2() {
    or_cond44_fu_48358_p2 = (tmp_13_0_38_fu_45618_p2.read() | tmp_13_0_37_fu_45590_p2.read());
}

void calcHash_rollingHash::thread_or_cond45_fu_48372_p2() {
    or_cond45_fu_48372_p2 = (tmp_13_0_36_fu_45562_p2.read() | tmp_13_0_35_fu_45534_p2.read());
}

void calcHash_rollingHash::thread_or_cond46_fu_48386_p2() {
    or_cond46_fu_48386_p2 = (tmp_13_0_34_fu_45506_p2.read() | tmp_13_0_33_fu_45478_p2.read());
}

void calcHash_rollingHash::thread_or_cond47_fu_49094_p2() {
    or_cond47_fu_49094_p2 = (tmp_13_0_32_reg_77131.read() | tmp_13_0_31_reg_77126.read());
}

void calcHash_rollingHash::thread_or_cond48_fu_48400_p2() {
    or_cond48_fu_48400_p2 = (tmp_13_0_30_fu_45394_p2.read() | tmp_13_0_29_fu_45366_p2.read());
}

void calcHash_rollingHash::thread_or_cond49_fu_48406_p2() {
    or_cond49_fu_48406_p2 = (tmp_13_0_28_fu_45338_p2.read() | tmp_13_0_27_fu_45310_p2.read());
}

void calcHash_rollingHash::thread_or_cond4_fu_48112_p2() {
    or_cond4_fu_48112_p2 = (tmp_13_0_118_fu_47858_p2.read() | tmp_13_0_117_fu_47830_p2.read());
}

void calcHash_rollingHash::thread_or_cond50_fu_48412_p2() {
    or_cond50_fu_48412_p2 = (tmp_13_0_26_fu_45282_p2.read() | tmp_13_0_25_fu_45254_p2.read());
}

void calcHash_rollingHash::thread_or_cond51_fu_49126_p2() {
    or_cond51_fu_49126_p2 = (tmp_13_0_24_reg_77105.read() | tmp_13_0_23_reg_77100.read());
}

void calcHash_rollingHash::thread_or_cond52_fu_48418_p2() {
    or_cond52_fu_48418_p2 = (tmp_13_0_22_fu_45170_p2.read() | tmp_13_0_21_fu_45142_p2.read());
}

void calcHash_rollingHash::thread_or_cond53_fu_49144_p2() {
    or_cond53_fu_49144_p2 = (tmp_13_0_20_reg_77089.read() | tmp_13_0_19_reg_77084.read());
}

void calcHash_rollingHash::thread_or_cond54_fu_48424_p2() {
    or_cond54_fu_48424_p2 = (tmp_13_0_18_fu_45058_p2.read() | tmp_13_0_17_fu_45030_p2.read());
}

void calcHash_rollingHash::thread_or_cond55_fu_49162_p2() {
    or_cond55_fu_49162_p2 = (tmp_13_0_16_reg_77073.read() | tmp_13_0_15_reg_77068.read());
}

void calcHash_rollingHash::thread_or_cond56_fu_48430_p2() {
    or_cond56_fu_48430_p2 = (tmp_13_0_14_fu_44946_p2.read() | tmp_13_0_13_fu_44918_p2.read());
}

void calcHash_rollingHash::thread_or_cond57_fu_48436_p2() {
    or_cond57_fu_48436_p2 = (tmp_13_0_12_fu_44890_p2.read() | tmp_13_0_11_fu_44862_p2.read());
}

void calcHash_rollingHash::thread_or_cond58_fu_48450_p2() {
    or_cond58_fu_48450_p2 = (tmp_13_0_10_fu_44834_p2.read() | tmp_13_0_s_fu_44806_p2.read());
}

void calcHash_rollingHash::thread_or_cond59_fu_48464_p2() {
    or_cond59_fu_48464_p2 = (tmp_13_0_9_fu_44778_p2.read() | tmp_13_0_8_fu_44750_p2.read());
}

void calcHash_rollingHash::thread_or_cond5_fu_48118_p2() {
    or_cond5_fu_48118_p2 = (tmp_13_0_116_fu_47802_p2.read() | tmp_13_0_115_fu_47774_p2.read());
}

void calcHash_rollingHash::thread_or_cond60_fu_48478_p2() {
    or_cond60_fu_48478_p2 = (tmp_13_0_7_fu_44722_p2.read() | tmp_13_0_6_fu_44694_p2.read());
}

void calcHash_rollingHash::thread_or_cond61_fu_48492_p2() {
    or_cond61_fu_48492_p2 = (tmp_13_0_5_fu_44666_p2.read() | tmp_13_0_4_fu_44638_p2.read());
}

void calcHash_rollingHash::thread_or_cond62_fu_48524_p2() {
    or_cond62_fu_48524_p2 = (tmp_13_0_3_fu_44610_p2.read() | tmp_13_0_2_fu_44582_p2.read());
}

void calcHash_rollingHash::thread_or_cond63_fu_49180_p2() {
    or_cond63_fu_49180_p2 = (tmp_13_0_1_reg_77053.read() | tmp_12_26_reg_77048.read());
}

void calcHash_rollingHash::thread_or_cond64_fu_48538_p2() {
    or_cond64_fu_48538_p2 = (or_cond_fu_48088_p2.read() | or_cond1_fu_48094_p2.read());
}

void calcHash_rollingHash::thread_or_cond65_fu_48544_p2() {
    or_cond65_fu_48544_p2 = (or_cond2_fu_48100_p2.read() | or_cond3_fu_48106_p2.read());
}

void calcHash_rollingHash::thread_or_cond66_fu_48550_p2() {
    or_cond66_fu_48550_p2 = (or_cond4_fu_48112_p2.read() | or_cond5_fu_48118_p2.read());
}

void calcHash_rollingHash::thread_or_cond67_fu_49216_p2() {
    or_cond67_fu_49216_p2 = (or_cond6_reg_77397.read() | or_cond7_fu_48854_p2.read());
}

void calcHash_rollingHash::thread_or_cond68_fu_48564_p2() {
    or_cond68_fu_48564_p2 = (or_cond8_fu_48138_p2.read() | or_cond9_fu_48152_p2.read());
}

void calcHash_rollingHash::thread_or_cond69_fu_48578_p2() {
    or_cond69_fu_48578_p2 = (or_cond10_fu_48166_p2.read() | or_cond11_fu_48180_p2.read());
}

void calcHash_rollingHash::thread_or_cond6_fu_48124_p2() {
    or_cond6_fu_48124_p2 = (tmp_13_0_114_fu_47746_p2.read() | tmp_13_0_113_fu_47718_p2.read());
}

void calcHash_rollingHash::thread_or_cond70_fu_49228_p2() {
    or_cond70_fu_49228_p2 = (or_cond12_reg_77403.read() | or_cond13_fu_48872_p2.read());
}

void calcHash_rollingHash::thread_or_cond71_fu_49240_p2() {
    or_cond71_fu_49240_p2 = (or_cond14_reg_77409.read() | or_cond15_fu_48890_p2.read());
}

void calcHash_rollingHash::thread_or_cond72_fu_48584_p2() {
    or_cond72_fu_48584_p2 = (or_cond16_fu_48198_p2.read() | or_cond17_fu_48204_p2.read());
}

void calcHash_rollingHash::thread_or_cond73_fu_48590_p2() {
    or_cond73_fu_48590_p2 = (or_cond18_fu_48210_p2.read() | or_cond19_fu_48216_p2.read());
}

void calcHash_rollingHash::thread_or_cond74_fu_49266_p2() {
    or_cond74_fu_49266_p2 = (or_cond20_reg_77425.read() | or_cond21_fu_48936_p2.read());
}

void calcHash_rollingHash::thread_or_cond75_fu_49279_p2() {
    or_cond75_fu_49279_p2 = (or_cond22_fu_48947_p2.read() | or_cond23_fu_48958_p2.read());
}

void calcHash_rollingHash::thread_or_cond76_fu_48596_p2() {
    or_cond76_fu_48596_p2 = (or_cond24_fu_48228_p2.read() | or_cond25_fu_48234_p2.read());
}

void calcHash_rollingHash::thread_or_cond77_fu_48602_p2() {
    or_cond77_fu_48602_p2 = (or_cond26_fu_48240_p2.read() | or_cond27_fu_48246_p2.read());
}

void calcHash_rollingHash::thread_or_cond78_fu_49306_p2() {
    or_cond78_fu_49306_p2 = (or_cond28_reg_77441.read() | or_cond29_fu_49004_p2.read());
}

void calcHash_rollingHash::thread_or_cond79_fu_49318_p2() {
    or_cond79_fu_49318_p2 = (or_cond30_reg_77447.read() | or_cond31_fu_49022_p2.read());
}

void calcHash_rollingHash::thread_or_cond7_fu_48854_p2() {
    or_cond7_fu_48854_p2 = (tmp_13_0_112_reg_77341.read() | tmp_13_0_111_reg_77336.read());
}

void calcHash_rollingHash::thread_or_cond80_fu_48608_p2() {
    or_cond80_fu_48608_p2 = (or_cond32_fu_48264_p2.read() | or_cond33_fu_48270_p2.read());
}

void calcHash_rollingHash::thread_or_cond81_fu_49341_p2() {
    or_cond81_fu_49341_p2 = (or_cond34_reg_77458.read() | or_cond35_fu_49054_p2.read());
}

void calcHash_rollingHash::thread_or_cond82_fu_49353_p2() {
    or_cond82_fu_49353_p2 = (or_cond36_reg_77464.read() | or_cond37_fu_49072_p2.read());
}

void calcHash_rollingHash::thread_or_cond83_fu_49365_p2() {
    or_cond83_fu_49365_p2 = (or_cond38_reg_77470.read() | or_cond39_fu_49090_p2.read());
}

void calcHash_rollingHash::thread_or_cond84_fu_48622_p2() {
    or_cond84_fu_48622_p2 = (or_cond40_fu_48302_p2.read() | or_cond41_fu_48316_p2.read());
}

void calcHash_rollingHash::thread_or_cond85_fu_48636_p2() {
    or_cond85_fu_48636_p2 = (or_cond42_fu_48330_p2.read() | or_cond43_fu_48344_p2.read());
}

void calcHash_rollingHash::thread_or_cond86_fu_48650_p2() {
    or_cond86_fu_48650_p2 = (or_cond44_fu_48358_p2.read() | or_cond45_fu_48372_p2.read());
}

void calcHash_rollingHash::thread_or_cond87_fu_49370_p2() {
    or_cond87_fu_49370_p2 = (or_cond46_reg_77476.read() | or_cond47_fu_49094_p2.read());
}

void calcHash_rollingHash::thread_or_cond88_fu_48664_p2() {
    or_cond88_fu_48664_p2 = (or_cond48_fu_48400_p2.read() | or_cond49_fu_48406_p2.read());
}

void calcHash_rollingHash::thread_or_cond89_fu_49393_p2() {
    or_cond89_fu_49393_p2 = (or_cond50_reg_77486.read() | or_cond51_fu_49126_p2.read());
}

void calcHash_rollingHash::thread_or_cond8_fu_48138_p2() {
    or_cond8_fu_48138_p2 = (tmp_13_0_110_fu_47634_p2.read() | tmp_13_0_109_fu_47606_p2.read());
}

void calcHash_rollingHash::thread_or_cond90_fu_49405_p2() {
    or_cond90_fu_49405_p2 = (or_cond52_reg_77492.read() | or_cond53_fu_49144_p2.read());
}

void calcHash_rollingHash::thread_or_cond91_fu_49417_p2() {
    or_cond91_fu_49417_p2 = (or_cond54_reg_77498.read() | or_cond55_fu_49162_p2.read());
}

void calcHash_rollingHash::thread_or_cond92_fu_48670_p2() {
    or_cond92_fu_48670_p2 = (or_cond56_fu_48430_p2.read() | or_cond57_fu_48436_p2.read());
}

void calcHash_rollingHash::thread_or_cond93_fu_48684_p2() {
    or_cond93_fu_48684_p2 = (or_cond58_fu_48450_p2.read() | or_cond59_fu_48464_p2.read());
}

void calcHash_rollingHash::thread_or_cond94_fu_48716_p2() {
    or_cond94_fu_48716_p2 = (or_cond60_fu_48478_p2.read() | or_cond61_fu_48492_p2.read());
}

void calcHash_rollingHash::thread_or_cond95_fu_49433_p2() {
    or_cond95_fu_49433_p2 = (or_cond62_reg_77509.read() | or_cond63_fu_49180_p2.read());
}

void calcHash_rollingHash::thread_or_cond96_fu_48730_p2() {
    or_cond96_fu_48730_p2 = (or_cond64_fu_48538_p2.read() | or_cond65_fu_48544_p2.read());
}

void calcHash_rollingHash::thread_or_cond97_fu_49456_p2() {
    or_cond97_fu_49456_p2 = (or_cond66_reg_77519.read() | or_cond67_fu_49216_p2.read());
}

void calcHash_rollingHash::thread_or_cond98_fu_48744_p2() {
    or_cond98_fu_48744_p2 = (or_cond68_fu_48564_p2.read() | or_cond69_fu_48578_p2.read());
}

void calcHash_rollingHash::thread_or_cond99_fu_49469_p2() {
    or_cond99_fu_49469_p2 = (or_cond70_fu_49228_p2.read() | or_cond71_fu_49240_p2.read());
}

void calcHash_rollingHash::thread_or_cond9_fu_48152_p2() {
    or_cond9_fu_48152_p2 = (tmp_13_0_108_fu_47578_p2.read() | tmp_13_0_107_fu_47550_p2.read());
}

void calcHash_rollingHash::thread_or_cond_fu_48088_p2() {
    or_cond_fu_48088_p2 = (tmp_13_0_126_fu_48082_p2.read() | tmp_13_0_125_fu_48054_p2.read());
}

void calcHash_rollingHash::thread_str_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()))) {
        str_0_address0 =  (sc_lv<5>) (newIndex4_fu_36618_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        str_0_address0 =  (sc_lv<5>) (newIndex2_fu_36593_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_0_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_0_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_0_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_0_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_0_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_0_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_0_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_0_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_0_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_0_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())))) {
        str_0_ce0 = ap_const_logic_1;
    } else {
        str_0_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_0_ce1 = ap_const_logic_1;
    } else {
        str_0_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_100_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read()))) {
        str_100_address0 =  (sc_lv<5>) (newIndex336_fu_42665_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read()))) {
        str_100_address0 =  (sc_lv<5>) (newIndex7350373504_fu_42605_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_100_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_100_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_100_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_100_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_100_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_100_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_100_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_100_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_100_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_100_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_100_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read())))) {
        str_100_ce0 = ap_const_logic_1;
    } else {
        str_100_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_100_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_100_ce1 = ap_const_logic_1;
    } else {
        str_100_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_101_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read()))) {
        str_101_address0 =  (sc_lv<5>) (newIndex7324173242_fu_42706_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_101_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_101_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_101_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_101_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_101_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_101_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read()))) {
        str_101_address1 =  (sc_lv<5>) (newIndex339_fu_42686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_101_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_101_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_101_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_101_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_101_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read())))) {
        str_101_ce0 = ap_const_logic_1;
    } else {
        str_101_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_101_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read())))) {
        str_101_ce1 = ap_const_logic_1;
    } else {
        str_101_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_102_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read()))) {
        str_102_address0 =  (sc_lv<5>) (newIndex342_fu_42786_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read()))) {
        str_102_address0 =  (sc_lv<5>) (newIndex7297972980_fu_42726_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_102_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_102_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_102_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_102_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_102_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_102_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_102_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_102_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_102_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_102_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_102_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_58.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read())))) {
        str_102_ce0 = ap_const_logic_1;
    } else {
        str_102_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_102_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_102_ce1 = ap_const_logic_1;
    } else {
        str_102_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_103_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read()))) {
        str_103_address0 =  (sc_lv<5>) (newIndex7271772718_fu_42827_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_103_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_103_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_103_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_103_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_103_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_103_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read()))) {
        str_103_address1 =  (sc_lv<5>) (newIndex345_fu_42807_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_103_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_103_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_103_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_103_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_103_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read())))) {
        str_103_ce0 = ap_const_logic_1;
    } else {
        str_103_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_103_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read())))) {
        str_103_ce1 = ap_const_logic_1;
    } else {
        str_103_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_104_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read()))) {
        str_104_address0 =  (sc_lv<5>) (newIndex348_fu_42907_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read()))) {
        str_104_address0 =  (sc_lv<5>) (newIndex7245572456_fu_42847_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_104_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_104_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_104_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_104_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_104_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_104_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_104_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_104_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_104_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_104_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_104_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_59.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read())))) {
        str_104_ce0 = ap_const_logic_1;
    } else {
        str_104_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_104_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_104_ce1 = ap_const_logic_1;
    } else {
        str_104_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_105_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read()))) {
        str_105_address0 =  (sc_lv<5>) (newIndex7219372194_fu_42948_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_105_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_105_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_105_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_105_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_105_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_105_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read()))) {
        str_105_address1 =  (sc_lv<5>) (newIndex351_fu_42928_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_105_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_105_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_105_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_105_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_105_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read())))) {
        str_105_ce0 = ap_const_logic_1;
    } else {
        str_105_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_105_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read())))) {
        str_105_ce1 = ap_const_logic_1;
    } else {
        str_105_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_106_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read()))) {
        str_106_address0 =  (sc_lv<5>) (newIndex354_fu_43028_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read()))) {
        str_106_address0 =  (sc_lv<5>) (newIndex7193171932_fu_42968_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_106_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_106_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_106_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_106_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_106_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_106_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_106_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_106_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_106_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_106_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_106_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_60.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read())))) {
        str_106_ce0 = ap_const_logic_1;
    } else {
        str_106_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_106_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_106_ce1 = ap_const_logic_1;
    } else {
        str_106_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_107_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read()))) {
        str_107_address0 =  (sc_lv<5>) (newIndex7166971670_fu_43069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_107_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_107_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_107_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_107_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_107_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_107_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read()))) {
        str_107_address1 =  (sc_lv<5>) (newIndex357_fu_43049_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_107_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_107_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_107_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_107_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_107_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read())))) {
        str_107_ce0 = ap_const_logic_1;
    } else {
        str_107_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_107_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read())))) {
        str_107_ce1 = ap_const_logic_1;
    } else {
        str_107_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_108_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read()))) {
        str_108_address0 =  (sc_lv<5>) (newIndex360_fu_43149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read()))) {
        str_108_address0 =  (sc_lv<5>) (newIndex7140771408_fu_43089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_108_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_108_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_108_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_108_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_108_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_108_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_108_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_108_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_108_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_108_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_108_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_61.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read())))) {
        str_108_ce0 = ap_const_logic_1;
    } else {
        str_108_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_108_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_108_ce1 = ap_const_logic_1;
    } else {
        str_108_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_109_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read()))) {
        str_109_address0 =  (sc_lv<5>) (newIndex7114571146_fu_43190_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_109_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_109_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_109_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_109_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_109_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_109_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read()))) {
        str_109_address1 =  (sc_lv<5>) (newIndex363_fu_43170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_109_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_109_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_109_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_109_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_109_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read())))) {
        str_109_ce0 = ap_const_logic_1;
    } else {
        str_109_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_109_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read())))) {
        str_109_ce1 = ap_const_logic_1;
    } else {
        str_109_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read()))) {
        str_10_address0 =  (sc_lv<5>) (newIndex6594165942_fu_37220_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read()))) {
        str_10_address0 =  (sc_lv<5>) (newIndex34_fu_37160_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_10_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_10_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_10_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_10_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_10_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_10_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_10_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_10_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_10_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_10_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read())))) {
        str_10_ce0 = ap_const_logic_1;
    } else {
        str_10_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_10_ce1 = ap_const_logic_1;
    } else {
        str_10_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_110_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read()))) {
        str_110_address0 =  (sc_lv<5>) (newIndex366_fu_43270_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read()))) {
        str_110_address0 =  (sc_lv<5>) (newIndex7088370884_fu_43210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_110_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_110_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_110_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_110_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_110_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_110_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_110_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_110_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_110_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_110_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_110_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_62.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read())))) {
        str_110_ce0 = ap_const_logic_1;
    } else {
        str_110_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_110_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_110_ce1 = ap_const_logic_1;
    } else {
        str_110_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_111_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read()))) {
        str_111_address0 =  (sc_lv<5>) (newIndex7062170622_fu_43311_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_111_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_111_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_111_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_111_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_111_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_111_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read()))) {
        str_111_address1 =  (sc_lv<5>) (newIndex369_fu_43291_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_111_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_111_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_111_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_111_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_111_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read())))) {
        str_111_ce0 = ap_const_logic_1;
    } else {
        str_111_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_111_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read())))) {
        str_111_ce1 = ap_const_logic_1;
    } else {
        str_111_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_112_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read()))) {
        str_112_address0 =  (sc_lv<5>) (newIndex372_fu_43391_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read()))) {
        str_112_address0 =  (sc_lv<5>) (newIndex7035970360_fu_43331_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_112_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_112_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_112_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_112_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_112_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_112_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_112_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_112_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_112_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_112_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_112_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_63.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read())))) {
        str_112_ce0 = ap_const_logic_1;
    } else {
        str_112_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_112_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_112_ce1 = ap_const_logic_1;
    } else {
        str_112_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_113_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read()))) {
        str_113_address0 =  (sc_lv<5>) (newIndex7009770098_fu_43432_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_113_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_113_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_113_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_113_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_113_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_113_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read()))) {
        str_113_address1 =  (sc_lv<5>) (newIndex375_fu_43412_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_113_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_113_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_113_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_113_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_113_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read())))) {
        str_113_ce0 = ap_const_logic_1;
    } else {
        str_113_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_113_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read())))) {
        str_113_ce1 = ap_const_logic_1;
    } else {
        str_113_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_114_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read()))) {
        str_114_address0 =  (sc_lv<5>) (newIndex378_fu_43512_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read()))) {
        str_114_address0 =  (sc_lv<5>) (newIndex6983569836_fu_43452_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_114_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_114_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_114_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_114_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_114_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_114_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_114_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_114_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_114_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_114_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_114_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_64.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read())))) {
        str_114_ce0 = ap_const_logic_1;
    } else {
        str_114_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_114_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_114_ce1 = ap_const_logic_1;
    } else {
        str_114_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_115_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read()))) {
        str_115_address0 =  (sc_lv<5>) (newIndex6957369574_fu_43553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_115_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_115_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_115_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_115_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_115_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_115_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read()))) {
        str_115_address1 =  (sc_lv<5>) (newIndex381_fu_43533_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_115_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_115_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_115_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_115_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_115_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read())))) {
        str_115_ce0 = ap_const_logic_1;
    } else {
        str_115_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_115_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read())))) {
        str_115_ce1 = ap_const_logic_1;
    } else {
        str_115_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_116_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read()))) {
        str_116_address0 =  (sc_lv<5>) (newIndex384_fu_43633_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read()))) {
        str_116_address0 =  (sc_lv<5>) (newIndex6931169312_fu_43573_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_116_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_116_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_116_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_116_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_116_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_116_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_116_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_116_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_116_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_116_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_116_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_65.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read())))) {
        str_116_ce0 = ap_const_logic_1;
    } else {
        str_116_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_116_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_116_ce1 = ap_const_logic_1;
    } else {
        str_116_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_117_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read()))) {
        str_117_address0 =  (sc_lv<5>) (newIndex6904969050_fu_43674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_117_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_117_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_117_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_117_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_117_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_117_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read()))) {
        str_117_address1 =  (sc_lv<5>) (newIndex387_fu_43654_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_117_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_117_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_117_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_117_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_117_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read())))) {
        str_117_ce0 = ap_const_logic_1;
    } else {
        str_117_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_117_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read())))) {
        str_117_ce1 = ap_const_logic_1;
    } else {
        str_117_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_118_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read()))) {
        str_118_address0 =  (sc_lv<5>) (newIndex390_fu_43754_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read()))) {
        str_118_address0 =  (sc_lv<5>) (newIndex6878768788_fu_43694_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_118_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_118_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_118_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_118_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_118_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_118_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_118_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_118_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_118_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_118_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_118_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_66.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read())))) {
        str_118_ce0 = ap_const_logic_1;
    } else {
        str_118_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_118_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_118_ce1 = ap_const_logic_1;
    } else {
        str_118_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_119_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read()))) {
        str_119_address0 =  (sc_lv<5>) (newIndex6852568526_fu_43795_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_119_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_119_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_119_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_119_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_119_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_119_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read()))) {
        str_119_address1 =  (sc_lv<5>) (newIndex393_fu_43775_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_119_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_119_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_119_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_119_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_119_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read())))) {
        str_119_ce0 = ap_const_logic_1;
    } else {
        str_119_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_119_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read())))) {
        str_119_ce1 = ap_const_logic_1;
    } else {
        str_119_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read()))) {
        str_11_address0 =  (sc_lv<5>) (newIndex37_fu_37261_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_11_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_11_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_11_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_11_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_11_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_11_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read()))) {
        str_11_address1 =  (sc_lv<5>) (newIndex6581065811_fu_37241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_11_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_11_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_11_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_11_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_11_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read())))) {
        str_11_ce0 = ap_const_logic_1;
    } else {
        str_11_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read())))) {
        str_11_ce1 = ap_const_logic_1;
    } else {
        str_11_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_120_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read()))) {
        str_120_address0 =  (sc_lv<5>) (newIndex396_fu_43875_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read()))) {
        str_120_address0 =  (sc_lv<5>) (newIndex6826368264_fu_43815_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_120_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_120_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_120_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_120_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_120_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_120_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_120_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_120_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_120_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_120_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_120_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_67.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read())))) {
        str_120_ce0 = ap_const_logic_1;
    } else {
        str_120_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_120_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_120_ce1 = ap_const_logic_1;
    } else {
        str_120_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_121_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read()))) {
        str_121_address0 =  (sc_lv<5>) (newIndex6800168002_fu_43916_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_121_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_121_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_121_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_121_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_121_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_121_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read()))) {
        str_121_address1 =  (sc_lv<5>) (newIndex399_fu_43896_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_121_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_121_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_121_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_121_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_121_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read())))) {
        str_121_ce0 = ap_const_logic_1;
    } else {
        str_121_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_121_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read())))) {
        str_121_ce1 = ap_const_logic_1;
    } else {
        str_121_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_122_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read()))) {
        str_122_address0 =  (sc_lv<5>) (newIndex402_fu_43996_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read()))) {
        str_122_address0 =  (sc_lv<5>) (newIndex6773967740_fu_43936_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_122_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_122_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_122_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_122_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_122_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_122_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_122_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_122_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_122_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_122_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_122_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_68.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read())))) {
        str_122_ce0 = ap_const_logic_1;
    } else {
        str_122_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_122_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_122_ce1 = ap_const_logic_1;
    } else {
        str_122_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_123_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read()))) {
        str_123_address0 =  (sc_lv<5>) (newIndex6747767478_fu_44037_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_123_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_123_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_123_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_123_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_123_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_123_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read()))) {
        str_123_address1 =  (sc_lv<5>) (newIndex405_fu_44017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_123_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_123_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_123_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_123_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_123_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read())))) {
        str_123_ce0 = ap_const_logic_1;
    } else {
        str_123_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_123_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read())))) {
        str_123_ce1 = ap_const_logic_1;
    } else {
        str_123_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_124_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read()))) {
        str_124_address0 =  (sc_lv<5>) (newIndex408_fu_44117_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read()))) {
        str_124_address0 =  (sc_lv<5>) (newIndex410_fu_44057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_124_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_124_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_124_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_124_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_124_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_124_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_124_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_124_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_124_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_124_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_124_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_69.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read())))) {
        str_124_ce0 = ap_const_logic_1;
    } else {
        str_124_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_124_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_124_ce1 = ap_const_logic_1;
    } else {
        str_124_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_125_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read()))) {
        str_125_address0 =  (sc_lv<5>) (newIndex3948039481_fu_44164_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_125_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_125_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_125_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_125_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_125_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_125_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read()))) {
        str_125_address1 =  (sc_lv<5>) (newIndex412_fu_44138_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_125_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_125_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_125_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_125_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_125_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read())))) {
        str_125_ce0 = ap_const_logic_1;
    } else {
        str_125_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_125_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read())))) {
        str_125_ce1 = ap_const_logic_1;
    } else {
        str_125_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_126_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        str_126_address0 =  (sc_lv<5>) (newIndex415_fu_44291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read()))) {
        str_126_address0 =  (sc_lv<5>) (newIndex2245022451_fu_44200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_126_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_126_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_126_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_126_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_126_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_126_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_126_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_126_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_126_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_126_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_126_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_126_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_70.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        str_126_ce0 = ap_const_logic_1;
    } else {
        str_126_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_126_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_126_ce1 = ap_const_logic_1;
    } else {
        str_126_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_127_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        str_127_address0 =  (sc_lv<5>) (newIndex420_fu_44299_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_127_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_127_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_127_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_127_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_127_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_127_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        str_127_address1 =  (sc_lv<5>) (newIndex418_fu_44295_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_127_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_127_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_127_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_127_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_127_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_127_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        str_127_ce0 = ap_const_logic_1;
    } else {
        str_127_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_127_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        str_127_ce1 = ap_const_logic_1;
    } else {
        str_127_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read()))) {
        str_12_address0 =  (sc_lv<5>) (newIndex6567965680_fu_37341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read()))) {
        str_12_address0 =  (sc_lv<5>) (newIndex40_fu_37281_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_12_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_12_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_12_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_12_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_12_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_12_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_12_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_12_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_12_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_12_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read())))) {
        str_12_ce0 = ap_const_logic_1;
    } else {
        str_12_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_12_ce1 = ap_const_logic_1;
    } else {
        str_12_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read()))) {
        str_13_address0 =  (sc_lv<5>) (newIndex43_fu_37382_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_13_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_13_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_13_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_13_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_13_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_13_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read()))) {
        str_13_address1 =  (sc_lv<5>) (newIndex6554865549_fu_37362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_13_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_13_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_13_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_13_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_13_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read())))) {
        str_13_ce0 = ap_const_logic_1;
    } else {
        str_13_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read())))) {
        str_13_ce1 = ap_const_logic_1;
    } else {
        str_13_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read()))) {
        str_14_address0 =  (sc_lv<5>) (newIndex6541765418_fu_37462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read()))) {
        str_14_address0 =  (sc_lv<5>) (newIndex46_fu_37402_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_14_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_14_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_14_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_14_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_14_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_14_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_14_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_14_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_14_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_14_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_14.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read())))) {
        str_14_ce0 = ap_const_logic_1;
    } else {
        str_14_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_14_ce1 = ap_const_logic_1;
    } else {
        str_14_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read()))) {
        str_15_address0 =  (sc_lv<5>) (newIndex49_fu_37503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_15_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_15_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_15_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_15_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_15_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_15_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read()))) {
        str_15_address1 =  (sc_lv<5>) (newIndex6528665287_fu_37483_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_15_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_15_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_15_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_15_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_15_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read())))) {
        str_15_ce0 = ap_const_logic_1;
    } else {
        str_15_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read())))) {
        str_15_ce1 = ap_const_logic_1;
    } else {
        str_15_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read()))) {
        str_16_address0 =  (sc_lv<5>) (newIndex6515565156_fu_37583_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read()))) {
        str_16_address0 =  (sc_lv<5>) (newIndex52_fu_37523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_16_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_16_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_16_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_16_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_16_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_16_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_16_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_16_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_16_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_16_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_15.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read())))) {
        str_16_ce0 = ap_const_logic_1;
    } else {
        str_16_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_16_ce1 = ap_const_logic_1;
    } else {
        str_16_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read()))) {
        str_17_address0 =  (sc_lv<5>) (newIndex55_fu_37624_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_17_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_17_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_17_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_17_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_17_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_17_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read()))) {
        str_17_address1 =  (sc_lv<5>) (newIndex6502465025_fu_37604_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_17_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_17_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_17_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_17_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_17_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read())))) {
        str_17_ce0 = ap_const_logic_1;
    } else {
        str_17_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read())))) {
        str_17_ce1 = ap_const_logic_1;
    } else {
        str_17_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read()))) {
        str_18_address0 =  (sc_lv<5>) (newIndex6489364894_fu_37704_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read()))) {
        str_18_address0 =  (sc_lv<5>) (newIndex58_fu_37644_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_18_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_18_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_18_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_18_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_18_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_18_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_18_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_18_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_18_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_18_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_16.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read())))) {
        str_18_ce0 = ap_const_logic_1;
    } else {
        str_18_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_18_ce1 = ap_const_logic_1;
    } else {
        str_18_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read()))) {
        str_19_address0 =  (sc_lv<5>) (newIndex61_fu_37745_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_19_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_19_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_19_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_19_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_19_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_19_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read()))) {
        str_19_address1 =  (sc_lv<5>) (newIndex6476264763_fu_37725_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_19_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_19_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_19_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_19_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_19_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read())))) {
        str_19_ce0 = ap_const_logic_1;
    } else {
        str_19_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read())))) {
        str_19_ce1 = ap_const_logic_1;
    } else {
        str_19_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()))) {
        str_1_address0 =  (sc_lv<5>) (newIndex7_fu_36654_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_1_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_1_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_1_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_1_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_1_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()))) {
        str_1_address1 =  (sc_lv<5>) (newIndex6712067121_fu_36633_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_1_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_1_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_1_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_1_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_1_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read())))) {
        str_1_ce0 = ap_const_logic_1;
    } else {
        str_1_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read())))) {
        str_1_ce1 = ap_const_logic_1;
    } else {
        str_1_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read()))) {
        str_20_address0 =  (sc_lv<5>) (newIndex6463164632_fu_37825_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read()))) {
        str_20_address0 =  (sc_lv<5>) (newIndex64_fu_37765_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_20_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_20_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_20_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_20_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_20_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_20_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_20_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_20_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_20_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_20_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_17.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read())))) {
        str_20_ce0 = ap_const_logic_1;
    } else {
        str_20_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_20_ce1 = ap_const_logic_1;
    } else {
        str_20_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read()))) {
        str_21_address0 =  (sc_lv<5>) (newIndex67_fu_37866_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_21_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_21_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_21_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_21_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_21_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_21_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read()))) {
        str_21_address1 =  (sc_lv<5>) (newIndex6450064501_fu_37846_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_21_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_21_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_21_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_21_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_21_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read())))) {
        str_21_ce0 = ap_const_logic_1;
    } else {
        str_21_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read())))) {
        str_21_ce1 = ap_const_logic_1;
    } else {
        str_21_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read()))) {
        str_22_address0 =  (sc_lv<5>) (newIndex69_fu_37946_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read()))) {
        str_22_address0 =  (sc_lv<5>) (newIndex71_fu_37886_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_22_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_22_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_22_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_22_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_22_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_22_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_22_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_22_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_22_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_22_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_18.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read())))) {
        str_22_ce0 = ap_const_logic_1;
    } else {
        str_22_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_22_ce1 = ap_const_logic_1;
    } else {
        str_22_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read()))) {
        str_23_address0 =  (sc_lv<5>) (newIndex75_fu_37987_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_23_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_23_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_23_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_23_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_23_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_23_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read()))) {
        str_23_address1 =  (sc_lv<5>) (newIndex73_fu_37967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_23_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_23_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_23_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_23_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_23_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read())))) {
        str_23_ce0 = ap_const_logic_1;
    } else {
        str_23_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read())))) {
        str_23_ce1 = ap_const_logic_1;
    } else {
        str_23_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read()))) {
        str_24_address0 =  (sc_lv<5>) (newIndex77_fu_38067_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read()))) {
        str_24_address0 =  (sc_lv<5>) (newIndex79_fu_38007_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_24_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_24_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_24_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_24_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_24_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_24_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_24_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_24_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_24_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_24_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_24_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_19.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read())))) {
        str_24_ce0 = ap_const_logic_1;
    } else {
        str_24_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_24_ce1 = ap_const_logic_1;
    } else {
        str_24_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read()))) {
        str_25_address0 =  (sc_lv<5>) (newIndex83_fu_38108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_25_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_25_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_25_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_25_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_25_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_25_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read()))) {
        str_25_address1 =  (sc_lv<5>) (newIndex81_fu_38088_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_25_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_25_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_25_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_25_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_25_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read())))) {
        str_25_ce0 = ap_const_logic_1;
    } else {
        str_25_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read())))) {
        str_25_ce1 = ap_const_logic_1;
    } else {
        str_25_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read()))) {
        str_26_address0 =  (sc_lv<5>) (newIndex85_fu_38188_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read()))) {
        str_26_address0 =  (sc_lv<5>) (newIndex87_fu_38128_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_26_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_26_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_26_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_26_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_26_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_26_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_26_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_26_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_26_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_26_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_26_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_20.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read())))) {
        str_26_ce0 = ap_const_logic_1;
    } else {
        str_26_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_26_ce1 = ap_const_logic_1;
    } else {
        str_26_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read()))) {
        str_27_address0 =  (sc_lv<5>) (newIndex91_fu_38229_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_27_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_27_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_27_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_27_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_27_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_27_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read()))) {
        str_27_address1 =  (sc_lv<5>) (newIndex89_fu_38209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_27_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_27_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_27_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_27_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_27_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read())))) {
        str_27_ce0 = ap_const_logic_1;
    } else {
        str_27_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read())))) {
        str_27_ce1 = ap_const_logic_1;
    } else {
        str_27_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read()))) {
        str_28_address0 =  (sc_lv<5>) (newIndex93_fu_38309_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read()))) {
        str_28_address0 =  (sc_lv<5>) (newIndex95_fu_38249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_28_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_28_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_28_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_28_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_28_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_28_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_28_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_28_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_28_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_28_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_28_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_21.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read())))) {
        str_28_ce0 = ap_const_logic_1;
    } else {
        str_28_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_28_ce1 = ap_const_logic_1;
    } else {
        str_28_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read()))) {
        str_29_address0 =  (sc_lv<5>) (newIndex99_fu_38350_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_29_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_29_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_29_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_29_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_29_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_29_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read()))) {
        str_29_address1 =  (sc_lv<5>) (newIndex97_fu_38330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_29_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_29_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_29_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_29_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_29_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read())))) {
        str_29_ce0 = ap_const_logic_1;
    } else {
        str_29_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read())))) {
        str_29_ce1 = ap_const_logic_1;
    } else {
        str_29_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        str_2_address0 =  (sc_lv<5>) (newIndex6698966990_fu_36736_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read()))) {
        str_2_address0 =  (sc_lv<5>) (newIndex10_fu_36675_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_2_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_2_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_2_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_2_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_2_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_2_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_2_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_2_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_2_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_2_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read())))) {
        str_2_ce0 = ap_const_logic_1;
    } else {
        str_2_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_2_ce1 = ap_const_logic_1;
    } else {
        str_2_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read()))) {
        str_30_address0 =  (sc_lv<5>) (newIndex101_fu_38430_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read()))) {
        str_30_address0 =  (sc_lv<5>) (newIndex103_fu_38370_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_30_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_30_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_30_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_30_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_30_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_30_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_30_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_30_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_30_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_30_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_30_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_22.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read())))) {
        str_30_ce0 = ap_const_logic_1;
    } else {
        str_30_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_30_ce1 = ap_const_logic_1;
    } else {
        str_30_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read()))) {
        str_31_address0 =  (sc_lv<5>) (newIndex107_fu_38471_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_31_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_31_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_31_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_31_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_31_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_31_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read()))) {
        str_31_address1 =  (sc_lv<5>) (newIndex105_fu_38451_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_31_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_31_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_31_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_31_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_31_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read())))) {
        str_31_ce0 = ap_const_logic_1;
    } else {
        str_31_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read())))) {
        str_31_ce1 = ap_const_logic_1;
    } else {
        str_31_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read()))) {
        str_32_address0 =  (sc_lv<5>) (newIndex109_fu_38551_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read()))) {
        str_32_address0 =  (sc_lv<5>) (newIndex111_fu_38491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_32_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_32_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_32_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_32_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_32_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_32_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_32_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_32_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_32_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_32_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_32_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_23.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read())))) {
        str_32_ce0 = ap_const_logic_1;
    } else {
        str_32_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_32_ce1 = ap_const_logic_1;
    } else {
        str_32_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read()))) {
        str_33_address0 =  (sc_lv<5>) (newIndex115_fu_38592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_33_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_33_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_33_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_33_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_33_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_33_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read()))) {
        str_33_address1 =  (sc_lv<5>) (newIndex113_fu_38572_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_33_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_33_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_33_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_33_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_33_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read())))) {
        str_33_ce0 = ap_const_logic_1;
    } else {
        str_33_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read())))) {
        str_33_ce1 = ap_const_logic_1;
    } else {
        str_33_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read()))) {
        str_34_address0 =  (sc_lv<5>) (newIndex117_fu_38672_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read()))) {
        str_34_address0 =  (sc_lv<5>) (newIndex119_fu_38612_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_34_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_34_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_34_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_34_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_34_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_34_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_34_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_34_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_34_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_34_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_34_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_24.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read())))) {
        str_34_ce0 = ap_const_logic_1;
    } else {
        str_34_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_34_ce1 = ap_const_logic_1;
    } else {
        str_34_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read()))) {
        str_35_address0 =  (sc_lv<5>) (newIndex123_fu_38713_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_35_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_35_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_35_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_35_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_35_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_35_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read()))) {
        str_35_address1 =  (sc_lv<5>) (newIndex121_fu_38693_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_35_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_35_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_35_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_35_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_35_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read())))) {
        str_35_ce0 = ap_const_logic_1;
    } else {
        str_35_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read())))) {
        str_35_ce1 = ap_const_logic_1;
    } else {
        str_35_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read()))) {
        str_36_address0 =  (sc_lv<5>) (newIndex125_fu_38793_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read()))) {
        str_36_address0 =  (sc_lv<5>) (newIndex127_fu_38733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_36_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_36_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_36_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_36_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_36_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_36_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_36_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_36_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_36_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_36_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_36_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_25.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read())))) {
        str_36_ce0 = ap_const_logic_1;
    } else {
        str_36_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_36_ce1 = ap_const_logic_1;
    } else {
        str_36_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read()))) {
        str_37_address0 =  (sc_lv<5>) (newIndex131_fu_38834_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_37_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_37_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_37_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_37_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_37_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_37_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read()))) {
        str_37_address1 =  (sc_lv<5>) (newIndex129_fu_38814_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_37_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_37_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_37_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_37_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_37_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read())))) {
        str_37_ce0 = ap_const_logic_1;
    } else {
        str_37_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read())))) {
        str_37_ce1 = ap_const_logic_1;
    } else {
        str_37_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read()))) {
        str_38_address0 =  (sc_lv<5>) (newIndex133_fu_38914_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read()))) {
        str_38_address0 =  (sc_lv<5>) (newIndex135_fu_38854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_38_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_38_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_38_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_38_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_38_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_38_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_38_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_38_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_38_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_38_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_38_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_26.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read())))) {
        str_38_ce0 = ap_const_logic_1;
    } else {
        str_38_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_38_ce1 = ap_const_logic_1;
    } else {
        str_38_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read()))) {
        str_39_address0 =  (sc_lv<5>) (newIndex139_fu_38955_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_39_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_39_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_39_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_39_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_39_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_39_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read()))) {
        str_39_address1 =  (sc_lv<5>) (newIndex137_fu_38935_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_39_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_39_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_39_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_39_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_39_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read())))) {
        str_39_ce0 = ap_const_logic_1;
    } else {
        str_39_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read())))) {
        str_39_ce1 = ap_const_logic_1;
    } else {
        str_39_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        str_3_address0 =  (sc_lv<5>) (newIndex13_fu_36777_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_3_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_3_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_3_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_3_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_3_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        str_3_address1 =  (sc_lv<5>) (newIndex6685866859_fu_36757_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_3_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_3_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_3_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_3_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_3_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read())))) {
        str_3_ce0 = ap_const_logic_1;
    } else {
        str_3_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read())))) {
        str_3_ce1 = ap_const_logic_1;
    } else {
        str_3_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read()))) {
        str_40_address0 =  (sc_lv<5>) (newIndex141_fu_39035_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read()))) {
        str_40_address0 =  (sc_lv<5>) (newIndex143_fu_38975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_40_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_40_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_40_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_40_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_40_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_40_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_40_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_40_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_40_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_40_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_40_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_27.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read())))) {
        str_40_ce0 = ap_const_logic_1;
    } else {
        str_40_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_40_ce1 = ap_const_logic_1;
    } else {
        str_40_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read()))) {
        str_41_address0 =  (sc_lv<5>) (newIndex147_fu_39076_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_41_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_41_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_41_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_41_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_41_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_41_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read()))) {
        str_41_address1 =  (sc_lv<5>) (newIndex145_fu_39056_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_41_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_41_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_41_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_41_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_41_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read())))) {
        str_41_ce0 = ap_const_logic_1;
    } else {
        str_41_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read())))) {
        str_41_ce1 = ap_const_logic_1;
    } else {
        str_41_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read()))) {
        str_42_address0 =  (sc_lv<5>) (newIndex149_fu_39156_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read()))) {
        str_42_address0 =  (sc_lv<5>) (newIndex151_fu_39096_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_42_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_42_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_42_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_42_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_42_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_42_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_42_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_42_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_42_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_42_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_42_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_28.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read())))) {
        str_42_ce0 = ap_const_logic_1;
    } else {
        str_42_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_42_ce1 = ap_const_logic_1;
    } else {
        str_42_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read()))) {
        str_43_address0 =  (sc_lv<5>) (newIndex155_fu_39197_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_43_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_43_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_43_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_43_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_43_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_43_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read()))) {
        str_43_address1 =  (sc_lv<5>) (newIndex153_fu_39177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_43_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_43_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_43_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_43_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_43_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read())))) {
        str_43_ce0 = ap_const_logic_1;
    } else {
        str_43_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read())))) {
        str_43_ce1 = ap_const_logic_1;
    } else {
        str_43_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read()))) {
        str_44_address0 =  (sc_lv<5>) (newIndex157_fu_39277_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read()))) {
        str_44_address0 =  (sc_lv<5>) (newIndex159_fu_39217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_44_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_44_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_44_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_44_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_44_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_44_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_44_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_44_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_44_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_44_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_44_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_29.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read())))) {
        str_44_ce0 = ap_const_logic_1;
    } else {
        str_44_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_44_ce1 = ap_const_logic_1;
    } else {
        str_44_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read()))) {
        str_45_address0 =  (sc_lv<5>) (newIndex163_fu_39318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_45_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_45_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_45_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_45_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_45_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_45_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read()))) {
        str_45_address1 =  (sc_lv<5>) (newIndex161_fu_39298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_45_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_45_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_45_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_45_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_45_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read())))) {
        str_45_ce0 = ap_const_logic_1;
    } else {
        str_45_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read())))) {
        str_45_ce1 = ap_const_logic_1;
    } else {
        str_45_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read()))) {
        str_46_address0 =  (sc_lv<5>) (newIndex165_fu_39398_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read()))) {
        str_46_address0 =  (sc_lv<5>) (newIndex167_fu_39338_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_46_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_46_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_46_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_46_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_46_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_46_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_46_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_46_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_46_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_46_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_46_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_30.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read())))) {
        str_46_ce0 = ap_const_logic_1;
    } else {
        str_46_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_46_ce1 = ap_const_logic_1;
    } else {
        str_46_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read()))) {
        str_47_address0 =  (sc_lv<5>) (newIndex171_fu_39439_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_47_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_47_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_47_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_47_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_47_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_47_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read()))) {
        str_47_address1 =  (sc_lv<5>) (newIndex169_fu_39419_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_47_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_47_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_47_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_47_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_47_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read())))) {
        str_47_ce0 = ap_const_logic_1;
    } else {
        str_47_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read())))) {
        str_47_ce1 = ap_const_logic_1;
    } else {
        str_47_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read()))) {
        str_48_address0 =  (sc_lv<5>) (newIndex173_fu_39519_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read()))) {
        str_48_address0 =  (sc_lv<5>) (newIndex175_fu_39459_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_48_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_48_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_48_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_48_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_48_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_48_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_48_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_48_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_48_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_48_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_48_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_31.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read())))) {
        str_48_ce0 = ap_const_logic_1;
    } else {
        str_48_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_48_ce1 = ap_const_logic_1;
    } else {
        str_48_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read()))) {
        str_49_address0 =  (sc_lv<5>) (newIndex179_fu_39560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_49_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_49_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_49_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_49_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_49_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_49_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read()))) {
        str_49_address1 =  (sc_lv<5>) (newIndex177_fu_39540_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_49_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_49_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_49_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_49_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_49_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read())))) {
        str_49_ce0 = ap_const_logic_1;
    } else {
        str_49_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read())))) {
        str_49_ce1 = ap_const_logic_1;
    } else {
        str_49_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read()))) {
        str_4_address0 =  (sc_lv<5>) (newIndex6672766728_fu_36857_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()))) {
        str_4_address0 =  (sc_lv<5>) (newIndex16_fu_36797_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_4_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_4_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_4_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_4_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_4_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_4_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_4_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_4_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_4_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_4_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read())))) {
        str_4_ce0 = ap_const_logic_1;
    } else {
        str_4_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_4_ce1 = ap_const_logic_1;
    } else {
        str_4_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read()))) {
        str_50_address0 =  (sc_lv<5>) (newIndex182_fu_39640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read()))) {
        str_50_address0 =  (sc_lv<5>) (newIndex184_fu_39580_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_50_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_50_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_50_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_50_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_50_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_50_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_50_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_50_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_50_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_50_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_50_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_32.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read())))) {
        str_50_ce0 = ap_const_logic_1;
    } else {
        str_50_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_50_ce1 = ap_const_logic_1;
    } else {
        str_50_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read()))) {
        str_51_address0 =  (sc_lv<5>) (newIndex188_fu_39681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_51_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_51_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_51_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_51_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_51_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_51_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read()))) {
        str_51_address1 =  (sc_lv<5>) (newIndex186_fu_39661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_51_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_51_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_51_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_51_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_51_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read())))) {
        str_51_ce0 = ap_const_logic_1;
    } else {
        str_51_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read())))) {
        str_51_ce1 = ap_const_logic_1;
    } else {
        str_51_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read()))) {
        str_52_address0 =  (sc_lv<5>) (newIndex190_fu_39761_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read()))) {
        str_52_address0 =  (sc_lv<5>) (newIndex192_fu_39701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_52_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_52_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_52_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_52_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_52_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_52_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_52_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_52_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_52_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_52_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_52_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_33.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read())))) {
        str_52_ce0 = ap_const_logic_1;
    } else {
        str_52_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_52_ce1 = ap_const_logic_1;
    } else {
        str_52_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read()))) {
        str_53_address0 =  (sc_lv<5>) (newIndex8581785818_fu_39802_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_53_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_53_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_53_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_53_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_53_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_53_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read()))) {
        str_53_address1 =  (sc_lv<5>) (newIndex194_fu_39782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_53_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_53_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_53_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_53_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_53_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read())))) {
        str_53_ce0 = ap_const_logic_1;
    } else {
        str_53_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read())))) {
        str_53_ce1 = ap_const_logic_1;
    } else {
        str_53_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read()))) {
        str_54_address0 =  (sc_lv<5>) (newIndex197_fu_39882_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read()))) {
        str_54_address0 =  (sc_lv<5>) (newIndex8555585556_fu_39822_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_54_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_54_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_54_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_54_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_54_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_54_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_54_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_54_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_54_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_54_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_54_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_34.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read())))) {
        str_54_ce0 = ap_const_logic_1;
    } else {
        str_54_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_54_ce1 = ap_const_logic_1;
    } else {
        str_54_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read()))) {
        str_55_address0 =  (sc_lv<5>) (newIndex8529385294_fu_39923_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_55_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_55_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_55_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_55_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_55_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_55_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read()))) {
        str_55_address1 =  (sc_lv<5>) (newIndex200_fu_39903_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_55_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_55_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_55_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_55_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_55_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read())))) {
        str_55_ce0 = ap_const_logic_1;
    } else {
        str_55_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read())))) {
        str_55_ce1 = ap_const_logic_1;
    } else {
        str_55_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read()))) {
        str_56_address0 =  (sc_lv<5>) (newIndex203_fu_40003_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read()))) {
        str_56_address0 =  (sc_lv<5>) (newIndex8503185032_fu_39943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_56_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_56_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_56_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_56_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_56_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_56_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_56_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_56_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_56_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_56_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_56_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_35.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read())))) {
        str_56_ce0 = ap_const_logic_1;
    } else {
        str_56_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_56_ce1 = ap_const_logic_1;
    } else {
        str_56_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read()))) {
        str_57_address0 =  (sc_lv<5>) (newIndex8476984770_fu_40044_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_57_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_57_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_57_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_57_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_57_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_57_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read()))) {
        str_57_address1 =  (sc_lv<5>) (newIndex206_fu_40024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_57_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_57_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_57_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_57_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_57_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read())))) {
        str_57_ce0 = ap_const_logic_1;
    } else {
        str_57_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read())))) {
        str_57_ce1 = ap_const_logic_1;
    } else {
        str_57_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read()))) {
        str_58_address0 =  (sc_lv<5>) (newIndex209_fu_40124_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read()))) {
        str_58_address0 =  (sc_lv<5>) (newIndex8450784508_fu_40064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_58_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_58_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_58_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_58_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_58_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_58_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_58_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_58_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_58_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_58_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_58_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_36.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read())))) {
        str_58_ce0 = ap_const_logic_1;
    } else {
        str_58_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_58_ce1 = ap_const_logic_1;
    } else {
        str_58_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read()))) {
        str_59_address0 =  (sc_lv<5>) (newIndex8424584246_fu_40165_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_59_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_59_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_59_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_59_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_59_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_59_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read()))) {
        str_59_address1 =  (sc_lv<5>) (newIndex212_fu_40145_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_59_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_59_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_59_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_59_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_59_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read())))) {
        str_59_ce0 = ap_const_logic_1;
    } else {
        str_59_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read())))) {
        str_59_ce1 = ap_const_logic_1;
    } else {
        str_59_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read()))) {
        str_5_address0 =  (sc_lv<5>) (newIndex19_fu_36898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_5_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_5_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_5_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_5_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_5_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read()))) {
        str_5_address1 =  (sc_lv<5>) (newIndex6659666597_fu_36878_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_5_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_5_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_5_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_5_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_5_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read())))) {
        str_5_ce0 = ap_const_logic_1;
    } else {
        str_5_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read())))) {
        str_5_ce1 = ap_const_logic_1;
    } else {
        str_5_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read()))) {
        str_60_address0 =  (sc_lv<5>) (newIndex215_fu_40245_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read()))) {
        str_60_address0 =  (sc_lv<5>) (newIndex8398383984_fu_40185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_60_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_60_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_60_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_60_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_60_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_60_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_60_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_60_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_60_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_60_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_60_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_37.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read())))) {
        str_60_ce0 = ap_const_logic_1;
    } else {
        str_60_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_60_ce1 = ap_const_logic_1;
    } else {
        str_60_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read()))) {
        str_61_address0 =  (sc_lv<5>) (newIndex8372183722_fu_40286_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_61_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_61_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_61_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_61_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_61_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_61_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read()))) {
        str_61_address1 =  (sc_lv<5>) (newIndex218_fu_40266_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_61_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_61_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_61_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_61_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_61_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read())))) {
        str_61_ce0 = ap_const_logic_1;
    } else {
        str_61_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read())))) {
        str_61_ce1 = ap_const_logic_1;
    } else {
        str_61_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read()))) {
        str_62_address0 =  (sc_lv<5>) (newIndex221_fu_40366_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read()))) {
        str_62_address0 =  (sc_lv<5>) (newIndex8345983460_fu_40306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_62_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_62_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_62_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_62_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_62_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_62_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_62_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_62_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_62_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_62_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_62_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_38.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read())))) {
        str_62_ce0 = ap_const_logic_1;
    } else {
        str_62_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_62_ce1 = ap_const_logic_1;
    } else {
        str_62_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read()))) {
        str_63_address0 =  (sc_lv<5>) (newIndex8319783198_fu_40407_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_63_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_63_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_63_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_63_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_63_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_63_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read()))) {
        str_63_address1 =  (sc_lv<5>) (newIndex224_fu_40387_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_63_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_63_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_63_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_63_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_63_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read())))) {
        str_63_ce0 = ap_const_logic_1;
    } else {
        str_63_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read())))) {
        str_63_ce1 = ap_const_logic_1;
    } else {
        str_63_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read()))) {
        str_64_address0 =  (sc_lv<5>) (newIndex227_fu_40487_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read()))) {
        str_64_address0 =  (sc_lv<5>) (newIndex8293582936_fu_40427_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_64_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_64_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_64_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_64_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_64_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_64_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_64_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_64_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_64_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_64_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_64_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_39.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read())))) {
        str_64_ce0 = ap_const_logic_1;
    } else {
        str_64_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_64_ce1 = ap_const_logic_1;
    } else {
        str_64_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read()))) {
        str_65_address0 =  (sc_lv<5>) (newIndex8267382674_fu_40528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_65_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_65_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_65_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_65_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_65_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_65_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read()))) {
        str_65_address1 =  (sc_lv<5>) (newIndex230_fu_40508_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_65_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_65_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_65_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_65_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_65_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read())))) {
        str_65_ce0 = ap_const_logic_1;
    } else {
        str_65_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read())))) {
        str_65_ce1 = ap_const_logic_1;
    } else {
        str_65_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read()))) {
        str_66_address0 =  (sc_lv<5>) (newIndex233_fu_40608_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read()))) {
        str_66_address0 =  (sc_lv<5>) (newIndex8241182412_fu_40548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_66_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_66_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_66_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_66_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_66_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_66_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_66_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_66_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_66_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_66_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_66_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_40.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read())))) {
        str_66_ce0 = ap_const_logic_1;
    } else {
        str_66_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_66_ce1 = ap_const_logic_1;
    } else {
        str_66_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read()))) {
        str_67_address0 =  (sc_lv<5>) (newIndex8214982150_fu_40649_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_67_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_67_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_67_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_67_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_67_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_67_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read()))) {
        str_67_address1 =  (sc_lv<5>) (newIndex236_fu_40629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_67_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_67_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_67_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_67_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_67_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read())))) {
        str_67_ce0 = ap_const_logic_1;
    } else {
        str_67_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read())))) {
        str_67_ce1 = ap_const_logic_1;
    } else {
        str_67_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read()))) {
        str_68_address0 =  (sc_lv<5>) (newIndex239_fu_40729_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read()))) {
        str_68_address0 =  (sc_lv<5>) (newIndex8188781888_fu_40669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_68_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_68_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_68_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_68_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_68_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_68_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_68_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_68_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_68_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_68_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_68_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_41.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read())))) {
        str_68_ce0 = ap_const_logic_1;
    } else {
        str_68_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_68_ce1 = ap_const_logic_1;
    } else {
        str_68_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read()))) {
        str_69_address0 =  (sc_lv<5>) (newIndex8162581626_fu_40770_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_69_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_69_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_69_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_69_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_69_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_69_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read()))) {
        str_69_address1 =  (sc_lv<5>) (newIndex242_fu_40750_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_69_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_69_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_69_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_69_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_69_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read())))) {
        str_69_ce0 = ap_const_logic_1;
    } else {
        str_69_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read())))) {
        str_69_ce1 = ap_const_logic_1;
    } else {
        str_69_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read()))) {
        str_6_address0 =  (sc_lv<5>) (newIndex6646566466_fu_36978_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read()))) {
        str_6_address0 =  (sc_lv<5>) (newIndex22_fu_36918_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_6_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_6_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_6_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_6_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_6_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_6_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_6_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_6_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_6_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_6_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read())))) {
        str_6_ce0 = ap_const_logic_1;
    } else {
        str_6_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_6_ce1 = ap_const_logic_1;
    } else {
        str_6_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read()))) {
        str_70_address0 =  (sc_lv<5>) (newIndex245_fu_40850_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read()))) {
        str_70_address0 =  (sc_lv<5>) (newIndex8136381364_fu_40790_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_70_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_70_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_70_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_70_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_70_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_70_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_70_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_70_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_70_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_70_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_70_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_42.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read())))) {
        str_70_ce0 = ap_const_logic_1;
    } else {
        str_70_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_70_ce1 = ap_const_logic_1;
    } else {
        str_70_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read()))) {
        str_71_address0 =  (sc_lv<5>) (newIndex8110181102_fu_40891_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_71_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_71_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_71_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_71_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_71_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_71_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read()))) {
        str_71_address1 =  (sc_lv<5>) (newIndex248_fu_40871_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_71_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_71_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_71_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_71_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_71_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read())))) {
        str_71_ce0 = ap_const_logic_1;
    } else {
        str_71_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read())))) {
        str_71_ce1 = ap_const_logic_1;
    } else {
        str_71_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read()))) {
        str_72_address0 =  (sc_lv<5>) (newIndex251_fu_40971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read()))) {
        str_72_address0 =  (sc_lv<5>) (newIndex8083980840_fu_40911_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_72_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_72_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_72_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_72_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_72_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_72_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_72_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_72_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_72_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_72_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_72_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_43.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read())))) {
        str_72_ce0 = ap_const_logic_1;
    } else {
        str_72_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_72_ce1 = ap_const_logic_1;
    } else {
        str_72_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read()))) {
        str_73_address0 =  (sc_lv<5>) (newIndex8057780578_fu_41012_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_73_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_73_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_73_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_73_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_73_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_73_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read()))) {
        str_73_address1 =  (sc_lv<5>) (newIndex254_fu_40992_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_73_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_73_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_73_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_73_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_73_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read())))) {
        str_73_ce0 = ap_const_logic_1;
    } else {
        str_73_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read())))) {
        str_73_ce1 = ap_const_logic_1;
    } else {
        str_73_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read()))) {
        str_74_address0 =  (sc_lv<5>) (newIndex257_fu_41092_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read()))) {
        str_74_address0 =  (sc_lv<5>) (newIndex8031580316_fu_41032_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_74_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_74_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_74_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_74_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_74_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_74_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_74_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_74_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_74_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_74_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_74_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_44.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read())))) {
        str_74_ce0 = ap_const_logic_1;
    } else {
        str_74_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_74_ce1 = ap_const_logic_1;
    } else {
        str_74_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read()))) {
        str_75_address0 =  (sc_lv<5>) (newIndex8005380054_fu_41133_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_75_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_75_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_75_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_75_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_75_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_75_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read()))) {
        str_75_address1 =  (sc_lv<5>) (newIndex260_fu_41113_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_75_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_75_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_75_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_75_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_75_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read())))) {
        str_75_ce0 = ap_const_logic_1;
    } else {
        str_75_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read())))) {
        str_75_ce1 = ap_const_logic_1;
    } else {
        str_75_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read()))) {
        str_76_address0 =  (sc_lv<5>) (newIndex263_fu_41213_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read()))) {
        str_76_address0 =  (sc_lv<5>) (newIndex7979179792_fu_41153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_76_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_76_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_76_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_76_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_76_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_76_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_76_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_76_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_76_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_76_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_76_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_45.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read())))) {
        str_76_ce0 = ap_const_logic_1;
    } else {
        str_76_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_76_ce1 = ap_const_logic_1;
    } else {
        str_76_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read()))) {
        str_77_address0 =  (sc_lv<5>) (newIndex7952979530_fu_41254_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_77_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_77_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_77_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_77_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_77_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_77_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read()))) {
        str_77_address1 =  (sc_lv<5>) (newIndex266_fu_41234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_77_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_77_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_77_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_77_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_77_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read())))) {
        str_77_ce0 = ap_const_logic_1;
    } else {
        str_77_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read())))) {
        str_77_ce1 = ap_const_logic_1;
    } else {
        str_77_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read()))) {
        str_78_address0 =  (sc_lv<5>) (newIndex269_fu_41334_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read()))) {
        str_78_address0 =  (sc_lv<5>) (newIndex7926779268_fu_41274_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_78_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_78_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_78_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_78_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_78_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_78_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_78_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_78_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_78_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_78_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_78_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_46.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read())))) {
        str_78_ce0 = ap_const_logic_1;
    } else {
        str_78_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_78_ce1 = ap_const_logic_1;
    } else {
        str_78_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read()))) {
        str_79_address0 =  (sc_lv<5>) (newIndex7900579006_fu_41375_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_79_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_79_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_79_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_79_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_79_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_79_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read()))) {
        str_79_address1 =  (sc_lv<5>) (newIndex272_fu_41355_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_79_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_79_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_79_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_79_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_79_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read())))) {
        str_79_ce0 = ap_const_logic_1;
    } else {
        str_79_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read())))) {
        str_79_ce1 = ap_const_logic_1;
    } else {
        str_79_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read()))) {
        str_7_address0 =  (sc_lv<5>) (newIndex25_fu_37019_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_7_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_7_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_7_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_7_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_7_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read()))) {
        str_7_address1 =  (sc_lv<5>) (newIndex6633466335_fu_36999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_7_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_7_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_7_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_7_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_7_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read())))) {
        str_7_ce0 = ap_const_logic_1;
    } else {
        str_7_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read())))) {
        str_7_ce1 = ap_const_logic_1;
    } else {
        str_7_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_80_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read()))) {
        str_80_address0 =  (sc_lv<5>) (newIndex275_fu_41455_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read()))) {
        str_80_address0 =  (sc_lv<5>) (newIndex7874378744_fu_41395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_80_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_80_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_80_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_80_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_80_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_80_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_80_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_80_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_80_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_80_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_80_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_47.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read())))) {
        str_80_ce0 = ap_const_logic_1;
    } else {
        str_80_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_80_ce1 = ap_const_logic_1;
    } else {
        str_80_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_81_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read()))) {
        str_81_address0 =  (sc_lv<5>) (newIndex7848178482_fu_41496_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_81_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_81_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_81_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_81_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_81_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_81_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read()))) {
        str_81_address1 =  (sc_lv<5>) (newIndex278_fu_41476_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_81_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_81_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_81_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_81_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_81_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read())))) {
        str_81_ce0 = ap_const_logic_1;
    } else {
        str_81_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read())))) {
        str_81_ce1 = ap_const_logic_1;
    } else {
        str_81_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_82_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read()))) {
        str_82_address0 =  (sc_lv<5>) (newIndex281_fu_41576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read()))) {
        str_82_address0 =  (sc_lv<5>) (newIndex7821978220_fu_41516_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_82_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_82_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_82_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_82_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_82_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_82_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_82_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_82_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_82_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_82_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_82_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_48.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read())))) {
        str_82_ce0 = ap_const_logic_1;
    } else {
        str_82_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_82_ce1 = ap_const_logic_1;
    } else {
        str_82_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_83_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read()))) {
        str_83_address0 =  (sc_lv<5>) (newIndex7795777958_fu_41617_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_83_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_83_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_83_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_83_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_83_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_83_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read()))) {
        str_83_address1 =  (sc_lv<5>) (newIndex284_fu_41597_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_83_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_83_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_83_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_83_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_83_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read())))) {
        str_83_ce0 = ap_const_logic_1;
    } else {
        str_83_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read())))) {
        str_83_ce1 = ap_const_logic_1;
    } else {
        str_83_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_84_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read()))) {
        str_84_address0 =  (sc_lv<5>) (newIndex287_fu_41697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read()))) {
        str_84_address0 =  (sc_lv<5>) (newIndex7769577696_fu_41637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_84_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_84_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_84_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_84_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_84_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_84_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_84_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_84_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_84_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_84_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_84_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_49.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read())))) {
        str_84_ce0 = ap_const_logic_1;
    } else {
        str_84_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_84_ce1 = ap_const_logic_1;
    } else {
        str_84_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_85_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read()))) {
        str_85_address0 =  (sc_lv<5>) (newIndex7743377434_fu_41738_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_85_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_85_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_85_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_85_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_85_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_85_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read()))) {
        str_85_address1 =  (sc_lv<5>) (newIndex290_fu_41718_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_85_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_85_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_85_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_85_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_85_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read())))) {
        str_85_ce0 = ap_const_logic_1;
    } else {
        str_85_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read())))) {
        str_85_ce1 = ap_const_logic_1;
    } else {
        str_85_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_86_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read()))) {
        str_86_address0 =  (sc_lv<5>) (newIndex293_fu_41818_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read()))) {
        str_86_address0 =  (sc_lv<5>) (newIndex7717177172_fu_41758_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_86_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_86_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_86_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_86_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_86_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_86_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_86_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_86_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_86_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_86_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_86_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_50.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read())))) {
        str_86_ce0 = ap_const_logic_1;
    } else {
        str_86_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_86_ce1 = ap_const_logic_1;
    } else {
        str_86_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_87_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read()))) {
        str_87_address0 =  (sc_lv<5>) (newIndex7690976910_fu_41859_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_87_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_87_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_87_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_87_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_87_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_87_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read()))) {
        str_87_address1 =  (sc_lv<5>) (newIndex296_fu_41839_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_87_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_87_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_87_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_87_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_87_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read())))) {
        str_87_ce0 = ap_const_logic_1;
    } else {
        str_87_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read())))) {
        str_87_ce1 = ap_const_logic_1;
    } else {
        str_87_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_88_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read()))) {
        str_88_address0 =  (sc_lv<5>) (newIndex299_fu_41939_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read()))) {
        str_88_address0 =  (sc_lv<5>) (newIndex7664776648_fu_41879_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_88_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_88_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_88_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_88_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_88_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_88_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_88_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_88_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_88_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_88_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_88_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_51.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read())))) {
        str_88_ce0 = ap_const_logic_1;
    } else {
        str_88_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_88_ce1 = ap_const_logic_1;
    } else {
        str_88_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_89_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read()))) {
        str_89_address0 =  (sc_lv<5>) (newIndex7638576386_fu_41980_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_89_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_89_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_89_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_89_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_89_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_89_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read()))) {
        str_89_address1 =  (sc_lv<5>) (newIndex302_fu_41960_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_89_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_89_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_89_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_89_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_89_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read())))) {
        str_89_ce0 = ap_const_logic_1;
    } else {
        str_89_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read())))) {
        str_89_ce1 = ap_const_logic_1;
    } else {
        str_89_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read()))) {
        str_8_address0 =  (sc_lv<5>) (newIndex6620366204_fu_37099_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read()))) {
        str_8_address0 =  (sc_lv<5>) (newIndex28_fu_37039_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_8_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_8_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_8_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_8_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_8_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_8_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_8_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_8_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_8_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_8_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read())))) {
        str_8_ce0 = ap_const_logic_1;
    } else {
        str_8_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_8_ce1 = ap_const_logic_1;
    } else {
        str_8_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_90_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read()))) {
        str_90_address0 =  (sc_lv<5>) (newIndex305_fu_42060_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read()))) {
        str_90_address0 =  (sc_lv<5>) (newIndex7612376124_fu_42000_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_90_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_90_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_90_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_90_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_90_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_90_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_90_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_90_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_90_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_90_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_90_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read())))) {
        str_90_ce0 = ap_const_logic_1;
    } else {
        str_90_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_90_ce1 = ap_const_logic_1;
    } else {
        str_90_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_91_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read()))) {
        str_91_address0 =  (sc_lv<5>) (newIndex7586175862_fu_42101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_91_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_91_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_91_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_91_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_91_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_91_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read()))) {
        str_91_address1 =  (sc_lv<5>) (newIndex308_fu_42081_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_91_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_91_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_91_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_91_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_91_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read())))) {
        str_91_ce0 = ap_const_logic_1;
    } else {
        str_91_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read())))) {
        str_91_ce1 = ap_const_logic_1;
    } else {
        str_91_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_92_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read()))) {
        str_92_address0 =  (sc_lv<5>) (newIndex312_fu_42181_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read()))) {
        str_92_address0 =  (sc_lv<5>) (newIndex7559975600_fu_42121_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_92_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_92_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_92_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_92_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_92_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_92_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_92_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_92_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_92_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_92_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_92_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_53.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read())))) {
        str_92_ce0 = ap_const_logic_1;
    } else {
        str_92_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_92_ce1 = ap_const_logic_1;
    } else {
        str_92_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_93_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read()))) {
        str_93_address0 =  (sc_lv<5>) (newIndex7533775338_fu_42222_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_93_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_93_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_93_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_93_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_93_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_93_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read()))) {
        str_93_address1 =  (sc_lv<5>) (newIndex315_fu_42202_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_93_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_93_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_93_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_93_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_93_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read())))) {
        str_93_ce0 = ap_const_logic_1;
    } else {
        str_93_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read())))) {
        str_93_ce1 = ap_const_logic_1;
    } else {
        str_93_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_94_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read()))) {
        str_94_address0 =  (sc_lv<5>) (newIndex318_fu_42302_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read()))) {
        str_94_address0 =  (sc_lv<5>) (newIndex7507575076_fu_42242_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_94_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_94_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_94_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_94_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_94_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_94_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_94_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_94_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_94_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_94_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_94_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_54.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read())))) {
        str_94_ce0 = ap_const_logic_1;
    } else {
        str_94_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_94_ce1 = ap_const_logic_1;
    } else {
        str_94_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_95_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read()))) {
        str_95_address0 =  (sc_lv<5>) (newIndex7481374814_fu_42343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_95_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_95_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_95_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_95_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_95_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_95_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read()))) {
        str_95_address1 =  (sc_lv<5>) (newIndex321_fu_42323_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_95_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_95_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_95_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_95_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_95_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read())))) {
        str_95_ce0 = ap_const_logic_1;
    } else {
        str_95_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read())))) {
        str_95_ce1 = ap_const_logic_1;
    } else {
        str_95_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_96_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read()))) {
        str_96_address0 =  (sc_lv<5>) (newIndex324_fu_42423_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read()))) {
        str_96_address0 =  (sc_lv<5>) (newIndex7455174552_fu_42363_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_96_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_96_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_96_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_96_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_96_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_96_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_96_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_96_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_96_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_96_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_96_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_55.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read())))) {
        str_96_ce0 = ap_const_logic_1;
    } else {
        str_96_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_96_ce1 = ap_const_logic_1;
    } else {
        str_96_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_97_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read()))) {
        str_97_address0 =  (sc_lv<5>) (newIndex7428974290_fu_42464_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_97_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_97_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_97_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_97_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_97_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_97_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read()))) {
        str_97_address1 =  (sc_lv<5>) (newIndex327_fu_42444_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_97_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_97_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_97_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_97_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_97_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read())))) {
        str_97_ce0 = ap_const_logic_1;
    } else {
        str_97_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read())))) {
        str_97_ce1 = ap_const_logic_1;
    } else {
        str_97_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_98_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read()))) {
        str_98_address0 =  (sc_lv<5>) (newIndex330_fu_42544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read()))) {
        str_98_address0 =  (sc_lv<5>) (newIndex7402774028_fu_42484_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_98_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_98_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_98_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_98_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_98_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_98_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_98_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_98_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_98_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_98_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_98_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_56.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read())))) {
        str_98_ce0 = ap_const_logic_1;
    } else {
        str_98_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        str_98_ce1 = ap_const_logic_1;
    } else {
        str_98_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_99_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read()))) {
        str_99_address0 =  (sc_lv<5>) (newIndex7376573766_fu_42585_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_99_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_99_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_99_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_99_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_99_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_99_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read()))) {
        str_99_address1 =  (sc_lv<5>) (newIndex333_fu_42565_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_99_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_99_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_99_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_99_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_99_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read())))) {
        str_99_ce0 = ap_const_logic_1;
    } else {
        str_99_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_57.read())))) {
        str_99_ce1 = ap_const_logic_1;
    } else {
        str_99_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read()))) {
        str_9_address0 =  (sc_lv<5>) (newIndex31_fu_37140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_9_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_9_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_9_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_9_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else {
        str_9_address0 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read()))) {
        str_9_address1 =  (sc_lv<5>) (newIndex6607266073_fu_37120_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        str_9_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        str_9_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        str_9_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) {
        str_9_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        str_9_address1 = "XXXXX";
    }
}

void calcHash_rollingHash::thread_str_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read())))) {
        str_9_ce0 = ap_const_logic_1;
    } else {
        str_9_ce0 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_str_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_12.read())))) {
        str_9_ce1 = ap_const_logic_1;
    } else {
        str_9_ce1 = ap_const_logic_0;
    }
}

void calcHash_rollingHash::thread_sum_1_phi_fu_18721_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_9.read()) && 
         esl_seteq<1,1,1>(ap_reg_ppstg_exitcond2_reg_73628_pp0_iter1.read(), ap_const_lv1_0))) {
        sum_1_phi_fu_18721_p4 = sum_3_126_reg_76399.read();
    } else {
        sum_1_phi_fu_18721_p4 = sum_1_reg_18718.read();
    }
}

void calcHash_rollingHash::thread_sum_2_1022_cast_fu_36566_p1() {
    sum_2_1022_cast_fu_36566_p1 = esl_sext<32,18>(sum_2_s_fu_36560_p2.read());
}

void calcHash_rollingHash::thread_sum_2_s_fu_36560_p2() {
    sum_2_s_fu_36560_p2 = (!tmp1532_cast_fu_36556_p1.read().is_01() || !tmp1021_cast_fu_36527_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp1532_cast_fu_36556_p1.read()) + sc_bigint<18>(tmp1021_cast_fu_36527_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_100_fu_42770_p2() {
    sum_3_100_fu_42770_p2 = (!tmp_100_fu_42764_p2.read().is_01() || !tmp_9_100_fu_42760_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_100_fu_42764_p2.read()) - sc_bigint<32>(tmp_9_100_fu_42760_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_101_fu_42864_p2() {
    sum_3_101_fu_42864_p2 = (!tmp_101_fu_42859_p2.read().is_01() || !tmp_9_101_fu_42855_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_101_fu_42859_p2.read()) - sc_bigint<32>(tmp_9_101_fu_42855_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_102_fu_42891_p2() {
    sum_3_102_fu_42891_p2 = (!tmp_102_fu_42885_p2.read().is_01() || !tmp_9_102_fu_42881_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_102_fu_42885_p2.read()) - sc_bigint<32>(tmp_9_102_fu_42881_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_103_fu_42985_p2() {
    sum_3_103_fu_42985_p2 = (!tmp_103_fu_42980_p2.read().is_01() || !tmp_9_103_fu_42976_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_103_fu_42980_p2.read()) - sc_bigint<32>(tmp_9_103_fu_42976_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_104_fu_43012_p2() {
    sum_3_104_fu_43012_p2 = (!tmp_104_fu_43006_p2.read().is_01() || !tmp_9_104_fu_43002_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_104_fu_43006_p2.read()) - sc_bigint<32>(tmp_9_104_fu_43002_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_105_fu_43106_p2() {
    sum_3_105_fu_43106_p2 = (!tmp_105_fu_43101_p2.read().is_01() || !tmp_9_105_fu_43097_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_105_fu_43101_p2.read()) - sc_bigint<32>(tmp_9_105_fu_43097_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_106_fu_43133_p2() {
    sum_3_106_fu_43133_p2 = (!tmp_106_fu_43127_p2.read().is_01() || !tmp_9_106_fu_43123_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_106_fu_43127_p2.read()) - sc_bigint<32>(tmp_9_106_fu_43123_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_107_fu_43227_p2() {
    sum_3_107_fu_43227_p2 = (!tmp_107_fu_43222_p2.read().is_01() || !tmp_9_107_fu_43218_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_107_fu_43222_p2.read()) - sc_bigint<32>(tmp_9_107_fu_43218_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_108_fu_43254_p2() {
    sum_3_108_fu_43254_p2 = (!tmp_108_fu_43248_p2.read().is_01() || !tmp_9_108_fu_43244_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_108_fu_43248_p2.read()) - sc_bigint<32>(tmp_9_108_fu_43244_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_109_fu_43348_p2() {
    sum_3_109_fu_43348_p2 = (!tmp_109_fu_43343_p2.read().is_01() || !tmp_9_109_fu_43339_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_109_fu_43343_p2.read()) - sc_bigint<32>(tmp_9_109_fu_43339_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_10_fu_37325_p2() {
    sum_3_10_fu_37325_p2 = (!tmp_10_fu_37319_p2.read().is_01() || !tmp_9_10_fu_37315_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_10_fu_37319_p2.read()) - sc_bigint<32>(tmp_9_10_fu_37315_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_110_fu_43375_p2() {
    sum_3_110_fu_43375_p2 = (!tmp_110_fu_43369_p2.read().is_01() || !tmp_9_110_fu_43365_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_110_fu_43369_p2.read()) - sc_bigint<32>(tmp_9_110_fu_43365_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_111_fu_43469_p2() {
    sum_3_111_fu_43469_p2 = (!tmp_111_fu_43464_p2.read().is_01() || !tmp_9_111_fu_43460_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_111_fu_43464_p2.read()) - sc_bigint<32>(tmp_9_111_fu_43460_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_112_fu_43496_p2() {
    sum_3_112_fu_43496_p2 = (!tmp_112_fu_43490_p2.read().is_01() || !tmp_9_112_fu_43486_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_112_fu_43490_p2.read()) - sc_bigint<32>(tmp_9_112_fu_43486_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_113_fu_43590_p2() {
    sum_3_113_fu_43590_p2 = (!tmp_113_fu_43585_p2.read().is_01() || !tmp_9_113_fu_43581_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_113_fu_43585_p2.read()) - sc_bigint<32>(tmp_9_113_fu_43581_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_114_fu_43617_p2() {
    sum_3_114_fu_43617_p2 = (!tmp_114_fu_43611_p2.read().is_01() || !tmp_9_114_fu_43607_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_114_fu_43611_p2.read()) - sc_bigint<32>(tmp_9_114_fu_43607_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_115_fu_43711_p2() {
    sum_3_115_fu_43711_p2 = (!tmp_115_fu_43706_p2.read().is_01() || !tmp_9_115_fu_43702_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_115_fu_43706_p2.read()) - sc_bigint<32>(tmp_9_115_fu_43702_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_116_fu_43738_p2() {
    sum_3_116_fu_43738_p2 = (!tmp_116_fu_43732_p2.read().is_01() || !tmp_9_116_fu_43728_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_116_fu_43732_p2.read()) - sc_bigint<32>(tmp_9_116_fu_43728_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_117_fu_43832_p2() {
    sum_3_117_fu_43832_p2 = (!tmp_117_fu_43827_p2.read().is_01() || !tmp_9_117_fu_43823_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_117_fu_43827_p2.read()) - sc_bigint<32>(tmp_9_117_fu_43823_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_118_fu_43859_p2() {
    sum_3_118_fu_43859_p2 = (!tmp_118_fu_43853_p2.read().is_01() || !tmp_9_118_fu_43849_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_118_fu_43853_p2.read()) - sc_bigint<32>(tmp_9_118_fu_43849_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_119_fu_43953_p2() {
    sum_3_119_fu_43953_p2 = (!tmp_119_fu_43948_p2.read().is_01() || !tmp_9_119_fu_43944_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_119_fu_43948_p2.read()) - sc_bigint<32>(tmp_9_119_fu_43944_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_11_fu_37419_p2() {
    sum_3_11_fu_37419_p2 = (!tmp_11_fu_37414_p2.read().is_01() || !tmp_9_11_fu_37410_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_11_fu_37414_p2.read()) - sc_bigint<32>(tmp_9_11_fu_37410_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_120_fu_43980_p2() {
    sum_3_120_fu_43980_p2 = (!tmp_120_fu_43974_p2.read().is_01() || !tmp_9_120_fu_43970_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_120_fu_43974_p2.read()) - sc_bigint<32>(tmp_9_120_fu_43970_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_121_fu_44074_p2() {
    sum_3_121_fu_44074_p2 = (!tmp_121_fu_44069_p2.read().is_01() || !tmp_9_121_fu_44065_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_121_fu_44069_p2.read()) - sc_bigint<32>(tmp_9_121_fu_44065_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_122_fu_44101_p2() {
    sum_3_122_fu_44101_p2 = (!tmp_122_fu_44095_p2.read().is_01() || !tmp_9_122_fu_44091_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_122_fu_44095_p2.read()) - sc_bigint<32>(tmp_9_122_fu_44091_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_123_fu_44264_p2() {
    sum_3_123_fu_44264_p2 = (!tmp_123_fu_44259_p2.read().is_01() || !tmp_9_123_fu_44255_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_123_fu_44259_p2.read()) - sc_bigint<32>(tmp_9_123_fu_44255_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_124_fu_44285_p2() {
    sum_3_124_fu_44285_p2 = (!tmp_124_fu_44279_p2.read().is_01() || !tmp_9_124_fu_44275_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_124_fu_44279_p2.read()) - sc_bigint<32>(tmp_9_124_fu_44275_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_125_fu_44315_p2() {
    sum_3_125_fu_44315_p2 = (!tmp_125_fu_44310_p2.read().is_01() || !tmp_9_125_fu_44306_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_125_fu_44310_p2.read()) - sc_bigint<32>(tmp_9_125_fu_44306_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_126_fu_44336_p2() {
    sum_3_126_fu_44336_p2 = (!tmp_126_fu_44330_p2.read().is_01() || !tmp_9_126_fu_44326_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_126_fu_44330_p2.read()) - sc_bigint<32>(tmp_9_126_fu_44326_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_12_fu_37446_p2() {
    sum_3_12_fu_37446_p2 = (!tmp_12_fu_37440_p2.read().is_01() || !tmp_9_12_fu_37436_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_12_fu_37440_p2.read()) - sc_bigint<32>(tmp_9_12_fu_37436_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_13_fu_37540_p2() {
    sum_3_13_fu_37540_p2 = (!tmp_13_fu_37535_p2.read().is_01() || !tmp_9_13_fu_37531_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_fu_37535_p2.read()) - sc_bigint<32>(tmp_9_13_fu_37531_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_14_fu_37567_p2() {
    sum_3_14_fu_37567_p2 = (!tmp_14_fu_37561_p2.read().is_01() || !tmp_9_14_fu_37557_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_14_fu_37561_p2.read()) - sc_bigint<32>(tmp_9_14_fu_37557_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_15_fu_37661_p2() {
    sum_3_15_fu_37661_p2 = (!tmp_15_fu_37656_p2.read().is_01() || !tmp_9_15_fu_37652_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_15_fu_37656_p2.read()) - sc_bigint<32>(tmp_9_15_fu_37652_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_16_fu_37688_p2() {
    sum_3_16_fu_37688_p2 = (!tmp_16_fu_37682_p2.read().is_01() || !tmp_9_16_fu_37678_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_16_fu_37682_p2.read()) - sc_bigint<32>(tmp_9_16_fu_37678_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_17_fu_37782_p2() {
    sum_3_17_fu_37782_p2 = (!tmp_17_fu_37777_p2.read().is_01() || !tmp_9_17_fu_37773_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_17_fu_37777_p2.read()) - sc_bigint<32>(tmp_9_17_fu_37773_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_18_fu_37809_p2() {
    sum_3_18_fu_37809_p2 = (!tmp_18_fu_37803_p2.read().is_01() || !tmp_9_18_fu_37799_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_18_fu_37803_p2.read()) - sc_bigint<32>(tmp_9_18_fu_37799_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_19_fu_37903_p2() {
    sum_3_19_fu_37903_p2 = (!tmp_19_fu_37898_p2.read().is_01() || !tmp_9_19_fu_37894_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_19_fu_37898_p2.read()) - sc_bigint<32>(tmp_9_19_fu_37894_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_1_fu_36720_p2() {
    sum_3_1_fu_36720_p2 = (!tmp_1_fu_36714_p2.read().is_01() || !tmp_9_1_fu_36710_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_fu_36714_p2.read()) - sc_bigint<32>(tmp_9_1_fu_36710_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_20_fu_37930_p2() {
    sum_3_20_fu_37930_p2 = (!tmp_20_fu_37924_p2.read().is_01() || !tmp_9_20_fu_37920_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_20_fu_37924_p2.read()) - sc_bigint<32>(tmp_9_20_fu_37920_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_21_fu_38024_p2() {
    sum_3_21_fu_38024_p2 = (!tmp_21_fu_38019_p2.read().is_01() || !tmp_9_21_fu_38015_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_21_fu_38019_p2.read()) - sc_bigint<32>(tmp_9_21_fu_38015_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_22_fu_38051_p2() {
    sum_3_22_fu_38051_p2 = (!tmp_22_fu_38045_p2.read().is_01() || !tmp_9_22_fu_38041_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_22_fu_38045_p2.read()) - sc_bigint<32>(tmp_9_22_fu_38041_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_23_fu_38145_p2() {
    sum_3_23_fu_38145_p2 = (!tmp_23_fu_38140_p2.read().is_01() || !tmp_9_23_fu_38136_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_23_fu_38140_p2.read()) - sc_bigint<32>(tmp_9_23_fu_38136_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_24_fu_38172_p2() {
    sum_3_24_fu_38172_p2 = (!tmp_24_fu_38166_p2.read().is_01() || !tmp_9_24_fu_38162_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_fu_38166_p2.read()) - sc_bigint<32>(tmp_9_24_fu_38162_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_25_fu_38266_p2() {
    sum_3_25_fu_38266_p2 = (!tmp_25_fu_38261_p2.read().is_01() || !tmp_9_25_fu_38257_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_25_fu_38261_p2.read()) - sc_bigint<32>(tmp_9_25_fu_38257_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_26_fu_38293_p2() {
    sum_3_26_fu_38293_p2 = (!tmp_26_fu_38287_p2.read().is_01() || !tmp_9_26_fu_38283_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_fu_38287_p2.read()) - sc_bigint<32>(tmp_9_26_fu_38283_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_27_fu_38387_p2() {
    sum_3_27_fu_38387_p2 = (!tmp_27_fu_38382_p2.read().is_01() || !tmp_9_27_fu_38378_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_27_fu_38382_p2.read()) - sc_bigint<32>(tmp_9_27_fu_38378_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_28_fu_38414_p2() {
    sum_3_28_fu_38414_p2 = (!tmp_28_fu_38408_p2.read().is_01() || !tmp_9_28_fu_38404_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_fu_38408_p2.read()) - sc_bigint<32>(tmp_9_28_fu_38404_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_29_fu_38508_p2() {
    sum_3_29_fu_38508_p2 = (!tmp_29_fu_38503_p2.read().is_01() || !tmp_9_29_fu_38499_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_fu_38503_p2.read()) - sc_bigint<32>(tmp_9_29_fu_38499_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_2_fu_36814_p2() {
    sum_3_2_fu_36814_p2 = (!tmp_2_fu_36809_p2.read().is_01() || !tmp_9_2_fu_36805_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2_fu_36809_p2.read()) - sc_bigint<32>(tmp_9_2_fu_36805_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_30_fu_38535_p2() {
    sum_3_30_fu_38535_p2 = (!tmp_30_fu_38529_p2.read().is_01() || !tmp_9_30_fu_38525_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_30_fu_38529_p2.read()) - sc_bigint<32>(tmp_9_30_fu_38525_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_31_fu_38629_p2() {
    sum_3_31_fu_38629_p2 = (!tmp_31_fu_38624_p2.read().is_01() || !tmp_9_31_fu_38620_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_31_fu_38624_p2.read()) - sc_bigint<32>(tmp_9_31_fu_38620_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_32_fu_38656_p2() {
    sum_3_32_fu_38656_p2 = (!tmp_32_fu_38650_p2.read().is_01() || !tmp_9_32_fu_38646_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_32_fu_38650_p2.read()) - sc_bigint<32>(tmp_9_32_fu_38646_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_33_fu_38750_p2() {
    sum_3_33_fu_38750_p2 = (!tmp_33_fu_38745_p2.read().is_01() || !tmp_9_33_fu_38741_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_33_fu_38745_p2.read()) - sc_bigint<32>(tmp_9_33_fu_38741_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_34_fu_38777_p2() {
    sum_3_34_fu_38777_p2 = (!tmp_34_fu_38771_p2.read().is_01() || !tmp_9_34_fu_38767_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_34_fu_38771_p2.read()) - sc_bigint<32>(tmp_9_34_fu_38767_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_35_fu_38871_p2() {
    sum_3_35_fu_38871_p2 = (!tmp_35_fu_38866_p2.read().is_01() || !tmp_9_35_fu_38862_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_35_fu_38866_p2.read()) - sc_bigint<32>(tmp_9_35_fu_38862_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_36_fu_38898_p2() {
    sum_3_36_fu_38898_p2 = (!tmp_36_fu_38892_p2.read().is_01() || !tmp_9_36_fu_38888_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_36_fu_38892_p2.read()) - sc_bigint<32>(tmp_9_36_fu_38888_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_37_fu_38992_p2() {
    sum_3_37_fu_38992_p2 = (!tmp_37_fu_38987_p2.read().is_01() || !tmp_9_37_fu_38983_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_37_fu_38987_p2.read()) - sc_bigint<32>(tmp_9_37_fu_38983_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_38_fu_39019_p2() {
    sum_3_38_fu_39019_p2 = (!tmp_38_fu_39013_p2.read().is_01() || !tmp_9_38_fu_39009_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_38_fu_39013_p2.read()) - sc_bigint<32>(tmp_9_38_fu_39009_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_39_fu_39113_p2() {
    sum_3_39_fu_39113_p2 = (!tmp_39_fu_39108_p2.read().is_01() || !tmp_9_39_fu_39104_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_39_fu_39108_p2.read()) - sc_bigint<32>(tmp_9_39_fu_39104_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_3_fu_36841_p2() {
    sum_3_3_fu_36841_p2 = (!tmp_3_13_fu_36835_p2.read().is_01() || !tmp_9_3_fu_36831_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_13_fu_36835_p2.read()) - sc_bigint<32>(tmp_9_3_fu_36831_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_40_fu_39140_p2() {
    sum_3_40_fu_39140_p2 = (!tmp_40_fu_39134_p2.read().is_01() || !tmp_9_40_fu_39130_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_40_fu_39134_p2.read()) - sc_bigint<32>(tmp_9_40_fu_39130_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_41_fu_39234_p2() {
    sum_3_41_fu_39234_p2 = (!tmp_41_fu_39229_p2.read().is_01() || !tmp_9_41_fu_39225_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_41_fu_39229_p2.read()) - sc_bigint<32>(tmp_9_41_fu_39225_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_42_fu_39261_p2() {
    sum_3_42_fu_39261_p2 = (!tmp_42_fu_39255_p2.read().is_01() || !tmp_9_42_fu_39251_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_42_fu_39255_p2.read()) - sc_bigint<32>(tmp_9_42_fu_39251_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_43_fu_39355_p2() {
    sum_3_43_fu_39355_p2 = (!tmp_43_fu_39350_p2.read().is_01() || !tmp_9_43_fu_39346_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_43_fu_39350_p2.read()) - sc_bigint<32>(tmp_9_43_fu_39346_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_44_fu_39382_p2() {
    sum_3_44_fu_39382_p2 = (!tmp_44_fu_39376_p2.read().is_01() || !tmp_9_44_fu_39372_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_44_fu_39376_p2.read()) - sc_bigint<32>(tmp_9_44_fu_39372_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_45_fu_39476_p2() {
    sum_3_45_fu_39476_p2 = (!tmp_45_fu_39471_p2.read().is_01() || !tmp_9_45_fu_39467_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_45_fu_39471_p2.read()) - sc_bigint<32>(tmp_9_45_fu_39467_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_46_fu_39503_p2() {
    sum_3_46_fu_39503_p2 = (!tmp_46_fu_39497_p2.read().is_01() || !tmp_9_46_fu_39493_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_46_fu_39497_p2.read()) - sc_bigint<32>(tmp_9_46_fu_39493_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_47_fu_39597_p2() {
    sum_3_47_fu_39597_p2 = (!tmp_47_fu_39592_p2.read().is_01() || !tmp_9_47_fu_39588_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_47_fu_39592_p2.read()) - sc_bigint<32>(tmp_9_47_fu_39588_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_48_fu_39624_p2() {
    sum_3_48_fu_39624_p2 = (!tmp_48_fu_39618_p2.read().is_01() || !tmp_9_48_fu_39614_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_48_fu_39618_p2.read()) - sc_bigint<32>(tmp_9_48_fu_39614_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_49_fu_39718_p2() {
    sum_3_49_fu_39718_p2 = (!tmp_49_fu_39713_p2.read().is_01() || !tmp_9_49_fu_39709_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_49_fu_39713_p2.read()) - sc_bigint<32>(tmp_9_49_fu_39709_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_4_fu_36935_p2() {
    sum_3_4_fu_36935_p2 = (!tmp_4_14_fu_36930_p2.read().is_01() || !tmp_9_4_fu_36926_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_4_14_fu_36930_p2.read()) - sc_bigint<32>(tmp_9_4_fu_36926_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_50_fu_39745_p2() {
    sum_3_50_fu_39745_p2 = (!tmp_50_fu_39739_p2.read().is_01() || !tmp_9_50_fu_39735_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_50_fu_39739_p2.read()) - sc_bigint<32>(tmp_9_50_fu_39735_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_51_fu_39839_p2() {
    sum_3_51_fu_39839_p2 = (!tmp_51_fu_39834_p2.read().is_01() || !tmp_9_51_fu_39830_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_51_fu_39834_p2.read()) - sc_bigint<32>(tmp_9_51_fu_39830_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_52_fu_39866_p2() {
    sum_3_52_fu_39866_p2 = (!tmp_52_fu_39860_p2.read().is_01() || !tmp_9_52_fu_39856_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_52_fu_39860_p2.read()) - sc_bigint<32>(tmp_9_52_fu_39856_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_53_fu_39960_p2() {
    sum_3_53_fu_39960_p2 = (!tmp_53_fu_39955_p2.read().is_01() || !tmp_9_53_fu_39951_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_53_fu_39955_p2.read()) - sc_bigint<32>(tmp_9_53_fu_39951_p1.read()));
}

void calcHash_rollingHash::thread_sum_3_54_fu_39987_p2() {
    sum_3_54_fu_39987_p2 = (!tmp_54_fu_39981_p2.read().is_01() || !tmp_9_54_fu_39977_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_54_fu_39981_p2.read()) - sc_bigint<32>(tmp_9_54_fu_39977_p1.read()));
}

}

