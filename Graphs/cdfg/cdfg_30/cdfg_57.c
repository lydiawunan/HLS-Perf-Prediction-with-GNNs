#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 861034768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, long long p_9[4], long long p_13,
                  signed char p_15[5])
{
  unsigned long v_11;
  double v_6;
  unsigned short v_4;
  unsigned char v;
  unsigned long result;
  v_11 = 4149195354UL;
  v_6 = -555.101783272;
  v_4 = (unsigned short)p_15[3];
  v = (unsigned char)p;
  result = (unsigned long)p_9[2];
  result = (unsigned long)((long long)(2.18614805777e+38 / ((double)result + 865.)) % (
                           ((long long)v_11 + p_13) + 237LL) - ((long long)p_15[4] / (
                                                                p_9[2] + 385LL)) % (long long)(
                                                               ((int)p_15[0] + 692) + 781));
  while (0 <= (int)v) {
    result = (long long)v_6 - (long long)v_4 / 14002473LL;
    v_4 = (unsigned short)59412;
    v_6 = (double)p_9[3];
    v = (unsigned char)(4294967242U / (! (! p) + 656U));
  }
  while_0_break: ;
  return result;
}


