#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036246786
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p)
{
  float v_13;
  short v_11;
  signed char v_8;
  char v_6;
  unsigned short v_4;
  char v;
  signed char result;
  v_13 = (float)p;
  v_11 = (short)p;
  v_6 = (char)p;
  v_4 = p;
  v = (char)p;
  if ((int)v_13 >= -26) {
    v_4 = (unsigned short)((int)p - (int)v_4);
    result = (signed char)((int)v_6 % ((int)(~ p) + 387));
    v_6 = (char)(- ((-609145531 - (int)-9421944832.f) + -5));
  }
  else {
    v_4 = (unsigned short)(1063048402 / ((int)(- v) % 54217 + 771));
    result = (signed char)(- ((int)v_11 * (int)((short)5.52147732404e+37f)));
    v = (char)(~ ((unsigned long long)p | (9041ULL + (unsigned long long)p)));
  }
  while ((unsigned long long)(~ (- (- result))) > 54840ULL) {
    v = (long long)v_6 + (long long)v_4 / (((long long)v + -528323223LL) + 506LL);
    v_8 = (signed char)(- 3.79846794646e+37);
    v_4 = (unsigned short)(-990.237650241 - (double)(15292 + (int)v_8 / 20566));
    result = (signed char)(~ ((int)(! v_4) / -29544));
  }
  while_0_break: ;
  return result;
}


