#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 17921117
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p[1][2][2], unsigned short p_4, unsigned int p_6,
         unsigned char p_8, float p_17)
{
  signed char v_15;
  int v_13;
  unsigned long v_11;
  short v;
  char result;
  v_15 = (signed char)123;
  v_13 = -554142047;
  v_11 = (unsigned long)p_6;
  v = (short)-22199;
  result = (char)-97;
  while (-44 == ~ (-83 - (int)(- v))) {
    v_13 = (unsigned long)v_13 - v_11 / 56717UL;
    v_11 = 19914UL;
    result = (char)p_17;
    v = (short)(18446744073709486537ULL - (unsigned long long)((int)v_15 / (
                                                               (int)(~ v_15) + 538)));
  }
  while_0_break: ;
  result = (char)(18446744073095517818ULL / (unsigned long long)(((int)((signed char)1.53679655308e+38f) >> 6) + 57) + (unsigned long long)result);
  return result;
}


