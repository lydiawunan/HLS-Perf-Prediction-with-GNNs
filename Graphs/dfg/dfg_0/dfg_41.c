//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 136954209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, unsigned long long p_7, char p_15[4])
{
  unsigned long v_13;
  unsigned long long v_11;
  double v_9;
  unsigned short v_5;
  double v;
  short result;
  v_13 = (unsigned long)p;
  v_11 = 18446744073709519282ULL;
  v_9 = (double)(~ (4294931825ULL / ((v_11 << (p_7 & 63ULL)) / (unsigned long long)(
                                     (v_13 + (unsigned long)p_15[0]) + 546UL) + 824ULL)));
  v = - v_9;
  v_5 = (unsigned short)(! (- (~ p_7)));
  result = (short)(~ ((int)v * p >> (0 % (long)((int)(! v_5) + 271) & 31L)));
  return result;
}


