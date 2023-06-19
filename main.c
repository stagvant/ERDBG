#include <stdio.h>
#include <stdint.h>
#include <plugins.h>
#include <stdbool.h>
#include "eldenring.h"
#include <orbis/libkernel.h>
#define db 0x003FC000
struct proc_info procInfo;
struct proc_rw datawrite;
OrbisPthread engine;
char auth[16];
unsigned char verid1[1]={0};
unsigned char verid2[1]={0};
unsigned char verid3[1]={0};
void procrw(u64 cd,void *dw,u64 s,u64 flag){
datawrite.address=cd+db;
datawrite.data=dw;
datawrite.length=s;
datawrite.write_flags=flag;
sys_sdk_proc_rw(&datawrite);}
void *spectrengine(void *args){
procrw(0x01711F8B,verid1,1,0);
procrw(0x01711F90,verid2,1,0);
procrw(0x01711F92,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)201&&verid3[0]==(unsigned char)192){
procrw(0x030DF718,ERTSTA,131,1);
procrw(0x018AE710,ERTSTB,72,1);
procrw(0x018CDCDB,ERTSTC,41,1);
procrw(0x01C5D771,ERTSTD,35,1);
procrw(0x01C5D881,ERTSTD,35,1);
procrw(0x01C5D991,ERTSTD,35,1);
procrw(0x018CDC6D,ERTSTE,28,1);
procrw(0x02D42FDA,ERTSTF,22,1);
procrw(0x01BF66B5,ERTSTG,17,1);
procrw(0x01BA842B,ERTSTH,4,1);
procrw(0x01BA843D,ERTSTJ,3,1);
procrw(0x01711FE4,ERTSTK,3,1);
procrw(0x017122C6,ERTSTL,3,1);
procrw(0x01885AC1,ERTSTM,2,1);
procrw(0x017FB30A,ERTSTM,2,1);
procrw(0x018AE7D8,ERTSTM,2,1);
procrw(0x01BE79E9,ERTSTM,2,1);
procrw(0x01C04EA6,ERTSTM,2,1);
procrw(0x0172FABD,ERTSTN,1,1);
procrw(0x017120FB,ERTSTO,1,1);
procrw(0x01535624,ERTSTO,1,1);
procrw(0x015C232D,ERTSTP,1,1);
procrw(0x01735AC1,ERTSTP,1,1);
procrw(0x018AE8FB,ERTSTQ,1,1);
procrw(0x013594E9,ERTSTR,1,1);
procrw(0x01725C7B,ERTSTS,1,1);
procrw(0x01725C84,ERTSTS,1,1);
procrw(0x01725C8D,ERTSTS,1,1);
procrw(0x01725C96,ERTSTS,1,1);
procrw(0x01725C9F,ERTSTS,1,1);
}else{
procrw(0x017306DB,verid1,1,0);
procrw(0x017306E0,verid2,1,0);
procrw(0x017306E2,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)201&&verid3[0]==(unsigned char)192){
procrw(0x03106CFA,ER100A,131,1);
procrw(0x018DAC70,ER100B,72,1);
procrw(0x018FA3BB,ER100C,41,1);
procrw(0x01C85D51,ER100D,35,1);
procrw(0x01C85E61,ER100D,35,1);
procrw(0x01C85F71,ER100D,35,1);
procrw(0x018FA34D,ER100E,28,1);
procrw(0x02D690CA,ER100F,22,1);
procrw(0x01C25E32,ER100G,17,1);
procrw(0x01BDA85A,ER100H,4,1);
procrw(0x01BDA869,ER100J,3,1);
procrw(0x01730734,ER100K,3,1);
procrw(0x01730A1D,ER100L,3,1);
procrw(0x018B0E51,ER100M,2,1);
procrw(0x018250FA,ER100M,2,1);
procrw(0x018DAD38,ER100M,2,1);
procrw(0x01C1B0B1,ER100M,2,1);
procrw(0x01C34642,ER100M,2,1);
procrw(0x01750D5D,ER100N,1,1);
procrw(0x01542224,ER100O,1,1);
procrw(0x015D500E,ER100P,1,1);
procrw(0x01757731,ER100P,1,1);
procrw(0x01767FFA,ER100P,1,1);
procrw(0x018DAE5B,ER100Q,1,1);
procrw(0x01361989,ER100R,1,1);
procrw(0x01746CD9,ER100S,1,1);
procrw(0x01746CE1,ER100S,1,1);
procrw(0x01746CE9,ER100S,1,1);
procrw(0x01746CF1,ER100S,1,1);
procrw(0x01746CF9,ER100S,1,1);
}else{
procrw(0x017324AB,verid1,1,0);
procrw(0x017324B0,verid2,1,0);
procrw(0x017324B5,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)5&&verid3[0]==(unsigned char)192){
procrw(0x0312C466,ER150A,131,1);
procrw(0x018E76E7,ER150B,93,1);
procrw(0x01907A2B,ER150C,41,1);
procrw(0x01C91AB1,ER150D,35,1);
procrw(0x01C91BC1,ER150D,35,1);
procrw(0x01C91CD1,ER150D,35,1);
procrw(0x019079BD,ER150E,28,1);
procrw(0x02D8C8DA,ER150F,22,1);
procrw(0x01CE4AB3,ER150G,17,1);
procrw(0x01BE9E0E,ER150H,5,1);
procrw(0x01BE9E03,ER150J,4,1);
procrw(0x01732507,ER150K,3,1);
procrw(0x017327F0,ER150L,3,1);
procrw(0x014B586A,ER150M,2,1);
procrw(0x01832C0A,ER150M,2,1);
procrw(0x018E77C4,ER150M,2,1);
procrw(0x01C28225,ER150M,2,1);
procrw(0x01C40C12,ER150M,2,1);
procrw(0x017525AD,ER150N,1,1);
procrw(0x0154A1C4,ER150O,1,1);
procrw(0x015CF3B2,ER150O,1,1);
procrw(0x01766474,ER150O,1,1);
procrw(0x01765CD0,ER150P,1,1);
procrw(0x018E787C,ER150Q,1,1);
procrw(0x01373E46,ER150R,1,1);
procrw(0x01749229,ER150S,1,1);
procrw(0x01749231,ER150S,1,1);
procrw(0x01749239,ER150S,1,1);
procrw(0x01749241,ER150S,1,1);
procrw(0x01749249,ER150S,1,1);
}else{
procrw(0x01734699,verid1,1,0);
procrw(0x0173469E,verid2,1,0);
procrw(0x017346A3,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)7&&verid3[0]==(unsigned char)192){
procrw(0x03133E66,ER170A,131,1);
procrw(0x018EA6C7,ER170B,93,1);
procrw(0x0190A82B,ER170C,41,1);
procrw(0x01C98DA1,ER170D,35,1);
procrw(0x01C98EB1,ER170D,35,1);
procrw(0x01C98FC1,ER170D,35,1);
procrw(0x0190A7BD,ER170E,28,1);
procrw(0x02D9411A,ER170F,22,1);
procrw(0x01CEC083,ER170G,17,1);
procrw(0x01BF0D5E,ER170H,5,1);
procrw(0x01BF0D53,ER170J,4,1);
procrw(0x017346F5,ER170K,3,1);
procrw(0x017349E8,ER170L,3,1);
procrw(0x014B5F9A,ER170M,2,1);
procrw(0x0183731A,ER170M,2,1);
procrw(0x018EA7A4,ER170M,2,1);
procrw(0x01C2F485,ER170M,2,1);
procrw(0x01C47E72,ER170M,2,1);
procrw(0x0175481D,ER170N,1,1);
procrw(0x0154B4E4,ER170O,1,1);
procrw(0x015D0B12,ER170O,1,1);
procrw(0x01768714,ER170O,1,1);
procrw(0x01767F70,ER170P,1,1);
procrw(0x018EA85C,ER170Q,1,1);
procrw(0x01374C66,ER170R,1,1);
procrw(0x0174B499,ER170S,1,1);
procrw(0x0174B4A1,ER170S,1,1);
procrw(0x0174B4A9,ER170S,1,1);
procrw(0x0174B4B1,ER170S,1,1);
procrw(0x0174B4B9,ER170S,1,1);
}else{
procrw(0x0173587B,verid1,1,0);
procrw(0x01735880,verid2,1,0);
procrw(0x01735885,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)6&&verid3[0]==(unsigned char)192){
procrw(0x03132EA7,ER160A,131,1);
procrw(0x018EB4F7,ER160B,93,1);
procrw(0x0190B65B,ER160C,41,1);
procrw(0x01C98C71,ER160D,35,1);
procrw(0x01C98D81,ER160D,35,1);
procrw(0x01C98E91,ER160D,35,1);
procrw(0x0190B5ED,ER160E,28,1);
procrw(0x02D931FA,ER160F,22,1);
procrw(0x01CEBF43,ER160G,17,1);
procrw(0x01BF0D8E,ER160H,5,1);
procrw(0x01BF0D83,ER160J,4,1);
procrw(0x017358D7,ER160K,3,1);
procrw(0x01735BC0,ER160L,3,1);
procrw(0x014B824A,ER160M,2,1);
procrw(0x0183846A,ER160M,2,1);
procrw(0x018EB5D4,ER160M,2,1);
procrw(0x01C2F355,ER160M,2,1);
procrw(0x01C47D42,ER160M,2,1);
procrw(0x0175597D,ER160N,1,1);
procrw(0x0154D564,ER160O,1,1);
procrw(0x015D2772,ER160O,1,1);
procrw(0x01769844,ER160O,1,1);
procrw(0x017690A0,ER160P,1,1);
procrw(0x018EB68C,ER160Q,1,1);
procrw(0x01376376,ER160R,1,1);
procrw(0x0174C5F9,ER160S,1,1);
procrw(0x0174C601,ER160S,1,1);
procrw(0x0174C609,ER160S,1,1);
procrw(0x0174C611,ER160S,1,1);
procrw(0x0174C619,ER160S,1,1);
}else{
procrw(0x017591BB,verid1,1,0);
procrw(0x017591C0,verid2,1,0);
procrw(0x017591C6,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)3&&verid3[0]==(unsigned char)2){
procrw(0x03141762,ER132A,131,1);
procrw(0x0190D168,ER132B,72,1);
procrw(0x0192D0EB,ER132C,41,1);
procrw(0x01CB7E31,ER132D,35,1);
procrw(0x01CB7F41,ER132D,35,1);
procrw(0x01CB8051,ER132D,35,1);
procrw(0x0192D07D,ER132E,28,1);
procrw(0x02DA1CDA,ER132F,22,1);
procrw(0x01D0A663,ER132G,17,1);
procrw(0x01C1173C,ER132H,5,1);
procrw(0x01C11731,ER132J,4,1);
procrw(0x0175921D,ER132K,3,1);
procrw(0x01759506,ER132L,3,1);
procrw(0x014AEDFA,ER132M,2,1);
procrw(0x0185895A,ER132M,2,1);
procrw(0x0190D230,ER132M,2,1);
procrw(0x01C4F1C5,ER132M,2,1);
procrw(0x01C67AA2,ER132M,2,1);
procrw(0x01779F9D,ER132N,1,1);
procrw(0x01557414,ER132O,1,1);
procrw(0x015F1432,ER132O,1,1);
procrw(0x0178C374,ER132O,1,1);
procrw(0x0178BBD0,ER132P,1,1);
procrw(0x0190D34B,ER132Q,1,1);
procrw(0x0136E319,ER132R,1,1);
procrw(0x01770179,ER132S,1,1);
procrw(0x01770181,ER132S,1,1);
procrw(0x01770189,ER132S,1,1);
procrw(0x01770191,ER132S,1,1);
procrw(0x01770199,ER132S,1,1);
}else{
procrw(0x0177A6C8,verid1,1,0);
procrw(0x0177A6CD,verid2,1,0);
procrw(0x0177A6D2,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)8&&verid3[0]==(unsigned char)192){
procrw(0x031A6FC5,ER180A,131,1);
procrw(0x01953377,ER180B,93,1);
procrw(0x019743AB,ER180C,41,1);
procrw(0x01D09CF1,ER180D,35,1);
procrw(0x01D09E01,ER180D,35,1);
procrw(0x01D09F11,ER180D,35,1);
procrw(0x0197433D,ER180E,28,1);
procrw(0x02E05A4A,ER180F,22,1);
procrw(0x01D5D023,ER180G,17,1);
procrw(0x01C707E1,ER180H,6,1);
procrw(0x01C707CC,ER180J,5,1);
procrw(0x0177A724,ER180K,3,1);
procrw(0x0177AA3A,ER180L,3,1);
procrw(0x019278D1,ER180M,2,1);
procrw(0x0189A62A,ER180M,2,1);
procrw(0x01953454,ER180M,2,1);
procrw(0x01C9EBB5,ER180M,2,1);
procrw(0x01CB7672,ER180M,2,1);
procrw(0x0179AC4D,ER180N,1,1);
procrw(0x0156F3C4,ER180O,1,1);
procrw(0x015F8122,ER180O,1,1);
procrw(0x017AECF1,ER180O,1,1);
procrw(0x017AE525,ER180P,1,1);
procrw(0x0195350C,ER180Q,1,1);
procrw(0x01396C46,ER180R,1,1);
procrw(0x01791809,ER180S,1,1);
procrw(0x01791811,ER180S,1,1);
procrw(0x01791819,ER180S,1,1);
procrw(0x01791821,ER180S,1,1);
procrw(0x01791829,ER180S,1,1);
}else{
procrw(0x0177A6C8,verid1,1,0);
procrw(0x0177A6CD,verid2,1,0);
procrw(0x0177A6D3,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)8&&verid3[0]==(unsigned char)1){
procrw(0x031A6FC5,ER181A,131,1);
procrw(0x01953367,ER181B,93,1);
procrw(0x0197439B,ER181C,41,1);
procrw(0x01D09CE1,ER181D,35,1);
procrw(0x01D09DF1,ER181D,35,1);
procrw(0x01D09F01,ER181D,35,1);
procrw(0x0197432D,ER181E,28,1);
procrw(0x02E05A3A,ER181F,22,1);
procrw(0x01D5D013,ER181G,17,1);
procrw(0x01C707D1,ER181H,6,1);
procrw(0x01C707BC,ER181J,5,1);
procrw(0x0177A72A,ER181K,3,1);
procrw(0x0177AA40,ER181L,3,1);
procrw(0x019278D1,ER181M,2,1);
procrw(0x0189A62A,ER181M,2,1);
procrw(0x01953444,ER181M,2,1);
procrw(0x01C9EBA5,ER181M,2,1);
procrw(0x01CB7662,ER181M,2,1);
procrw(0x0179AC4D,ER181N,1,1);
procrw(0x0156F3C4,ER181O,1,1);
procrw(0x015F8122,ER181O,1,1);
procrw(0x017AECF1,ER181O,1,1);
procrw(0x017AE525,ER181P,1,1);
procrw(0x019534FC,ER181Q,1,1);
procrw(0x01396C46,ER181R,1,1);
procrw(0x01791809,ER181S,1,1);
procrw(0x01791811,ER181S,1,1);
procrw(0x01791819,ER181S,1,1);
procrw(0x01791821,ER181S,1,1);
procrw(0x01791829,ER181S,1,1);
}else{
procrw(0x0177C2A8,verid1,1,0);
procrw(0x0177C2AD,verid2,1,0);
procrw(0x0177C2B2,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)9&&verid3[0]==(unsigned char)192){
procrw(0x031AAD05,ER190A,131,1);
procrw(0x01955FF7,ER190B,93,1);
procrw(0x0197702B,ER190C,41,1);
procrw(0x01D0DA11,ER190D,35,1);
procrw(0x01D0DB21,ER190D,35,1);
procrw(0x01D0DC31,ER190D,35,1);
procrw(0x01976FBD,ER190E,28,1);
procrw(0x02E0976A,ER190F,22,1);
procrw(0x01D60D43,ER190G,17,1);
procrw(0x01C744AF,ER190H,6,1);
procrw(0x01C7449A,ER190J,5,1);
procrw(0x0177C304,ER190K,3,1);
procrw(0x0177C61A,ER190L,3,1);
procrw(0x0192A561,ER190M,2,1);
procrw(0x0189D2BA,ER190M,2,1);
procrw(0x019560D4,ER190M,2,1);
procrw(0x01CA2895,ER190M,2,1);
procrw(0x01CBB352,ER190M,2,1);
procrw(0x0179C82D,ER190N,1,1);
procrw(0x01570674,ER190O,1,1);
procrw(0x015F93D2,ER190O,1,1);
procrw(0x017B08D1,ER190O,1,1);
procrw(0x017B0105,ER190P,1,1);
procrw(0x0195618C,ER190Q,1,1);
procrw(0x01397196,ER190R,1,1);
procrw(0x017933E9,ER190S,1,1);
procrw(0x017933F1,ER190S,1,1);
procrw(0x017933F9,ER190S,1,1);
procrw(0x01793401,ER190S,1,1);
procrw(0x01793409,ER190S,1,1);
}}}}}}}}}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if(sys_sdk_proc_info(&procInfo)){return 0;}
memcpy(auth, procInfo.titleid, sizeof(auth));
if(auth[4]=='1'&&auth[5]=='8'&&auth[6]=='8'&&auth[7]=='8'&&auth[8]=='0'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='1'&&auth[5]=='8'&&auth[6]=='5'&&auth[7]=='8'&&auth[8]=='1'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='1'&&auth[5]=='8'&&auth[6]=='7'&&auth[7]=='2'&&auth[8]=='3'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='2'&&auth[5]=='8'&&auth[6]=='5'&&auth[7]=='2'&&auth[8]=='7'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='2'&&auth[5]=='8'&&auth[6]=='8'&&auth[7]=='6'&&auth[8]=='3'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}}}}}
return 0;}
int32_t attr_module_hidden module_stop(size_t argc,const void *args){
return 0;}