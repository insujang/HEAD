#include "calcHash_rollingHash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void calcHash_rollingHash::thread_newIndex376_fu_43422_p4() {
    newIndex376_fu_43422_p4 = tmp_4_112_fu_43417_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex377_fu_43502_p4() {
    newIndex377_fu_43502_p4 = i_4_111_fu_43476_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex378_fu_43512_p1() {
    newIndex378_fu_43512_p1 = esl_zext<64,5>(newIndex377_fu_43502_p4.read());
}

void calcHash_rollingHash::thread_newIndex379_fu_43442_p4() {
    newIndex379_fu_43442_p4 = tmp_4_113_fu_43437_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex37_fu_37261_p1() {
    newIndex37_fu_37261_p1 = esl_zext<64,6>(newIndex36_fu_37251_p4.read());
}

void calcHash_rollingHash::thread_newIndex380_fu_43523_p4() {
    newIndex380_fu_43523_p4 = i_4_112_fu_43517_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex381_fu_43533_p1() {
    newIndex381_fu_43533_p1 = esl_zext<64,5>(newIndex380_fu_43523_p4.read());
}

void calcHash_rollingHash::thread_newIndex382_fu_43543_p4() {
    newIndex382_fu_43543_p4 = tmp_4_114_fu_43538_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex383_fu_43623_p4() {
    newIndex383_fu_43623_p4 = i_4_113_fu_43597_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex384_fu_43633_p1() {
    newIndex384_fu_43633_p1 = esl_zext<64,5>(newIndex383_fu_43623_p4.read());
}

void calcHash_rollingHash::thread_newIndex385_fu_43563_p4() {
    newIndex385_fu_43563_p4 = tmp_4_115_fu_43558_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex386_fu_43644_p4() {
    newIndex386_fu_43644_p4 = i_4_114_fu_43638_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex387_fu_43654_p1() {
    newIndex387_fu_43654_p1 = esl_zext<64,5>(newIndex386_fu_43644_p4.read());
}

void calcHash_rollingHash::thread_newIndex388_fu_43664_p4() {
    newIndex388_fu_43664_p4 = tmp_4_116_fu_43659_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex389_fu_43744_p4() {
    newIndex389_fu_43744_p4 = i_4_115_fu_43718_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex38_fu_37331_p4() {
    newIndex38_fu_37331_p4 = i_4_s_fu_37305_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex390_fu_43754_p1() {
    newIndex390_fu_43754_p1 = esl_zext<64,5>(newIndex389_fu_43744_p4.read());
}

void calcHash_rollingHash::thread_newIndex391_fu_43684_p4() {
    newIndex391_fu_43684_p4 = tmp_4_117_fu_43679_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex392_fu_43765_p4() {
    newIndex392_fu_43765_p4 = i_4_116_fu_43759_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex393_fu_43775_p1() {
    newIndex393_fu_43775_p1 = esl_zext<64,5>(newIndex392_fu_43765_p4.read());
}

void calcHash_rollingHash::thread_newIndex3948039481_fu_44164_p1() {
    newIndex3948039481_fu_44164_p1 = esl_zext<64,6>(newIndex413_fu_44154_p4.read());
}

void calcHash_rollingHash::thread_newIndex394_fu_43785_p4() {
    newIndex394_fu_43785_p4 = tmp_4_118_fu_43780_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex395_fu_43865_p4() {
    newIndex395_fu_43865_p4 = i_4_117_fu_43839_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex396_fu_43875_p1() {
    newIndex396_fu_43875_p1 = esl_zext<64,5>(newIndex395_fu_43865_p4.read());
}

void calcHash_rollingHash::thread_newIndex397_fu_43805_p4() {
    newIndex397_fu_43805_p4 = tmp_4_119_fu_43800_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex398_fu_43886_p4() {
    newIndex398_fu_43886_p4 = i_4_118_fu_43880_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex399_fu_43896_p1() {
    newIndex399_fu_43896_p1 = esl_zext<64,5>(newIndex398_fu_43886_p4.read());
}

void calcHash_rollingHash::thread_newIndex39_fu_37271_p4() {
    newIndex39_fu_37271_p4 = tmp_4_11_fu_37266_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex3_fu_36608_p4() {
    newIndex3_fu_36608_p4 = tmp_6_fu_36602_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex400_fu_43906_p4() {
    newIndex400_fu_43906_p4 = tmp_4_120_fu_43901_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex401_fu_43986_p4() {
    newIndex401_fu_43986_p4 = i_4_119_fu_43960_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex402_fu_43996_p1() {
    newIndex402_fu_43996_p1 = esl_zext<64,5>(newIndex401_fu_43986_p4.read());
}

void calcHash_rollingHash::thread_newIndex403_fu_43926_p4() {
    newIndex403_fu_43926_p4 = tmp_4_121_fu_43921_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex404_fu_44007_p4() {
    newIndex404_fu_44007_p4 = i_4_120_fu_44001_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex405_fu_44017_p1() {
    newIndex405_fu_44017_p1 = esl_zext<64,5>(newIndex404_fu_44007_p4.read());
}

void calcHash_rollingHash::thread_newIndex406_fu_44027_p4() {
    newIndex406_fu_44027_p4 = tmp_4_122_fu_44022_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex407_fu_44107_p4() {
    newIndex407_fu_44107_p4 = i_4_121_fu_44081_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex408_fu_44117_p1() {
    newIndex408_fu_44117_p1 = esl_zext<64,5>(newIndex407_fu_44107_p4.read());
}

void calcHash_rollingHash::thread_newIndex409_fu_44047_p4() {
    newIndex409_fu_44047_p4 = tmp_4_123_fu_44042_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex40_fu_37281_p1() {
    newIndex40_fu_37281_p1 = esl_zext<64,6>(newIndex39_fu_37271_p4.read());
}

void calcHash_rollingHash::thread_newIndex410_fu_44057_p1() {
    newIndex410_fu_44057_p1 = esl_zext<64,6>(newIndex409_fu_44047_p4.read());
}

void calcHash_rollingHash::thread_newIndex411_fu_44128_p4() {
    newIndex411_fu_44128_p4 = i_4_122_fu_44122_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex412_fu_44138_p1() {
    newIndex412_fu_44138_p1 = esl_zext<64,5>(newIndex411_fu_44128_p4.read());
}

void calcHash_rollingHash::thread_newIndex413_fu_44154_p4() {
    newIndex413_fu_44154_p4 = tmp_4_124_fu_44149_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex415_fu_44291_p1() {
    newIndex415_fu_44291_p1 = esl_zext<64,5>(newIndex414_reg_76333.read());
}

void calcHash_rollingHash::thread_newIndex416_fu_44190_p4() {
    newIndex416_fu_44190_p4 = tmp_4_125_fu_44185_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex418_fu_44295_p1() {
    newIndex418_fu_44295_p1 = esl_zext<64,5>(newIndex417_reg_76343.read());
}

void calcHash_rollingHash::thread_newIndex41_fu_37352_p4() {
    newIndex41_fu_37352_p4 = i_4_10_fu_37346_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex420_fu_44299_p1() {
    newIndex420_fu_44299_p1 = esl_zext<64,6>(newIndex419_reg_76348.read());
}

void calcHash_rollingHash::thread_newIndex422_fu_44342_p1() {
    newIndex422_fu_44342_p1 = esl_zext<64,5>(newIndex421_reg_76353.read());
}

void calcHash_rollingHash::thread_newIndex423_fu_44352_p4() {
    newIndex423_fu_44352_p4 = j_reg_18740.read().range(10, 7);
}

void calcHash_rollingHash::thread_newIndex424_fu_44362_p1() {
    newIndex424_fu_44362_p1 = esl_zext<64,4>(newIndex423_fu_44352_p4.read());
}

void calcHash_rollingHash::thread_newIndex425_fu_52600_p4() {
    newIndex425_fu_52600_p4 = index_1_fu_52590_p2.read().range(10, 7);
}

void calcHash_rollingHash::thread_newIndex426_fu_49929_p4() {
    newIndex426_fu_49929_p4 = index_1_1_fu_49923_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex427_fu_49950_p4() {
    newIndex427_fu_49950_p4 = index_1_2_fu_49944_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex428_fu_49971_p4() {
    newIndex428_fu_49971_p4 = index_1_3_fu_49965_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex429_fu_49992_p4() {
    newIndex429_fu_49992_p4 = index_1_4_fu_49986_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex42_fu_37372_p4() {
    newIndex42_fu_37372_p4 = tmp_4_12_fu_37367_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex430_fu_50013_p4() {
    newIndex430_fu_50013_p4 = index_1_5_fu_50007_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex431_fu_50034_p4() {
    newIndex431_fu_50034_p4 = index_1_6_fu_50028_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex432_fu_50055_p4() {
    newIndex432_fu_50055_p4 = index_1_7_fu_50049_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex433_fu_50076_p4() {
    newIndex433_fu_50076_p4 = index_1_8_fu_50070_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex434_fu_50097_p4() {
    newIndex434_fu_50097_p4 = index_1_9_fu_50091_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex435_fu_50118_p4() {
    newIndex435_fu_50118_p4 = index_1_s_fu_50112_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex436_fu_50139_p4() {
    newIndex436_fu_50139_p4 = index_1_10_fu_50133_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex437_fu_50160_p4() {
    newIndex437_fu_50160_p4 = index_1_11_fu_50154_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex438_fu_50181_p4() {
    newIndex438_fu_50181_p4 = index_1_12_fu_50175_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex439_fu_50202_p4() {
    newIndex439_fu_50202_p4 = index_1_13_fu_50196_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex43_fu_37382_p1() {
    newIndex43_fu_37382_p1 = esl_zext<64,6>(newIndex42_fu_37372_p4.read());
}

void calcHash_rollingHash::thread_newIndex440_fu_50223_p4() {
    newIndex440_fu_50223_p4 = index_1_14_fu_50217_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex441_fu_61431_p3() {
    newIndex441_fu_61431_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1801_fu_61421_p4.read());
}

void calcHash_rollingHash::thread_newIndex442_fu_50244_p4() {
    newIndex442_fu_50244_p4 = index_1_15_fu_50238_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex443_fu_50265_p4() {
    newIndex443_fu_50265_p4 = index_1_16_fu_50259_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex444_fu_50286_p4() {
    newIndex444_fu_50286_p4 = index_1_17_fu_50280_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex445_fu_50307_p4() {
    newIndex445_fu_50307_p4 = index_1_18_fu_50301_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex446_fu_50328_p4() {
    newIndex446_fu_50328_p4 = index_1_19_fu_50322_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex447_fu_50349_p4() {
    newIndex447_fu_50349_p4 = index_1_20_fu_50343_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex448_fu_50370_p4() {
    newIndex448_fu_50370_p4 = index_1_21_fu_50364_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex449_fu_50391_p4() {
    newIndex449_fu_50391_p4 = index_1_22_fu_50385_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex44_fu_37452_p4() {
    newIndex44_fu_37452_p4 = i_4_11_fu_37426_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex450_fu_50412_p4() {
    newIndex450_fu_50412_p4 = index_1_23_fu_50406_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex451_fu_50433_p4() {
    newIndex451_fu_50433_p4 = index_1_24_fu_50427_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex452_fu_50454_p4() {
    newIndex452_fu_50454_p4 = index_1_25_fu_50448_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex453_fu_50475_p4() {
    newIndex453_fu_50475_p4 = index_1_26_fu_50469_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex454_fu_50496_p4() {
    newIndex454_fu_50496_p4 = index_1_27_fu_50490_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex455_fu_50517_p4() {
    newIndex455_fu_50517_p4 = index_1_28_fu_50511_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex456_fu_50538_p4() {
    newIndex456_fu_50538_p4 = index_1_29_fu_50532_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex457_fu_50559_p4() {
    newIndex457_fu_50559_p4 = index_1_30_fu_50553_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex458_fu_50580_p4() {
    newIndex458_fu_50580_p4 = index_1_31_fu_50574_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex459_fu_50601_p4() {
    newIndex459_fu_50601_p4 = index_1_32_fu_50595_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex45_fu_37392_p4() {
    newIndex45_fu_37392_p4 = tmp_4_13_fu_37387_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex460_fu_50622_p4() {
    newIndex460_fu_50622_p4 = index_1_33_fu_50616_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex461_fu_50643_p4() {
    newIndex461_fu_50643_p4 = index_1_34_fu_50637_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex462_fu_50664_p4() {
    newIndex462_fu_50664_p4 = index_1_35_fu_50658_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex463_fu_50685_p4() {
    newIndex463_fu_50685_p4 = index_1_36_fu_50679_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex464_fu_50706_p4() {
    newIndex464_fu_50706_p4 = index_1_37_fu_50700_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex465_fu_50727_p4() {
    newIndex465_fu_50727_p4 = index_1_38_fu_50721_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex466_fu_50748_p4() {
    newIndex466_fu_50748_p4 = index_1_39_fu_50742_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex467_fu_50769_p4() {
    newIndex467_fu_50769_p4 = index_1_40_fu_50763_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex468_fu_50790_p4() {
    newIndex468_fu_50790_p4 = index_1_41_fu_50784_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex469_fu_50811_p4() {
    newIndex469_fu_50811_p4 = index_1_42_fu_50805_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex46_fu_37402_p1() {
    newIndex46_fu_37402_p1 = esl_zext<64,6>(newIndex45_fu_37392_p4.read());
}

void calcHash_rollingHash::thread_newIndex470_fu_50832_p4() {
    newIndex470_fu_50832_p4 = index_1_43_fu_50826_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex471_fu_50853_p4() {
    newIndex471_fu_50853_p4 = index_1_44_fu_50847_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex472_fu_50874_p4() {
    newIndex472_fu_50874_p4 = index_1_45_fu_50868_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex473_fu_50895_p4() {
    newIndex473_fu_50895_p4 = index_1_46_fu_50889_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex474_fu_50916_p4() {
    newIndex474_fu_50916_p4 = index_1_47_fu_50910_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex475_fu_50937_p4() {
    newIndex475_fu_50937_p4 = index_1_48_fu_50931_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex476_fu_50958_p4() {
    newIndex476_fu_50958_p4 = index_1_49_fu_50952_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex477_fu_50979_p4() {
    newIndex477_fu_50979_p4 = index_1_50_fu_50973_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex478_fu_51000_p4() {
    newIndex478_fu_51000_p4 = index_1_51_fu_50994_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex479_fu_51021_p4() {
    newIndex479_fu_51021_p4 = index_1_52_fu_51015_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex47_fu_37473_p4() {
    newIndex47_fu_37473_p4 = i_4_12_fu_37467_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex480_fu_51042_p4() {
    newIndex480_fu_51042_p4 = index_1_53_fu_51036_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex481_fu_51063_p4() {
    newIndex481_fu_51063_p4 = index_1_54_fu_51057_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex482_fu_51084_p4() {
    newIndex482_fu_51084_p4 = index_1_55_fu_51078_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex483_fu_51105_p4() {
    newIndex483_fu_51105_p4 = index_1_56_fu_51099_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex484_fu_51126_p4() {
    newIndex484_fu_51126_p4 = index_1_57_fu_51120_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex485_fu_51147_p4() {
    newIndex485_fu_51147_p4 = index_1_58_fu_51141_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex486_fu_51168_p4() {
    newIndex486_fu_51168_p4 = index_1_59_fu_51162_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex487_fu_51189_p4() {
    newIndex487_fu_51189_p4 = index_1_60_fu_51183_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex488_fu_51210_p4() {
    newIndex488_fu_51210_p4 = index_1_61_fu_51204_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex489_fu_51231_p4() {
    newIndex489_fu_51231_p4 = index_1_62_fu_51225_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex48_fu_37493_p4() {
    newIndex48_fu_37493_p4 = tmp_4_14_19_fu_37488_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex490_fu_51252_p4() {
    newIndex490_fu_51252_p4 = index_1_63_fu_51246_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex491_fu_51273_p4() {
    newIndex491_fu_51273_p4 = index_1_64_fu_51267_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex492_fu_51294_p4() {
    newIndex492_fu_51294_p4 = index_1_65_fu_51288_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex493_fu_51315_p4() {
    newIndex493_fu_51315_p4 = index_1_66_fu_51309_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex494_fu_51336_p4() {
    newIndex494_fu_51336_p4 = index_1_67_fu_51330_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex495_fu_51357_p4() {
    newIndex495_fu_51357_p4 = index_1_68_fu_51351_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex496_fu_51378_p4() {
    newIndex496_fu_51378_p4 = index_1_69_fu_51372_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex497_fu_51399_p4() {
    newIndex497_fu_51399_p4 = index_1_70_fu_51393_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex498_fu_51420_p4() {
    newIndex498_fu_51420_p4 = index_1_71_fu_51414_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex499_fu_51441_p4() {
    newIndex499_fu_51441_p4 = index_1_72_fu_51435_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex49_fu_37503_p1() {
    newIndex49_fu_37503_p1 = esl_zext<64,6>(newIndex48_fu_37493_p4.read());
}

void calcHash_rollingHash::thread_newIndex4_fu_36618_p1() {
    newIndex4_fu_36618_p1 = esl_zext<64,5>(newIndex3_fu_36608_p4.read());
}

void calcHash_rollingHash::thread_newIndex500_fu_51462_p4() {
    newIndex500_fu_51462_p4 = index_1_73_fu_51456_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex501_fu_51483_p4() {
    newIndex501_fu_51483_p4 = index_1_74_fu_51477_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex502_fu_51504_p4() {
    newIndex502_fu_51504_p4 = index_1_75_fu_51498_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex503_fu_51525_p4() {
    newIndex503_fu_51525_p4 = index_1_76_fu_51519_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex504_fu_51546_p4() {
    newIndex504_fu_51546_p4 = index_1_77_fu_51540_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex505_fu_51567_p4() {
    newIndex505_fu_51567_p4 = index_1_78_fu_51561_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex506_fu_51588_p4() {
    newIndex506_fu_51588_p4 = index_1_79_fu_51582_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex507_fu_51609_p4() {
    newIndex507_fu_51609_p4 = index_1_80_fu_51603_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex508_fu_51630_p4() {
    newIndex508_fu_51630_p4 = index_1_81_fu_51624_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex509_fu_51651_p4() {
    newIndex509_fu_51651_p4 = index_1_82_fu_51645_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex50_fu_37573_p4() {
    newIndex50_fu_37573_p4 = i_4_13_fu_37547_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex510_fu_51672_p4() {
    newIndex510_fu_51672_p4 = index_1_83_fu_51666_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex511_fu_51693_p4() {
    newIndex511_fu_51693_p4 = index_1_84_fu_51687_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex512_fu_51714_p4() {
    newIndex512_fu_51714_p4 = index_1_85_fu_51708_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex513_fu_51735_p4() {
    newIndex513_fu_51735_p4 = index_1_86_fu_51729_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex514_fu_51756_p4() {
    newIndex514_fu_51756_p4 = index_1_87_fu_51750_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex515_fu_51777_p4() {
    newIndex515_fu_51777_p4 = index_1_88_fu_51771_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex516_fu_51798_p4() {
    newIndex516_fu_51798_p4 = index_1_89_fu_51792_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex517_fu_51819_p4() {
    newIndex517_fu_51819_p4 = index_1_90_fu_51813_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex518_fu_51840_p4() {
    newIndex518_fu_51840_p4 = index_1_91_fu_51834_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex519_fu_51861_p4() {
    newIndex519_fu_51861_p4 = index_1_92_fu_51855_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex51_fu_37513_p4() {
    newIndex51_fu_37513_p4 = tmp_4_15_fu_37508_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex520_fu_51871_p1() {
    newIndex520_fu_51871_p1 = esl_zext<64,5>(newIndex519_fu_51861_p4.read());
}

void calcHash_rollingHash::thread_newIndex521_fu_51882_p4() {
    newIndex521_fu_51882_p4 = index_1_93_fu_51876_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex522_fu_51892_p1() {
    newIndex522_fu_51892_p1 = esl_zext<64,5>(newIndex521_fu_51882_p4.read());
}

void calcHash_rollingHash::thread_newIndex523_fu_51903_p4() {
    newIndex523_fu_51903_p4 = index_1_94_fu_51897_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex524_fu_51913_p1() {
    newIndex524_fu_51913_p1 = esl_zext<64,5>(newIndex523_fu_51903_p4.read());
}

void calcHash_rollingHash::thread_newIndex525_fu_51924_p4() {
    newIndex525_fu_51924_p4 = index_1_95_fu_51918_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex526_fu_51934_p1() {
    newIndex526_fu_51934_p1 = esl_zext<64,5>(newIndex525_fu_51924_p4.read());
}

void calcHash_rollingHash::thread_newIndex527_fu_51945_p4() {
    newIndex527_fu_51945_p4 = index_1_96_fu_51939_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex528_fu_51955_p1() {
    newIndex528_fu_51955_p1 = esl_zext<64,5>(newIndex527_fu_51945_p4.read());
}

void calcHash_rollingHash::thread_newIndex529_fu_51966_p4() {
    newIndex529_fu_51966_p4 = index_1_97_fu_51960_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex52_fu_37523_p1() {
    newIndex52_fu_37523_p1 = esl_zext<64,6>(newIndex51_fu_37513_p4.read());
}

void calcHash_rollingHash::thread_newIndex530_fu_51976_p1() {
    newIndex530_fu_51976_p1 = esl_zext<64,5>(newIndex529_fu_51966_p4.read());
}

void calcHash_rollingHash::thread_newIndex531_fu_51987_p4() {
    newIndex531_fu_51987_p4 = index_1_98_fu_51981_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex532_fu_51997_p1() {
    newIndex532_fu_51997_p1 = esl_zext<64,5>(newIndex531_fu_51987_p4.read());
}

void calcHash_rollingHash::thread_newIndex533_fu_52008_p4() {
    newIndex533_fu_52008_p4 = index_1_99_fu_52002_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex534_fu_52018_p1() {
    newIndex534_fu_52018_p1 = esl_zext<64,5>(newIndex533_fu_52008_p4.read());
}

void calcHash_rollingHash::thread_newIndex535_fu_52029_p4() {
    newIndex535_fu_52029_p4 = index_1_100_fu_52023_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex536_fu_52039_p1() {
    newIndex536_fu_52039_p1 = esl_zext<64,5>(newIndex535_fu_52029_p4.read());
}

void calcHash_rollingHash::thread_newIndex537_fu_52050_p4() {
    newIndex537_fu_52050_p4 = index_1_101_fu_52044_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex538_fu_52060_p1() {
    newIndex538_fu_52060_p1 = esl_zext<64,5>(newIndex537_fu_52050_p4.read());
}

void calcHash_rollingHash::thread_newIndex539_fu_52071_p4() {
    newIndex539_fu_52071_p4 = index_1_102_fu_52065_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex53_fu_37594_p4() {
    newIndex53_fu_37594_p4 = i_4_14_fu_37588_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex540_fu_52081_p1() {
    newIndex540_fu_52081_p1 = esl_zext<64,5>(newIndex539_fu_52071_p4.read());
}

void calcHash_rollingHash::thread_newIndex541_fu_52092_p4() {
    newIndex541_fu_52092_p4 = index_1_103_fu_52086_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex542_fu_52102_p1() {
    newIndex542_fu_52102_p1 = esl_zext<64,5>(newIndex541_fu_52092_p4.read());
}

void calcHash_rollingHash::thread_newIndex543_fu_52113_p4() {
    newIndex543_fu_52113_p4 = index_1_104_fu_52107_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex544_fu_52123_p1() {
    newIndex544_fu_52123_p1 = esl_zext<64,5>(newIndex543_fu_52113_p4.read());
}

void calcHash_rollingHash::thread_newIndex545_fu_52134_p4() {
    newIndex545_fu_52134_p4 = index_1_105_fu_52128_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex546_fu_52144_p1() {
    newIndex546_fu_52144_p1 = esl_zext<64,5>(newIndex545_fu_52134_p4.read());
}

void calcHash_rollingHash::thread_newIndex547_fu_52155_p4() {
    newIndex547_fu_52155_p4 = index_1_106_fu_52149_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex548_fu_52165_p1() {
    newIndex548_fu_52165_p1 = esl_zext<64,5>(newIndex547_fu_52155_p4.read());
}

void calcHash_rollingHash::thread_newIndex549_fu_52176_p4() {
    newIndex549_fu_52176_p4 = index_1_107_fu_52170_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex54_fu_37614_p4() {
    newIndex54_fu_37614_p4 = tmp_4_16_fu_37609_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex550_fu_52186_p1() {
    newIndex550_fu_52186_p1 = esl_zext<64,5>(newIndex549_fu_52176_p4.read());
}

void calcHash_rollingHash::thread_newIndex551_fu_52197_p4() {
    newIndex551_fu_52197_p4 = index_1_108_fu_52191_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex552_fu_52207_p1() {
    newIndex552_fu_52207_p1 = esl_zext<64,5>(newIndex551_fu_52197_p4.read());
}

void calcHash_rollingHash::thread_newIndex553_fu_52218_p4() {
    newIndex553_fu_52218_p4 = index_1_109_fu_52212_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex554_fu_52228_p1() {
    newIndex554_fu_52228_p1 = esl_zext<64,5>(newIndex553_fu_52218_p4.read());
}

void calcHash_rollingHash::thread_newIndex555_fu_52239_p4() {
    newIndex555_fu_52239_p4 = index_1_110_fu_52233_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex556_fu_52249_p1() {
    newIndex556_fu_52249_p1 = esl_zext<64,5>(newIndex555_fu_52239_p4.read());
}

void calcHash_rollingHash::thread_newIndex557_fu_52260_p4() {
    newIndex557_fu_52260_p4 = index_1_111_fu_52254_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex558_fu_52270_p1() {
    newIndex558_fu_52270_p1 = esl_zext<64,5>(newIndex557_fu_52260_p4.read());
}

void calcHash_rollingHash::thread_newIndex559_fu_52281_p4() {
    newIndex559_fu_52281_p4 = index_1_112_fu_52275_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex55_fu_37624_p1() {
    newIndex55_fu_37624_p1 = esl_zext<64,6>(newIndex54_fu_37614_p4.read());
}

void calcHash_rollingHash::thread_newIndex560_fu_52291_p1() {
    newIndex560_fu_52291_p1 = esl_zext<64,5>(newIndex559_fu_52281_p4.read());
}

void calcHash_rollingHash::thread_newIndex561_fu_52302_p4() {
    newIndex561_fu_52302_p4 = index_1_113_fu_52296_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex562_fu_52312_p1() {
    newIndex562_fu_52312_p1 = esl_zext<64,5>(newIndex561_fu_52302_p4.read());
}

void calcHash_rollingHash::thread_newIndex563_fu_52323_p4() {
    newIndex563_fu_52323_p4 = index_1_114_fu_52317_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex564_fu_52333_p1() {
    newIndex564_fu_52333_p1 = esl_zext<64,5>(newIndex563_fu_52323_p4.read());
}

void calcHash_rollingHash::thread_newIndex565_fu_52344_p4() {
    newIndex565_fu_52344_p4 = index_1_115_fu_52338_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex566_fu_52354_p1() {
    newIndex566_fu_52354_p1 = esl_zext<64,5>(newIndex565_fu_52344_p4.read());
}

void calcHash_rollingHash::thread_newIndex567_fu_52365_p4() {
    newIndex567_fu_52365_p4 = index_1_116_fu_52359_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex568_fu_52375_p1() {
    newIndex568_fu_52375_p1 = esl_zext<64,5>(newIndex567_fu_52365_p4.read());
}

void calcHash_rollingHash::thread_newIndex569_fu_52386_p4() {
    newIndex569_fu_52386_p4 = index_1_117_fu_52380_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex56_fu_37694_p4() {
    newIndex56_fu_37694_p4 = i_4_15_fu_37668_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex570_fu_52396_p1() {
    newIndex570_fu_52396_p1 = esl_zext<64,5>(newIndex569_fu_52386_p4.read());
}

void calcHash_rollingHash::thread_newIndex571_fu_52407_p4() {
    newIndex571_fu_52407_p4 = index_1_118_fu_52401_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex572_fu_61402_p3() {
    newIndex572_fu_61402_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1795_fu_61392_p4.read());
}

void calcHash_rollingHash::thread_newIndex573_fu_52417_p1() {
    newIndex573_fu_52417_p1 = esl_zext<64,5>(newIndex571_fu_52407_p4.read());
}

void calcHash_rollingHash::thread_newIndex574_fu_52428_p4() {
    newIndex574_fu_52428_p4 = index_1_119_fu_52422_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex575_fu_52438_p1() {
    newIndex575_fu_52438_p1 = esl_zext<64,5>(newIndex574_fu_52428_p4.read());
}

void calcHash_rollingHash::thread_newIndex576_fu_52449_p4() {
    newIndex576_fu_52449_p4 = index_1_120_fu_52443_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex577_fu_52459_p1() {
    newIndex577_fu_52459_p1 = esl_zext<64,5>(newIndex576_fu_52449_p4.read());
}

void calcHash_rollingHash::thread_newIndex578_fu_52470_p4() {
    newIndex578_fu_52470_p4 = index_1_121_fu_52464_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex579_fu_52480_p1() {
    newIndex579_fu_52480_p1 = esl_zext<64,5>(newIndex578_fu_52470_p4.read());
}

void calcHash_rollingHash::thread_newIndex57_fu_37634_p4() {
    newIndex57_fu_37634_p4 = tmp_4_17_fu_37629_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex580_fu_52491_p4() {
    newIndex580_fu_52491_p4 = index_1_122_fu_52485_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex581_fu_52501_p1() {
    newIndex581_fu_52501_p1 = esl_zext<64,5>(newIndex580_fu_52491_p4.read());
}

void calcHash_rollingHash::thread_newIndex582_fu_52512_p4() {
    newIndex582_fu_52512_p4 = index_1_123_fu_52506_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex583_fu_52522_p1() {
    newIndex583_fu_52522_p1 = esl_zext<64,5>(newIndex582_fu_52512_p4.read());
}

void calcHash_rollingHash::thread_newIndex584_fu_52533_p4() {
    newIndex584_fu_52533_p4 = index_1_124_fu_52527_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex585_fu_52543_p1() {
    newIndex585_fu_52543_p1 = esl_zext<64,5>(newIndex584_fu_52533_p4.read());
}

void calcHash_rollingHash::thread_newIndex586_fu_52554_p4() {
    newIndex586_fu_52554_p4 = index_1_125_fu_52548_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex587_fu_52564_p1() {
    newIndex587_fu_52564_p1 = esl_zext<64,5>(newIndex586_fu_52554_p4.read());
}

void calcHash_rollingHash::thread_newIndex588_fu_52575_p4() {
    newIndex588_fu_52575_p4 = index_1_126_fu_52569_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex589_fu_52585_p1() {
    newIndex589_fu_52585_p1 = esl_zext<64,5>(newIndex588_fu_52575_p4.read());
}

void calcHash_rollingHash::thread_newIndex58_fu_37644_p1() {
    newIndex58_fu_37644_p1 = esl_zext<64,6>(newIndex57_fu_37634_p4.read());
}

void calcHash_rollingHash::thread_newIndex590_fu_61520_p3() {
    newIndex590_fu_61520_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_531_fu_61510_p4.read());
}

void calcHash_rollingHash::thread_newIndex591_fu_61528_p1() {
    newIndex591_fu_61528_p1 = esl_zext<64,5>(newIndex590_fu_61520_p3.read());
}

void calcHash_rollingHash::thread_newIndex592_fu_57835_p3() {
    newIndex592_fu_57835_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_535_fu_57825_p4.read());
}

void calcHash_rollingHash::thread_newIndex593_fu_57843_p1() {
    newIndex593_fu_57843_p1 = esl_zext<64,5>(newIndex592_fu_57835_p3.read());
}

void calcHash_rollingHash::thread_newIndex594_fu_57864_p3() {
    newIndex594_fu_57864_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_539_fu_57854_p4.read());
}

void calcHash_rollingHash::thread_newIndex595_fu_57872_p1() {
    newIndex595_fu_57872_p1 = esl_zext<64,5>(newIndex594_fu_57864_p3.read());
}

void calcHash_rollingHash::thread_newIndex596_fu_57893_p3() {
    newIndex596_fu_57893_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_543_fu_57883_p4.read());
}

void calcHash_rollingHash::thread_newIndex597_fu_57901_p1() {
    newIndex597_fu_57901_p1 = esl_zext<64,5>(newIndex596_fu_57893_p3.read());
}

void calcHash_rollingHash::thread_newIndex598_fu_57922_p3() {
    newIndex598_fu_57922_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_547_fu_57912_p4.read());
}

void calcHash_rollingHash::thread_newIndex599_fu_57930_p1() {
    newIndex599_fu_57930_p1 = esl_zext<64,5>(newIndex598_fu_57922_p3.read());
}

void calcHash_rollingHash::thread_newIndex59_fu_37715_p4() {
    newIndex59_fu_37715_p4 = i_4_16_fu_37709_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex5_fu_36623_p4() {
    newIndex5_fu_36623_p4 = i_1_reg_18706.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex600_fu_57951_p3() {
    newIndex600_fu_57951_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_551_fu_57941_p4.read());
}

void calcHash_rollingHash::thread_newIndex601_fu_57959_p1() {
    newIndex601_fu_57959_p1 = esl_zext<64,5>(newIndex600_fu_57951_p3.read());
}

void calcHash_rollingHash::thread_newIndex602_fu_57980_p3() {
    newIndex602_fu_57980_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_555_fu_57970_p4.read());
}

void calcHash_rollingHash::thread_newIndex603_fu_57988_p1() {
    newIndex603_fu_57988_p1 = esl_zext<64,5>(newIndex602_fu_57980_p3.read());
}

void calcHash_rollingHash::thread_newIndex604_fu_58009_p3() {
    newIndex604_fu_58009_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_559_fu_57999_p4.read());
}

void calcHash_rollingHash::thread_newIndex605_fu_58017_p1() {
    newIndex605_fu_58017_p1 = esl_zext<64,5>(newIndex604_fu_58009_p3.read());
}

void calcHash_rollingHash::thread_newIndex606_fu_58038_p3() {
    newIndex606_fu_58038_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_563_fu_58028_p4.read());
}

void calcHash_rollingHash::thread_newIndex607_fu_58046_p1() {
    newIndex607_fu_58046_p1 = esl_zext<64,5>(newIndex606_fu_58038_p3.read());
}

void calcHash_rollingHash::thread_newIndex608_fu_58067_p3() {
    newIndex608_fu_58067_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_567_fu_58057_p4.read());
}

void calcHash_rollingHash::thread_newIndex609_fu_58075_p1() {
    newIndex609_fu_58075_p1 = esl_zext<64,5>(newIndex608_fu_58067_p3.read());
}

void calcHash_rollingHash::thread_newIndex60_fu_37735_p4() {
    newIndex60_fu_37735_p4 = tmp_4_18_fu_37730_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex610_fu_58096_p3() {
    newIndex610_fu_58096_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_571_fu_58086_p4.read());
}

void calcHash_rollingHash::thread_newIndex611_fu_58104_p1() {
    newIndex611_fu_58104_p1 = esl_zext<64,5>(newIndex610_fu_58096_p3.read());
}

void calcHash_rollingHash::thread_newIndex612_fu_58125_p3() {
    newIndex612_fu_58125_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_575_fu_58115_p4.read());
}

void calcHash_rollingHash::thread_newIndex613_fu_58133_p1() {
    newIndex613_fu_58133_p1 = esl_zext<64,5>(newIndex612_fu_58125_p3.read());
}

void calcHash_rollingHash::thread_newIndex614_fu_58154_p3() {
    newIndex614_fu_58154_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_579_fu_58144_p4.read());
}

void calcHash_rollingHash::thread_newIndex615_fu_58162_p1() {
    newIndex615_fu_58162_p1 = esl_zext<64,5>(newIndex614_fu_58154_p3.read());
}

void calcHash_rollingHash::thread_newIndex616_fu_58183_p3() {
    newIndex616_fu_58183_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_583_fu_58173_p4.read());
}

void calcHash_rollingHash::thread_newIndex617_fu_58191_p1() {
    newIndex617_fu_58191_p1 = esl_zext<64,5>(newIndex616_fu_58183_p3.read());
}

void calcHash_rollingHash::thread_newIndex618_fu_58212_p3() {
    newIndex618_fu_58212_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_587_fu_58202_p4.read());
}

void calcHash_rollingHash::thread_newIndex619_fu_58220_p1() {
    newIndex619_fu_58220_p1 = esl_zext<64,5>(newIndex618_fu_58212_p3.read());
}

void calcHash_rollingHash::thread_newIndex61_fu_37745_p1() {
    newIndex61_fu_37745_p1 = esl_zext<64,6>(newIndex60_fu_37735_p4.read());
}

void calcHash_rollingHash::thread_newIndex620_fu_58241_p3() {
    newIndex620_fu_58241_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_591_fu_58231_p4.read());
}

void calcHash_rollingHash::thread_newIndex621_fu_58249_p1() {
    newIndex621_fu_58249_p1 = esl_zext<64,5>(newIndex620_fu_58241_p3.read());
}

void calcHash_rollingHash::thread_newIndex622_fu_58270_p3() {
    newIndex622_fu_58270_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_595_fu_58260_p4.read());
}

void calcHash_rollingHash::thread_newIndex623_fu_58278_p1() {
    newIndex623_fu_58278_p1 = esl_zext<64,5>(newIndex622_fu_58270_p3.read());
}

void calcHash_rollingHash::thread_newIndex624_fu_58299_p3() {
    newIndex624_fu_58299_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_599_fu_58289_p4.read());
}

void calcHash_rollingHash::thread_newIndex625_fu_58307_p1() {
    newIndex625_fu_58307_p1 = esl_zext<64,5>(newIndex624_fu_58299_p3.read());
}

void calcHash_rollingHash::thread_newIndex626_fu_58328_p3() {
    newIndex626_fu_58328_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_603_fu_58318_p4.read());
}

void calcHash_rollingHash::thread_newIndex627_fu_58336_p1() {
    newIndex627_fu_58336_p1 = esl_zext<64,5>(newIndex626_fu_58328_p3.read());
}

void calcHash_rollingHash::thread_newIndex628_fu_58357_p3() {
    newIndex628_fu_58357_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_607_fu_58347_p4.read());
}

void calcHash_rollingHash::thread_newIndex629_fu_58365_p1() {
    newIndex629_fu_58365_p1 = esl_zext<64,5>(newIndex628_fu_58357_p3.read());
}

void calcHash_rollingHash::thread_newIndex62_fu_37815_p4() {
    newIndex62_fu_37815_p4 = i_4_17_fu_37789_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex630_fu_58386_p3() {
    newIndex630_fu_58386_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_611_fu_58376_p4.read());
}

void calcHash_rollingHash::thread_newIndex631_fu_58394_p1() {
    newIndex631_fu_58394_p1 = esl_zext<64,5>(newIndex630_fu_58386_p3.read());
}

void calcHash_rollingHash::thread_newIndex632_fu_58415_p3() {
    newIndex632_fu_58415_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_615_fu_58405_p4.read());
}

void calcHash_rollingHash::thread_newIndex633_fu_58423_p1() {
    newIndex633_fu_58423_p1 = esl_zext<64,5>(newIndex632_fu_58415_p3.read());
}

void calcHash_rollingHash::thread_newIndex634_fu_58444_p3() {
    newIndex634_fu_58444_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_619_fu_58434_p4.read());
}

void calcHash_rollingHash::thread_newIndex635_fu_58452_p1() {
    newIndex635_fu_58452_p1 = esl_zext<64,5>(newIndex634_fu_58444_p3.read());
}

void calcHash_rollingHash::thread_newIndex636_fu_58473_p3() {
    newIndex636_fu_58473_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_623_fu_58463_p4.read());
}

void calcHash_rollingHash::thread_newIndex637_fu_58481_p1() {
    newIndex637_fu_58481_p1 = esl_zext<64,5>(newIndex636_fu_58473_p3.read());
}

void calcHash_rollingHash::thread_newIndex638_fu_58502_p3() {
    newIndex638_fu_58502_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_627_fu_58492_p4.read());
}

void calcHash_rollingHash::thread_newIndex639_fu_58510_p1() {
    newIndex639_fu_58510_p1 = esl_zext<64,5>(newIndex638_fu_58502_p3.read());
}

void calcHash_rollingHash::thread_newIndex63_fu_37755_p4() {
    newIndex63_fu_37755_p4 = tmp_4_19_fu_37750_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex640_fu_58531_p3() {
    newIndex640_fu_58531_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_631_fu_58521_p4.read());
}

void calcHash_rollingHash::thread_newIndex641_fu_58539_p1() {
    newIndex641_fu_58539_p1 = esl_zext<64,5>(newIndex640_fu_58531_p3.read());
}

void calcHash_rollingHash::thread_newIndex642_fu_58560_p3() {
    newIndex642_fu_58560_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_635_fu_58550_p4.read());
}

void calcHash_rollingHash::thread_newIndex643_fu_58568_p1() {
    newIndex643_fu_58568_p1 = esl_zext<64,5>(newIndex642_fu_58560_p3.read());
}

void calcHash_rollingHash::thread_newIndex644_fu_58589_p3() {
    newIndex644_fu_58589_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_639_fu_58579_p4.read());
}

void calcHash_rollingHash::thread_newIndex6450064501_fu_37846_p1() {
    newIndex6450064501_fu_37846_p1 = esl_zext<64,5>(newIndex65_fu_37836_p4.read());
}

void calcHash_rollingHash::thread_newIndex645_fu_58597_p1() {
    newIndex645_fu_58597_p1 = esl_zext<64,5>(newIndex644_fu_58589_p3.read());
}

void calcHash_rollingHash::thread_newIndex6463164632_fu_37825_p1() {
    newIndex6463164632_fu_37825_p1 = esl_zext<64,5>(newIndex62_fu_37815_p4.read());
}

void calcHash_rollingHash::thread_newIndex646_fu_58618_p3() {
    newIndex646_fu_58618_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_643_fu_58608_p4.read());
}

void calcHash_rollingHash::thread_newIndex6476264763_fu_37725_p1() {
    newIndex6476264763_fu_37725_p1 = esl_zext<64,5>(newIndex59_fu_37715_p4.read());
}

void calcHash_rollingHash::thread_newIndex647_fu_58626_p1() {
    newIndex647_fu_58626_p1 = esl_zext<64,5>(newIndex646_fu_58618_p3.read());
}

void calcHash_rollingHash::thread_newIndex6489364894_fu_37704_p1() {
    newIndex6489364894_fu_37704_p1 = esl_zext<64,5>(newIndex56_fu_37694_p4.read());
}

void calcHash_rollingHash::thread_newIndex648_fu_58647_p3() {
    newIndex648_fu_58647_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_647_fu_58637_p4.read());
}

void calcHash_rollingHash::thread_newIndex649_fu_58655_p1() {
    newIndex649_fu_58655_p1 = esl_zext<64,5>(newIndex648_fu_58647_p3.read());
}

void calcHash_rollingHash::thread_newIndex64_fu_37765_p1() {
    newIndex64_fu_37765_p1 = esl_zext<64,6>(newIndex63_fu_37755_p4.read());
}

void calcHash_rollingHash::thread_newIndex6502465025_fu_37604_p1() {
    newIndex6502465025_fu_37604_p1 = esl_zext<64,5>(newIndex53_fu_37594_p4.read());
}

void calcHash_rollingHash::thread_newIndex650_fu_58676_p3() {
    newIndex650_fu_58676_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_651_fu_58666_p4.read());
}

void calcHash_rollingHash::thread_newIndex6515565156_fu_37583_p1() {
    newIndex6515565156_fu_37583_p1 = esl_zext<64,5>(newIndex50_fu_37573_p4.read());
}

void calcHash_rollingHash::thread_newIndex651_fu_58684_p1() {
    newIndex651_fu_58684_p1 = esl_zext<64,5>(newIndex650_fu_58676_p3.read());
}

void calcHash_rollingHash::thread_newIndex6528665287_fu_37483_p1() {
    newIndex6528665287_fu_37483_p1 = esl_zext<64,5>(newIndex47_fu_37473_p4.read());
}

void calcHash_rollingHash::thread_newIndex652_fu_58705_p3() {
    newIndex652_fu_58705_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_655_fu_58695_p4.read());
}

void calcHash_rollingHash::thread_newIndex653_fu_58713_p1() {
    newIndex653_fu_58713_p1 = esl_zext<64,5>(newIndex652_fu_58705_p3.read());
}

void calcHash_rollingHash::thread_newIndex6541765418_fu_37462_p1() {
    newIndex6541765418_fu_37462_p1 = esl_zext<64,5>(newIndex44_fu_37452_p4.read());
}

void calcHash_rollingHash::thread_newIndex654_fu_58734_p3() {
    newIndex654_fu_58734_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_659_fu_58724_p4.read());
}

void calcHash_rollingHash::thread_newIndex6554865549_fu_37362_p1() {
    newIndex6554865549_fu_37362_p1 = esl_zext<64,5>(newIndex41_fu_37352_p4.read());
}

void calcHash_rollingHash::thread_newIndex655_fu_58742_p1() {
    newIndex655_fu_58742_p1 = esl_zext<64,5>(newIndex654_fu_58734_p3.read());
}

void calcHash_rollingHash::thread_newIndex6567965680_fu_37341_p1() {
    newIndex6567965680_fu_37341_p1 = esl_zext<64,5>(newIndex38_fu_37331_p4.read());
}

void calcHash_rollingHash::thread_newIndex656_fu_58763_p3() {
    newIndex656_fu_58763_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_663_fu_58753_p4.read());
}

void calcHash_rollingHash::thread_newIndex657_fu_58771_p1() {
    newIndex657_fu_58771_p1 = esl_zext<64,5>(newIndex656_fu_58763_p3.read());
}

void calcHash_rollingHash::thread_newIndex6581065811_fu_37241_p1() {
    newIndex6581065811_fu_37241_p1 = esl_zext<64,5>(newIndex35_fu_37231_p4.read());
}

void calcHash_rollingHash::thread_newIndex658_fu_58792_p3() {
    newIndex658_fu_58792_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_667_fu_58782_p4.read());
}

void calcHash_rollingHash::thread_newIndex6594165942_fu_37220_p1() {
    newIndex6594165942_fu_37220_p1 = esl_zext<64,5>(newIndex32_fu_37210_p4.read());
}

void calcHash_rollingHash::thread_newIndex659_fu_58800_p1() {
    newIndex659_fu_58800_p1 = esl_zext<64,5>(newIndex658_fu_58792_p3.read());
}

void calcHash_rollingHash::thread_newIndex65_fu_37836_p4() {
    newIndex65_fu_37836_p4 = i_4_18_fu_37830_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex6607266073_fu_37120_p1() {
    newIndex6607266073_fu_37120_p1 = esl_zext<64,5>(newIndex29_fu_37110_p4.read());
}

void calcHash_rollingHash::thread_newIndex660_fu_58821_p3() {
    newIndex660_fu_58821_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_671_fu_58811_p4.read());
}

void calcHash_rollingHash::thread_newIndex661_fu_58829_p1() {
    newIndex661_fu_58829_p1 = esl_zext<64,5>(newIndex660_fu_58821_p3.read());
}

void calcHash_rollingHash::thread_newIndex6620366204_fu_37099_p1() {
    newIndex6620366204_fu_37099_p1 = esl_zext<64,5>(newIndex26_fu_37089_p4.read());
}

void calcHash_rollingHash::thread_newIndex662_fu_58850_p3() {
    newIndex662_fu_58850_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_675_fu_58840_p4.read());
}

void calcHash_rollingHash::thread_newIndex6633466335_fu_36999_p1() {
    newIndex6633466335_fu_36999_p1 = esl_zext<64,5>(newIndex23_fu_36989_p4.read());
}

void calcHash_rollingHash::thread_newIndex663_fu_58858_p1() {
    newIndex663_fu_58858_p1 = esl_zext<64,5>(newIndex662_fu_58850_p3.read());
}

void calcHash_rollingHash::thread_newIndex6646566466_fu_36978_p1() {
    newIndex6646566466_fu_36978_p1 = esl_zext<64,5>(newIndex20_fu_36968_p4.read());
}

void calcHash_rollingHash::thread_newIndex664_fu_58879_p3() {
    newIndex664_fu_58879_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_679_fu_58869_p4.read());
}

void calcHash_rollingHash::thread_newIndex6659666597_fu_36878_p1() {
    newIndex6659666597_fu_36878_p1 = esl_zext<64,5>(newIndex17_fu_36868_p4.read());
}

void calcHash_rollingHash::thread_newIndex665_fu_58887_p1() {
    newIndex665_fu_58887_p1 = esl_zext<64,5>(newIndex664_fu_58879_p3.read());
}

void calcHash_rollingHash::thread_newIndex666_fu_58908_p3() {
    newIndex666_fu_58908_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_683_fu_58898_p4.read());
}

void calcHash_rollingHash::thread_newIndex6672766728_fu_36857_p1() {
    newIndex6672766728_fu_36857_p1 = esl_zext<64,5>(newIndex14_fu_36847_p4.read());
}

void calcHash_rollingHash::thread_newIndex667_fu_58916_p1() {
    newIndex667_fu_58916_p1 = esl_zext<64,5>(newIndex666_fu_58908_p3.read());
}

void calcHash_rollingHash::thread_newIndex6685866859_fu_36757_p1() {
    newIndex6685866859_fu_36757_p1 = esl_zext<64,5>(newIndex11_fu_36747_p4.read());
}

void calcHash_rollingHash::thread_newIndex668_fu_58937_p3() {
    newIndex668_fu_58937_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_687_fu_58927_p4.read());
}

void calcHash_rollingHash::thread_newIndex6698966990_fu_36736_p1() {
    newIndex6698966990_fu_36736_p1 = esl_zext<64,5>(newIndex8_fu_36726_p4.read());
}

void calcHash_rollingHash::thread_newIndex669_fu_58945_p1() {
    newIndex669_fu_58945_p1 = esl_zext<64,5>(newIndex668_fu_58937_p3.read());
}

void calcHash_rollingHash::thread_newIndex66_fu_37856_p4() {
    newIndex66_fu_37856_p4 = tmp_4_20_fu_37851_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex670_fu_58966_p3() {
    newIndex670_fu_58966_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_691_fu_58956_p4.read());
}

void calcHash_rollingHash::thread_newIndex6712067121_fu_36633_p1() {
    newIndex6712067121_fu_36633_p1 = esl_zext<64,5>(newIndex5_fu_36623_p4.read());
}

void calcHash_rollingHash::thread_newIndex671_fu_58974_p1() {
    newIndex671_fu_58974_p1 = esl_zext<64,5>(newIndex670_fu_58966_p3.read());
}

void calcHash_rollingHash::thread_newIndex672_fu_58995_p3() {
    newIndex672_fu_58995_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_695_fu_58985_p4.read());
}

void calcHash_rollingHash::thread_newIndex673_fu_59003_p1() {
    newIndex673_fu_59003_p1 = esl_zext<64,5>(newIndex672_fu_58995_p3.read());
}

void calcHash_rollingHash::thread_newIndex6747767478_fu_44037_p1() {
    newIndex6747767478_fu_44037_p1 = esl_zext<64,6>(newIndex406_fu_44027_p4.read());
}

void calcHash_rollingHash::thread_newIndex674_fu_59024_p3() {
    newIndex674_fu_59024_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_699_fu_59014_p4.read());
}

void calcHash_rollingHash::thread_newIndex675_fu_59032_p1() {
    newIndex675_fu_59032_p1 = esl_zext<64,5>(newIndex674_fu_59024_p3.read());
}

void calcHash_rollingHash::thread_newIndex676_fu_59053_p3() {
    newIndex676_fu_59053_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_703_fu_59043_p4.read());
}

void calcHash_rollingHash::thread_newIndex6773967740_fu_43936_p1() {
    newIndex6773967740_fu_43936_p1 = esl_zext<64,6>(newIndex403_fu_43926_p4.read());
}

void calcHash_rollingHash::thread_newIndex677_fu_59061_p1() {
    newIndex677_fu_59061_p1 = esl_zext<64,5>(newIndex676_fu_59053_p3.read());
}

void calcHash_rollingHash::thread_newIndex678_fu_59082_p3() {
    newIndex678_fu_59082_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_707_fu_59072_p4.read());
}

void calcHash_rollingHash::thread_newIndex679_fu_59090_p1() {
    newIndex679_fu_59090_p1 = esl_zext<64,5>(newIndex678_fu_59082_p3.read());
}

void calcHash_rollingHash::thread_newIndex67_fu_37866_p1() {
    newIndex67_fu_37866_p1 = esl_zext<64,6>(newIndex66_fu_37856_p4.read());
}

void calcHash_rollingHash::thread_newIndex6800168002_fu_43916_p1() {
    newIndex6800168002_fu_43916_p1 = esl_zext<64,6>(newIndex400_fu_43906_p4.read());
}

void calcHash_rollingHash::thread_newIndex680_fu_59111_p3() {
    newIndex680_fu_59111_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_711_fu_59101_p4.read());
}

void calcHash_rollingHash::thread_newIndex681_fu_59119_p1() {
    newIndex681_fu_59119_p1 = esl_zext<64,5>(newIndex680_fu_59111_p3.read());
}

void calcHash_rollingHash::thread_newIndex6826368264_fu_43815_p1() {
    newIndex6826368264_fu_43815_p1 = esl_zext<64,6>(newIndex397_fu_43805_p4.read());
}

void calcHash_rollingHash::thread_newIndex682_fu_59140_p3() {
    newIndex682_fu_59140_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_715_fu_59130_p4.read());
}

void calcHash_rollingHash::thread_newIndex683_fu_59148_p1() {
    newIndex683_fu_59148_p1 = esl_zext<64,5>(newIndex682_fu_59140_p3.read());
}

void calcHash_rollingHash::thread_newIndex684_fu_59169_p3() {
    newIndex684_fu_59169_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_719_fu_59159_p4.read());
}

void calcHash_rollingHash::thread_newIndex6852568526_fu_43795_p1() {
    newIndex6852568526_fu_43795_p1 = esl_zext<64,6>(newIndex394_fu_43785_p4.read());
}

void calcHash_rollingHash::thread_newIndex685_fu_59177_p1() {
    newIndex685_fu_59177_p1 = esl_zext<64,5>(newIndex684_fu_59169_p3.read());
}

void calcHash_rollingHash::thread_newIndex686_fu_59198_p3() {
    newIndex686_fu_59198_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_723_fu_59188_p4.read());
}

void calcHash_rollingHash::thread_newIndex6878768788_fu_43694_p1() {
    newIndex6878768788_fu_43694_p1 = esl_zext<64,6>(newIndex391_fu_43684_p4.read());
}

void calcHash_rollingHash::thread_newIndex687_fu_59206_p1() {
    newIndex687_fu_59206_p1 = esl_zext<64,5>(newIndex686_fu_59198_p3.read());
}

void calcHash_rollingHash::thread_newIndex688_fu_59227_p3() {
    newIndex688_fu_59227_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_727_fu_59217_p4.read());
}

void calcHash_rollingHash::thread_newIndex689_fu_59235_p1() {
    newIndex689_fu_59235_p1 = esl_zext<64,5>(newIndex688_fu_59227_p3.read());
}

void calcHash_rollingHash::thread_newIndex68_fu_37936_p4() {
    newIndex68_fu_37936_p4 = i_4_19_fu_37910_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex6904969050_fu_43674_p1() {
    newIndex6904969050_fu_43674_p1 = esl_zext<64,6>(newIndex388_fu_43664_p4.read());
}

void calcHash_rollingHash::thread_newIndex690_fu_59256_p3() {
    newIndex690_fu_59256_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_731_fu_59246_p4.read());
}

void calcHash_rollingHash::thread_newIndex691_fu_59264_p1() {
    newIndex691_fu_59264_p1 = esl_zext<64,5>(newIndex690_fu_59256_p3.read());
}

void calcHash_rollingHash::thread_newIndex692_fu_59285_p3() {
    newIndex692_fu_59285_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_735_fu_59275_p4.read());
}

void calcHash_rollingHash::thread_newIndex6931169312_fu_43573_p1() {
    newIndex6931169312_fu_43573_p1 = esl_zext<64,6>(newIndex385_fu_43563_p4.read());
}

void calcHash_rollingHash::thread_newIndex693_fu_59293_p1() {
    newIndex693_fu_59293_p1 = esl_zext<64,5>(newIndex692_fu_59285_p3.read());
}

void calcHash_rollingHash::thread_newIndex694_fu_59314_p3() {
    newIndex694_fu_59314_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_739_fu_59304_p4.read());
}

void calcHash_rollingHash::thread_newIndex6957369574_fu_43553_p1() {
    newIndex6957369574_fu_43553_p1 = esl_zext<64,6>(newIndex382_fu_43543_p4.read());
}

void calcHash_rollingHash::thread_newIndex695_fu_59322_p1() {
    newIndex695_fu_59322_p1 = esl_zext<64,5>(newIndex694_fu_59314_p3.read());
}

void calcHash_rollingHash::thread_newIndex696_fu_59343_p3() {
    newIndex696_fu_59343_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_743_fu_59333_p4.read());
}

void calcHash_rollingHash::thread_newIndex697_fu_59351_p1() {
    newIndex697_fu_59351_p1 = esl_zext<64,5>(newIndex696_fu_59343_p3.read());
}

void calcHash_rollingHash::thread_newIndex6983569836_fu_43452_p1() {
    newIndex6983569836_fu_43452_p1 = esl_zext<64,6>(newIndex379_fu_43442_p4.read());
}

void calcHash_rollingHash::thread_newIndex698_fu_59372_p3() {
    newIndex698_fu_59372_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_747_fu_59362_p4.read());
}

void calcHash_rollingHash::thread_newIndex699_fu_59380_p1() {
    newIndex699_fu_59380_p1 = esl_zext<64,5>(newIndex698_fu_59372_p3.read());
}

void calcHash_rollingHash::thread_newIndex69_fu_37946_p1() {
    newIndex69_fu_37946_p1 = esl_zext<64,5>(newIndex68_fu_37936_p4.read());
}

void calcHash_rollingHash::thread_newIndex6_fu_36644_p4() {
    newIndex6_fu_36644_p4 = tmp_4_1_fu_36638_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex7009770098_fu_43432_p1() {
    newIndex7009770098_fu_43432_p1 = esl_zext<64,6>(newIndex376_fu_43422_p4.read());
}

void calcHash_rollingHash::thread_newIndex700_fu_59401_p3() {
    newIndex700_fu_59401_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_751_fu_59391_p4.read());
}

void calcHash_rollingHash::thread_newIndex701_fu_59409_p1() {
    newIndex701_fu_59409_p1 = esl_zext<64,5>(newIndex700_fu_59401_p3.read());
}

void calcHash_rollingHash::thread_newIndex702_fu_59430_p3() {
    newIndex702_fu_59430_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_755_fu_59420_p4.read());
}

void calcHash_rollingHash::thread_newIndex7035970360_fu_43331_p1() {
    newIndex7035970360_fu_43331_p1 = esl_zext<64,6>(newIndex373_fu_43321_p4.read());
}

void calcHash_rollingHash::thread_newIndex703_fu_61373_p3() {
    newIndex703_fu_61373_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1789_fu_61363_p4.read());
}

void calcHash_rollingHash::thread_newIndex704_fu_59438_p1() {
    newIndex704_fu_59438_p1 = esl_zext<64,5>(newIndex702_fu_59430_p3.read());
}

void calcHash_rollingHash::thread_newIndex705_fu_59459_p3() {
    newIndex705_fu_59459_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_759_fu_59449_p4.read());
}

void calcHash_rollingHash::thread_newIndex7062170622_fu_43311_p1() {
    newIndex7062170622_fu_43311_p1 = esl_zext<64,6>(newIndex370_fu_43301_p4.read());
}

void calcHash_rollingHash::thread_newIndex706_fu_59467_p1() {
    newIndex706_fu_59467_p1 = esl_zext<64,5>(newIndex705_fu_59459_p3.read());
}

void calcHash_rollingHash::thread_newIndex707_fu_59488_p3() {
    newIndex707_fu_59488_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_763_fu_59478_p4.read());
}

void calcHash_rollingHash::thread_newIndex7088370884_fu_43210_p1() {
    newIndex7088370884_fu_43210_p1 = esl_zext<64,6>(newIndex367_fu_43200_p4.read());
}

void calcHash_rollingHash::thread_newIndex708_fu_59496_p1() {
    newIndex708_fu_59496_p1 = esl_zext<64,5>(newIndex707_fu_59488_p3.read());
}

void calcHash_rollingHash::thread_newIndex709_fu_59517_p3() {
    newIndex709_fu_59517_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_767_fu_59507_p4.read());
}

void calcHash_rollingHash::thread_newIndex70_fu_37876_p4() {
    newIndex70_fu_37876_p4 = tmp_4_21_fu_37871_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex710_fu_59525_p1() {
    newIndex710_fu_59525_p1 = esl_zext<64,5>(newIndex709_fu_59517_p3.read());
}

void calcHash_rollingHash::thread_newIndex7114571146_fu_43190_p1() {
    newIndex7114571146_fu_43190_p1 = esl_zext<64,6>(newIndex364_fu_43180_p4.read());
}

void calcHash_rollingHash::thread_newIndex711_fu_59546_p3() {
    newIndex711_fu_59546_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_771_fu_59536_p4.read());
}

void calcHash_rollingHash::thread_newIndex712_fu_59554_p1() {
    newIndex712_fu_59554_p1 = esl_zext<64,5>(newIndex711_fu_59546_p3.read());
}

void calcHash_rollingHash::thread_newIndex713_fu_59575_p3() {
    newIndex713_fu_59575_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_775_fu_59565_p4.read());
}

void calcHash_rollingHash::thread_newIndex7140771408_fu_43089_p1() {
    newIndex7140771408_fu_43089_p1 = esl_zext<64,6>(newIndex361_fu_43079_p4.read());
}

void calcHash_rollingHash::thread_newIndex714_fu_59583_p1() {
    newIndex714_fu_59583_p1 = esl_zext<64,5>(newIndex713_fu_59575_p3.read());
}

void calcHash_rollingHash::thread_newIndex715_fu_59604_p3() {
    newIndex715_fu_59604_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_779_fu_59594_p4.read());
}

void calcHash_rollingHash::thread_newIndex7166971670_fu_43069_p1() {
    newIndex7166971670_fu_43069_p1 = esl_zext<64,6>(newIndex358_fu_43059_p4.read());
}

void calcHash_rollingHash::thread_newIndex716_fu_59612_p1() {
    newIndex716_fu_59612_p1 = esl_zext<64,5>(newIndex715_fu_59604_p3.read());
}

void calcHash_rollingHash::thread_newIndex717_fu_59633_p3() {
    newIndex717_fu_59633_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_783_fu_59623_p4.read());
}

void calcHash_rollingHash::thread_newIndex718_fu_59641_p1() {
    newIndex718_fu_59641_p1 = esl_zext<64,5>(newIndex717_fu_59633_p3.read());
}

void calcHash_rollingHash::thread_newIndex7193171932_fu_42968_p1() {
    newIndex7193171932_fu_42968_p1 = esl_zext<64,6>(newIndex355_fu_42958_p4.read());
}

void calcHash_rollingHash::thread_newIndex719_fu_59662_p3() {
    newIndex719_fu_59662_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_787_fu_59652_p4.read());
}

void calcHash_rollingHash::thread_newIndex71_fu_37886_p1() {
    newIndex71_fu_37886_p1 = esl_zext<64,6>(newIndex70_fu_37876_p4.read());
}

void calcHash_rollingHash::thread_newIndex720_fu_59670_p1() {
    newIndex720_fu_59670_p1 = esl_zext<64,5>(newIndex719_fu_59662_p3.read());
}

void calcHash_rollingHash::thread_newIndex7219372194_fu_42948_p1() {
    newIndex7219372194_fu_42948_p1 = esl_zext<64,6>(newIndex352_fu_42938_p4.read());
}

void calcHash_rollingHash::thread_newIndex721_fu_59691_p3() {
    newIndex721_fu_59691_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_791_fu_59681_p4.read());
}

void calcHash_rollingHash::thread_newIndex722_fu_59699_p1() {
    newIndex722_fu_59699_p1 = esl_zext<64,5>(newIndex721_fu_59691_p3.read());
}

void calcHash_rollingHash::thread_newIndex723_fu_59720_p3() {
    newIndex723_fu_59720_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_795_fu_59710_p4.read());
}

void calcHash_rollingHash::thread_newIndex7245572456_fu_42847_p1() {
    newIndex7245572456_fu_42847_p1 = esl_zext<64,6>(newIndex349_fu_42837_p4.read());
}

void calcHash_rollingHash::thread_newIndex724_fu_59728_p1() {
    newIndex724_fu_59728_p1 = esl_zext<64,5>(newIndex723_fu_59720_p3.read());
}

void calcHash_rollingHash::thread_newIndex725_fu_59749_p3() {
    newIndex725_fu_59749_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_799_fu_59739_p4.read());
}

void calcHash_rollingHash::thread_newIndex726_fu_59757_p1() {
    newIndex726_fu_59757_p1 = esl_zext<64,5>(newIndex725_fu_59749_p3.read());
}

void calcHash_rollingHash::thread_newIndex7271772718_fu_42827_p1() {
    newIndex7271772718_fu_42827_p1 = esl_zext<64,6>(newIndex346_fu_42817_p4.read());
}

void calcHash_rollingHash::thread_newIndex727_fu_59778_p3() {
    newIndex727_fu_59778_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_803_fu_59768_p4.read());
}

void calcHash_rollingHash::thread_newIndex728_fu_59786_p1() {
    newIndex728_fu_59786_p1 = esl_zext<64,5>(newIndex727_fu_59778_p3.read());
}

void calcHash_rollingHash::thread_newIndex7297972980_fu_42726_p1() {
    newIndex7297972980_fu_42726_p1 = esl_zext<64,6>(newIndex343_fu_42716_p4.read());
}

void calcHash_rollingHash::thread_newIndex729_fu_59807_p3() {
    newIndex729_fu_59807_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_807_fu_59797_p4.read());
}

void calcHash_rollingHash::thread_newIndex72_fu_37957_p4() {
    newIndex72_fu_37957_p4 = i_4_20_fu_37951_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex730_fu_59815_p1() {
    newIndex730_fu_59815_p1 = esl_zext<64,5>(newIndex729_fu_59807_p3.read());
}

void calcHash_rollingHash::thread_newIndex731_fu_59836_p3() {
    newIndex731_fu_59836_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_811_fu_59826_p4.read());
}

void calcHash_rollingHash::thread_newIndex7324173242_fu_42706_p1() {
    newIndex7324173242_fu_42706_p1 = esl_zext<64,6>(newIndex340_fu_42696_p4.read());
}

void calcHash_rollingHash::thread_newIndex732_fu_59844_p1() {
    newIndex732_fu_59844_p1 = esl_zext<64,5>(newIndex731_fu_59836_p3.read());
}

void calcHash_rollingHash::thread_newIndex733_fu_59865_p3() {
    newIndex733_fu_59865_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_815_fu_59855_p4.read());
}

void calcHash_rollingHash::thread_newIndex734_fu_59873_p1() {
    newIndex734_fu_59873_p1 = esl_zext<64,5>(newIndex733_fu_59865_p3.read());
}

void calcHash_rollingHash::thread_newIndex7350373504_fu_42605_p1() {
    newIndex7350373504_fu_42605_p1 = esl_zext<64,6>(newIndex337_fu_42595_p4.read());
}

void calcHash_rollingHash::thread_newIndex735_fu_59894_p3() {
    newIndex735_fu_59894_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_819_fu_59884_p4.read());
}

void calcHash_rollingHash::thread_newIndex736_fu_59902_p1() {
    newIndex736_fu_59902_p1 = esl_zext<64,5>(newIndex735_fu_59894_p3.read());
}

void calcHash_rollingHash::thread_newIndex7376573766_fu_42585_p1() {
    newIndex7376573766_fu_42585_p1 = esl_zext<64,6>(newIndex334_fu_42575_p4.read());
}

void calcHash_rollingHash::thread_newIndex737_fu_59923_p3() {
    newIndex737_fu_59923_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_823_fu_59913_p4.read());
}

void calcHash_rollingHash::thread_newIndex738_fu_59931_p1() {
    newIndex738_fu_59931_p1 = esl_zext<64,5>(newIndex737_fu_59923_p3.read());
}

void calcHash_rollingHash::thread_newIndex739_fu_59952_p3() {
    newIndex739_fu_59952_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_827_fu_59942_p4.read());
}

void calcHash_rollingHash::thread_newIndex73_fu_37967_p1() {
    newIndex73_fu_37967_p1 = esl_zext<64,5>(newIndex72_fu_37957_p4.read());
}

void calcHash_rollingHash::thread_newIndex7402774028_fu_42484_p1() {
    newIndex7402774028_fu_42484_p1 = esl_zext<64,6>(newIndex331_fu_42474_p4.read());
}

void calcHash_rollingHash::thread_newIndex740_fu_59960_p1() {
    newIndex740_fu_59960_p1 = esl_zext<64,5>(newIndex739_fu_59952_p3.read());
}

void calcHash_rollingHash::thread_newIndex741_fu_59981_p3() {
    newIndex741_fu_59981_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_831_fu_59971_p4.read());
}

void calcHash_rollingHash::thread_newIndex7428974290_fu_42464_p1() {
    newIndex7428974290_fu_42464_p1 = esl_zext<64,6>(newIndex328_fu_42454_p4.read());
}

void calcHash_rollingHash::thread_newIndex742_fu_59989_p1() {
    newIndex742_fu_59989_p1 = esl_zext<64,5>(newIndex741_fu_59981_p3.read());
}

void calcHash_rollingHash::thread_newIndex743_fu_60010_p3() {
    newIndex743_fu_60010_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_835_fu_60000_p4.read());
}

void calcHash_rollingHash::thread_newIndex744_fu_60018_p1() {
    newIndex744_fu_60018_p1 = esl_zext<64,5>(newIndex743_fu_60010_p3.read());
}

void calcHash_rollingHash::thread_newIndex7455174552_fu_42363_p1() {
    newIndex7455174552_fu_42363_p1 = esl_zext<64,6>(newIndex325_fu_42353_p4.read());
}

void calcHash_rollingHash::thread_newIndex745_fu_60039_p3() {
    newIndex745_fu_60039_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_839_fu_60029_p4.read());
}

void calcHash_rollingHash::thread_newIndex746_fu_60047_p1() {
    newIndex746_fu_60047_p1 = esl_zext<64,5>(newIndex745_fu_60039_p3.read());
}

void calcHash_rollingHash::thread_newIndex747_fu_60068_p3() {
    newIndex747_fu_60068_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_843_fu_60058_p4.read());
}

void calcHash_rollingHash::thread_newIndex7481374814_fu_42343_p1() {
    newIndex7481374814_fu_42343_p1 = esl_zext<64,6>(newIndex322_fu_42333_p4.read());
}

void calcHash_rollingHash::thread_newIndex748_fu_60076_p1() {
    newIndex748_fu_60076_p1 = esl_zext<64,5>(newIndex747_fu_60068_p3.read());
}

void calcHash_rollingHash::thread_newIndex749_fu_60097_p3() {
    newIndex749_fu_60097_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_847_fu_60087_p4.read());
}

void calcHash_rollingHash::thread_newIndex74_fu_37977_p4() {
    newIndex74_fu_37977_p4 = tmp_4_22_fu_37972_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex7507575076_fu_42242_p1() {
    newIndex7507575076_fu_42242_p1 = esl_zext<64,6>(newIndex319_fu_42232_p4.read());
}

void calcHash_rollingHash::thread_newIndex750_fu_60105_p1() {
    newIndex750_fu_60105_p1 = esl_zext<64,5>(newIndex749_fu_60097_p3.read());
}

void calcHash_rollingHash::thread_newIndex751_fu_60126_p3() {
    newIndex751_fu_60126_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_851_fu_60116_p4.read());
}

void calcHash_rollingHash::thread_newIndex752_fu_60134_p1() {
    newIndex752_fu_60134_p1 = esl_zext<64,5>(newIndex751_fu_60126_p3.read());
}

void calcHash_rollingHash::thread_newIndex7533775338_fu_42222_p1() {
    newIndex7533775338_fu_42222_p1 = esl_zext<64,6>(newIndex316_fu_42212_p4.read());
}

void calcHash_rollingHash::thread_newIndex753_fu_60155_p3() {
    newIndex753_fu_60155_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_855_fu_60145_p4.read());
}

void calcHash_rollingHash::thread_newIndex754_fu_60163_p1() {
    newIndex754_fu_60163_p1 = esl_zext<64,5>(newIndex753_fu_60155_p3.read());
}

void calcHash_rollingHash::thread_newIndex7559975600_fu_42121_p1() {
    newIndex7559975600_fu_42121_p1 = esl_zext<64,6>(newIndex313_fu_42111_p4.read());
}

void calcHash_rollingHash::thread_newIndex755_fu_60184_p3() {
    newIndex755_fu_60184_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_859_fu_60174_p4.read());
}

void calcHash_rollingHash::thread_newIndex756_fu_60192_p1() {
    newIndex756_fu_60192_p1 = esl_zext<64,5>(newIndex755_fu_60184_p3.read());
}

void calcHash_rollingHash::thread_newIndex757_fu_60213_p3() {
    newIndex757_fu_60213_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_863_fu_60203_p4.read());
}

void calcHash_rollingHash::thread_newIndex7586175862_fu_42101_p1() {
    newIndex7586175862_fu_42101_p1 = esl_zext<64,6>(newIndex309_fu_42091_p4.read());
}

void calcHash_rollingHash::thread_newIndex758_fu_60221_p1() {
    newIndex758_fu_60221_p1 = esl_zext<64,5>(newIndex757_fu_60213_p3.read());
}

void calcHash_rollingHash::thread_newIndex759_fu_60242_p3() {
    newIndex759_fu_60242_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_867_fu_60232_p4.read());
}

void calcHash_rollingHash::thread_newIndex75_fu_37987_p1() {
    newIndex75_fu_37987_p1 = esl_zext<64,6>(newIndex74_fu_37977_p4.read());
}

void calcHash_rollingHash::thread_newIndex760_fu_60250_p1() {
    newIndex760_fu_60250_p1 = esl_zext<64,5>(newIndex759_fu_60242_p3.read());
}

void calcHash_rollingHash::thread_newIndex7612376124_fu_42000_p1() {
    newIndex7612376124_fu_42000_p1 = esl_zext<64,6>(newIndex306_fu_41990_p4.read());
}

void calcHash_rollingHash::thread_newIndex761_fu_60271_p3() {
    newIndex761_fu_60271_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_871_fu_60261_p4.read());
}

void calcHash_rollingHash::thread_newIndex762_fu_60279_p1() {
    newIndex762_fu_60279_p1 = esl_zext<64,5>(newIndex761_fu_60271_p3.read());
}

void calcHash_rollingHash::thread_newIndex7638576386_fu_41980_p1() {
    newIndex7638576386_fu_41980_p1 = esl_zext<64,6>(newIndex303_fu_41970_p4.read());
}

void calcHash_rollingHash::thread_newIndex763_fu_60300_p3() {
    newIndex763_fu_60300_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_875_fu_60290_p4.read());
}

void calcHash_rollingHash::thread_newIndex764_fu_60308_p1() {
    newIndex764_fu_60308_p1 = esl_zext<64,5>(newIndex763_fu_60300_p3.read());
}

void calcHash_rollingHash::thread_newIndex765_fu_60329_p3() {
    newIndex765_fu_60329_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_879_fu_60319_p4.read());
}

void calcHash_rollingHash::thread_newIndex7664776648_fu_41879_p1() {
    newIndex7664776648_fu_41879_p1 = esl_zext<64,6>(newIndex300_fu_41869_p4.read());
}

void calcHash_rollingHash::thread_newIndex766_fu_60337_p1() {
    newIndex766_fu_60337_p1 = esl_zext<64,5>(newIndex765_fu_60329_p3.read());
}

void calcHash_rollingHash::thread_newIndex767_fu_60358_p3() {
    newIndex767_fu_60358_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_883_fu_60348_p4.read());
}

void calcHash_rollingHash::thread_newIndex768_fu_60366_p1() {
    newIndex768_fu_60366_p1 = esl_zext<64,5>(newIndex767_fu_60358_p3.read());
}

void calcHash_rollingHash::thread_newIndex7690976910_fu_41859_p1() {
    newIndex7690976910_fu_41859_p1 = esl_zext<64,6>(newIndex297_fu_41849_p4.read());
}

void calcHash_rollingHash::thread_newIndex769_fu_60387_p3() {
    newIndex769_fu_60387_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_887_fu_60377_p4.read());
}

void calcHash_rollingHash::thread_newIndex76_fu_38057_p4() {
    newIndex76_fu_38057_p4 = i_4_21_fu_38031_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex770_fu_60395_p1() {
    newIndex770_fu_60395_p1 = esl_zext<64,5>(newIndex769_fu_60387_p3.read());
}

void calcHash_rollingHash::thread_newIndex7717177172_fu_41758_p1() {
    newIndex7717177172_fu_41758_p1 = esl_zext<64,6>(newIndex294_fu_41748_p4.read());
}

void calcHash_rollingHash::thread_newIndex771_fu_60416_p3() {
    newIndex771_fu_60416_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_891_fu_60406_p4.read());
}

void calcHash_rollingHash::thread_newIndex772_fu_60424_p1() {
    newIndex772_fu_60424_p1 = esl_zext<64,5>(newIndex771_fu_60416_p3.read());
}

void calcHash_rollingHash::thread_newIndex773_fu_60445_p3() {
    newIndex773_fu_60445_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_895_fu_60435_p4.read());
}

void calcHash_rollingHash::thread_newIndex7743377434_fu_41738_p1() {
    newIndex7743377434_fu_41738_p1 = esl_zext<64,6>(newIndex291_fu_41728_p4.read());
}

void calcHash_rollingHash::thread_newIndex774_fu_60453_p1() {
    newIndex774_fu_60453_p1 = esl_zext<64,5>(newIndex773_fu_60445_p3.read());
}

void calcHash_rollingHash::thread_newIndex775_fu_60474_p3() {
    newIndex775_fu_60474_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_899_fu_60464_p4.read());
}

void calcHash_rollingHash::thread_newIndex7769577696_fu_41637_p1() {
    newIndex7769577696_fu_41637_p1 = esl_zext<64,6>(newIndex288_fu_41627_p4.read());
}

void calcHash_rollingHash::thread_newIndex776_fu_60482_p1() {
    newIndex776_fu_60482_p1 = esl_zext<64,5>(newIndex775_fu_60474_p3.read());
}

void calcHash_rollingHash::thread_newIndex777_fu_60503_p3() {
    newIndex777_fu_60503_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_903_fu_60493_p4.read());
}

void calcHash_rollingHash::thread_newIndex778_fu_60511_p1() {
    newIndex778_fu_60511_p1 = esl_zext<64,5>(newIndex777_fu_60503_p3.read());
}

void calcHash_rollingHash::thread_newIndex7795777958_fu_41617_p1() {
    newIndex7795777958_fu_41617_p1 = esl_zext<64,6>(newIndex285_fu_41607_p4.read());
}

void calcHash_rollingHash::thread_newIndex779_fu_60532_p3() {
    newIndex779_fu_60532_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_907_fu_60522_p4.read());
}

void calcHash_rollingHash::thread_newIndex77_fu_38067_p1() {
    newIndex77_fu_38067_p1 = esl_zext<64,5>(newIndex76_fu_38057_p4.read());
}

void calcHash_rollingHash::thread_newIndex780_fu_60540_p1() {
    newIndex780_fu_60540_p1 = esl_zext<64,5>(newIndex779_fu_60532_p3.read());
}

void calcHash_rollingHash::thread_newIndex781_fu_60561_p3() {
    newIndex781_fu_60561_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_911_fu_60551_p4.read());
}

void calcHash_rollingHash::thread_newIndex7821978220_fu_41516_p1() {
    newIndex7821978220_fu_41516_p1 = esl_zext<64,6>(newIndex282_fu_41506_p4.read());
}

void calcHash_rollingHash::thread_newIndex782_fu_60569_p1() {
    newIndex782_fu_60569_p1 = esl_zext<64,5>(newIndex781_fu_60561_p3.read());
}

void calcHash_rollingHash::thread_newIndex783_fu_60590_p3() {
    newIndex783_fu_60590_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_915_fu_60580_p4.read());
}

void calcHash_rollingHash::thread_newIndex7848178482_fu_41496_p1() {
    newIndex7848178482_fu_41496_p1 = esl_zext<64,6>(newIndex279_fu_41486_p4.read());
}

void calcHash_rollingHash::thread_newIndex784_fu_60598_p1() {
    newIndex784_fu_60598_p1 = esl_zext<64,5>(newIndex783_fu_60590_p3.read());
}

void calcHash_rollingHash::thread_newIndex785_fu_60619_p3() {
    newIndex785_fu_60619_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_919_fu_60609_p4.read());
}

void calcHash_rollingHash::thread_newIndex786_fu_60627_p1() {
    newIndex786_fu_60627_p1 = esl_zext<64,5>(newIndex785_fu_60619_p3.read());
}

void calcHash_rollingHash::thread_newIndex7874378744_fu_41395_p1() {
    newIndex7874378744_fu_41395_p1 = esl_zext<64,6>(newIndex276_fu_41385_p4.read());
}

void calcHash_rollingHash::thread_newIndex787_fu_60648_p3() {
    newIndex787_fu_60648_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_923_fu_60638_p4.read());
}

void calcHash_rollingHash::thread_newIndex788_fu_60656_p1() {
    newIndex788_fu_60656_p1 = esl_zext<64,5>(newIndex787_fu_60648_p3.read());
}

void calcHash_rollingHash::thread_newIndex789_fu_60677_p3() {
    newIndex789_fu_60677_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_927_fu_60667_p4.read());
}

void calcHash_rollingHash::thread_newIndex78_fu_37997_p4() {
    newIndex78_fu_37997_p4 = tmp_4_23_fu_37992_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex7900579006_fu_41375_p1() {
    newIndex7900579006_fu_41375_p1 = esl_zext<64,6>(newIndex273_fu_41365_p4.read());
}

void calcHash_rollingHash::thread_newIndex790_fu_60685_p1() {
    newIndex790_fu_60685_p1 = esl_zext<64,5>(newIndex789_fu_60677_p3.read());
}

void calcHash_rollingHash::thread_newIndex791_fu_60706_p3() {
    newIndex791_fu_60706_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_931_fu_60696_p4.read());
}

void calcHash_rollingHash::thread_newIndex7926779268_fu_41274_p1() {
    newIndex7926779268_fu_41274_p1 = esl_zext<64,6>(newIndex270_fu_41264_p4.read());
}

void calcHash_rollingHash::thread_newIndex792_fu_60714_p1() {
    newIndex792_fu_60714_p1 = esl_zext<64,5>(newIndex791_fu_60706_p3.read());
}

void calcHash_rollingHash::thread_newIndex793_fu_60735_p3() {
    newIndex793_fu_60735_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_935_fu_60725_p4.read());
}

void calcHash_rollingHash::thread_newIndex794_fu_60743_p1() {
    newIndex794_fu_60743_p1 = esl_zext<64,5>(newIndex793_fu_60735_p3.read());
}

void calcHash_rollingHash::thread_newIndex7952979530_fu_41254_p1() {
    newIndex7952979530_fu_41254_p1 = esl_zext<64,6>(newIndex267_fu_41244_p4.read());
}

void calcHash_rollingHash::thread_newIndex795_fu_60764_p3() {
    newIndex795_fu_60764_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_939_fu_60754_p4.read());
}

void calcHash_rollingHash::thread_newIndex796_fu_60772_p1() {
    newIndex796_fu_60772_p1 = esl_zext<64,5>(newIndex795_fu_60764_p3.read());
}

void calcHash_rollingHash::thread_newIndex7979179792_fu_41153_p1() {
    newIndex7979179792_fu_41153_p1 = esl_zext<64,6>(newIndex264_fu_41143_p4.read());
}

void calcHash_rollingHash::thread_newIndex797_fu_60793_p3() {
    newIndex797_fu_60793_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_943_fu_60783_p4.read());
}

void calcHash_rollingHash::thread_newIndex798_fu_60801_p1() {
    newIndex798_fu_60801_p1 = esl_zext<64,5>(newIndex797_fu_60793_p3.read());
}

void calcHash_rollingHash::thread_newIndex799_fu_60822_p3() {
    newIndex799_fu_60822_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_947_fu_60812_p4.read());
}

void calcHash_rollingHash::thread_newIndex79_fu_38007_p1() {
    newIndex79_fu_38007_p1 = esl_zext<64,6>(newIndex78_fu_37997_p4.read());
}

void calcHash_rollingHash::thread_newIndex7_fu_36654_p1() {
    newIndex7_fu_36654_p1 = esl_zext<64,6>(newIndex6_fu_36644_p4.read());
}

void calcHash_rollingHash::thread_newIndex8005380054_fu_41133_p1() {
    newIndex8005380054_fu_41133_p1 = esl_zext<64,6>(newIndex261_fu_41123_p4.read());
}

void calcHash_rollingHash::thread_newIndex800_fu_60830_p1() {
    newIndex800_fu_60830_p1 = esl_zext<64,5>(newIndex799_fu_60822_p3.read());
}

void calcHash_rollingHash::thread_newIndex801_fu_60851_p3() {
    newIndex801_fu_60851_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_951_fu_60841_p4.read());
}

void calcHash_rollingHash::thread_newIndex802_fu_60859_p1() {
    newIndex802_fu_60859_p1 = esl_zext<64,5>(newIndex801_fu_60851_p3.read());
}

void calcHash_rollingHash::thread_newIndex8031580316_fu_41032_p1() {
    newIndex8031580316_fu_41032_p1 = esl_zext<64,6>(newIndex258_fu_41022_p4.read());
}

void calcHash_rollingHash::thread_newIndex803_fu_60880_p3() {
    newIndex803_fu_60880_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_955_fu_60870_p4.read());
}

void calcHash_rollingHash::thread_newIndex804_fu_60888_p1() {
    newIndex804_fu_60888_p1 = esl_zext<64,5>(newIndex803_fu_60880_p3.read());
}

void calcHash_rollingHash::thread_newIndex8057780578_fu_41012_p1() {
    newIndex8057780578_fu_41012_p1 = esl_zext<64,6>(newIndex255_fu_41002_p4.read());
}

void calcHash_rollingHash::thread_newIndex805_fu_60909_p3() {
    newIndex805_fu_60909_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_959_fu_60899_p4.read());
}

void calcHash_rollingHash::thread_newIndex806_fu_60917_p1() {
    newIndex806_fu_60917_p1 = esl_zext<64,5>(newIndex805_fu_60909_p3.read());
}

void calcHash_rollingHash::thread_newIndex807_fu_60938_p3() {
    newIndex807_fu_60938_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_963_fu_60928_p4.read());
}

void calcHash_rollingHash::thread_newIndex8083980840_fu_40911_p1() {
    newIndex8083980840_fu_40911_p1 = esl_zext<64,6>(newIndex252_fu_40901_p4.read());
}

void calcHash_rollingHash::thread_newIndex808_fu_60946_p1() {
    newIndex808_fu_60946_p1 = esl_zext<64,5>(newIndex807_fu_60938_p3.read());
}

void calcHash_rollingHash::thread_newIndex809_fu_60967_p3() {
    newIndex809_fu_60967_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_967_fu_60957_p4.read());
}

void calcHash_rollingHash::thread_newIndex80_fu_38078_p4() {
    newIndex80_fu_38078_p4 = i_4_22_fu_38072_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex810_fu_60975_p1() {
    newIndex810_fu_60975_p1 = esl_zext<64,5>(newIndex809_fu_60967_p3.read());
}

void calcHash_rollingHash::thread_newIndex8110181102_fu_40891_p1() {
    newIndex8110181102_fu_40891_p1 = esl_zext<64,6>(newIndex249_fu_40881_p4.read());
}

void calcHash_rollingHash::thread_newIndex811_fu_60996_p3() {
    newIndex811_fu_60996_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_971_fu_60986_p4.read());
}

void calcHash_rollingHash::thread_newIndex812_fu_61004_p1() {
    newIndex812_fu_61004_p1 = esl_zext<64,5>(newIndex811_fu_60996_p3.read());
}

void calcHash_rollingHash::thread_newIndex8136381364_fu_40790_p1() {
    newIndex8136381364_fu_40790_p1 = esl_zext<64,6>(newIndex246_fu_40780_p4.read());
}

void calcHash_rollingHash::thread_newIndex813_fu_61025_p3() {
    newIndex813_fu_61025_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_975_fu_61015_p4.read());
}

void calcHash_rollingHash::thread_newIndex814_fu_61033_p1() {
    newIndex814_fu_61033_p1 = esl_zext<64,5>(newIndex813_fu_61025_p3.read());
}

void calcHash_rollingHash::thread_newIndex815_fu_61054_p3() {
    newIndex815_fu_61054_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_979_fu_61044_p4.read());
}

void calcHash_rollingHash::thread_newIndex8162581626_fu_40770_p1() {
    newIndex8162581626_fu_40770_p1 = esl_zext<64,6>(newIndex243_fu_40760_p4.read());
}

void calcHash_rollingHash::thread_newIndex816_fu_61062_p1() {
    newIndex816_fu_61062_p1 = esl_zext<64,5>(newIndex815_fu_61054_p3.read());
}

void calcHash_rollingHash::thread_newIndex817_fu_61083_p3() {
    newIndex817_fu_61083_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_983_fu_61073_p4.read());
}

void calcHash_rollingHash::thread_newIndex8188781888_fu_40669_p1() {
    newIndex8188781888_fu_40669_p1 = esl_zext<64,6>(newIndex240_fu_40659_p4.read());
}

void calcHash_rollingHash::thread_newIndex818_fu_61091_p1() {
    newIndex818_fu_61091_p1 = esl_zext<64,5>(newIndex817_fu_61083_p3.read());
}

void calcHash_rollingHash::thread_newIndex819_fu_61112_p3() {
    newIndex819_fu_61112_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_987_fu_61102_p4.read());
}

void calcHash_rollingHash::thread_newIndex81_fu_38088_p1() {
    newIndex81_fu_38088_p1 = esl_zext<64,5>(newIndex80_fu_38078_p4.read());
}

void calcHash_rollingHash::thread_newIndex820_fu_61120_p1() {
    newIndex820_fu_61120_p1 = esl_zext<64,5>(newIndex819_fu_61112_p3.read());
}

void calcHash_rollingHash::thread_newIndex8214982150_fu_40649_p1() {
    newIndex8214982150_fu_40649_p1 = esl_zext<64,6>(newIndex237_fu_40639_p4.read());
}

void calcHash_rollingHash::thread_newIndex821_fu_61141_p3() {
    newIndex821_fu_61141_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_991_fu_61131_p4.read());
}

void calcHash_rollingHash::thread_newIndex822_fu_61149_p1() {
    newIndex822_fu_61149_p1 = esl_zext<64,5>(newIndex821_fu_61141_p3.read());
}

void calcHash_rollingHash::thread_newIndex823_fu_61170_p3() {
    newIndex823_fu_61170_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_995_fu_61160_p4.read());
}

void calcHash_rollingHash::thread_newIndex8241182412_fu_40548_p1() {
    newIndex8241182412_fu_40548_p1 = esl_zext<64,6>(newIndex234_fu_40538_p4.read());
}

void calcHash_rollingHash::thread_newIndex824_fu_61178_p1() {
    newIndex824_fu_61178_p1 = esl_zext<64,5>(newIndex823_fu_61170_p3.read());
}

void calcHash_rollingHash::thread_newIndex825_fu_61199_p3() {
    newIndex825_fu_61199_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_999_fu_61189_p4.read());
}

void calcHash_rollingHash::thread_newIndex8267382674_fu_40528_p1() {
    newIndex8267382674_fu_40528_p1 = esl_zext<64,6>(newIndex231_fu_40518_p4.read());
}

void calcHash_rollingHash::thread_newIndex826_fu_61207_p1() {
    newIndex826_fu_61207_p1 = esl_zext<64,5>(newIndex825_fu_61199_p3.read());
}

void calcHash_rollingHash::thread_newIndex827_fu_61228_p3() {
    newIndex827_fu_61228_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1003_fu_61218_p4.read());
}

void calcHash_rollingHash::thread_newIndex828_fu_61236_p1() {
    newIndex828_fu_61236_p1 = esl_zext<64,5>(newIndex827_fu_61228_p3.read());
}

void calcHash_rollingHash::thread_newIndex8293582936_fu_40427_p1() {
    newIndex8293582936_fu_40427_p1 = esl_zext<64,6>(newIndex228_fu_40417_p4.read());
}

void calcHash_rollingHash::thread_newIndex829_fu_61257_p3() {
    newIndex829_fu_61257_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1007_fu_61247_p4.read());
}

void calcHash_rollingHash::thread_newIndex82_fu_38098_p4() {
    newIndex82_fu_38098_p4 = tmp_4_24_fu_38093_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex830_fu_61265_p1() {
    newIndex830_fu_61265_p1 = esl_zext<64,5>(newIndex829_fu_61257_p3.read());
}

void calcHash_rollingHash::thread_newIndex8319783198_fu_40407_p1() {
    newIndex8319783198_fu_40407_p1 = esl_zext<64,6>(newIndex225_fu_40397_p4.read());
}

void calcHash_rollingHash::thread_newIndex831_fu_61286_p3() {
    newIndex831_fu_61286_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1011_fu_61276_p4.read());
}

void calcHash_rollingHash::thread_newIndex832_fu_61294_p1() {
    newIndex832_fu_61294_p1 = esl_zext<64,5>(newIndex831_fu_61286_p3.read());
}

void calcHash_rollingHash::thread_newIndex833_fu_61315_p3() {
    newIndex833_fu_61315_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1015_fu_61305_p4.read());
}

void calcHash_rollingHash::thread_newIndex8345983460_fu_40306_p1() {
    newIndex8345983460_fu_40306_p1 = esl_zext<64,6>(newIndex222_fu_40296_p4.read());
}

void calcHash_rollingHash::thread_newIndex834_fu_61344_p3() {
    newIndex834_fu_61344_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1019_fu_61334_p4.read());
}

void calcHash_rollingHash::thread_newIndex835_fu_61323_p1() {
    newIndex835_fu_61323_p1 = esl_zext<64,5>(newIndex833_fu_61315_p3.read());
}

void calcHash_rollingHash::thread_newIndex836_fu_61352_p1() {
    newIndex836_fu_61352_p1 = esl_zext<64,5>(newIndex834_fu_61344_p3.read());
}

void calcHash_rollingHash::thread_newIndex8372183722_fu_40286_p1() {
    newIndex8372183722_fu_40286_p1 = esl_zext<64,6>(newIndex219_fu_40276_p4.read());
}

void calcHash_rollingHash::thread_newIndex837_fu_61381_p1() {
    newIndex837_fu_61381_p1 = esl_zext<64,5>(newIndex703_fu_61373_p3.read());
}

void calcHash_rollingHash::thread_newIndex838_fu_61410_p1() {
    newIndex838_fu_61410_p1 = esl_zext<64,5>(newIndex572_fu_61402_p3.read());
}

void calcHash_rollingHash::thread_newIndex8398383984_fu_40185_p1() {
    newIndex8398383984_fu_40185_p1 = esl_zext<64,6>(newIndex216_fu_40175_p4.read());
}

void calcHash_rollingHash::thread_newIndex839_fu_61439_p1() {
    newIndex839_fu_61439_p1 = esl_zext<64,5>(newIndex441_fu_61431_p3.read());
}

void calcHash_rollingHash::thread_newIndex83_fu_38108_p1() {
    newIndex83_fu_38108_p1 = esl_zext<64,6>(newIndex82_fu_38098_p4.read());
}

void calcHash_rollingHash::thread_newIndex840_fu_61468_p1() {
    newIndex840_fu_61468_p1 = esl_zext<64,5>(newIndex310_fu_61460_p3.read());
}

void calcHash_rollingHash::thread_newIndex8424584246_fu_40165_p1() {
    newIndex8424584246_fu_40165_p1 = esl_zext<64,6>(newIndex213_fu_40155_p4.read());
}

void calcHash_rollingHash::thread_newIndex8450784508_fu_40064_p1() {
    newIndex8450784508_fu_40064_p1 = esl_zext<64,6>(newIndex210_fu_40054_p4.read());
}

void calcHash_rollingHash::thread_newIndex8476984770_fu_40044_p1() {
    newIndex8476984770_fu_40044_p1 = esl_zext<64,6>(newIndex207_fu_40034_p4.read());
}

void calcHash_rollingHash::thread_newIndex84_fu_38178_p4() {
    newIndex84_fu_38178_p4 = i_4_23_fu_38152_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex8503185032_fu_39943_p1() {
    newIndex8503185032_fu_39943_p1 = esl_zext<64,6>(newIndex204_fu_39933_p4.read());
}

void calcHash_rollingHash::thread_newIndex8529385294_fu_39923_p1() {
    newIndex8529385294_fu_39923_p1 = esl_zext<64,6>(newIndex201_fu_39913_p4.read());
}

void calcHash_rollingHash::thread_newIndex8555585556_fu_39822_p1() {
    newIndex8555585556_fu_39822_p1 = esl_zext<64,6>(newIndex198_fu_39812_p4.read());
}

void calcHash_rollingHash::thread_newIndex8581785818_fu_39802_p1() {
    newIndex8581785818_fu_39802_p1 = esl_zext<64,6>(newIndex195_fu_39792_p4.read());
}

void calcHash_rollingHash::thread_newIndex85_fu_38188_p1() {
    newIndex85_fu_38188_p1 = esl_zext<64,5>(newIndex84_fu_38178_p4.read());
}

void calcHash_rollingHash::thread_newIndex86_fu_38118_p4() {
    newIndex86_fu_38118_p4 = tmp_4_25_fu_38113_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex87_fu_38128_p1() {
    newIndex87_fu_38128_p1 = esl_zext<64,6>(newIndex86_fu_38118_p4.read());
}

void calcHash_rollingHash::thread_newIndex88_fu_38199_p4() {
    newIndex88_fu_38199_p4 = i_4_24_fu_38193_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex89_fu_38209_p1() {
    newIndex89_fu_38209_p1 = esl_zext<64,5>(newIndex88_fu_38199_p4.read());
}

void calcHash_rollingHash::thread_newIndex8_fu_36726_p4() {
    newIndex8_fu_36726_p4 = i_4_fu_36700_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex90_fu_38219_p4() {
    newIndex90_fu_38219_p4 = tmp_4_26_fu_38214_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex91_fu_38229_p1() {
    newIndex91_fu_38229_p1 = esl_zext<64,6>(newIndex90_fu_38219_p4.read());
}

void calcHash_rollingHash::thread_newIndex92_fu_38299_p4() {
    newIndex92_fu_38299_p4 = i_4_25_fu_38273_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex93_fu_38309_p1() {
    newIndex93_fu_38309_p1 = esl_zext<64,5>(newIndex92_fu_38299_p4.read());
}

void calcHash_rollingHash::thread_newIndex94_fu_38239_p4() {
    newIndex94_fu_38239_p4 = tmp_4_27_fu_38234_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex95_fu_38249_p1() {
    newIndex95_fu_38249_p1 = esl_zext<64,6>(newIndex94_fu_38239_p4.read());
}

void calcHash_rollingHash::thread_newIndex96_fu_38320_p4() {
    newIndex96_fu_38320_p4 = i_4_26_fu_38314_p2.read().range(11, 7);
}

void calcHash_rollingHash::thread_newIndex97_fu_38330_p1() {
    newIndex97_fu_38330_p1 = esl_zext<64,5>(newIndex96_fu_38320_p4.read());
}

void calcHash_rollingHash::thread_newIndex98_fu_38340_p4() {
    newIndex98_fu_38340_p4 = tmp_4_28_fu_38335_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex99_fu_38350_p1() {
    newIndex99_fu_38350_p1 = esl_zext<64,6>(newIndex98_fu_38340_p4.read());
}

void calcHash_rollingHash::thread_newIndex9_fu_36665_p4() {
    newIndex9_fu_36665_p4 = tmp_4_2_fu_36659_p2.read().range(12, 7);
}

void calcHash_rollingHash::thread_newIndex_fu_61489_p3() {
    newIndex_fu_61489_p3 = esl_concat<1,4>(ap_const_lv1_1, tmp_1813_fu_61479_p4.read());
}

void calcHash_rollingHash::thread_newSel100_fu_57170_p3() {
    newSel100_fu_57170_p3 = (!or_cond171_fu_56675_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond171_fu_56675_p2.read()[0].to_bool())? newSel58_fu_56669_p3.read(): newSel59_fu_56681_p3.read());
}

void calcHash_rollingHash::thread_newSel101_fu_57184_p3() {
    newSel101_fu_57184_p3 = (!or_cond173_fu_56699_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond173_fu_56699_p2.read()[0].to_bool())? newSel60_fu_56693_p3.read(): newSel61_fu_56705_p3.read());
}

void calcHash_rollingHash::thread_newSel102_fu_57192_p3() {
    newSel102_fu_57192_p3 = (!or_cond175_fu_56717_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond175_fu_56717_p2.read()[0].to_bool())? newSel62_fu_56711_p3.read(): newSel63_fu_56723_p3.read());
}

void calcHash_rollingHash::thread_newSel103_fu_57206_p3() {
    newSel103_fu_57206_p3 = (!or_cond177_fu_56741_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond177_fu_56741_p2.read()[0].to_bool())? newSel64_fu_56735_p3.read(): newSel65_fu_56747_p3.read());
}

void calcHash_rollingHash::thread_newSel104_fu_57220_p3() {
    newSel104_fu_57220_p3 = (!or_cond179_fu_56765_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond179_fu_56765_p2.read()[0].to_bool())? newSel66_fu_56759_p3.read(): newSel67_fu_56771_p3.read());
}

void calcHash_rollingHash::thread_newSel105_fu_57234_p3() {
    newSel105_fu_57234_p3 = (!or_cond181_fu_56789_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond181_fu_56789_p2.read()[0].to_bool())? newSel68_fu_56783_p3.read(): newSel69_fu_56795_p3.read());
}

void calcHash_rollingHash::thread_newSel106_fu_57242_p3() {
    newSel106_fu_57242_p3 = (!or_cond183_fu_56807_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond183_fu_56807_p2.read()[0].to_bool())? newSel70_fu_56801_p3.read(): newSel71_fu_56813_p3.read());
}

void calcHash_rollingHash::thread_newSel107_fu_57256_p3() {
    newSel107_fu_57256_p3 = (!or_cond185_fu_56831_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond185_fu_56831_p2.read()[0].to_bool())? newSel72_fu_56825_p3.read(): newSel73_fu_56837_p3.read());
}

void calcHash_rollingHash::thread_newSel108_fu_57270_p3() {
    newSel108_fu_57270_p3 = (!or_cond187_fu_56855_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond187_fu_56855_p2.read()[0].to_bool())? newSel74_fu_56849_p3.read(): newSel75_fu_56861_p3.read());
}

void calcHash_rollingHash::thread_newSel109_fu_57284_p3() {
    newSel109_fu_57284_p3 = (!or_cond189_fu_56879_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond189_fu_56879_p2.read()[0].to_bool())? newSel76_fu_56873_p3.read(): newSel77_fu_56885_p3.read());
}

void calcHash_rollingHash::thread_newSel10_fu_49829_p3() {
    newSel10_fu_49829_p3 = esl_concat<3,7>(tmp_19_138_fu_49819_p4.read(), newSel2289_v_fu_49811_p3.read());
}

void calcHash_rollingHash::thread_newSel110_fu_57511_p3() {
    newSel110_fu_57511_p3 = (!or_cond191_reg_79036.read()[0].is_01())? sc_lv<12>(): ((or_cond191_reg_79036.read()[0].to_bool())? newSel78_reg_79031.read(): newSel79_reg_79041.read());
}

void calcHash_rollingHash::thread_newSel111_fu_57298_p3() {
    newSel111_fu_57298_p3 = (!or_cond193_fu_56928_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond193_fu_56928_p2.read()[0].to_bool())? newSel80_fu_56920_p3.read(): newSel81_fu_56934_p3.read());
}

void calcHash_rollingHash::thread_newSel112_fu_57521_p3() {
    newSel112_fu_57521_p3 = (!or_cond195_reg_79056.read()[0].is_01())? sc_lv<12>(): ((or_cond195_reg_79056.read()[0].to_bool())? newSel82_reg_79051.read(): newSel83_reg_79061.read());
}

void calcHash_rollingHash::thread_newSel113_fu_57312_p3() {
    newSel113_fu_57312_p3 = (!or_cond197_fu_56978_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond197_fu_56978_p2.read()[0].to_bool())? newSel84_fu_56970_p3.read(): newSel85_fu_56984_p3.read());
}

void calcHash_rollingHash::thread_newSel114_fu_57531_p3() {
    newSel114_fu_57531_p3 = (!or_cond199_reg_79076.read()[0].is_01())? sc_lv<12>(): ((or_cond199_reg_79076.read()[0].to_bool())? newSel86_reg_79071.read(): newSel87_reg_79081.read());
}

void calcHash_rollingHash::thread_newSel115_fu_57326_p3() {
    newSel115_fu_57326_p3 = (!or_cond201_fu_57028_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond201_fu_57028_p2.read()[0].to_bool())? newSel88_fu_57020_p3.read(): newSel89_fu_57034_p3.read());
}

void calcHash_rollingHash::thread_newSel116_fu_57541_p3() {
    newSel116_fu_57541_p3 = (!or_cond203_reg_79096.read()[0].is_01())? sc_lv<12>(): ((or_cond203_reg_79096.read()[0].to_bool())? newSel90_reg_79091.read(): newSel91_reg_79101.read());
}

void calcHash_rollingHash::thread_newSel117_fu_57340_p3() {
    newSel117_fu_57340_p3 = (!or_cond205_fu_57078_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond205_fu_57078_p2.read()[0].to_bool())? newSel92_fu_57070_p3.read(): newSel93_fu_57084_p3.read());
}

void calcHash_rollingHash::thread_newSel118_fu_57551_p3() {
    newSel118_fu_57551_p3 = (!or_cond207_reg_79116.read()[0].is_01())? sc_lv<12>(): ((or_cond207_reg_79116.read()[0].to_bool())? newSel94_reg_79111.read(): newSel95_reg_79121.read());
}

void calcHash_rollingHash::thread_newSel119_fu_57354_p3() {
    newSel119_fu_57354_p3 = (!or_cond209_fu_57128_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond209_fu_57128_p2.read()[0].to_bool())? newSel96_fu_57120_p3.read(): newSel97_fu_57134_p3.read());
}

void calcHash_rollingHash::thread_newSel11_fu_49843_p3() {
    newSel11_fu_49843_p3 = (!or_cond122_fu_49791_p2.read()[0].is_01())? sc_lv<10>(): ((or_cond122_fu_49791_p2.read()[0].to_bool())? newSel8_fu_49783_p3.read(): newSel9_fu_49797_p3.read());
}

void calcHash_rollingHash::thread_newSel120_fu_57561_p3() {
    newSel120_fu_57561_p3 = (!or_cond211_reg_79136.read()[0].is_01())? sc_lv<12>(): ((or_cond211_reg_79136.read()[0].to_bool())? newSel98_reg_79131.read(): newSel99_reg_79141.read());
}

void calcHash_rollingHash::thread_newSel121_fu_57368_p3() {
    newSel121_fu_57368_p3 = (!or_cond213_fu_57178_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond213_fu_57178_p2.read()[0].to_bool())? newSel100_fu_57170_p3.read(): newSel101_fu_57184_p3.read());
}

void calcHash_rollingHash::thread_newSel122_fu_57571_p3() {
    newSel122_fu_57571_p3 = (!or_cond215_reg_79156.read()[0].is_01())? sc_lv<12>(): ((or_cond215_reg_79156.read()[0].to_bool())? newSel102_reg_79151.read(): newSel103_reg_79161.read());
}

void calcHash_rollingHash::thread_newSel123_fu_57382_p3() {
    newSel123_fu_57382_p3 = (!or_cond217_fu_57228_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond217_fu_57228_p2.read()[0].to_bool())? newSel104_fu_57220_p3.read(): newSel105_fu_57234_p3.read());
}

void calcHash_rollingHash::thread_newSel124_fu_57581_p3() {
    newSel124_fu_57581_p3 = (!or_cond219_reg_79176.read()[0].is_01())? sc_lv<12>(): ((or_cond219_reg_79176.read()[0].to_bool())? newSel106_reg_79171.read(): newSel107_reg_79181.read());
}

void calcHash_rollingHash::thread_newSel125_fu_57396_p3() {
    newSel125_fu_57396_p3 = (!or_cond221_fu_57278_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond221_fu_57278_p2.read()[0].to_bool())? newSel108_fu_57270_p3.read(): newSel109_fu_57284_p3.read());
}

void calcHash_rollingHash::thread_newSel126_fu_57591_p3() {
    newSel126_fu_57591_p3 = (!or_cond223_reg_79191.read()[0].is_01())? sc_lv<12>(): ((or_cond223_reg_79191.read()[0].to_bool())? newSel110_fu_57511_p3.read(): newSel111_reg_79197.read());
}

void calcHash_rollingHash::thread_newSel127_fu_57602_p3() {
    newSel127_fu_57602_p3 = (!or_cond225_reg_79202.read()[0].is_01())? sc_lv<12>(): ((or_cond225_reg_79202.read()[0].to_bool())? newSel112_fu_57521_p3.read(): newSel113_reg_79208.read());
}

void calcHash_rollingHash::thread_newSel128_fu_57613_p3() {
    newSel128_fu_57613_p3 = (!or_cond227_reg_79213.read()[0].is_01())? sc_lv<12>(): ((or_cond227_reg_79213.read()[0].to_bool())? newSel114_fu_57531_p3.read(): newSel115_reg_79219.read());
}

void calcHash_rollingHash::thread_newSel129_fu_57624_p3() {
    newSel129_fu_57624_p3 = (!or_cond229_reg_79224.read()[0].is_01())? sc_lv<12>(): ((or_cond229_reg_79224.read()[0].to_bool())? newSel116_fu_57541_p3.read(): newSel117_reg_79230.read());
}

void calcHash_rollingHash::thread_newSel12_fu_49857_p3() {
    newSel12_fu_49857_p3 = (!or_cond124_fu_49837_p2.read()[0].is_01())? sc_lv<10>(): ((or_cond124_fu_49837_p2.read()[0].to_bool())? newSel10_fu_49829_p3.read(): newSel11_fu_49843_p3.read());
}

void calcHash_rollingHash::thread_newSel130_fu_57635_p3() {
    newSel130_fu_57635_p3 = (!or_cond231_reg_79235.read()[0].is_01())? sc_lv<12>(): ((or_cond231_reg_79235.read()[0].to_bool())? newSel118_fu_57551_p3.read(): newSel119_reg_79241.read());
}

void calcHash_rollingHash::thread_newSel131_fu_57646_p3() {
    newSel131_fu_57646_p3 = (!or_cond233_reg_79246.read()[0].is_01())? sc_lv<12>(): ((or_cond233_reg_79246.read()[0].to_bool())? newSel120_fu_57561_p3.read(): newSel121_reg_79252.read());
}

void calcHash_rollingHash::thread_newSel132_fu_57657_p3() {
    newSel132_fu_57657_p3 = (!or_cond235_reg_79257.read()[0].is_01())? sc_lv<12>(): ((or_cond235_reg_79257.read()[0].to_bool())? newSel122_fu_57571_p3.read(): newSel123_reg_79263.read());
}

void calcHash_rollingHash::thread_newSel133_fu_57668_p3() {
    newSel133_fu_57668_p3 = (!or_cond237_reg_79268.read()[0].is_01())? sc_lv<12>(): ((or_cond237_reg_79268.read()[0].to_bool())? newSel124_fu_57581_p3.read(): newSel125_reg_79274.read());
}

void calcHash_rollingHash::thread_newSel134_fu_57679_p3() {
    newSel134_fu_57679_p3 = (!or_cond239_fu_57597_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond239_fu_57597_p2.read()[0].to_bool())? newSel126_fu_57591_p3.read(): newSel127_fu_57602_p3.read());
}

void calcHash_rollingHash::thread_newSel135_fu_57693_p3() {
    newSel135_fu_57693_p3 = (!or_cond241_fu_57619_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond241_fu_57619_p2.read()[0].to_bool())? newSel128_fu_57613_p3.read(): newSel129_fu_57624_p3.read());
}

void calcHash_rollingHash::thread_newSel136_fu_57707_p3() {
    newSel136_fu_57707_p3 = (!or_cond243_fu_57641_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond243_fu_57641_p2.read()[0].to_bool())? newSel130_fu_57635_p3.read(): newSel131_fu_57646_p3.read());
}

void calcHash_rollingHash::thread_newSel137_fu_57721_p3() {
    newSel137_fu_57721_p3 = (!or_cond245_fu_57663_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond245_fu_57663_p2.read()[0].to_bool())? newSel132_fu_57657_p3.read(): newSel133_fu_57668_p3.read());
}

void calcHash_rollingHash::thread_newSel138_fu_57735_p3() {
    newSel138_fu_57735_p3 = (!or_cond247_fu_57687_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond247_fu_57687_p2.read()[0].to_bool())? newSel134_fu_57679_p3.read(): newSel135_fu_57693_p3.read());
}

void calcHash_rollingHash::thread_newSel139_fu_57749_p3() {
    newSel139_fu_57749_p3 = (!or_cond249_fu_57715_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond249_fu_57715_p2.read()[0].to_bool())? newSel136_fu_57707_p3.read(): newSel137_fu_57721_p3.read());
}

void calcHash_rollingHash::thread_newSel13_fu_49875_p3() {
    newSel13_fu_49875_p3 = (!or_cond126_fu_49869_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond126_fu_49869_p2.read()[0].to_bool())? newSel2293_cast_fu_49865_p1.read(): indices_1_reg_18728.read());
}

void calcHash_rollingHash::thread_newSel140_fu_57763_p3() {
    newSel140_fu_57763_p3 = (!or_cond251_fu_57743_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond251_fu_57743_p2.read()[0].to_bool())? newSel138_fu_57735_p3.read(): newSel139_fu_57749_p3.read());
}

void calcHash_rollingHash::thread_newSel141_fu_57781_p3() {
    newSel141_fu_57781_p3 = (!or_cond253_fu_57775_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond253_fu_57775_p2.read()[0].to_bool())? newSel2549_cast_fu_57771_p1.read(): indices128_1_reg_18752.read());
}

void calcHash_rollingHash::thread_newSel142_fu_65978_p3() {
    newSel142_fu_65978_p3 = (!tmp_13_2_126_fu_65972_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_126_fu_65972_p2.read()[0].to_bool())? index_2_126_fu_65943_p3.read(): index_2_125_fu_65908_p3.read());
}

void calcHash_rollingHash::thread_newSel143_fu_65992_p3() {
    newSel143_fu_65992_p3 = (!tmp_13_2_124_fu_65902_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_124_fu_65902_p2.read()[0].to_bool())? index_2_124_fu_65873_p3.read(): index_2_123_fu_65838_p3.read());
}

void calcHash_rollingHash::thread_newSel144_fu_66006_p3() {
    newSel144_fu_66006_p3 = (!tmp_13_2_122_fu_65832_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_122_fu_65832_p2.read()[0].to_bool())? index_2_122_fu_65803_p3.read(): index_2_121_fu_65768_p3.read());
}

void calcHash_rollingHash::thread_newSel145_fu_66020_p3() {
    newSel145_fu_66020_p3 = (!tmp_13_2_120_fu_65762_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_120_fu_65762_p2.read()[0].to_bool())? index_2_120_fu_65733_p3.read(): index_2_119_fu_65698_p3.read());
}

void calcHash_rollingHash::thread_newSel146_fu_66034_p3() {
    newSel146_fu_66034_p3 = (!tmp_13_2_118_fu_65692_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_118_fu_65692_p2.read()[0].to_bool())? index_2_118_fu_65663_p3.read(): index_2_117_fu_65628_p3.read());
}

void calcHash_rollingHash::thread_newSel147_fu_66048_p3() {
    newSel147_fu_66048_p3 = (!tmp_13_2_116_fu_65622_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_116_fu_65622_p2.read()[0].to_bool())? index_2_116_fu_65593_p3.read(): index_2_115_fu_65558_p3.read());
}

void calcHash_rollingHash::thread_newSel148_fu_66062_p3() {
    newSel148_fu_66062_p3 = (!tmp_13_2_114_fu_65552_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_114_fu_65552_p2.read()[0].to_bool())? index_2_114_fu_65523_p3.read(): index_2_113_fu_65488_p3.read());
}

void calcHash_rollingHash::thread_newSel149_fu_66076_p3() {
    newSel149_fu_66076_p3 = (!tmp_13_2_112_fu_65482_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_112_fu_65482_p2.read()[0].to_bool())? index_2_112_fu_65453_p3.read(): index_2_111_fu_65418_p3.read());
}

void calcHash_rollingHash::thread_newSel14_fu_56171_p3() {
    newSel14_fu_56171_p3 = (!tmp_13_1_126_fu_56165_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_126_fu_56165_p2.read()[0].to_bool())? index_1_126_reg_78901.read(): index_1_125_reg_78891.read());
}

void calcHash_rollingHash::thread_newSel150_fu_66084_p3() {
    newSel150_fu_66084_p3 = (!tmp_13_2_110_fu_65412_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_110_fu_65412_p2.read()[0].to_bool())? index_2_110_fu_65383_p3.read(): index_2_109_fu_65348_p3.read());
}

void calcHash_rollingHash::thread_newSel151_fu_66098_p3() {
    newSel151_fu_66098_p3 = (!tmp_13_2_108_fu_65342_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_108_fu_65342_p2.read()[0].to_bool())? index_2_108_fu_65313_p3.read(): index_2_107_fu_65278_p3.read());
}

void calcHash_rollingHash::thread_newSel152_fu_66112_p3() {
    newSel152_fu_66112_p3 = (!tmp_13_2_106_fu_65272_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_106_fu_65272_p2.read()[0].to_bool())? index_2_106_fu_65243_p3.read(): index_2_105_fu_65208_p3.read());
}

void calcHash_rollingHash::thread_newSel153_fu_66126_p3() {
    newSel153_fu_66126_p3 = (!tmp_13_2_104_fu_65202_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_104_fu_65202_p2.read()[0].to_bool())? index_2_104_fu_65173_p3.read(): index_2_103_fu_65138_p3.read());
}

void calcHash_rollingHash::thread_newSel154_fu_66140_p3() {
    newSel154_fu_66140_p3 = (!tmp_13_2_102_fu_65132_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_102_fu_65132_p2.read()[0].to_bool())? index_2_102_fu_65103_p3.read(): index_2_101_fu_65068_p3.read());
}

void calcHash_rollingHash::thread_newSel155_fu_66154_p3() {
    newSel155_fu_66154_p3 = (!tmp_13_2_100_fu_65062_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_100_fu_65062_p2.read()[0].to_bool())? index_2_100_fu_65033_p3.read(): index_2_99_fu_64998_p3.read());
}

void calcHash_rollingHash::thread_newSel156_fu_66168_p3() {
    newSel156_fu_66168_p3 = (!tmp_13_2_98_fu_64992_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_98_fu_64992_p2.read()[0].to_bool())? index_2_98_fu_64963_p3.read(): index_2_97_fu_64928_p3.read());
}

void calcHash_rollingHash::thread_newSel157_fu_66182_p3() {
    newSel157_fu_66182_p3 = (!tmp_13_2_96_fu_64922_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_96_fu_64922_p2.read()[0].to_bool())? index_2_96_fu_64893_p3.read(): index_2_95_fu_64858_p3.read());
}

void calcHash_rollingHash::thread_newSel158_fu_66190_p3() {
    newSel158_fu_66190_p3 = (!tmp_13_2_94_fu_64852_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_94_fu_64852_p2.read()[0].to_bool())? index_2_94_fu_64823_p3.read(): index_2_93_fu_64788_p3.read());
}

void calcHash_rollingHash::thread_newSel159_fu_66204_p3() {
    newSel159_fu_66204_p3 = (!tmp_13_2_92_fu_64782_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_92_fu_64782_p2.read()[0].to_bool())? index_2_92_fu_64753_p3.read(): index_2_91_fu_64718_p3.read());
}

void calcHash_rollingHash::thread_newSel15_fu_56183_p3() {
    newSel15_fu_56183_p3 = (!tmp_13_1_124_fu_56109_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_124_fu_56109_p2.read()[0].to_bool())? index_1_124_reg_78881.read(): index_1_123_reg_78871.read());
}

void calcHash_rollingHash::thread_newSel160_fu_66218_p3() {
    newSel160_fu_66218_p3 = (!tmp_13_2_90_fu_64712_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_90_fu_64712_p2.read()[0].to_bool())? index_2_90_fu_64683_p3.read(): index_2_89_fu_64648_p3.read());
}

void calcHash_rollingHash::thread_newSel161_fu_66232_p3() {
    newSel161_fu_66232_p3 = (!tmp_13_2_88_fu_64642_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_88_fu_64642_p2.read()[0].to_bool())? index_2_88_fu_64613_p3.read(): index_2_87_fu_64578_p3.read());
}

void calcHash_rollingHash::thread_newSel162_fu_66246_p3() {
    newSel162_fu_66246_p3 = (!tmp_13_2_86_fu_64572_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_86_fu_64572_p2.read()[0].to_bool())? index_2_86_fu_64543_p3.read(): index_2_85_fu_64508_p3.read());
}

void calcHash_rollingHash::thread_newSel163_fu_66260_p3() {
    newSel163_fu_66260_p3 = (!tmp_13_2_84_fu_64502_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_84_fu_64502_p2.read()[0].to_bool())? index_2_84_fu_64473_p3.read(): index_2_83_fu_64438_p3.read());
}

void calcHash_rollingHash::thread_newSel164_fu_66274_p3() {
    newSel164_fu_66274_p3 = (!tmp_13_2_82_fu_64432_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_82_fu_64432_p2.read()[0].to_bool())? index_2_82_fu_64403_p3.read(): index_2_81_fu_64368_p3.read());
}

void calcHash_rollingHash::thread_newSel165_fu_66288_p3() {
    newSel165_fu_66288_p3 = (!tmp_13_2_80_fu_64362_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_80_fu_64362_p2.read()[0].to_bool())? index_2_80_fu_64333_p3.read(): index_2_79_fu_64298_p3.read());
}

void calcHash_rollingHash::thread_newSel166_fu_66296_p3() {
    newSel166_fu_66296_p3 = (!tmp_13_2_78_fu_64292_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_78_fu_64292_p2.read()[0].to_bool())? index_2_78_fu_64263_p3.read(): index_2_77_fu_64228_p3.read());
}

void calcHash_rollingHash::thread_newSel167_fu_66310_p3() {
    newSel167_fu_66310_p3 = (!tmp_13_2_76_fu_64222_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_76_fu_64222_p2.read()[0].to_bool())? index_2_76_fu_64193_p3.read(): index_2_75_fu_64158_p3.read());
}

void calcHash_rollingHash::thread_newSel168_fu_66324_p3() {
    newSel168_fu_66324_p3 = (!tmp_13_2_74_fu_64152_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_74_fu_64152_p2.read()[0].to_bool())? index_2_74_fu_64123_p3.read(): index_2_73_fu_64088_p3.read());
}

void calcHash_rollingHash::thread_newSel169_fu_66338_p3() {
    newSel169_fu_66338_p3 = (!tmp_13_2_72_fu_64082_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_72_fu_64082_p2.read()[0].to_bool())? index_2_72_fu_64053_p3.read(): index_2_71_fu_64018_p3.read());
}

void calcHash_rollingHash::thread_newSel16_fu_56195_p3() {
    newSel16_fu_56195_p3 = (!tmp_13_1_122_fu_56053_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_122_fu_56053_p2.read()[0].to_bool())? index_1_122_reg_78861.read(): index_1_121_reg_78851.read());
}

void calcHash_rollingHash::thread_newSel170_fu_66352_p3() {
    newSel170_fu_66352_p3 = (!tmp_13_2_70_fu_64012_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_70_fu_64012_p2.read()[0].to_bool())? index_2_70_fu_63983_p3.read(): index_2_69_fu_63948_p3.read());
}

void calcHash_rollingHash::thread_newSel171_fu_66366_p3() {
    newSel171_fu_66366_p3 = (!tmp_13_2_68_fu_63942_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_68_fu_63942_p2.read()[0].to_bool())? index_2_68_fu_63913_p3.read(): index_2_67_fu_63878_p3.read());
}

void calcHash_rollingHash::thread_newSel172_fu_66380_p3() {
    newSel172_fu_66380_p3 = (!tmp_13_2_66_fu_63872_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_66_fu_63872_p2.read()[0].to_bool())? index_2_66_fu_63843_p3.read(): index_2_65_fu_63808_p3.read());
}

void calcHash_rollingHash::thread_newSel173_fu_66394_p3() {
    newSel173_fu_66394_p3 = (!tmp_13_2_64_fu_63802_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_64_fu_63802_p2.read()[0].to_bool())? index_2_64_fu_63773_p3.read(): index_2_63_fu_63738_p3.read());
}

void calcHash_rollingHash::thread_newSel174_fu_66402_p3() {
    newSel174_fu_66402_p3 = (!tmp_13_2_62_fu_63732_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_62_fu_63732_p2.read()[0].to_bool())? index_2_62_fu_63703_p3.read(): index_2_61_fu_63668_p3.read());
}

void calcHash_rollingHash::thread_newSel175_fu_66416_p3() {
    newSel175_fu_66416_p3 = (!tmp_13_2_60_fu_63662_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_60_fu_63662_p2.read()[0].to_bool())? index_2_60_fu_63633_p3.read(): index_2_59_fu_63598_p3.read());
}

void calcHash_rollingHash::thread_newSel176_fu_66430_p3() {
    newSel176_fu_66430_p3 = (!tmp_13_2_58_fu_63592_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_58_fu_63592_p2.read()[0].to_bool())? index_2_58_fu_63563_p3.read(): index_2_57_fu_63528_p3.read());
}

void calcHash_rollingHash::thread_newSel177_fu_66444_p3() {
    newSel177_fu_66444_p3 = (!tmp_13_2_56_fu_63522_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_56_fu_63522_p2.read()[0].to_bool())? index_2_56_fu_63493_p3.read(): index_2_55_fu_63458_p3.read());
}

void calcHash_rollingHash::thread_newSel178_fu_66458_p3() {
    newSel178_fu_66458_p3 = (!tmp_13_2_54_fu_63452_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_54_fu_63452_p2.read()[0].to_bool())? index_2_54_fu_63423_p3.read(): index_2_53_fu_63388_p3.read());
}

void calcHash_rollingHash::thread_newSel179_fu_66472_p3() {
    newSel179_fu_66472_p3 = (!tmp_13_2_52_fu_63382_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_52_fu_63382_p2.read()[0].to_bool())? index_2_52_fu_63353_p3.read(): index_2_51_fu_63318_p3.read());
}

void calcHash_rollingHash::thread_newSel17_fu_56207_p3() {
    newSel17_fu_56207_p3 = (!tmp_13_1_120_fu_55997_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_120_fu_55997_p2.read()[0].to_bool())? index_1_120_reg_78841.read(): index_1_119_reg_78831.read());
}

void calcHash_rollingHash::thread_newSel180_fu_66486_p3() {
    newSel180_fu_66486_p3 = (!tmp_13_2_50_fu_63312_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_50_fu_63312_p2.read()[0].to_bool())? index_2_50_fu_63283_p3.read(): index_2_49_fu_63248_p3.read());
}

void calcHash_rollingHash::thread_newSel181_fu_66500_p3() {
    newSel181_fu_66500_p3 = (!tmp_13_2_48_fu_63242_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_48_fu_63242_p2.read()[0].to_bool())? index_2_48_fu_63213_p3.read(): index_2_47_fu_63178_p3.read());
}

void calcHash_rollingHash::thread_newSel182_fu_66508_p3() {
    newSel182_fu_66508_p3 = (!tmp_13_2_46_fu_63172_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_46_fu_63172_p2.read()[0].to_bool())? index_2_46_fu_63143_p3.read(): index_2_45_fu_63108_p3.read());
}

void calcHash_rollingHash::thread_newSel183_fu_66522_p3() {
    newSel183_fu_66522_p3 = (!tmp_13_2_44_fu_63102_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_44_fu_63102_p2.read()[0].to_bool())? index_2_44_fu_63073_p3.read(): index_2_43_fu_63038_p3.read());
}

void calcHash_rollingHash::thread_newSel184_fu_66536_p3() {
    newSel184_fu_66536_p3 = (!tmp_13_2_42_fu_63032_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_42_fu_63032_p2.read()[0].to_bool())? index_2_42_fu_63003_p3.read(): index_2_41_fu_62968_p3.read());
}

void calcHash_rollingHash::thread_newSel185_fu_66550_p3() {
    newSel185_fu_66550_p3 = (!tmp_13_2_40_fu_62962_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_40_fu_62962_p2.read()[0].to_bool())? index_2_40_fu_62933_p3.read(): index_2_39_fu_62898_p3.read());
}

void calcHash_rollingHash::thread_newSel186_fu_66564_p3() {
    newSel186_fu_66564_p3 = (!tmp_13_2_38_fu_62892_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_38_fu_62892_p2.read()[0].to_bool())? index_2_38_fu_62863_p3.read(): index_2_37_fu_62828_p3.read());
}

void calcHash_rollingHash::thread_newSel187_fu_66578_p3() {
    newSel187_fu_66578_p3 = (!tmp_13_2_36_fu_62822_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_36_fu_62822_p2.read()[0].to_bool())? index_2_36_fu_62793_p3.read(): index_2_35_fu_62758_p3.read());
}

void calcHash_rollingHash::thread_newSel188_fu_66592_p3() {
    newSel188_fu_66592_p3 = (!tmp_13_2_34_fu_62752_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_34_fu_62752_p2.read()[0].to_bool())? index_2_34_fu_62723_p3.read(): index_2_33_fu_62688_p3.read());
}

void calcHash_rollingHash::thread_newSel189_fu_66606_p3() {
    newSel189_fu_66606_p3 = (!tmp_13_2_32_fu_62682_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_32_fu_62682_p2.read()[0].to_bool())? index_2_32_fu_62653_p3.read(): index_2_31_fu_62618_p3.read());
}

void calcHash_rollingHash::thread_newSel18_fu_56219_p3() {
    newSel18_fu_56219_p3 = (!tmp_13_1_118_fu_55941_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_118_fu_55941_p2.read()[0].to_bool())? index_1_118_reg_78821.read(): index_1_117_reg_78811.read());
}

void calcHash_rollingHash::thread_newSel190_fu_66614_p3() {
    newSel190_fu_66614_p3 = (!tmp_13_2_30_fu_62612_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_30_fu_62612_p2.read()[0].to_bool())? index_2_30_fu_62583_p3.read(): index_2_29_fu_62548_p3.read());
}

void calcHash_rollingHash::thread_newSel191_fu_66628_p3() {
    newSel191_fu_66628_p3 = (!tmp_13_2_28_fu_62542_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_28_fu_62542_p2.read()[0].to_bool())? index_2_28_fu_62513_p3.read(): index_2_27_fu_62478_p3.read());
}

void calcHash_rollingHash::thread_newSel192_fu_66642_p3() {
    newSel192_fu_66642_p3 = (!tmp_13_2_26_fu_62472_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_26_fu_62472_p2.read()[0].to_bool())? index_2_26_fu_62443_p3.read(): index_2_25_fu_62408_p3.read());
}

void calcHash_rollingHash::thread_newSel193_fu_66656_p3() {
    newSel193_fu_66656_p3 = (!tmp_13_2_24_fu_62402_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_24_fu_62402_p2.read()[0].to_bool())? index_2_24_fu_62373_p3.read(): index_2_23_fu_62338_p3.read());
}

void calcHash_rollingHash::thread_newSel194_fu_66670_p3() {
    newSel194_fu_66670_p3 = (!tmp_13_2_22_fu_62332_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_22_fu_62332_p2.read()[0].to_bool())? index_2_22_fu_62303_p3.read(): index_2_21_fu_62268_p3.read());
}

void calcHash_rollingHash::thread_newSel195_fu_66684_p3() {
    newSel195_fu_66684_p3 = (!tmp_13_2_20_fu_62262_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_20_fu_62262_p2.read()[0].to_bool())? index_2_20_fu_62233_p3.read(): index_2_19_fu_62198_p3.read());
}

void calcHash_rollingHash::thread_newSel196_fu_66698_p3() {
    newSel196_fu_66698_p3 = (!tmp_13_2_18_fu_62192_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_18_fu_62192_p2.read()[0].to_bool())? index_2_18_fu_62163_p3.read(): index_2_17_fu_62128_p3.read());
}

void calcHash_rollingHash::thread_newSel197_fu_66712_p3() {
    newSel197_fu_66712_p3 = (!tmp_13_2_16_fu_62122_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_16_fu_62122_p2.read()[0].to_bool())? index_2_16_fu_62093_p3.read(): index_2_15_fu_62058_p3.read());
}

void calcHash_rollingHash::thread_newSel198_fu_66720_p3() {
    newSel198_fu_66720_p3 = (!tmp_13_2_14_fu_62052_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_14_fu_62052_p2.read()[0].to_bool())? index_2_14_fu_62023_p3.read(): index_2_13_fu_61988_p3.read());
}

void calcHash_rollingHash::thread_newSel199_fu_66734_p3() {
    newSel199_fu_66734_p3 = (!tmp_13_2_12_fu_61982_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_12_fu_61982_p2.read()[0].to_bool())? index_2_12_fu_61953_p3.read(): index_2_11_fu_61918_p3.read());
}

void calcHash_rollingHash::thread_newSel19_fu_56231_p3() {
    newSel19_fu_56231_p3 = (!tmp_13_1_116_fu_55885_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_116_fu_55885_p2.read()[0].to_bool())? index_1_116_reg_78801.read(): index_1_115_reg_78791.read());
}

void calcHash_rollingHash::thread_newSel1_fu_48530_p3() {
    newSel1_fu_48530_p3 = (!tmp_13_0_1_fu_44554_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_13_0_1_fu_44554_p2.read()[0].to_bool())? index_0_s_fu_44526_p2.read(): tmp_1024_fu_44494_p1.read());
}

void calcHash_rollingHash::thread_newSel200_fu_66748_p3() {
    newSel200_fu_66748_p3 = (!tmp_13_2_10_fu_61912_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_10_fu_61912_p2.read()[0].to_bool())? index_2_10_fu_61883_p3.read(): index_2_9_fu_61848_p3.read());
}

void calcHash_rollingHash::thread_newSel201_fu_66762_p3() {
    newSel201_fu_66762_p3 = (!tmp_13_2_9_fu_61842_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_9_fu_61842_p2.read()[0].to_bool())? index_2_8_fu_61813_p3.read(): index_2_7_fu_61778_p3.read());
}

void calcHash_rollingHash::thread_newSel202_fu_66776_p3() {
    newSel202_fu_66776_p3 = (!tmp_13_2_7_fu_61772_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_7_fu_61772_p2.read()[0].to_bool())? index_2_6_fu_61743_p3.read(): index_2_5_fu_61708_p3.read());
}

void calcHash_rollingHash::thread_newSel203_fu_66790_p3() {
    newSel203_fu_66790_p3 = (!tmp_13_2_5_fu_61702_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_5_fu_61702_p2.read()[0].to_bool())? index_2_4_fu_61673_p3.read(): index_2_3_fu_61638_p3.read());
}

void calcHash_rollingHash::thread_newSel2043_v_fu_48805_p3() {
    newSel2043_v_fu_48805_p3 = (!tmp_13_0_124_reg_77372.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_124_reg_77372.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void calcHash_rollingHash::thread_newSel2045_v_fu_48812_p3() {
    newSel2045_v_fu_48812_p3 = (!tmp_13_0_122_reg_77367.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_122_reg_77367.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void calcHash_rollingHash::thread_newSel2047_v_fu_48819_p3() {
    newSel2047_v_fu_48819_p3 = (!tmp_13_0_120_reg_77362.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_120_reg_77362.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void calcHash_rollingHash::thread_newSel2049_v_fu_48826_p3() {
    newSel2049_v_fu_48826_p3 = (!tmp_13_0_118_reg_77357.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_118_reg_77357.read()[0].to_bool())? ap_const_lv5_17: ap_const_lv5_16);
}

void calcHash_rollingHash::thread_newSel204_fu_66804_p3() {
    newSel204_fu_66804_p3 = (!tmp_13_2_3_fu_61632_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_3_fu_61632_p2.read()[0].to_bool())? index_2_2_fu_61603_p3.read(): index_2_1_fu_61568_p3.read());
}

void calcHash_rollingHash::thread_newSel2051_v_fu_48833_p3() {
    newSel2051_v_fu_48833_p3 = (!tmp_13_0_116_reg_77352.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_116_reg_77352.read()[0].to_bool())? ap_const_lv5_15: ap_const_lv5_14);
}

void calcHash_rollingHash::thread_newSel2053_v_fu_48840_p3() {
    newSel2053_v_fu_48840_p3 = (!tmp_13_0_114_reg_77347.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_114_reg_77347.read()[0].to_bool())? ap_const_lv5_13: ap_const_lv5_12);
}

void calcHash_rollingHash::thread_newSel2055_v_fu_48847_p3() {
    newSel2055_v_fu_48847_p3 = (!tmp_13_0_112_reg_77341.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_112_reg_77341.read()[0].to_bool())? ap_const_lv5_11: ap_const_lv5_10);
}

void calcHash_rollingHash::thread_newSel2057_v_fu_48130_p3() {
    newSel2057_v_fu_48130_p3 = (!tmp_13_0_110_fu_47634_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_110_fu_47634_p2.read()[0].to_bool())? ap_const_lv6_2F: ap_const_lv6_2E);
}

void calcHash_rollingHash::thread_newSel2059_v_fu_48144_p3() {
    newSel2059_v_fu_48144_p3 = (!tmp_13_0_108_fu_47578_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_108_fu_47578_p2.read()[0].to_bool())? ap_const_lv6_2D: ap_const_lv6_2C);
}

void calcHash_rollingHash::thread_newSel205_fu_66818_p3() {
    newSel205_fu_66818_p3 = (!tmp_13_2_1_fu_61562_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_2_1_fu_61562_p2.read()[0].to_bool())? index_2_s_fu_61533_p3.read(): index_s_fu_61502_p3.read());
}

void calcHash_rollingHash::thread_newSel2061_v_fu_48158_p3() {
    newSel2061_v_fu_48158_p3 = (!tmp_13_0_106_fu_47522_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_106_fu_47522_p2.read()[0].to_bool())? ap_const_lv6_2B: ap_const_lv6_2A);
}

void calcHash_rollingHash::thread_newSel2063_v_fu_48172_p3() {
    newSel2063_v_fu_48172_p3 = (!tmp_13_0_104_fu_47466_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_104_fu_47466_p2.read()[0].to_bool())? ap_const_lv6_29: ap_const_lv6_28);
}

void calcHash_rollingHash::thread_newSel2065_v_fu_48858_p3() {
    newSel2065_v_fu_48858_p3 = (!tmp_13_0_102_reg_77331.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_102_reg_77331.read()[0].to_bool())? ap_const_lv6_27: ap_const_lv6_26);
}

void calcHash_rollingHash::thread_newSel2067_v_fu_48865_p3() {
    newSel2067_v_fu_48865_p3 = (!tmp_13_0_100_reg_77325.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_100_reg_77325.read()[0].to_bool())? ap_const_lv6_25: ap_const_lv6_24);
}

void calcHash_rollingHash::thread_newSel2069_v_fu_48876_p3() {
    newSel2069_v_fu_48876_p3 = (!tmp_13_0_98_reg_77315.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_98_reg_77315.read()[0].to_bool())? ap_const_lv6_23: ap_const_lv6_22);
}

void calcHash_rollingHash::thread_newSel206_fu_66826_p3() {
    newSel206_fu_66826_p3 = (!or_cond254_fu_65986_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond254_fu_65986_p2.read()[0].to_bool())? newSel142_fu_65978_p3.read(): newSel143_fu_65992_p3.read());
}

void calcHash_rollingHash::thread_newSel2071_v_fu_48883_p3() {
    newSel2071_v_fu_48883_p3 = (!tmp_13_0_96_reg_77309.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_96_reg_77309.read()[0].to_bool())? ap_const_lv6_21: ap_const_lv6_20);
}

void calcHash_rollingHash::thread_newSel2073_v_fu_48894_p3() {
    newSel2073_v_fu_48894_p3 = (!tmp_13_0_94_reg_77299.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_94_reg_77299.read()[0].to_bool())? ap_const_lv7_5F: ap_const_lv7_5E);
}

void calcHash_rollingHash::thread_newSel2075_v_fu_48901_p3() {
    newSel2075_v_fu_48901_p3 = (!tmp_13_0_92_reg_77294.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_92_reg_77294.read()[0].to_bool())? ap_const_lv7_5D: ap_const_lv7_5C);
}

void calcHash_rollingHash::thread_newSel2077_v_fu_48908_p3() {
    newSel2077_v_fu_48908_p3 = (!tmp_13_0_90_reg_77289.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_90_reg_77289.read()[0].to_bool())? ap_const_lv7_5B: ap_const_lv7_5A);
}

void calcHash_rollingHash::thread_newSel2079_v_fu_48915_p3() {
    newSel2079_v_fu_48915_p3 = (!tmp_13_0_88_reg_77284.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_88_reg_77284.read()[0].to_bool())? ap_const_lv7_59: ap_const_lv7_58);
}

void calcHash_rollingHash::thread_newSel207_fu_66840_p3() {
    newSel207_fu_66840_p3 = (!or_cond256_fu_66014_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond256_fu_66014_p2.read()[0].to_bool())? newSel144_fu_66006_p3.read(): newSel145_fu_66020_p3.read());
}

void calcHash_rollingHash::thread_newSel2081_v_fu_48922_p3() {
    newSel2081_v_fu_48922_p3 = (!tmp_13_0_86_reg_77279.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_86_reg_77279.read()[0].to_bool())? ap_const_lv7_57: ap_const_lv7_56);
}

void calcHash_rollingHash::thread_newSel2083_v_fu_48929_p3() {
    newSel2083_v_fu_48929_p3 = (!tmp_13_0_84_reg_77273.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_84_reg_77273.read()[0].to_bool())? ap_const_lv7_55: ap_const_lv7_54);
}

void calcHash_rollingHash::thread_newSel2085_v_fu_48940_p3() {
    newSel2085_v_fu_48940_p3 = (!tmp_13_0_82_reg_77262.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_82_reg_77262.read()[0].to_bool())? ap_const_lv7_53: ap_const_lv7_52);
}

void calcHash_rollingHash::thread_newSel2087_v_fu_48951_p3() {
    newSel2087_v_fu_48951_p3 = (!tmp_13_0_80_reg_77251.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_80_reg_77251.read()[0].to_bool())? ap_const_lv7_51: ap_const_lv7_50);
}

void calcHash_rollingHash::thread_newSel2089_v_fu_48962_p3() {
    newSel2089_v_fu_48962_p3 = (!tmp_13_0_78_reg_77241.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_78_reg_77241.read()[0].to_bool())? ap_const_lv7_4F: ap_const_lv7_4E);
}

void calcHash_rollingHash::thread_newSel208_fu_66854_p3() {
    newSel208_fu_66854_p3 = (!or_cond258_fu_66042_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond258_fu_66042_p2.read()[0].to_bool())? newSel146_fu_66034_p3.read(): newSel147_fu_66048_p3.read());
}

void calcHash_rollingHash::thread_newSel2091_v_fu_48969_p3() {
    newSel2091_v_fu_48969_p3 = (!tmp_13_0_76_reg_77236.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_76_reg_77236.read()[0].to_bool())? ap_const_lv7_4D: ap_const_lv7_4C);
}

void calcHash_rollingHash::thread_newSel2093_v_fu_48976_p3() {
    newSel2093_v_fu_48976_p3 = (!tmp_13_0_74_reg_77231.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_74_reg_77231.read()[0].to_bool())? ap_const_lv7_4B: ap_const_lv7_4A);
}

void calcHash_rollingHash::thread_newSel2095_v_fu_48983_p3() {
    newSel2095_v_fu_48983_p3 = (!tmp_13_0_72_reg_77226.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_72_reg_77226.read()[0].to_bool())? ap_const_lv7_49: ap_const_lv7_48);
}

void calcHash_rollingHash::thread_newSel2097_v_fu_48990_p3() {
    newSel2097_v_fu_48990_p3 = (!tmp_13_0_70_reg_77221.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_70_reg_77221.read()[0].to_bool())? ap_const_lv7_47: ap_const_lv7_46);
}

void calcHash_rollingHash::thread_newSel2099_v_fu_48997_p3() {
    newSel2099_v_fu_48997_p3 = (!tmp_13_0_68_reg_77215.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_68_reg_77215.read()[0].to_bool())? ap_const_lv7_45: ap_const_lv7_44);
}

void calcHash_rollingHash::thread_newSel209_fu_66868_p3() {
    newSel209_fu_66868_p3 = (!or_cond260_fu_66070_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond260_fu_66070_p2.read()[0].to_bool())? newSel148_fu_66062_p3.read(): newSel149_fu_66076_p3.read());
}

void calcHash_rollingHash::thread_newSel20_fu_56243_p3() {
    newSel20_fu_56243_p3 = (!tmp_13_1_114_fu_55829_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_114_fu_55829_p2.read()[0].to_bool())? index_1_114_reg_78781.read(): index_1_113_reg_78771.read());
}

void calcHash_rollingHash::thread_newSel2101_v_fu_49008_p3() {
    newSel2101_v_fu_49008_p3 = (!tmp_13_0_66_reg_77205.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_66_reg_77205.read()[0].to_bool())? ap_const_lv7_43: ap_const_lv7_42);
}

void calcHash_rollingHash::thread_newSel2103_v_fu_49015_p3() {
    newSel2103_v_fu_49015_p3 = (!tmp_13_0_64_reg_77199.read()[0].is_01())? sc_lv<7>(): ((tmp_13_0_64_reg_77199.read()[0].to_bool())? ap_const_lv7_41: ap_const_lv7_40);
}

void calcHash_rollingHash::thread_newSel2105_v_cast_cast_fu_49026_p3() {
    newSel2105_v_cast_cast_fu_49026_p3 = (!tmp_13_0_62_reg_77189.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_62_reg_77189.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void calcHash_rollingHash::thread_newSel2107_v_fu_49033_p3() {
    newSel2107_v_fu_49033_p3 = (!tmp_13_0_60_reg_77184.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_60_reg_77184.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void calcHash_rollingHash::thread_newSel2109_v_fu_49040_p3() {
    newSel2109_v_fu_49040_p3 = (!tmp_13_0_58_reg_77179.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_58_reg_77179.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void calcHash_rollingHash::thread_newSel210_fu_66876_p3() {
    newSel210_fu_66876_p3 = (!or_cond262_fu_66092_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond262_fu_66092_p2.read()[0].to_bool())? newSel150_fu_66084_p3.read(): newSel151_fu_66098_p3.read());
}

void calcHash_rollingHash::thread_newSel2111_v_fu_49047_p3() {
    newSel2111_v_fu_49047_p3 = (!tmp_13_0_56_reg_77173.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_56_reg_77173.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void calcHash_rollingHash::thread_newSel2113_v_fu_49058_p3() {
    newSel2113_v_fu_49058_p3 = (!tmp_13_0_54_reg_77163.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_54_reg_77163.read()[0].to_bool())? ap_const_lv5_17: ap_const_lv5_16);
}

void calcHash_rollingHash::thread_newSel2115_v_fu_49065_p3() {
    newSel2115_v_fu_49065_p3 = (!tmp_13_0_52_reg_77157.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_52_reg_77157.read()[0].to_bool())? ap_const_lv5_15: ap_const_lv5_14);
}

void calcHash_rollingHash::thread_newSel2117_v_fu_49076_p3() {
    newSel2117_v_fu_49076_p3 = (!tmp_13_0_50_reg_77147.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_50_reg_77147.read()[0].to_bool())? ap_const_lv5_13: ap_const_lv5_12);
}

void calcHash_rollingHash::thread_newSel2119_v_fu_49083_p3() {
    newSel2119_v_fu_49083_p3 = (!tmp_13_0_48_reg_77141.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_48_reg_77141.read()[0].to_bool())? ap_const_lv5_11: ap_const_lv5_10);
}

void calcHash_rollingHash::thread_newSel211_fu_66890_p3() {
    newSel211_fu_66890_p3 = (!or_cond264_fu_66120_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond264_fu_66120_p2.read()[0].to_bool())? newSel152_fu_66112_p3.read(): newSel153_fu_66126_p3.read());
}

void calcHash_rollingHash::thread_newSel2121_v_fu_48294_p3() {
    newSel2121_v_fu_48294_p3 = (!tmp_13_0_46_fu_45842_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_46_fu_45842_p2.read()[0].to_bool())? ap_const_lv6_2F: ap_const_lv6_2E);
}

void calcHash_rollingHash::thread_newSel2123_v_fu_48308_p3() {
    newSel2123_v_fu_48308_p3 = (!tmp_13_0_44_fu_45786_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_44_fu_45786_p2.read()[0].to_bool())? ap_const_lv6_2D: ap_const_lv6_2C);
}

void calcHash_rollingHash::thread_newSel2125_v_fu_48322_p3() {
    newSel2125_v_fu_48322_p3 = (!tmp_13_0_42_fu_45730_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_42_fu_45730_p2.read()[0].to_bool())? ap_const_lv6_2B: ap_const_lv6_2A);
}

void calcHash_rollingHash::thread_newSel2127_v_fu_48336_p3() {
    newSel2127_v_fu_48336_p3 = (!tmp_13_0_40_fu_45674_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_40_fu_45674_p2.read()[0].to_bool())? ap_const_lv6_29: ap_const_lv6_28);
}

void calcHash_rollingHash::thread_newSel2129_v_fu_48350_p3() {
    newSel2129_v_fu_48350_p3 = (!tmp_13_0_38_fu_45618_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_38_fu_45618_p2.read()[0].to_bool())? ap_const_lv6_27: ap_const_lv6_26);
}

void calcHash_rollingHash::thread_newSel212_fu_66904_p3() {
    newSel212_fu_66904_p3 = (!or_cond266_fu_66148_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond266_fu_66148_p2.read()[0].to_bool())? newSel154_fu_66140_p3.read(): newSel155_fu_66154_p3.read());
}

void calcHash_rollingHash::thread_newSel2131_v_fu_48364_p3() {
    newSel2131_v_fu_48364_p3 = (!tmp_13_0_36_fu_45562_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_36_fu_45562_p2.read()[0].to_bool())? ap_const_lv6_25: ap_const_lv6_24);
}

void calcHash_rollingHash::thread_newSel2133_v_fu_48378_p3() {
    newSel2133_v_fu_48378_p3 = (!tmp_13_0_34_fu_45506_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_34_fu_45506_p2.read()[0].to_bool())? ap_const_lv6_23: ap_const_lv6_22);
}

void calcHash_rollingHash::thread_newSel2135_v_fu_48392_p3() {
    newSel2135_v_fu_48392_p3 = (!tmp_13_0_32_fu_45450_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_13_0_32_fu_45450_p2.read()[0].to_bool())? ap_const_lv6_21: ap_const_lv6_20);
}

void calcHash_rollingHash::thread_newSel2137_v_cast_cast_fu_49098_p3() {
    newSel2137_v_cast_cast_fu_49098_p3 = (!tmp_13_0_30_reg_77121.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_30_reg_77121.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void calcHash_rollingHash::thread_newSel2139_v_fu_49105_p3() {
    newSel2139_v_fu_49105_p3 = (!tmp_13_0_28_reg_77116.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_28_reg_77116.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void calcHash_rollingHash::thread_newSel213_fu_66918_p3() {
    newSel213_fu_66918_p3 = (!or_cond268_fu_66176_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond268_fu_66176_p2.read()[0].to_bool())? newSel156_fu_66168_p3.read(): newSel157_fu_66182_p3.read());
}

void calcHash_rollingHash::thread_newSel2141_v_fu_49112_p3() {
    newSel2141_v_fu_49112_p3 = (!tmp_13_0_26_reg_77111.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_26_reg_77111.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void calcHash_rollingHash::thread_newSel2143_v_fu_49119_p3() {
    newSel2143_v_fu_49119_p3 = (!tmp_13_0_24_reg_77105.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_24_reg_77105.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void calcHash_rollingHash::thread_newSel2145_v_fu_49130_p3() {
    newSel2145_v_fu_49130_p3 = (!tmp_13_0_22_reg_77095.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_22_reg_77095.read()[0].to_bool())? ap_const_lv5_17: ap_const_lv5_16);
}

void calcHash_rollingHash::thread_newSel2147_v_fu_49137_p3() {
    newSel2147_v_fu_49137_p3 = (!tmp_13_0_20_reg_77089.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_20_reg_77089.read()[0].to_bool())? ap_const_lv5_15: ap_const_lv5_14);
}

void calcHash_rollingHash::thread_newSel2149_v_fu_49148_p3() {
    newSel2149_v_fu_49148_p3 = (!tmp_13_0_18_reg_77079.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_18_reg_77079.read()[0].to_bool())? ap_const_lv5_13: ap_const_lv5_12);
}

void calcHash_rollingHash::thread_newSel214_fu_66926_p3() {
    newSel214_fu_66926_p3 = (!or_cond270_fu_66198_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond270_fu_66198_p2.read()[0].to_bool())? newSel158_fu_66190_p3.read(): newSel159_fu_66204_p3.read());
}

void calcHash_rollingHash::thread_newSel2151_v_fu_49155_p3() {
    newSel2151_v_fu_49155_p3 = (!tmp_13_0_16_reg_77073.read()[0].is_01())? sc_lv<5>(): ((tmp_13_0_16_reg_77073.read()[0].to_bool())? ap_const_lv5_11: ap_const_lv5_10);
}

void calcHash_rollingHash::thread_newSel2153_v_cast_cast_fu_49166_p3() {
    newSel2153_v_cast_cast_fu_49166_p3 = (!tmp_13_0_14_reg_77063.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_14_reg_77063.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void calcHash_rollingHash::thread_newSel2155_v_fu_49173_p3() {
    newSel2155_v_fu_49173_p3 = (!tmp_13_0_12_reg_77058.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_12_reg_77058.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void calcHash_rollingHash::thread_newSel2157_v_fu_48442_p3() {
    newSel2157_v_fu_48442_p3 = (!tmp_13_0_10_fu_44834_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_10_fu_44834_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void calcHash_rollingHash::thread_newSel2159_v_fu_48456_p3() {
    newSel2159_v_fu_48456_p3 = (!tmp_13_0_9_fu_44778_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_13_0_9_fu_44778_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void calcHash_rollingHash::thread_newSel215_fu_66940_p3() {
    newSel215_fu_66940_p3 = (!or_cond272_fu_66226_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond272_fu_66226_p2.read()[0].to_bool())? newSel160_fu_66218_p3.read(): newSel161_fu_66232_p3.read());
}

void calcHash_rollingHash::thread_newSel2161_v_cast_cast_fu_48470_p3() {
    newSel2161_v_cast_cast_fu_48470_p3 = (!tmp_13_0_7_fu_44722_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_7_fu_44722_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void calcHash_rollingHash::thread_newSel2163_v_fu_48484_p3() {
    newSel2163_v_fu_48484_p3 = (!tmp_13_0_5_fu_44666_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_13_0_5_fu_44666_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void calcHash_rollingHash::thread_newSel2165_v_cast_fu_48498_p3() {
    newSel2165_v_cast_fu_48498_p3 = (!tmp_13_0_3_fu_44610_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_13_0_3_fu_44610_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void calcHash_rollingHash::thread_newSel2169_v_cast_fu_49191_p1() {
    newSel2169_v_cast_fu_49191_p1 = esl_sext<4,3>(newSel2169_v_fu_49184_p3.read());
}

void calcHash_rollingHash::thread_newSel2169_v_fu_49184_p3() {
    newSel2169_v_fu_49184_p3 = (!or_cond_reg_77382.read()[0].is_01())? sc_lv<3>(): ((or_cond_reg_77382.read()[0].to_bool())? newSel_v_cast_cast_fu_48798_p3.read(): newSel2043_v_fu_48805_p3.read());
}

void calcHash_rollingHash::thread_newSel216_fu_66954_p3() {
    newSel216_fu_66954_p3 = (!or_cond274_fu_66254_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond274_fu_66254_p2.read()[0].to_bool())? newSel162_fu_66246_p3.read(): newSel163_fu_66260_p3.read());
}

void calcHash_rollingHash::thread_newSel2171_v_fu_49195_p3() {
    newSel2171_v_fu_49195_p3 = (!or_cond2_reg_77387.read()[0].is_01())? sc_lv<4>(): ((or_cond2_reg_77387.read()[0].to_bool())? newSel2045_v_fu_48812_p3.read(): newSel2047_v_fu_48819_p3.read());
}

void calcHash_rollingHash::thread_newSel2173_v_fu_49202_p3() {
    newSel2173_v_fu_49202_p3 = (!or_cond4_reg_77392.read()[0].is_01())? sc_lv<5>(): ((or_cond4_reg_77392.read()[0].to_bool())? newSel2049_v_fu_48826_p3.read(): newSel2051_v_fu_48833_p3.read());
}

void calcHash_rollingHash::thread_newSel2175_v_fu_49209_p3() {
    newSel2175_v_fu_49209_p3 = (!or_cond6_reg_77397.read()[0].is_01())? sc_lv<5>(): ((or_cond6_reg_77397.read()[0].to_bool())? newSel2053_v_fu_48840_p3.read(): newSel2055_v_fu_48847_p3.read());
}

void calcHash_rollingHash::thread_newSel2177_v_fu_48556_p3() {
    newSel2177_v_fu_48556_p3 = (!or_cond8_fu_48138_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond8_fu_48138_p2.read()[0].to_bool())? newSel2057_v_fu_48130_p3.read(): newSel2059_v_fu_48144_p3.read());
}

void calcHash_rollingHash::thread_newSel2179_v_fu_48570_p3() {
    newSel2179_v_fu_48570_p3 = (!or_cond10_fu_48166_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond10_fu_48166_p2.read()[0].to_bool())? newSel2061_v_fu_48158_p3.read(): newSel2063_v_fu_48172_p3.read());
}

void calcHash_rollingHash::thread_newSel217_fu_66968_p3() {
    newSel217_fu_66968_p3 = (!or_cond276_fu_66282_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond276_fu_66282_p2.read()[0].to_bool())? newSel164_fu_66274_p3.read(): newSel165_fu_66288_p3.read());
}

void calcHash_rollingHash::thread_newSel2181_v_fu_49221_p3() {
    newSel2181_v_fu_49221_p3 = (!or_cond12_reg_77403.read()[0].is_01())? sc_lv<6>(): ((or_cond12_reg_77403.read()[0].to_bool())? newSel2065_v_fu_48858_p3.read(): newSel2067_v_fu_48865_p3.read());
}

void calcHash_rollingHash::thread_newSel2183_v_fu_49233_p3() {
    newSel2183_v_fu_49233_p3 = (!or_cond14_reg_77409.read()[0].is_01())? sc_lv<6>(): ((or_cond14_reg_77409.read()[0].to_bool())? newSel2069_v_fu_48876_p3.read(): newSel2071_v_fu_48883_p3.read());
}

void calcHash_rollingHash::thread_newSel2185_v_fu_49245_p3() {
    newSel2185_v_fu_49245_p3 = (!or_cond16_reg_77415.read()[0].is_01())? sc_lv<7>(): ((or_cond16_reg_77415.read()[0].to_bool())? newSel2073_v_fu_48894_p3.read(): newSel2075_v_fu_48901_p3.read());
}

void calcHash_rollingHash::thread_newSel2187_v_fu_49252_p3() {
    newSel2187_v_fu_49252_p3 = (!or_cond18_reg_77420.read()[0].is_01())? sc_lv<7>(): ((or_cond18_reg_77420.read()[0].to_bool())? newSel2077_v_fu_48908_p3.read(): newSel2079_v_fu_48915_p3.read());
}

void calcHash_rollingHash::thread_newSel2189_v_fu_49259_p3() {
    newSel2189_v_fu_49259_p3 = (!or_cond20_reg_77425.read()[0].is_01())? sc_lv<7>(): ((or_cond20_reg_77425.read()[0].to_bool())? newSel2081_v_fu_48922_p3.read(): newSel2083_v_fu_48929_p3.read());
}

void calcHash_rollingHash::thread_newSel218_fu_66976_p3() {
    newSel218_fu_66976_p3 = (!or_cond278_fu_66304_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond278_fu_66304_p2.read()[0].to_bool())? newSel166_fu_66296_p3.read(): newSel167_fu_66310_p3.read());
}

void calcHash_rollingHash::thread_newSel2191_v_fu_49271_p3() {
    newSel2191_v_fu_49271_p3 = (!or_cond22_fu_48947_p2.read()[0].is_01())? sc_lv<7>(): ((or_cond22_fu_48947_p2.read()[0].to_bool())? newSel2085_v_fu_48940_p3.read(): newSel2087_v_fu_48951_p3.read());
}

void calcHash_rollingHash::thread_newSel2193_v_fu_49285_p3() {
    newSel2193_v_fu_49285_p3 = (!or_cond24_reg_77431.read()[0].is_01())? sc_lv<7>(): ((or_cond24_reg_77431.read()[0].to_bool())? newSel2089_v_fu_48962_p3.read(): newSel2091_v_fu_48969_p3.read());
}

void calcHash_rollingHash::thread_newSel2195_v_fu_49292_p3() {
    newSel2195_v_fu_49292_p3 = (!or_cond26_reg_77436.read()[0].is_01())? sc_lv<7>(): ((or_cond26_reg_77436.read()[0].to_bool())? newSel2093_v_fu_48976_p3.read(): newSel2095_v_fu_48983_p3.read());
}

void calcHash_rollingHash::thread_newSel2197_v_fu_49299_p3() {
    newSel2197_v_fu_49299_p3 = (!or_cond28_reg_77441.read()[0].is_01())? sc_lv<7>(): ((or_cond28_reg_77441.read()[0].to_bool())? newSel2097_v_fu_48990_p3.read(): newSel2099_v_fu_48997_p3.read());
}

void calcHash_rollingHash::thread_newSel2199_v_fu_49311_p3() {
    newSel2199_v_fu_49311_p3 = (!or_cond30_reg_77447.read()[0].is_01())? sc_lv<7>(): ((or_cond30_reg_77447.read()[0].to_bool())? newSel2101_v_fu_49008_p3.read(): newSel2103_v_fu_49015_p3.read());
}

void calcHash_rollingHash::thread_newSel219_fu_66990_p3() {
    newSel219_fu_66990_p3 = (!or_cond280_fu_66332_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond280_fu_66332_p2.read()[0].to_bool())? newSel168_fu_66324_p3.read(): newSel169_fu_66338_p3.read());
}

void calcHash_rollingHash::thread_newSel21_fu_56255_p3() {
    newSel21_fu_56255_p3 = (!tmp_13_1_112_fu_55773_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_112_fu_55773_p2.read()[0].to_bool())? index_1_112_reg_78761.read(): index_1_111_reg_78751.read());
}

void calcHash_rollingHash::thread_newSel2201_v_cast_fu_49330_p1() {
    newSel2201_v_cast_fu_49330_p1 = esl_sext<4,3>(newSel2201_v_fu_49323_p3.read());
}

void calcHash_rollingHash::thread_newSel2201_v_fu_49323_p3() {
    newSel2201_v_fu_49323_p3 = (!or_cond32_reg_77453.read()[0].is_01())? sc_lv<3>(): ((or_cond32_reg_77453.read()[0].to_bool())? newSel2105_v_cast_cast_fu_49026_p3.read(): newSel2107_v_fu_49033_p3.read());
}

void calcHash_rollingHash::thread_newSel2203_v_fu_49334_p3() {
    newSel2203_v_fu_49334_p3 = (!or_cond34_reg_77458.read()[0].is_01())? sc_lv<4>(): ((or_cond34_reg_77458.read()[0].to_bool())? newSel2109_v_fu_49040_p3.read(): newSel2111_v_fu_49047_p3.read());
}

void calcHash_rollingHash::thread_newSel2205_v_fu_49346_p3() {
    newSel2205_v_fu_49346_p3 = (!or_cond36_reg_77464.read()[0].is_01())? sc_lv<5>(): ((or_cond36_reg_77464.read()[0].to_bool())? newSel2113_v_fu_49058_p3.read(): newSel2115_v_fu_49065_p3.read());
}

void calcHash_rollingHash::thread_newSel2207_v_fu_49358_p3() {
    newSel2207_v_fu_49358_p3 = (!or_cond38_reg_77470.read()[0].is_01())? sc_lv<5>(): ((or_cond38_reg_77470.read()[0].to_bool())? newSel2117_v_fu_49076_p3.read(): newSel2119_v_fu_49083_p3.read());
}

void calcHash_rollingHash::thread_newSel2209_v_fu_48614_p3() {
    newSel2209_v_fu_48614_p3 = (!or_cond40_fu_48302_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond40_fu_48302_p2.read()[0].to_bool())? newSel2121_v_fu_48294_p3.read(): newSel2123_v_fu_48308_p3.read());
}

void calcHash_rollingHash::thread_newSel220_fu_67004_p3() {
    newSel220_fu_67004_p3 = (!or_cond282_fu_66360_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond282_fu_66360_p2.read()[0].to_bool())? newSel170_fu_66352_p3.read(): newSel171_fu_66366_p3.read());
}

void calcHash_rollingHash::thread_newSel2211_v_fu_48628_p3() {
    newSel2211_v_fu_48628_p3 = (!or_cond42_fu_48330_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond42_fu_48330_p2.read()[0].to_bool())? newSel2125_v_fu_48322_p3.read(): newSel2127_v_fu_48336_p3.read());
}

void calcHash_rollingHash::thread_newSel2213_v_fu_48642_p3() {
    newSel2213_v_fu_48642_p3 = (!or_cond44_fu_48358_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond44_fu_48358_p2.read()[0].to_bool())? newSel2129_v_fu_48350_p3.read(): newSel2131_v_fu_48364_p3.read());
}

void calcHash_rollingHash::thread_newSel2215_v_fu_48656_p3() {
    newSel2215_v_fu_48656_p3 = (!or_cond46_fu_48386_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond46_fu_48386_p2.read()[0].to_bool())? newSel2133_v_fu_48378_p3.read(): newSel2135_v_fu_48392_p3.read());
}

void calcHash_rollingHash::thread_newSel2217_v_cast_fu_49382_p1() {
    newSel2217_v_cast_fu_49382_p1 = esl_sext<4,3>(newSel2217_v_fu_49375_p3.read());
}

void calcHash_rollingHash::thread_newSel2217_v_fu_49375_p3() {
    newSel2217_v_fu_49375_p3 = (!or_cond48_reg_77481.read()[0].is_01())? sc_lv<3>(): ((or_cond48_reg_77481.read()[0].to_bool())? newSel2137_v_cast_cast_fu_49098_p3.read(): newSel2139_v_fu_49105_p3.read());
}

void calcHash_rollingHash::thread_newSel2219_v_fu_49386_p3() {
    newSel2219_v_fu_49386_p3 = (!or_cond50_reg_77486.read()[0].is_01())? sc_lv<4>(): ((or_cond50_reg_77486.read()[0].to_bool())? newSel2141_v_fu_49112_p3.read(): newSel2143_v_fu_49119_p3.read());
}

void calcHash_rollingHash::thread_newSel221_fu_67018_p3() {
    newSel221_fu_67018_p3 = (!or_cond284_fu_66388_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond284_fu_66388_p2.read()[0].to_bool())? newSel172_fu_66380_p3.read(): newSel173_fu_66394_p3.read());
}

void calcHash_rollingHash::thread_newSel2221_v_fu_49398_p3() {
    newSel2221_v_fu_49398_p3 = (!or_cond52_reg_77492.read()[0].is_01())? sc_lv<5>(): ((or_cond52_reg_77492.read()[0].to_bool())? newSel2145_v_fu_49130_p3.read(): newSel2147_v_fu_49137_p3.read());
}

void calcHash_rollingHash::thread_newSel2223_v_fu_49410_p3() {
    newSel2223_v_fu_49410_p3 = (!or_cond54_reg_77498.read()[0].is_01())? sc_lv<5>(): ((or_cond54_reg_77498.read()[0].to_bool())? newSel2149_v_fu_49148_p3.read(): newSel2151_v_fu_49155_p3.read());
}

void calcHash_rollingHash::thread_newSel2225_v_cast_fu_49429_p1() {
    newSel2225_v_cast_fu_49429_p1 = esl_sext<4,3>(newSel2225_v_fu_49422_p3.read());
}

void calcHash_rollingHash::thread_newSel2225_v_fu_49422_p3() {
    newSel2225_v_fu_49422_p3 = (!or_cond56_reg_77504.read()[0].is_01())? sc_lv<3>(): ((or_cond56_reg_77504.read()[0].to_bool())? newSel2153_v_cast_cast_fu_49166_p3.read(): newSel2155_v_fu_49173_p3.read());
}

void calcHash_rollingHash::thread_newSel2227_v_fu_48676_p3() {
    newSel2227_v_fu_48676_p3 = (!or_cond58_fu_48450_p2.read()[0].is_01())? sc_lv<4>(): ((or_cond58_fu_48450_p2.read()[0].to_bool())? newSel2157_v_fu_48442_p3.read(): newSel2159_v_fu_48456_p3.read());
}

void calcHash_rollingHash::thread_newSel2229_v_fu_48690_p3() {
    newSel2229_v_fu_48690_p3 = (!or_cond60_fu_48478_p2.read()[0].is_01())? sc_lv<3>(): ((or_cond60_fu_48478_p2.read()[0].to_bool())? newSel2161_v_cast_cast_fu_48470_p3.read(): newSel2163_v_fu_48484_p3.read());
}

void calcHash_rollingHash::thread_newSel222_fu_67026_p3() {
    newSel222_fu_67026_p3 = (!or_cond286_fu_66410_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond286_fu_66410_p2.read()[0].to_bool())? newSel174_fu_66402_p3.read(): newSel175_fu_66416_p3.read());
}

void calcHash_rollingHash::thread_newSel2233_v_cast_fu_49445_p1() {
    newSel2233_v_cast_fu_49445_p1 = esl_sext<5,4>(newSel2233_v_fu_49438_p3.read());
}

void calcHash_rollingHash::thread_newSel2233_v_fu_49438_p3() {
    newSel2233_v_fu_49438_p3 = (!or_cond64_reg_77514.read()[0].is_01())? sc_lv<4>(): ((or_cond64_reg_77514.read()[0].to_bool())? newSel2169_v_cast_fu_49191_p1.read(): newSel2171_v_fu_49195_p3.read());
}

void calcHash_rollingHash::thread_newSel2235_v_fu_49449_p3() {
    newSel2235_v_fu_49449_p3 = (!or_cond66_reg_77519.read()[0].is_01())? sc_lv<5>(): ((or_cond66_reg_77519.read()[0].to_bool())? newSel2173_v_fu_49202_p3.read(): newSel2175_v_fu_49209_p3.read());
}

void calcHash_rollingHash::thread_newSel2237_v_fu_48736_p3() {
    newSel2237_v_fu_48736_p3 = (!or_cond68_fu_48564_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond68_fu_48564_p2.read()[0].to_bool())? newSel2177_v_fu_48556_p3.read(): newSel2179_v_fu_48570_p3.read());
}

void calcHash_rollingHash::thread_newSel2239_v_fu_49461_p3() {
    newSel2239_v_fu_49461_p3 = (!or_cond70_fu_49228_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond70_fu_49228_p2.read()[0].to_bool())? newSel2181_v_fu_49221_p3.read(): newSel2183_v_fu_49233_p3.read());
}

void calcHash_rollingHash::thread_newSel223_fu_67040_p3() {
    newSel223_fu_67040_p3 = (!or_cond288_fu_66438_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond288_fu_66438_p2.read()[0].to_bool())? newSel176_fu_66430_p3.read(): newSel177_fu_66444_p3.read());
}

void calcHash_rollingHash::thread_newSel2241_v_fu_49475_p3() {
    newSel2241_v_fu_49475_p3 = (!or_cond72_reg_77525.read()[0].is_01())? sc_lv<7>(): ((or_cond72_reg_77525.read()[0].to_bool())? newSel2185_v_fu_49245_p3.read(): newSel2187_v_fu_49252_p3.read());
}

void calcHash_rollingHash::thread_newSel2243_v_fu_49482_p3() {
    newSel2243_v_fu_49482_p3 = (!or_cond74_fu_49266_p2.read()[0].is_01())? sc_lv<7>(): ((or_cond74_fu_49266_p2.read()[0].to_bool())? newSel2189_v_fu_49259_p3.read(): newSel2191_v_fu_49271_p3.read());
}

void calcHash_rollingHash::thread_newSel2245_v_fu_49496_p3() {
    newSel2245_v_fu_49496_p3 = (!or_cond76_reg_77530.read()[0].is_01())? sc_lv<7>(): ((or_cond76_reg_77530.read()[0].to_bool())? newSel2193_v_fu_49285_p3.read(): newSel2195_v_fu_49292_p3.read());
}

void calcHash_rollingHash::thread_newSel2247_v_fu_49503_p3() {
    newSel2247_v_fu_49503_p3 = (!or_cond78_fu_49306_p2.read()[0].is_01())? sc_lv<7>(): ((or_cond78_fu_49306_p2.read()[0].to_bool())? newSel2197_v_fu_49299_p3.read(): newSel2199_v_fu_49311_p3.read());
}

void calcHash_rollingHash::thread_newSel2249_v_cast_fu_49524_p1() {
    newSel2249_v_cast_fu_49524_p1 = esl_sext<5,4>(newSel2249_v_fu_49517_p3.read());
}

void calcHash_rollingHash::thread_newSel2249_v_fu_49517_p3() {
    newSel2249_v_fu_49517_p3 = (!or_cond80_reg_77535.read()[0].is_01())? sc_lv<4>(): ((or_cond80_reg_77535.read()[0].to_bool())? newSel2201_v_cast_fu_49330_p1.read(): newSel2203_v_fu_49334_p3.read());
}

void calcHash_rollingHash::thread_newSel224_fu_67054_p3() {
    newSel224_fu_67054_p3 = (!or_cond290_fu_66466_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond290_fu_66466_p2.read()[0].to_bool())? newSel178_fu_66458_p3.read(): newSel179_fu_66472_p3.read());
}

void calcHash_rollingHash::thread_newSel2251_v_fu_49533_p3() {
    newSel2251_v_fu_49533_p3 = (!or_cond82_fu_49353_p2.read()[0].is_01())? sc_lv<5>(): ((or_cond82_fu_49353_p2.read()[0].to_bool())? newSel2205_v_fu_49346_p3.read(): newSel2207_v_fu_49358_p3.read());
}

void calcHash_rollingHash::thread_newSel2253_v_fu_48762_p3() {
    newSel2253_v_fu_48762_p3 = (!or_cond84_fu_48622_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond84_fu_48622_p2.read()[0].to_bool())? newSel2209_v_fu_48614_p3.read(): newSel2211_v_fu_48628_p3.read());
}

void calcHash_rollingHash::thread_newSel2255_v_fu_48776_p3() {
    newSel2255_v_fu_48776_p3 = (!or_cond86_fu_48650_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond86_fu_48650_p2.read()[0].to_bool())? newSel2213_v_fu_48642_p3.read(): newSel2215_v_fu_48656_p3.read());
}

void calcHash_rollingHash::thread_newSel2257_v_cast_fu_49559_p1() {
    newSel2257_v_cast_fu_49559_p1 = esl_sext<5,4>(newSel2257_v_fu_49552_p3.read());
}

void calcHash_rollingHash::thread_newSel2257_v_fu_49552_p3() {
    newSel2257_v_fu_49552_p3 = (!or_cond88_reg_77546.read()[0].is_01())? sc_lv<4>(): ((or_cond88_reg_77546.read()[0].to_bool())? newSel2217_v_cast_fu_49382_p1.read(): newSel2219_v_fu_49386_p3.read());
}

void calcHash_rollingHash::thread_newSel2259_v_fu_49568_p3() {
    newSel2259_v_fu_49568_p3 = (!or_cond90_fu_49405_p2.read()[0].is_01())? sc_lv<5>(): ((or_cond90_fu_49405_p2.read()[0].to_bool())? newSel2221_v_fu_49398_p3.read(): newSel2223_v_fu_49410_p3.read());
}

void calcHash_rollingHash::thread_newSel225_fu_67068_p3() {
    newSel225_fu_67068_p3 = (!or_cond292_fu_66494_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond292_fu_66494_p2.read()[0].to_bool())? newSel180_fu_66486_p3.read(): newSel181_fu_66500_p3.read());
}

void calcHash_rollingHash::thread_newSel2261_v_fu_49582_p3() {
    newSel2261_v_fu_49582_p3 = (!or_cond92_reg_77552.read()[0].is_01())? sc_lv<4>(): ((or_cond92_reg_77552.read()[0].to_bool())? newSel2225_v_cast_fu_49429_p1.read(): newSel2227_v_reg_77557.read());
}

void calcHash_rollingHash::thread_newSel2265_v_cast_fu_49618_p1() {
    newSel2265_v_cast_fu_49618_p1 = esl_sext<6,5>(newSel2265_v_fu_49611_p3.read());
}

void calcHash_rollingHash::thread_newSel2265_v_fu_49611_p3() {
    newSel2265_v_fu_49611_p3 = (!or_cond96_reg_77567.read()[0].is_01())? sc_lv<5>(): ((or_cond96_reg_77567.read()[0].to_bool())? newSel2233_v_cast_fu_49445_p1.read(): newSel2235_v_fu_49449_p3.read());
}

void calcHash_rollingHash::thread_newSel2267_v_fu_49627_p3() {
    newSel2267_v_fu_49627_p3 = (!or_cond98_reg_77578.read()[0].is_01())? sc_lv<6>(): ((or_cond98_reg_77578.read()[0].to_bool())? newSel2237_v_reg_77573.read(): newSel2239_v_fu_49461_p3.read());
}

void calcHash_rollingHash::thread_newSel2269_v_fu_49638_p3() {
    newSel2269_v_fu_49638_p3 = (!or_cond100_reg_77584.read()[0].is_01())? sc_lv<7>(): ((or_cond100_reg_77584.read()[0].to_bool())? newSel2241_v_fu_49475_p3.read(): newSel2243_v_fu_49482_p3.read());
}

void calcHash_rollingHash::thread_newSel226_fu_67076_p3() {
    newSel226_fu_67076_p3 = (!or_cond294_fu_66516_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond294_fu_66516_p2.read()[0].to_bool())? newSel182_fu_66508_p3.read(): newSel183_fu_66522_p3.read());
}

void calcHash_rollingHash::thread_newSel2271_v_fu_49650_p3() {
    newSel2271_v_fu_49650_p3 = (!or_cond102_reg_77590.read()[0].is_01())? sc_lv<7>(): ((or_cond102_reg_77590.read()[0].to_bool())? newSel2245_v_fu_49496_p3.read(): newSel2247_v_fu_49503_p3.read());
}

void calcHash_rollingHash::thread_newSel2273_v_cast_fu_49670_p1() {
    newSel2273_v_cast_fu_49670_p1 = esl_sext<6,5>(newSel2273_v_fu_49662_p3.read());
}

void calcHash_rollingHash::thread_newSel2273_v_fu_49662_p3() {
    newSel2273_v_fu_49662_p3 = (!or_cond104_fu_49528_p2.read()[0].is_01())? sc_lv<5>(): ((or_cond104_fu_49528_p2.read()[0].to_bool())? newSel2249_v_cast_fu_49524_p1.read(): newSel2251_v_fu_49533_p3.read());
}

void calcHash_rollingHash::thread_newSel2275_v_fu_49680_p3() {
    newSel2275_v_fu_49680_p3 = (!or_cond106_reg_77601.read()[0].is_01())? sc_lv<6>(): ((or_cond106_reg_77601.read()[0].to_bool())? newSel2253_v_reg_77596.read(): newSel2255_v_reg_77607.read());
}

void calcHash_rollingHash::thread_newSel2277_v_fu_49690_p3() {
    newSel2277_v_fu_49690_p3 = (!or_cond108_fu_49563_p2.read()[0].is_01())? sc_lv<5>(): ((or_cond108_fu_49563_p2.read()[0].to_bool())? newSel2257_v_cast_fu_49559_p1.read(): newSel2259_v_fu_49568_p3.read());
}

void calcHash_rollingHash::thread_newSel227_fu_67090_p3() {
    newSel227_fu_67090_p3 = (!or_cond296_fu_66544_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond296_fu_66544_p2.read()[0].to_bool())? newSel184_fu_66536_p3.read(): newSel185_fu_66550_p3.read());
}

void calcHash_rollingHash::thread_newSel2281_v_cast_fu_49741_p1() {
    newSel2281_v_cast_fu_49741_p1 = esl_sext<7,6>(newSel2281_v_fu_49733_p3.read());
}

void calcHash_rollingHash::thread_newSel2281_v_fu_49733_p3() {
    newSel2281_v_fu_49733_p3 = (!or_cond112_fu_49622_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond112_fu_49622_p2.read()[0].to_bool())? newSel2265_v_cast_fu_49618_p1.read(): newSel2267_v_fu_49627_p3.read());
}

void calcHash_rollingHash::thread_newSel2283_v_fu_49751_p3() {
    newSel2283_v_fu_49751_p3 = (!or_cond114_fu_49645_p2.read()[0].is_01())? sc_lv<7>(): ((or_cond114_fu_49645_p2.read()[0].to_bool())? newSel2269_v_fu_49638_p3.read(): newSel2271_v_fu_49650_p3.read());
}

void calcHash_rollingHash::thread_newSel2285_v_fu_49765_p3() {
    newSel2285_v_fu_49765_p3 = (!or_cond116_fu_49674_p2.read()[0].is_01())? sc_lv<6>(): ((or_cond116_fu_49674_p2.read()[0].to_bool())? newSel2273_v_cast_fu_49670_p1.read(): newSel2275_v_fu_49680_p3.read());
}

void calcHash_rollingHash::thread_newSel2289_v_fu_49811_p3() {
    newSel2289_v_fu_49811_p3 = (!or_cond120_fu_49745_p2.read()[0].is_01())? sc_lv<7>(): ((or_cond120_fu_49745_p2.read()[0].to_bool())? newSel2281_v_cast_fu_49741_p1.read(): newSel2283_v_fu_49751_p3.read());
}

void calcHash_rollingHash::thread_newSel228_fu_67104_p3() {
    newSel228_fu_67104_p3 = (!or_cond298_fu_66572_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond298_fu_66572_p2.read()[0].to_bool())? newSel186_fu_66564_p3.read(): newSel187_fu_66578_p3.read());
}

void calcHash_rollingHash::thread_newSel2293_cast_fu_49865_p1() {
    newSel2293_cast_fu_49865_p1 = esl_zext<32,10>(newSel12_fu_49857_p3.read());
}

void calcHash_rollingHash::thread_newSel229_fu_67118_p3() {
    newSel229_fu_67118_p3 = (!or_cond300_fu_66600_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond300_fu_66600_p2.read()[0].to_bool())? newSel188_fu_66592_p3.read(): newSel189_fu_66606_p3.read());
}

void calcHash_rollingHash::thread_newSel22_fu_56261_p3() {
    newSel22_fu_56261_p3 = (!tmp_13_1_110_fu_55717_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_110_fu_55717_p2.read()[0].to_bool())? index_1_110_reg_78741.read(): index_1_109_reg_78731.read());
}

void calcHash_rollingHash::thread_newSel230_fu_67126_p3() {
    newSel230_fu_67126_p3 = (!or_cond302_fu_66622_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond302_fu_66622_p2.read()[0].to_bool())? newSel190_fu_66614_p3.read(): newSel191_fu_66628_p3.read());
}

void calcHash_rollingHash::thread_newSel231_fu_67140_p3() {
    newSel231_fu_67140_p3 = (!or_cond304_fu_66650_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond304_fu_66650_p2.read()[0].to_bool())? newSel192_fu_66642_p3.read(): newSel193_fu_66656_p3.read());
}

void calcHash_rollingHash::thread_newSel232_fu_67154_p3() {
    newSel232_fu_67154_p3 = (!or_cond306_fu_66678_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond306_fu_66678_p2.read()[0].to_bool())? newSel194_fu_66670_p3.read(): newSel195_fu_66684_p3.read());
}

void calcHash_rollingHash::thread_newSel233_fu_67168_p3() {
    newSel233_fu_67168_p3 = (!or_cond308_fu_66706_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond308_fu_66706_p2.read()[0].to_bool())? newSel196_fu_66698_p3.read(): newSel197_fu_66712_p3.read());
}

void calcHash_rollingHash::thread_newSel234_fu_67176_p3() {
    newSel234_fu_67176_p3 = (!or_cond310_fu_66728_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond310_fu_66728_p2.read()[0].to_bool())? newSel198_fu_66720_p3.read(): newSel199_fu_66734_p3.read());
}

void calcHash_rollingHash::thread_newSel235_fu_67190_p3() {
    newSel235_fu_67190_p3 = (!or_cond312_fu_66756_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond312_fu_66756_p2.read()[0].to_bool())? newSel200_fu_66748_p3.read(): newSel201_fu_66762_p3.read());
}

void calcHash_rollingHash::thread_newSel236_fu_67204_p3() {
    newSel236_fu_67204_p3 = (!or_cond314_fu_66784_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond314_fu_66784_p2.read()[0].to_bool())? newSel202_fu_66776_p3.read(): newSel203_fu_66790_p3.read());
}

void calcHash_rollingHash::thread_newSel237_fu_67218_p3() {
    newSel237_fu_67218_p3 = (!or_cond316_fu_66812_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond316_fu_66812_p2.read()[0].to_bool())? newSel204_fu_66804_p3.read(): newSel205_fu_66818_p3.read());
}

void calcHash_rollingHash::thread_newSel238_fu_67445_p3() {
    newSel238_fu_67445_p3 = (!or_cond318_reg_80692.read()[0].is_01())? sc_lv<12>(): ((or_cond318_reg_80692.read()[0].to_bool())? newSel206_reg_80687.read(): newSel207_reg_80697.read());
}

void calcHash_rollingHash::thread_newSel239_fu_67232_p3() {
    newSel239_fu_67232_p3 = (!or_cond320_fu_66862_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond320_fu_66862_p2.read()[0].to_bool())? newSel208_fu_66854_p3.read(): newSel209_fu_66868_p3.read());
}

void calcHash_rollingHash::thread_newSel23_fu_56273_p3() {
    newSel23_fu_56273_p3 = (!tmp_13_1_108_fu_55661_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_108_fu_55661_p2.read()[0].to_bool())? index_1_108_reg_78721.read(): index_1_107_reg_78711.read());
}

void calcHash_rollingHash::thread_newSel240_fu_67455_p3() {
    newSel240_fu_67455_p3 = (!or_cond322_reg_80712.read()[0].is_01())? sc_lv<12>(): ((or_cond322_reg_80712.read()[0].to_bool())? newSel210_reg_80707.read(): newSel211_reg_80717.read());
}

void calcHash_rollingHash::thread_newSel241_fu_67246_p3() {
    newSel241_fu_67246_p3 = (!or_cond324_fu_66912_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond324_fu_66912_p2.read()[0].to_bool())? newSel212_fu_66904_p3.read(): newSel213_fu_66918_p3.read());
}

void calcHash_rollingHash::thread_newSel242_fu_67465_p3() {
    newSel242_fu_67465_p3 = (!or_cond326_reg_80732.read()[0].is_01())? sc_lv<12>(): ((or_cond326_reg_80732.read()[0].to_bool())? newSel214_reg_80727.read(): newSel215_reg_80737.read());
}

void calcHash_rollingHash::thread_newSel243_fu_67260_p3() {
    newSel243_fu_67260_p3 = (!or_cond328_fu_66962_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond328_fu_66962_p2.read()[0].to_bool())? newSel216_fu_66954_p3.read(): newSel217_fu_66968_p3.read());
}

void calcHash_rollingHash::thread_newSel244_fu_67475_p3() {
    newSel244_fu_67475_p3 = (!or_cond330_reg_80752.read()[0].is_01())? sc_lv<12>(): ((or_cond330_reg_80752.read()[0].to_bool())? newSel218_reg_80747.read(): newSel219_reg_80757.read());
}

void calcHash_rollingHash::thread_newSel245_fu_67274_p3() {
    newSel245_fu_67274_p3 = (!or_cond332_fu_67012_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond332_fu_67012_p2.read()[0].to_bool())? newSel220_fu_67004_p3.read(): newSel221_fu_67018_p3.read());
}

void calcHash_rollingHash::thread_newSel246_fu_67485_p3() {
    newSel246_fu_67485_p3 = (!or_cond334_reg_80772.read()[0].is_01())? sc_lv<12>(): ((or_cond334_reg_80772.read()[0].to_bool())? newSel222_reg_80767.read(): newSel223_reg_80777.read());
}

void calcHash_rollingHash::thread_newSel247_fu_67288_p3() {
    newSel247_fu_67288_p3 = (!or_cond336_fu_67062_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond336_fu_67062_p2.read()[0].to_bool())? newSel224_fu_67054_p3.read(): newSel225_fu_67068_p3.read());
}

void calcHash_rollingHash::thread_newSel248_fu_67495_p3() {
    newSel248_fu_67495_p3 = (!or_cond338_reg_80792.read()[0].is_01())? sc_lv<12>(): ((or_cond338_reg_80792.read()[0].to_bool())? newSel226_reg_80787.read(): newSel227_reg_80797.read());
}

void calcHash_rollingHash::thread_newSel249_fu_67302_p3() {
    newSel249_fu_67302_p3 = (!or_cond340_fu_67112_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond340_fu_67112_p2.read()[0].to_bool())? newSel228_fu_67104_p3.read(): newSel229_fu_67118_p3.read());
}

void calcHash_rollingHash::thread_newSel24_fu_56285_p3() {
    newSel24_fu_56285_p3 = (!tmp_13_1_106_fu_55605_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_106_fu_55605_p2.read()[0].to_bool())? index_1_106_reg_78701.read(): index_1_105_reg_78691.read());
}

void calcHash_rollingHash::thread_newSel250_fu_67505_p3() {
    newSel250_fu_67505_p3 = (!or_cond342_reg_80812.read()[0].is_01())? sc_lv<12>(): ((or_cond342_reg_80812.read()[0].to_bool())? newSel230_reg_80807.read(): newSel231_reg_80817.read());
}

void calcHash_rollingHash::thread_newSel251_fu_67316_p3() {
    newSel251_fu_67316_p3 = (!or_cond344_fu_67162_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond344_fu_67162_p2.read()[0].to_bool())? newSel232_fu_67154_p3.read(): newSel233_fu_67168_p3.read());
}

void calcHash_rollingHash::thread_newSel252_fu_67515_p3() {
    newSel252_fu_67515_p3 = (!or_cond346_reg_80832.read()[0].is_01())? sc_lv<12>(): ((or_cond346_reg_80832.read()[0].to_bool())? newSel234_reg_80827.read(): newSel235_reg_80837.read());
}

void calcHash_rollingHash::thread_newSel253_fu_67330_p3() {
    newSel253_fu_67330_p3 = (!or_cond348_fu_67212_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond348_fu_67212_p2.read()[0].to_bool())? newSel236_fu_67204_p3.read(): newSel237_fu_67218_p3.read());
}

void calcHash_rollingHash::thread_newSel2549_cast_fu_57771_p1() {
    newSel2549_cast_fu_57771_p1 = esl_zext<32,12>(newSel140_fu_57763_p3.read());
}

void calcHash_rollingHash::thread_newSel254_fu_67525_p3() {
    newSel254_fu_67525_p3 = (!or_cond350_reg_80847.read()[0].is_01())? sc_lv<12>(): ((or_cond350_reg_80847.read()[0].to_bool())? newSel238_fu_67445_p3.read(): newSel239_reg_80853.read());
}

void calcHash_rollingHash::thread_newSel255_fu_67536_p3() {
    newSel255_fu_67536_p3 = (!or_cond352_reg_80858.read()[0].is_01())? sc_lv<12>(): ((or_cond352_reg_80858.read()[0].to_bool())? newSel240_fu_67455_p3.read(): newSel241_reg_80864.read());
}

void calcHash_rollingHash::thread_newSel256_fu_67547_p3() {
    newSel256_fu_67547_p3 = (!or_cond354_reg_80869.read()[0].is_01())? sc_lv<12>(): ((or_cond354_reg_80869.read()[0].to_bool())? newSel242_fu_67465_p3.read(): newSel243_reg_80875.read());
}

void calcHash_rollingHash::thread_newSel257_fu_67558_p3() {
    newSel257_fu_67558_p3 = (!or_cond356_reg_80880.read()[0].is_01())? sc_lv<12>(): ((or_cond356_reg_80880.read()[0].to_bool())? newSel244_fu_67475_p3.read(): newSel245_reg_80886.read());
}

void calcHash_rollingHash::thread_newSel258_fu_67569_p3() {
    newSel258_fu_67569_p3 = (!or_cond358_reg_80891.read()[0].is_01())? sc_lv<12>(): ((or_cond358_reg_80891.read()[0].to_bool())? newSel246_fu_67485_p3.read(): newSel247_reg_80897.read());
}

void calcHash_rollingHash::thread_newSel259_fu_67580_p3() {
    newSel259_fu_67580_p3 = (!or_cond360_reg_80902.read()[0].is_01())? sc_lv<12>(): ((or_cond360_reg_80902.read()[0].to_bool())? newSel248_fu_67495_p3.read(): newSel249_reg_80908.read());
}

void calcHash_rollingHash::thread_newSel25_fu_56297_p3() {
    newSel25_fu_56297_p3 = (!tmp_13_1_104_fu_55549_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_104_fu_55549_p2.read()[0].to_bool())? index_1_104_reg_78681.read(): index_1_103_reg_78671.read());
}

void calcHash_rollingHash::thread_newSel260_fu_67591_p3() {
    newSel260_fu_67591_p3 = (!or_cond362_reg_80913.read()[0].is_01())? sc_lv<12>(): ((or_cond362_reg_80913.read()[0].to_bool())? newSel250_fu_67505_p3.read(): newSel251_reg_80919.read());
}

void calcHash_rollingHash::thread_newSel261_fu_67602_p3() {
    newSel261_fu_67602_p3 = (!or_cond364_reg_80924.read()[0].is_01())? sc_lv<12>(): ((or_cond364_reg_80924.read()[0].to_bool())? newSel252_fu_67515_p3.read(): newSel253_reg_80930.read());
}

void calcHash_rollingHash::thread_newSel262_fu_67613_p3() {
    newSel262_fu_67613_p3 = (!or_cond366_fu_67531_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond366_fu_67531_p2.read()[0].to_bool())? newSel254_fu_67525_p3.read(): newSel255_fu_67536_p3.read());
}

void calcHash_rollingHash::thread_newSel263_fu_67627_p3() {
    newSel263_fu_67627_p3 = (!or_cond368_fu_67553_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond368_fu_67553_p2.read()[0].to_bool())? newSel256_fu_67547_p3.read(): newSel257_fu_67558_p3.read());
}

void calcHash_rollingHash::thread_newSel264_fu_67641_p3() {
    newSel264_fu_67641_p3 = (!or_cond370_fu_67575_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond370_fu_67575_p2.read()[0].to_bool())? newSel258_fu_67569_p3.read(): newSel259_fu_67580_p3.read());
}

void calcHash_rollingHash::thread_newSel265_fu_67655_p3() {
    newSel265_fu_67655_p3 = (!or_cond372_fu_67597_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond372_fu_67597_p2.read()[0].to_bool())? newSel260_fu_67591_p3.read(): newSel261_fu_67602_p3.read());
}

void calcHash_rollingHash::thread_newSel266_fu_67669_p3() {
    newSel266_fu_67669_p3 = (!or_cond374_fu_67621_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond374_fu_67621_p2.read()[0].to_bool())? newSel262_fu_67613_p3.read(): newSel263_fu_67627_p3.read());
}

void calcHash_rollingHash::thread_newSel267_fu_67683_p3() {
    newSel267_fu_67683_p3 = (!or_cond376_fu_67649_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond376_fu_67649_p2.read()[0].to_bool())? newSel264_fu_67641_p3.read(): newSel265_fu_67655_p3.read());
}

void calcHash_rollingHash::thread_newSel268_fu_67697_p3() {
    newSel268_fu_67697_p3 = (!or_cond378_fu_67677_p2.read()[0].is_01())? sc_lv<12>(): ((or_cond378_fu_67677_p2.read()[0].to_bool())? newSel266_fu_67669_p3.read(): newSel267_fu_67683_p3.read());
}

void calcHash_rollingHash::thread_newSel269_fu_67715_p3() {
    newSel269_fu_67715_p3 = (!or_cond380_fu_67709_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond380_fu_67709_p2.read()[0].to_bool())? newSel2805_cast_fu_67705_p1.read(): indices129_1_reg_18776.read());
}

void calcHash_rollingHash::thread_newSel26_fu_56309_p3() {
    newSel26_fu_56309_p3 = (!tmp_13_1_102_fu_55493_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_102_fu_55493_p2.read()[0].to_bool())? index_1_102_reg_78661.read(): index_1_101_reg_78651.read());
}

void calcHash_rollingHash::thread_newSel27_fu_56321_p3() {
    newSel27_fu_56321_p3 = (!tmp_13_1_100_fu_55437_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_100_fu_55437_p2.read()[0].to_bool())? index_1_100_reg_78641.read(): index_1_99_reg_78631.read());
}

void calcHash_rollingHash::thread_newSel2805_cast_fu_67705_p1() {
    newSel2805_cast_fu_67705_p1 = esl_zext<32,12>(newSel268_fu_67697_p3.read());
}

void calcHash_rollingHash::thread_newSel28_fu_56333_p3() {
    newSel28_fu_56333_p3 = (!tmp_13_1_98_fu_55381_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_98_fu_55381_p2.read()[0].to_bool())? index_1_98_reg_78621.read(): index_1_97_reg_78611.read());
}

void calcHash_rollingHash::thread_newSel29_fu_56345_p3() {
    newSel29_fu_56345_p3 = (!tmp_13_1_96_fu_55325_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_96_fu_55325_p2.read()[0].to_bool())? index_1_96_reg_78601.read(): index_1_95_reg_78591.read());
}

void calcHash_rollingHash::thread_newSel2_fu_48708_p3() {
    newSel2_fu_48708_p3 = esl_concat<7,3>(tmp_15_134_fu_48698_p4.read(), newSel2229_v_fu_48690_p3.read());
}

void calcHash_rollingHash::thread_newSel30_fu_56351_p3() {
    newSel30_fu_56351_p3 = (!tmp_13_1_94_fu_55269_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_94_fu_55269_p2.read()[0].to_bool())? index_1_94_reg_78581.read(): index_1_93_reg_78571.read());
}

void calcHash_rollingHash::thread_newSel31_fu_56363_p3() {
    newSel31_fu_56363_p3 = (!tmp_13_1_92_fu_55213_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_92_fu_55213_p2.read()[0].to_bool())? index_1_92_reg_78561.read(): index_1_91_reg_78551.read());
}

void calcHash_rollingHash::thread_newSel32_fu_56375_p3() {
    newSel32_fu_56375_p3 = (!tmp_13_1_90_fu_55157_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_90_fu_55157_p2.read()[0].to_bool())? index_1_90_reg_78541.read(): index_1_89_reg_78531.read());
}

void calcHash_rollingHash::thread_newSel33_fu_56387_p3() {
    newSel33_fu_56387_p3 = (!tmp_13_1_88_fu_55101_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_88_fu_55101_p2.read()[0].to_bool())? index_1_88_reg_78521.read(): index_1_87_reg_78511.read());
}

void calcHash_rollingHash::thread_newSel34_fu_56399_p3() {
    newSel34_fu_56399_p3 = (!tmp_13_1_86_fu_55045_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_86_fu_55045_p2.read()[0].to_bool())? index_1_86_reg_78501.read(): index_1_85_reg_78491.read());
}

void calcHash_rollingHash::thread_newSel35_fu_56411_p3() {
    newSel35_fu_56411_p3 = (!tmp_13_1_84_fu_54989_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_84_fu_54989_p2.read()[0].to_bool())? index_1_84_reg_78481.read(): index_1_83_reg_78471.read());
}

void calcHash_rollingHash::thread_newSel36_fu_56423_p3() {
    newSel36_fu_56423_p3 = (!tmp_13_1_82_fu_54933_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_82_fu_54933_p2.read()[0].to_bool())? index_1_82_reg_78461.read(): index_1_81_reg_78451.read());
}

void calcHash_rollingHash::thread_newSel37_fu_56435_p3() {
    newSel37_fu_56435_p3 = (!tmp_13_1_80_fu_54877_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_80_fu_54877_p2.read()[0].to_bool())? index_1_80_reg_78441.read(): index_1_79_reg_78431.read());
}

void calcHash_rollingHash::thread_newSel38_fu_56441_p3() {
    newSel38_fu_56441_p3 = (!tmp_13_1_78_fu_54821_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_78_fu_54821_p2.read()[0].to_bool())? index_1_78_reg_78421.read(): index_1_77_reg_78411.read());
}

void calcHash_rollingHash::thread_newSel39_fu_56453_p3() {
    newSel39_fu_56453_p3 = (!tmp_13_1_76_fu_54765_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_76_fu_54765_p2.read()[0].to_bool())? index_1_76_reg_78401.read(): index_1_75_reg_78391.read());
}

void calcHash_rollingHash::thread_newSel3_fu_48722_p3() {
    newSel3_fu_48722_p3 = (!or_cond62_fu_48524_p2.read()[0].is_01())? sc_lv<10>(): ((or_cond62_fu_48524_p2.read()[0].to_bool())? newSel_fu_48516_p3.read(): newSel1_fu_48530_p3.read());
}

void calcHash_rollingHash::thread_newSel40_fu_56465_p3() {
    newSel40_fu_56465_p3 = (!tmp_13_1_74_fu_54709_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_74_fu_54709_p2.read()[0].to_bool())? index_1_74_reg_78381.read(): index_1_73_reg_78371.read());
}

void calcHash_rollingHash::thread_newSel41_fu_56477_p3() {
    newSel41_fu_56477_p3 = (!tmp_13_1_72_fu_54653_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_72_fu_54653_p2.read()[0].to_bool())? index_1_72_reg_78361.read(): index_1_71_reg_78351.read());
}

void calcHash_rollingHash::thread_newSel42_fu_56489_p3() {
    newSel42_fu_56489_p3 = (!tmp_13_1_70_fu_54597_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_70_fu_54597_p2.read()[0].to_bool())? index_1_70_reg_78341.read(): index_1_69_reg_78331.read());
}

void calcHash_rollingHash::thread_newSel43_fu_56501_p3() {
    newSel43_fu_56501_p3 = (!tmp_13_1_68_fu_54541_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_68_fu_54541_p2.read()[0].to_bool())? index_1_68_reg_78321.read(): index_1_67_reg_78311.read());
}

void calcHash_rollingHash::thread_newSel44_fu_56513_p3() {
    newSel44_fu_56513_p3 = (!tmp_13_1_66_fu_54485_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_66_fu_54485_p2.read()[0].to_bool())? index_1_66_reg_78301.read(): index_1_65_reg_78291.read());
}

void calcHash_rollingHash::thread_newSel45_fu_56525_p3() {
    newSel45_fu_56525_p3 = (!tmp_13_1_64_fu_54429_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_64_fu_54429_p2.read()[0].to_bool())? index_1_64_reg_78281.read(): index_1_63_reg_78271.read());
}

void calcHash_rollingHash::thread_newSel46_fu_56531_p3() {
    newSel46_fu_56531_p3 = (!tmp_13_1_62_fu_54373_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_62_fu_54373_p2.read()[0].to_bool())? index_1_62_reg_78261.read(): index_1_61_reg_78251.read());
}

void calcHash_rollingHash::thread_newSel47_fu_56543_p3() {
    newSel47_fu_56543_p3 = (!tmp_13_1_60_fu_54317_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_60_fu_54317_p2.read()[0].to_bool())? index_1_60_reg_78241.read(): index_1_59_reg_78231.read());
}

void calcHash_rollingHash::thread_newSel48_fu_56555_p3() {
    newSel48_fu_56555_p3 = (!tmp_13_1_58_fu_54261_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_58_fu_54261_p2.read()[0].to_bool())? index_1_58_reg_78221.read(): index_1_57_reg_78211.read());
}

void calcHash_rollingHash::thread_newSel49_fu_56567_p3() {
    newSel49_fu_56567_p3 = (!tmp_13_1_56_fu_54205_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_56_fu_54205_p2.read()[0].to_bool())? index_1_56_reg_78201.read(): index_1_55_reg_78191.read());
}

void calcHash_rollingHash::thread_newSel4_fu_49598_p3() {
    newSel4_fu_49598_p3 = esl_concat<6,4>(tmp_16_135_fu_49588_p4.read(), newSel2261_v_fu_49582_p3.read());
}

void calcHash_rollingHash::thread_newSel50_fu_56579_p3() {
    newSel50_fu_56579_p3 = (!tmp_13_1_54_fu_54149_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_54_fu_54149_p2.read()[0].to_bool())? index_1_54_reg_78181.read(): index_1_53_reg_78171.read());
}

void calcHash_rollingHash::thread_newSel51_fu_56591_p3() {
    newSel51_fu_56591_p3 = (!tmp_13_1_52_fu_54093_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_52_fu_54093_p2.read()[0].to_bool())? index_1_52_reg_78161.read(): index_1_51_reg_78151.read());
}

void calcHash_rollingHash::thread_newSel52_fu_56603_p3() {
    newSel52_fu_56603_p3 = (!tmp_13_1_50_fu_54037_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_50_fu_54037_p2.read()[0].to_bool())? index_1_50_reg_78141.read(): index_1_49_reg_78131.read());
}

void calcHash_rollingHash::thread_newSel53_fu_56615_p3() {
    newSel53_fu_56615_p3 = (!tmp_13_1_48_fu_53981_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_48_fu_53981_p2.read()[0].to_bool())? index_1_48_reg_78121.read(): index_1_47_reg_78111.read());
}

void calcHash_rollingHash::thread_newSel54_fu_56621_p3() {
    newSel54_fu_56621_p3 = (!tmp_13_1_46_fu_53925_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_46_fu_53925_p2.read()[0].to_bool())? index_1_46_reg_78101.read(): index_1_45_reg_78091.read());
}

void calcHash_rollingHash::thread_newSel55_fu_56633_p3() {
    newSel55_fu_56633_p3 = (!tmp_13_1_44_fu_53869_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_44_fu_53869_p2.read()[0].to_bool())? index_1_44_reg_78081.read(): index_1_43_reg_78071.read());
}

void calcHash_rollingHash::thread_newSel56_fu_56645_p3() {
    newSel56_fu_56645_p3 = (!tmp_13_1_42_fu_53813_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_42_fu_53813_p2.read()[0].to_bool())? index_1_42_reg_78061.read(): index_1_41_reg_78051.read());
}

void calcHash_rollingHash::thread_newSel57_fu_56657_p3() {
    newSel57_fu_56657_p3 = (!tmp_13_1_40_fu_53757_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_40_fu_53757_p2.read()[0].to_bool())? index_1_40_reg_78041.read(): index_1_39_reg_78031.read());
}

void calcHash_rollingHash::thread_newSel58_fu_56669_p3() {
    newSel58_fu_56669_p3 = (!tmp_13_1_38_fu_53701_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_38_fu_53701_p2.read()[0].to_bool())? index_1_38_reg_78021.read(): index_1_37_reg_78011.read());
}

void calcHash_rollingHash::thread_newSel59_fu_56681_p3() {
    newSel59_fu_56681_p3 = (!tmp_13_1_36_fu_53645_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_36_fu_53645_p2.read()[0].to_bool())? index_1_36_reg_78001.read(): index_1_35_reg_77991.read());
}

void calcHash_rollingHash::thread_newSel5_fu_48790_p3() {
    newSel5_fu_48790_p3 = (!or_cond94_fu_48716_p2.read()[0].is_01())? sc_lv<10>(): ((or_cond94_fu_48716_p2.read()[0].to_bool())? newSel2_fu_48708_p3.read(): newSel3_fu_48722_p3.read());
}

void calcHash_rollingHash::thread_newSel60_fu_56693_p3() {
    newSel60_fu_56693_p3 = (!tmp_13_1_34_fu_53589_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_34_fu_53589_p2.read()[0].to_bool())? index_1_34_reg_77981.read(): index_1_33_reg_77971.read());
}

void calcHash_rollingHash::thread_newSel61_fu_56705_p3() {
    newSel61_fu_56705_p3 = (!tmp_13_1_32_fu_53533_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_32_fu_53533_p2.read()[0].to_bool())? index_1_32_reg_77961.read(): index_1_31_reg_77951.read());
}

void calcHash_rollingHash::thread_newSel62_fu_56711_p3() {
    newSel62_fu_56711_p3 = (!tmp_13_1_30_fu_53477_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_30_fu_53477_p2.read()[0].to_bool())? index_1_30_reg_77941.read(): index_1_29_reg_77931.read());
}

void calcHash_rollingHash::thread_newSel63_fu_56723_p3() {
    newSel63_fu_56723_p3 = (!tmp_13_1_28_fu_53421_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_28_fu_53421_p2.read()[0].to_bool())? index_1_28_reg_77921.read(): index_1_27_reg_77911.read());
}

void calcHash_rollingHash::thread_newSel64_fu_56735_p3() {
    newSel64_fu_56735_p3 = (!tmp_13_1_26_fu_53365_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_26_fu_53365_p2.read()[0].to_bool())? index_1_26_reg_77901.read(): index_1_25_reg_77891.read());
}

void calcHash_rollingHash::thread_newSel65_fu_56747_p3() {
    newSel65_fu_56747_p3 = (!tmp_13_1_24_fu_53309_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_24_fu_53309_p2.read()[0].to_bool())? index_1_24_reg_77881.read(): index_1_23_reg_77871.read());
}

void calcHash_rollingHash::thread_newSel66_fu_56759_p3() {
    newSel66_fu_56759_p3 = (!tmp_13_1_22_fu_53253_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_22_fu_53253_p2.read()[0].to_bool())? index_1_22_reg_77861.read(): index_1_21_reg_77851.read());
}

void calcHash_rollingHash::thread_newSel67_fu_56771_p3() {
    newSel67_fu_56771_p3 = (!tmp_13_1_20_fu_53197_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_20_fu_53197_p2.read()[0].to_bool())? index_1_20_reg_77841.read(): index_1_19_reg_77831.read());
}

void calcHash_rollingHash::thread_newSel68_fu_56783_p3() {
    newSel68_fu_56783_p3 = (!tmp_13_1_18_fu_53141_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_18_fu_53141_p2.read()[0].to_bool())? index_1_18_reg_77821.read(): index_1_17_reg_77811.read());
}

void calcHash_rollingHash::thread_newSel69_fu_56795_p3() {
    newSel69_fu_56795_p3 = (!tmp_13_1_16_fu_53085_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_16_fu_53085_p2.read()[0].to_bool())? index_1_16_reg_77801.read(): index_1_15_reg_77791.read());
}

void calcHash_rollingHash::thread_newSel6_fu_49708_p3() {
    newSel6_fu_49708_p3 = esl_concat<5,5>(tmp_17_136_fu_49698_p4.read(), newSel2277_v_fu_49690_p3.read());
}

void calcHash_rollingHash::thread_newSel70_fu_56801_p3() {
    newSel70_fu_56801_p3 = (!tmp_13_1_14_fu_53029_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_14_fu_53029_p2.read()[0].to_bool())? index_1_14_reg_77781.read(): index_1_13_reg_77771.read());
}

void calcHash_rollingHash::thread_newSel71_fu_56813_p3() {
    newSel71_fu_56813_p3 = (!tmp_13_1_12_fu_52973_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_12_fu_52973_p2.read()[0].to_bool())? index_1_12_reg_77761.read(): index_1_11_reg_77751.read());
}

void calcHash_rollingHash::thread_newSel72_fu_56825_p3() {
    newSel72_fu_56825_p3 = (!tmp_13_1_10_fu_52917_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_10_fu_52917_p2.read()[0].to_bool())? index_1_10_reg_77741.read(): index_1_s_reg_77731.read());
}

void calcHash_rollingHash::thread_newSel73_fu_56837_p3() {
    newSel73_fu_56837_p3 = (!tmp_13_1_9_fu_52861_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_9_fu_52861_p2.read()[0].to_bool())? index_1_9_reg_77721.read(): index_1_8_reg_77711.read());
}

void calcHash_rollingHash::thread_newSel74_fu_56849_p3() {
    newSel74_fu_56849_p3 = (!tmp_13_1_7_fu_52805_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_7_fu_52805_p2.read()[0].to_bool())? index_1_7_reg_77701.read(): index_1_6_reg_77691.read());
}

void calcHash_rollingHash::thread_newSel75_fu_56861_p3() {
    newSel75_fu_56861_p3 = (!tmp_13_1_5_fu_52749_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_5_fu_52749_p2.read()[0].to_bool())? index_1_5_reg_77681.read(): index_1_4_reg_77671.read());
}

void calcHash_rollingHash::thread_newSel76_fu_56873_p3() {
    newSel76_fu_56873_p3 = (!tmp_13_1_3_fu_52693_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_1_3_fu_52693_p2.read()[0].to_bool())? index_1_3_reg_77661.read(): index_1_2_reg_77651.read());
}

}

