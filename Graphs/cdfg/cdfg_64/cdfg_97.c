#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 530145391
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long p_7[5], short p_9, int p_17,
        unsigned short p_21)
{
  unsigned char v_23;
  int v_19;
  unsigned char v_15;
  unsigned long v_13;
  unsigned char v_11;
  signed char v_5;
  char v;
  int result;
  v_23 = (unsigned char)60;
  v_19 = 468712555;
  if ((unsigned long)(4294927518U - (unsigned int)(- v_19 * (int)p_21)) < (unsigned long)(
      (long)(! ((int)p_9 % ((int)v_23 + 433))) - (long)((int)p_9 ^ (int)((short)-6.44649565086e+37)) * (
                                                 p_7[1] - (long)p_17))) {
    v_13 = (unsigned long)(~ 37046U);
    v_11 = (unsigned char)((long long)((unsigned long)p_7[1] - ((unsigned long)p_7[1] - p)) % (
                           22297LL * (long long)(2.35910673176e+38 / (
                                                 (double)p_17 + 781.)) + 408LL));
    v_15 = (unsigned char)p;
  }
  else {
    v_13 = (unsigned long)(! (- -30368LL));
    v_11 = (unsigned char)p;
    v_15 = (unsigned char)45;
  }
  if (((v_13 - 30837UL) + 4294944865UL % (v_13 + 569UL)) + ! v_13 % 546UL == (unsigned long)(- (~ (~ v_15)))) 
    result = (int)(~ (247UL + - p));
  else {
    v = (char)((788 + (int)p_9 / ((int)v_11 + 508)) << (v_13 & 31UL));
    v_5 = (signed char)(~ (! p_7[1] * 191L));
    result = (int)(((858779213LL + (long long)v) + (long long)(41906 - (int)v_5)) + (long long)(
                   p_7[0] << 5));
  }
  return result;
}


