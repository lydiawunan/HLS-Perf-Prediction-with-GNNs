#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 653625736
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, long long p_13, long p_15[5], float p_19,
          unsigned long p_21)
{
  long v_17;
  double v_10;
  unsigned int v_8;
  unsigned long v_6;
  unsigned short v_4;
  char v;
  short result;
  v_17 = (long)p_21;
  v_10 = (double)p_13;
  v_6 = (unsigned long)p;
  v = (char)82;
  v_8 = (unsigned int)(- (54297UL + ((unsigned long)p_19 + p_21)));
  v_4 = (unsigned short)((- p / 151LL + (long long)((double)(p_13 - -96LL) / (
                                                    (double)p_13 * 4552703343.66 + 912.))) - (long long)(
                         ~ v_6 * (unsigned long)p_15[3] + (unsigned long)v_17));
  v_6 = (unsigned long)(- ((double)(-9854270.f - (float)(436181524U + v_8)) - - v_10));
  result = (short)((long long)(- ((int)v - (int)v_4)) % ((long long)(
                                                         622046856UL * v_6) + 281LL) + -823129978LL);
  return result;
}


