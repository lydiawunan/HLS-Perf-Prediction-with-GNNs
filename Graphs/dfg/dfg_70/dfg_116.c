#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 104841092
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, float p_4, long long p_7, int p_13)
{
  int v_11;
  float v_9;
  unsigned long v;
  unsigned int result;
  v_9 = (float)p;
  v = (unsigned long)p_13;
  result = 4294929828U;
  v_11 = (int)(- (~ (! v)) - (unsigned long)p_13);
  v = (unsigned long)((((25811LL * p_7) % (long long)(v + 1022UL)) * (long long)((unsigned long)(
                       (int)((short)v_9) ^ -20671))) % ((~ (p_7 + 93LL) | (long long)(
                                                         (unsigned int)v_11 / (
                                                         result + 945U))) + 924LL));
  result = (unsigned int)(- (((unsigned long)((int)((short)p_4) + -24925) - (
                              (unsigned long)result - v)) % (! (- v) + 107UL)));
  result = (unsigned int)((unsigned long long)(! ((result << (result & 31U)) % 4294904159U)) + 
                          (0 - (unsigned long long)(result % (unsigned int)(
                                                    (int)p + 542))) * (unsigned long long)-2.37811791217e+38);
  return result;
}


