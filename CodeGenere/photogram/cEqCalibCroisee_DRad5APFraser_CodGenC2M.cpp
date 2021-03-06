// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqCalibCroisee_DRad5APFraser_CodGenC2M.h"


cEqCalibCroisee_DRad5APFraser_CodGenC2M::cEqCalibCroisee_DRad5APFraser_CodGenC2M():
    cElCompiledFonc(3)
{
   AddIntRef (cIncIntervale("Calib",0,14));
   AddIntRef (cIncIntervale("Orient",14,20));
   Close(false);
}



void cEqCalibCroisee_DRad5APFraser_CodGenC2M::ComputeVal()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocPIm1_x-tmp0_;
   double tmp2_ = mCompCoord[4];
   double tmp3_ = mLocPIm1_y-tmp2_;
   double tmp4_ = (tmp1_)*(tmp1_);
   double tmp5_ = (tmp3_)*(tmp3_);
   double tmp6_ = tmp4_+tmp5_;
   double tmp7_ = (tmp6_)*(tmp6_);
   double tmp8_ = tmp7_*(tmp6_);
   double tmp9_ = tmp8_*(tmp6_);
   double tmp10_ = ElSquare(tmp1_);
   double tmp11_ = mCompCoord[5];
   double tmp12_ = (tmp6_)*tmp11_;
   double tmp13_ = 1+tmp12_;
   double tmp14_ = mCompCoord[6];
   double tmp15_ = tmp7_*tmp14_;
   double tmp16_ = tmp13_+tmp15_;
   double tmp17_ = mCompCoord[7];
   double tmp18_ = tmp8_*tmp17_;
   double tmp19_ = tmp16_+tmp18_;
   double tmp20_ = mCompCoord[8];
   double tmp21_ = tmp9_*tmp20_;
   double tmp22_ = tmp19_+tmp21_;
   double tmp23_ = tmp9_*(tmp6_);
   double tmp24_ = mCompCoord[9];
   double tmp25_ = tmp23_*tmp24_;
   double tmp26_ = tmp22_+tmp25_;
   double tmp27_ = (tmp1_)*(tmp26_);
   double tmp28_ = tmp0_+tmp27_;
   double tmp29_ = 2*tmp10_;
   double tmp30_ = ElSquare(tmp3_);
   double tmp31_ = tmp10_+tmp30_;
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[10];
   double tmp34_ = (tmp32_)*tmp33_;
   double tmp35_ = 2*(tmp1_);
   double tmp36_ = tmp35_*(tmp3_);
   double tmp37_ = mCompCoord[11];
   double tmp38_ = tmp36_*tmp37_;
   double tmp39_ = tmp34_+tmp38_;
   double tmp40_ = mCompCoord[12];
   double tmp41_ = tmp40_*(tmp1_);
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = mCompCoord[13];
   double tmp44_ = tmp43_*(tmp3_);
   double tmp45_ = tmp42_+tmp44_;
   double tmp46_ = tmp28_+tmp45_;
   double tmp47_ = mCompCoord[1];
   double tmp48_ = (tmp46_)-tmp47_;
   double tmp49_ = mCompCoord[0];
   double tmp50_ = (tmp48_)/tmp49_;
   double tmp51_ = (tmp3_)*(tmp26_);
   double tmp52_ = tmp2_+tmp51_;
   double tmp53_ = 2*tmp30_;
   double tmp54_ = tmp53_+tmp31_;
   double tmp55_ = (tmp54_)*tmp37_;
   double tmp56_ = tmp36_*tmp33_;
   double tmp57_ = tmp55_+tmp56_;
   double tmp58_ = tmp52_+tmp57_;
   double tmp59_ = mCompCoord[2];
   double tmp60_ = (tmp58_)-tmp59_;
   double tmp61_ = (tmp60_)/tmp49_;
   double tmp62_ = mCompCoord[14];
   double tmp63_ = cos(tmp62_);
   double tmp64_ = mCompCoord[15];
   double tmp65_ = mCompCoord[16];
   double tmp66_ = sin(tmp62_);
   double tmp67_ = -(tmp66_);
   double tmp68_ = sin(tmp65_);
   double tmp69_ = sin(tmp64_);
   double tmp70_ = -(tmp69_);
   double tmp71_ = tmp63_*tmp70_;
   double tmp72_ = cos(tmp65_);
   double tmp73_ = (tmp50_)*(tmp50_);
   double tmp74_ = (tmp61_)*(tmp61_);
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = tmp75_+1.000000;
   double tmp77_ = sqrt(tmp76_);
   double tmp78_ = cos(tmp64_);
   double tmp79_ = -(tmp68_);
   double tmp80_ = tmp66_*tmp70_;

  mVal[0] = (tmp50_)/tmp77_-(tmp63_*tmp78_*mLocDirEsp2_x+(tmp67_*tmp72_+tmp71_*tmp68_)*mLocDirEsp2_y+(tmp67_*tmp79_+tmp71_*tmp72_)*mLocDirEsp2_z);

  mVal[1] = (tmp61_)/tmp77_-(tmp66_*tmp78_*mLocDirEsp2_x+(tmp63_*tmp72_+tmp80_*tmp68_)*mLocDirEsp2_y+(tmp63_*tmp79_+tmp80_*tmp72_)*mLocDirEsp2_z);

  mVal[2] = 1.000000/tmp77_-(tmp69_*mLocDirEsp2_x+tmp78_*tmp68_*mLocDirEsp2_y+tmp78_*tmp72_*mLocDirEsp2_z);

}


void cEqCalibCroisee_DRad5APFraser_CodGenC2M::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocPIm1_x-tmp0_;
   double tmp2_ = mCompCoord[4];
   double tmp3_ = mLocPIm1_y-tmp2_;
   double tmp4_ = (tmp1_)*(tmp1_);
   double tmp5_ = (tmp3_)*(tmp3_);
   double tmp6_ = tmp4_+tmp5_;
   double tmp7_ = (tmp6_)*(tmp6_);
   double tmp8_ = tmp7_*(tmp6_);
   double tmp9_ = tmp8_*(tmp6_);
   double tmp10_ = ElSquare(tmp1_);
   double tmp11_ = mCompCoord[5];
   double tmp12_ = (tmp6_)*tmp11_;
   double tmp13_ = 1+tmp12_;
   double tmp14_ = mCompCoord[6];
   double tmp15_ = tmp7_*tmp14_;
   double tmp16_ = tmp13_+tmp15_;
   double tmp17_ = mCompCoord[7];
   double tmp18_ = tmp8_*tmp17_;
   double tmp19_ = tmp16_+tmp18_;
   double tmp20_ = mCompCoord[8];
   double tmp21_ = tmp9_*tmp20_;
   double tmp22_ = tmp19_+tmp21_;
   double tmp23_ = tmp9_*(tmp6_);
   double tmp24_ = mCompCoord[9];
   double tmp25_ = tmp23_*tmp24_;
   double tmp26_ = tmp22_+tmp25_;
   double tmp27_ = (tmp1_)*(tmp26_);
   double tmp28_ = tmp0_+tmp27_;
   double tmp29_ = 2*tmp10_;
   double tmp30_ = ElSquare(tmp3_);
   double tmp31_ = tmp10_+tmp30_;
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[10];
   double tmp34_ = (tmp32_)*tmp33_;
   double tmp35_ = 2*(tmp1_);
   double tmp36_ = tmp35_*(tmp3_);
   double tmp37_ = mCompCoord[11];
   double tmp38_ = tmp36_*tmp37_;
   double tmp39_ = tmp34_+tmp38_;
   double tmp40_ = mCompCoord[12];
   double tmp41_ = tmp40_*(tmp1_);
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = mCompCoord[13];
   double tmp44_ = tmp43_*(tmp3_);
   double tmp45_ = tmp42_+tmp44_;
   double tmp46_ = tmp28_+tmp45_;
   double tmp47_ = mCompCoord[1];
   double tmp48_ = (tmp46_)-tmp47_;
   double tmp49_ = mCompCoord[0];
   double tmp50_ = (tmp48_)/tmp49_;
   double tmp51_ = (tmp3_)*(tmp26_);
   double tmp52_ = tmp2_+tmp51_;
   double tmp53_ = 2*tmp30_;
   double tmp54_ = tmp53_+tmp31_;
   double tmp55_ = (tmp54_)*tmp37_;
   double tmp56_ = tmp36_*tmp33_;
   double tmp57_ = tmp55_+tmp56_;
   double tmp58_ = tmp52_+tmp57_;
   double tmp59_ = mCompCoord[2];
   double tmp60_ = (tmp58_)-tmp59_;
   double tmp61_ = (tmp60_)/tmp49_;
   double tmp62_ = mCompCoord[14];
   double tmp63_ = cos(tmp62_);
   double tmp64_ = mCompCoord[15];
   double tmp65_ = mCompCoord[16];
   double tmp66_ = sin(tmp62_);
   double tmp67_ = -(tmp66_);
   double tmp68_ = sin(tmp65_);
   double tmp69_ = sin(tmp64_);
   double tmp70_ = -(tmp69_);
   double tmp71_ = tmp63_*tmp70_;
   double tmp72_ = cos(tmp65_);
   double tmp73_ = (tmp50_)*(tmp50_);
   double tmp74_ = (tmp61_)*(tmp61_);
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = tmp75_+1.000000;
   double tmp77_ = sqrt(tmp76_);
   double tmp78_ = -(tmp48_);
   double tmp79_ = ElSquare(tmp49_);
   double tmp80_ = tmp78_/tmp79_;
   double tmp81_ = (tmp80_)*(tmp50_);
   double tmp82_ = -(tmp60_);
   double tmp83_ = tmp82_/tmp79_;
   double tmp84_ = (tmp83_)*(tmp61_);
   double tmp85_ = -(1);
   double tmp86_ = tmp85_*tmp49_;
   double tmp87_ = (tmp86_)/tmp79_;
   double tmp88_ = (tmp87_)*(tmp50_);
   double tmp89_ = ElSquare(tmp77_);
   double tmp90_ = (tmp87_)*(tmp61_);
   double tmp91_ = tmp85_*(tmp1_);
   double tmp92_ = tmp91_+tmp91_;
   double tmp93_ = (tmp92_)*(tmp6_);
   double tmp94_ = tmp93_+tmp93_;
   double tmp95_ = (tmp94_)*(tmp6_);
   double tmp96_ = (tmp92_)*tmp7_;
   double tmp97_ = tmp95_+tmp96_;
   double tmp98_ = (tmp97_)*(tmp6_);
   double tmp99_ = (tmp92_)*tmp8_;
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = 2*tmp85_;
   double tmp102_ = tmp101_*(tmp1_);
   double tmp103_ = tmp85_*(tmp26_);
   double tmp104_ = (tmp92_)*tmp11_;
   double tmp105_ = (tmp94_)*tmp14_;
   double tmp106_ = tmp104_+tmp105_;
   double tmp107_ = (tmp97_)*tmp17_;
   double tmp108_ = tmp106_+tmp107_;
   double tmp109_ = (tmp100_)*tmp20_;
   double tmp110_ = tmp108_+tmp109_;
   double tmp111_ = (tmp100_)*(tmp6_);
   double tmp112_ = (tmp92_)*tmp9_;
   double tmp113_ = tmp111_+tmp112_;
   double tmp114_ = (tmp113_)*tmp24_;
   double tmp115_ = tmp110_+tmp114_;
   double tmp116_ = (tmp115_)*(tmp1_);
   double tmp117_ = tmp103_+tmp116_;
   double tmp118_ = 1+tmp117_;
   double tmp119_ = tmp102_*2;
   double tmp120_ = tmp119_+tmp102_;
   double tmp121_ = (tmp120_)*tmp33_;
   double tmp122_ = tmp85_*2;
   double tmp123_ = tmp122_*(tmp3_);
   double tmp124_ = tmp123_*tmp37_;
   double tmp125_ = tmp121_+tmp124_;
   double tmp126_ = tmp85_*tmp40_;
   double tmp127_ = tmp125_+tmp126_;
   double tmp128_ = tmp118_+tmp127_;
   double tmp129_ = (tmp128_)*tmp49_;
   double tmp130_ = (tmp129_)/tmp79_;
   double tmp131_ = (tmp130_)*(tmp50_);
   double tmp132_ = (tmp115_)*(tmp3_);
   double tmp133_ = tmp102_*tmp37_;
   double tmp134_ = tmp123_*tmp33_;
   double tmp135_ = tmp133_+tmp134_;
   double tmp136_ = tmp132_+tmp135_;
   double tmp137_ = (tmp136_)*tmp49_;
   double tmp138_ = (tmp137_)/tmp79_;
   double tmp139_ = (tmp138_)*(tmp61_);
   double tmp140_ = tmp85_*(tmp3_);
   double tmp141_ = tmp140_+tmp140_;
   double tmp142_ = (tmp141_)*(tmp6_);
   double tmp143_ = tmp142_+tmp142_;
   double tmp144_ = (tmp143_)*(tmp6_);
   double tmp145_ = (tmp141_)*tmp7_;
   double tmp146_ = tmp144_+tmp145_;
   double tmp147_ = (tmp146_)*(tmp6_);
   double tmp148_ = (tmp141_)*tmp8_;
   double tmp149_ = tmp147_+tmp148_;
   double tmp150_ = (tmp141_)*tmp11_;
   double tmp151_ = (tmp143_)*tmp14_;
   double tmp152_ = tmp150_+tmp151_;
   double tmp153_ = (tmp146_)*tmp17_;
   double tmp154_ = tmp152_+tmp153_;
   double tmp155_ = (tmp149_)*tmp20_;
   double tmp156_ = tmp154_+tmp155_;
   double tmp157_ = (tmp149_)*(tmp6_);
   double tmp158_ = (tmp141_)*tmp9_;
   double tmp159_ = tmp157_+tmp158_;
   double tmp160_ = (tmp159_)*tmp24_;
   double tmp161_ = tmp156_+tmp160_;
   double tmp162_ = (tmp161_)*(tmp1_);
   double tmp163_ = tmp101_*(tmp3_);
   double tmp164_ = tmp163_*tmp33_;
   double tmp165_ = tmp85_*tmp35_;
   double tmp166_ = tmp165_*tmp37_;
   double tmp167_ = tmp164_+tmp166_;
   double tmp168_ = tmp85_*tmp43_;
   double tmp169_ = tmp167_+tmp168_;
   double tmp170_ = tmp162_+tmp169_;
   double tmp171_ = (tmp170_)*tmp49_;
   double tmp172_ = (tmp171_)/tmp79_;
   double tmp173_ = (tmp172_)*(tmp50_);
   double tmp174_ = (tmp161_)*(tmp3_);
   double tmp175_ = tmp103_+tmp174_;
   double tmp176_ = 1+tmp175_;
   double tmp177_ = tmp163_*2;
   double tmp178_ = tmp177_+tmp163_;
   double tmp179_ = (tmp178_)*tmp37_;
   double tmp180_ = tmp165_*tmp33_;
   double tmp181_ = tmp179_+tmp180_;
   double tmp182_ = tmp176_+tmp181_;
   double tmp183_ = (tmp182_)*tmp49_;
   double tmp184_ = (tmp183_)/tmp79_;
   double tmp185_ = (tmp184_)*(tmp61_);
   double tmp186_ = (tmp6_)*(tmp1_);
   double tmp187_ = tmp186_*tmp49_;
   double tmp188_ = (tmp187_)/tmp79_;
   double tmp189_ = (tmp188_)*(tmp50_);
   double tmp190_ = (tmp6_)*(tmp3_);
   double tmp191_ = tmp190_*tmp49_;
   double tmp192_ = (tmp191_)/tmp79_;
   double tmp193_ = (tmp192_)*(tmp61_);
   double tmp194_ = tmp7_*(tmp1_);
   double tmp195_ = tmp194_*tmp49_;
   double tmp196_ = (tmp195_)/tmp79_;
   double tmp197_ = (tmp196_)*(tmp50_);
   double tmp198_ = tmp7_*(tmp3_);
   double tmp199_ = tmp198_*tmp49_;
   double tmp200_ = (tmp199_)/tmp79_;
   double tmp201_ = (tmp200_)*(tmp61_);
   double tmp202_ = tmp8_*(tmp1_);
   double tmp203_ = tmp202_*tmp49_;
   double tmp204_ = (tmp203_)/tmp79_;
   double tmp205_ = (tmp204_)*(tmp50_);
   double tmp206_ = tmp8_*(tmp3_);
   double tmp207_ = tmp206_*tmp49_;
   double tmp208_ = (tmp207_)/tmp79_;
   double tmp209_ = (tmp208_)*(tmp61_);
   double tmp210_ = tmp9_*(tmp1_);
   double tmp211_ = tmp210_*tmp49_;
   double tmp212_ = (tmp211_)/tmp79_;
   double tmp213_ = (tmp212_)*(tmp50_);
   double tmp214_ = tmp9_*(tmp3_);
   double tmp215_ = tmp214_*tmp49_;
   double tmp216_ = (tmp215_)/tmp79_;
   double tmp217_ = (tmp216_)*(tmp61_);
   double tmp218_ = tmp23_*(tmp1_);
   double tmp219_ = tmp218_*tmp49_;
   double tmp220_ = (tmp219_)/tmp79_;
   double tmp221_ = (tmp220_)*(tmp50_);
   double tmp222_ = tmp23_*(tmp3_);
   double tmp223_ = tmp222_*tmp49_;
   double tmp224_ = (tmp223_)/tmp79_;
   double tmp225_ = (tmp224_)*(tmp61_);
   double tmp226_ = (tmp32_)*tmp49_;
   double tmp227_ = (tmp226_)/tmp79_;
   double tmp228_ = (tmp227_)*(tmp50_);
   double tmp229_ = tmp36_*tmp49_;
   double tmp230_ = (tmp229_)/tmp79_;
   double tmp231_ = (tmp230_)*(tmp61_);
   double tmp232_ = (tmp230_)*(tmp50_);
   double tmp233_ = (tmp54_)*tmp49_;
   double tmp234_ = (tmp233_)/tmp79_;
   double tmp235_ = (tmp234_)*(tmp61_);
   double tmp236_ = (tmp1_)*tmp49_;
   double tmp237_ = (tmp236_)/tmp79_;
   double tmp238_ = (tmp237_)*(tmp50_);
   double tmp239_ = (tmp3_)*tmp49_;
   double tmp240_ = (tmp239_)/tmp79_;
   double tmp241_ = (tmp240_)*(tmp50_);
   double tmp242_ = cos(tmp64_);
   double tmp243_ = tmp85_*tmp66_;
   double tmp244_ = -(tmp63_);
   double tmp245_ = -(tmp68_);
   double tmp246_ = tmp243_*tmp70_;
   double tmp247_ = -(tmp242_);
   double tmp248_ = tmp247_*tmp63_;
   double tmp249_ = tmp85_*tmp68_;
   double tmp250_ = tmp66_*tmp70_;
   double tmp251_ = tmp81_+tmp81_;
   double tmp252_ = tmp84_+tmp84_;
   double tmp253_ = tmp251_+tmp252_;
   double tmp254_ = 0.500000*(tmp253_);
   double tmp255_ = (tmp254_)/tmp77_;
   double tmp256_ = tmp88_+tmp88_;
   double tmp257_ = 0.500000*(tmp256_);
   double tmp258_ = (tmp257_)/tmp77_;
   double tmp259_ = (tmp87_)*tmp77_;
   double tmp260_ = tmp90_+tmp90_;
   double tmp261_ = 0.500000*(tmp260_);
   double tmp262_ = (tmp261_)/tmp77_;
   double tmp263_ = tmp131_+tmp131_;
   double tmp264_ = tmp139_+tmp139_;
   double tmp265_ = tmp263_+tmp264_;
   double tmp266_ = 0.500000*(tmp265_);
   double tmp267_ = (tmp266_)/tmp77_;
   double tmp268_ = tmp173_+tmp173_;
   double tmp269_ = tmp185_+tmp185_;
   double tmp270_ = tmp268_+tmp269_;
   double tmp271_ = 0.500000*(tmp270_);
   double tmp272_ = (tmp271_)/tmp77_;
   double tmp273_ = tmp189_+tmp189_;
   double tmp274_ = tmp193_+tmp193_;
   double tmp275_ = tmp273_+tmp274_;
   double tmp276_ = 0.500000*(tmp275_);
   double tmp277_ = (tmp276_)/tmp77_;
   double tmp278_ = tmp197_+tmp197_;
   double tmp279_ = tmp201_+tmp201_;
   double tmp280_ = tmp278_+tmp279_;
   double tmp281_ = 0.500000*(tmp280_);
   double tmp282_ = (tmp281_)/tmp77_;
   double tmp283_ = tmp205_+tmp205_;
   double tmp284_ = tmp209_+tmp209_;
   double tmp285_ = tmp283_+tmp284_;
   double tmp286_ = 0.500000*(tmp285_);
   double tmp287_ = (tmp286_)/tmp77_;
   double tmp288_ = tmp213_+tmp213_;
   double tmp289_ = tmp217_+tmp217_;
   double tmp290_ = tmp288_+tmp289_;
   double tmp291_ = 0.500000*(tmp290_);
   double tmp292_ = (tmp291_)/tmp77_;
   double tmp293_ = tmp221_+tmp221_;
   double tmp294_ = tmp225_+tmp225_;
   double tmp295_ = tmp293_+tmp294_;
   double tmp296_ = 0.500000*(tmp295_);
   double tmp297_ = (tmp296_)/tmp77_;
   double tmp298_ = (tmp230_)*tmp77_;
   double tmp299_ = tmp228_+tmp228_;
   double tmp300_ = tmp231_+tmp231_;
   double tmp301_ = tmp299_+tmp300_;
   double tmp302_ = 0.500000*(tmp301_);
   double tmp303_ = (tmp302_)/tmp77_;
   double tmp304_ = tmp232_+tmp232_;
   double tmp305_ = tmp235_+tmp235_;
   double tmp306_ = tmp304_+tmp305_;
   double tmp307_ = 0.500000*(tmp306_);
   double tmp308_ = (tmp307_)/tmp77_;
   double tmp309_ = tmp238_+tmp238_;
   double tmp310_ = 0.500000*(tmp309_);
   double tmp311_ = (tmp310_)/tmp77_;
   double tmp312_ = tmp241_+tmp241_;
   double tmp313_ = 0.500000*(tmp312_);
   double tmp314_ = (tmp313_)/tmp77_;
   double tmp315_ = tmp63_*tmp242_;
   double tmp316_ = tmp315_*mLocDirEsp2_x;
   double tmp317_ = tmp71_*tmp68_;
   double tmp318_ = tmp71_*tmp72_;
   double tmp319_ = tmp85_*tmp69_;
   double tmp320_ = tmp247_*tmp66_;
   double tmp321_ = -(tmp72_);

  mVal[0] = (tmp50_)/tmp77_-(tmp316_+(tmp67_*tmp72_+tmp317_)*mLocDirEsp2_y+(tmp67_*tmp245_+tmp318_)*mLocDirEsp2_z);

  mCompDer[0][0] = ((tmp80_)*tmp77_-(tmp50_)*(tmp255_))/tmp89_;
  mCompDer[0][1] = (tmp259_-(tmp50_)*(tmp258_))/tmp89_;
  mCompDer[0][2] = -((tmp50_)*(tmp262_))/tmp89_;
  mCompDer[0][3] = ((tmp130_)*tmp77_-(tmp50_)*(tmp267_))/tmp89_;
  mCompDer[0][4] = ((tmp172_)*tmp77_-(tmp50_)*(tmp272_))/tmp89_;
  mCompDer[0][5] = ((tmp188_)*tmp77_-(tmp50_)*(tmp277_))/tmp89_;
  mCompDer[0][6] = ((tmp196_)*tmp77_-(tmp50_)*(tmp282_))/tmp89_;
  mCompDer[0][7] = ((tmp204_)*tmp77_-(tmp50_)*(tmp287_))/tmp89_;
  mCompDer[0][8] = ((tmp212_)*tmp77_-(tmp50_)*(tmp292_))/tmp89_;
  mCompDer[0][9] = ((tmp220_)*tmp77_-(tmp50_)*(tmp297_))/tmp89_;
  mCompDer[0][10] = ((tmp227_)*tmp77_-(tmp50_)*(tmp303_))/tmp89_;
  mCompDer[0][11] = (tmp298_-(tmp50_)*(tmp308_))/tmp89_;
  mCompDer[0][12] = ((tmp237_)*tmp77_-(tmp50_)*(tmp311_))/tmp89_;
  mCompDer[0][13] = ((tmp240_)*tmp77_-(tmp50_)*(tmp314_))/tmp89_;
  mCompDer[0][14] = -(tmp243_*tmp242_*mLocDirEsp2_x+(tmp244_*tmp72_+tmp246_*tmp68_)*mLocDirEsp2_y+(tmp244_*tmp245_+tmp246_*tmp72_)*mLocDirEsp2_z);
  mCompDer[0][15] = -(tmp319_*tmp63_*mLocDirEsp2_x+tmp248_*tmp68_*mLocDirEsp2_y+tmp248_*tmp72_*mLocDirEsp2_z);
  mCompDer[0][16] = -((tmp249_*tmp67_+tmp72_*tmp71_)*mLocDirEsp2_y+(tmp321_*tmp67_+tmp249_*tmp71_)*mLocDirEsp2_z);
  mCompDer[0][17] = 0;
  mCompDer[0][18] = 0;
  mCompDer[0][19] = 0;
  mVal[1] = (tmp61_)/tmp77_-(tmp66_*tmp242_*mLocDirEsp2_x+(tmp63_*tmp72_+tmp250_*tmp68_)*mLocDirEsp2_y+(tmp63_*tmp245_+tmp250_*tmp72_)*mLocDirEsp2_z);

  mCompDer[1][0] = ((tmp83_)*tmp77_-(tmp61_)*(tmp255_))/tmp89_;
  mCompDer[1][1] = -((tmp61_)*(tmp258_))/tmp89_;
  mCompDer[1][2] = (tmp259_-(tmp61_)*(tmp262_))/tmp89_;
  mCompDer[1][3] = ((tmp138_)*tmp77_-(tmp61_)*(tmp267_))/tmp89_;
  mCompDer[1][4] = ((tmp184_)*tmp77_-(tmp61_)*(tmp272_))/tmp89_;
  mCompDer[1][5] = ((tmp192_)*tmp77_-(tmp61_)*(tmp277_))/tmp89_;
  mCompDer[1][6] = ((tmp200_)*tmp77_-(tmp61_)*(tmp282_))/tmp89_;
  mCompDer[1][7] = ((tmp208_)*tmp77_-(tmp61_)*(tmp287_))/tmp89_;
  mCompDer[1][8] = ((tmp216_)*tmp77_-(tmp61_)*(tmp292_))/tmp89_;
  mCompDer[1][9] = ((tmp224_)*tmp77_-(tmp61_)*(tmp297_))/tmp89_;
  mCompDer[1][10] = (tmp298_-(tmp61_)*(tmp303_))/tmp89_;
  mCompDer[1][11] = ((tmp234_)*tmp77_-(tmp61_)*(tmp308_))/tmp89_;
  mCompDer[1][12] = -((tmp61_)*(tmp311_))/tmp89_;
  mCompDer[1][13] = -((tmp61_)*(tmp314_))/tmp89_;
  mCompDer[1][14] = -(tmp316_+(tmp243_*tmp72_+tmp317_)*mLocDirEsp2_y+(tmp243_*tmp245_+tmp318_)*mLocDirEsp2_z);
  mCompDer[1][15] = -(tmp319_*tmp66_*mLocDirEsp2_x+tmp320_*tmp68_*mLocDirEsp2_y+tmp320_*tmp72_*mLocDirEsp2_z);
  mCompDer[1][16] = -((tmp249_*tmp63_+tmp72_*tmp250_)*mLocDirEsp2_y+(tmp321_*tmp63_+tmp249_*tmp250_)*mLocDirEsp2_z);
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mVal[2] = 1.000000/tmp77_-(tmp69_*mLocDirEsp2_x+tmp242_*tmp68_*mLocDirEsp2_y+tmp242_*tmp72_*mLocDirEsp2_z);

  mCompDer[2][0] = -(tmp255_)/tmp89_;
  mCompDer[2][1] = -(tmp258_)/tmp89_;
  mCompDer[2][2] = -(tmp262_)/tmp89_;
  mCompDer[2][3] = -(tmp267_)/tmp89_;
  mCompDer[2][4] = -(tmp272_)/tmp89_;
  mCompDer[2][5] = -(tmp277_)/tmp89_;
  mCompDer[2][6] = -(tmp282_)/tmp89_;
  mCompDer[2][7] = -(tmp287_)/tmp89_;
  mCompDer[2][8] = -(tmp292_)/tmp89_;
  mCompDer[2][9] = -(tmp297_)/tmp89_;
  mCompDer[2][10] = -(tmp303_)/tmp89_;
  mCompDer[2][11] = -(tmp308_)/tmp89_;
  mCompDer[2][12] = -(tmp311_)/tmp89_;
  mCompDer[2][13] = -(tmp314_)/tmp89_;
  mCompDer[2][14] = 0;
  mCompDer[2][15] = -(tmp242_*mLocDirEsp2_x+tmp319_*tmp68_*mLocDirEsp2_y+tmp319_*tmp72_*mLocDirEsp2_z);
  mCompDer[2][16] = -(tmp72_*tmp242_*mLocDirEsp2_y+tmp249_*tmp242_*mLocDirEsp2_z);
  mCompDer[2][17] = 0;
  mCompDer[2][18] = 0;
  mCompDer[2][19] = 0;
}


void cEqCalibCroisee_DRad5APFraser_CodGenC2M::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqCalibCroisee_DRad5APFraser_CodGenC2M Has no Der Sec");
}

void cEqCalibCroisee_DRad5APFraser_CodGenC2M::SetDirEsp2_x(double aVal){ mLocDirEsp2_x = aVal;}
void cEqCalibCroisee_DRad5APFraser_CodGenC2M::SetDirEsp2_y(double aVal){ mLocDirEsp2_y = aVal;}
void cEqCalibCroisee_DRad5APFraser_CodGenC2M::SetDirEsp2_z(double aVal){ mLocDirEsp2_z = aVal;}
void cEqCalibCroisee_DRad5APFraser_CodGenC2M::SetPIm1_x(double aVal){ mLocPIm1_x = aVal;}
void cEqCalibCroisee_DRad5APFraser_CodGenC2M::SetPIm1_y(double aVal){ mLocPIm1_y = aVal;}



double * cEqCalibCroisee_DRad5APFraser_CodGenC2M::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "DirEsp2_x") return & mLocDirEsp2_x;
   if (aName == "DirEsp2_y") return & mLocDirEsp2_y;
   if (aName == "DirEsp2_z") return & mLocDirEsp2_z;
   if (aName == "PIm1_x") return & mLocPIm1_x;
   if (aName == "PIm1_y") return & mLocPIm1_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqCalibCroisee_DRad5APFraser_CodGenC2M::mTheAuto("cEqCalibCroisee_DRad5APFraser_CodGenC2M",cEqCalibCroisee_DRad5APFraser_CodGenC2M::Alloc);


cElCompiledFonc *  cEqCalibCroisee_DRad5APFraser_CodGenC2M::Alloc()
{  return new cEqCalibCroisee_DRad5APFraser_CodGenC2M();
}


