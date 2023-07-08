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
procrw(0x01C08EBC,ERTSTA,3,1);
procrw(0x01C08E9C,ERTSTB,6,1);
procrw(0x004A790D,ERTSTC,72,1);
procrw(0x030DF55A,ERTSTD,112,1);
procrw(0x018E608A,ERTSTE,225,1);
}else{
procrw(0x017306DB,verid1,1,0);
procrw(0x017306E0,verid2,1,0);
procrw(0x017306E2,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)201&&verid3[0]==(unsigned char)192){
procrw(0x01C3874C,ER100A,3,1);
procrw(0x01C3872C,ER100B,6,1);
procrw(0x004A725D,ER100C,72,1);
procrw(0x03106B3C,ER100D,112,1);
procrw(0x0191459E,ER100E,221,1);
}else{
procrw(0x017324AB,verid1,1,0);
procrw(0x017324B0,verid2,1,0);
procrw(0x017324B5,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)5&&verid3[0]==(unsigned char)192){
procrw(0x01C4394C,ER150A,3,1);
procrw(0x01C4392D,ER150B,5,1);
procrw(0x004A725D,ER150C,72,1);
procrw(0x0312C2A8,ER150D,112,1);
procrw(0x01920133,ER150E,232,1);
}else{
procrw(0x01734699,verid1,1,0);
procrw(0x0173469E,verid2,1,0);
procrw(0x017346A3,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)7&&verid3[0]==(unsigned char)192){
procrw(0x01C4AC0C,ER170A,3,1);
procrw(0x01C4ABEC,ER170B,6,1);
procrw(0x004A725D,ER170C,72,1);
procrw(0x03133CA8,ER170D,112,1);
procrw(0x019250CB,ER170E,224,1);
}else{
procrw(0x0173587B,verid1,1,0);
procrw(0x01735880,verid2,1,0);
procrw(0x01735885,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)6&&verid3[0]==(unsigned char)192){
procrw(0x01C4AADC,ER160A,3,1);
procrw(0x01C4AABC,ER160B,6,1);
procrw(0x004A725D,ER160C,72,1);
procrw(0x03132CE9,ER160D,112,1);
procrw(0x01925FBB,ER160E,224,1);
}else{
procrw(0x017591BB,verid1,1,0);
procrw(0x017591C0,verid2,1,0);
procrw(0x017591C6,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)3&&verid3[0]==(unsigned char)2){
procrw(0x01C6A75C,ER132A,3,1);
procrw(0x01C6A73D,ER132B,5,1);
procrw(0x004A725D,ER132C,72,1);
procrw(0x031415A4,ER132D,112,1);
procrw(0x01947653,ER132E,232,1);
}else{
procrw(0x0177A6C8,verid1,1,0);
procrw(0x0177A6CD,verid2,1,0);
procrw(0x0177A6D2,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)8&&verid3[0]==(unsigned char)192){
procrw(0x01CBB12C,ER180A,3,1);
procrw(0x01CBB10C,ER180B,6,1);
procrw(0x004A725D,ER180C,72,1);
procrw(0x031A6E07,ER180D,112,1);
procrw(0x0198EC5B,ER180E,224,1);
}else{
procrw(0x0177A6C8,verid1,1,0);
procrw(0x0177A6CD,verid2,1,0);
procrw(0x0177A6D3,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)8&&verid3[0]==(unsigned char)1){
procrw(0x01CBB11C,ER181A,3,1);
procrw(0x01CBB0FC,ER181B,6,1);
procrw(0x004A725D,ER181C,72,1);
procrw(0x031A6E07,ER181D,112,1);
procrw(0x0198EC4B,ER181E,224,1);
}else{
procrw(0x0177C2A8,verid1,1,0);
procrw(0x0177C2AD,verid2,1,0);
procrw(0x0177C2B2,verid3,1,0);
if(verid1[0]==(unsigned char)1&&verid2[0]==(unsigned char)9&&verid3[0]==(unsigned char)192){
procrw(0x01CBEDDC,ER190A,3,1);
procrw(0x01CBEDBC,ER190B,6,1);
procrw(0x004A725D,ER190C,72,1);
procrw(0x031AAB47,ER190D,112,1);
procrw(0x019918DB,ER190E,224,1);
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