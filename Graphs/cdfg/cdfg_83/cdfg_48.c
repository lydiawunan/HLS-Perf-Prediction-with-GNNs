#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576292443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p)
{
  unsigned char v_17;
  unsigned long long v_14;
  unsigned int v_12;
  short v_10;
  double v_8;
  char v_6;
  signed char v_4;
  unsigned short v;
  short result;
  v_17 = (unsigned char)100;
  v_14 = (unsigned long long)p;
  v_12 = 901676439U;
  v_10 = (short)22985;
  v_8 = (double)p;
  v_6 = (char)2;
  v_4 = (signed char)-8;
  v = (unsigned short)39005;
  result = (short)p;
  while (v_14 > 39ULL) {
    v_8 = (unsigned int)v_17 | 4294902818U;
    v_6 = (char)(((v_14 / (v_14 + 53ULL)) * (unsigned long long)(p * 57550581LL)) % (unsigned long long)(
                 p + 1005LL));
    v_10 = (short)-13;
    v_14 = (unsigned long long)(! ((int)((char)v_8) / ((int)v_6 + 285))) / (
           (unsigned long long)(p - p) / (v_14 * (unsigned long long)-368.121538499 + 64ULL) + 536ULL);
  }
  while_0_break: ;
  while ((unsigned long long)(32265 + (int)v) + 18446744073709551615ULL > (unsigned long long)(
         (double)(~ ((int)v_4 * (int)v_6)) - v_8)) {
    v_10 = (unsigned long)v_10 / 4294947116UL;
    v_4 = (signed char)v_12;
    v = (unsigned short)((unsigned long long)p + v_14);
    v_8 = (double)(256221296ULL + (912070463ULL - v_14) / 30905ULL);
  }
  while_0_break_0: ;
  return result;
}


