#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 179333912
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, char p_5[1], float p_7, double p_9,
         unsigned long long p_15[1][2][3])
{
  long long v_13;
  signed char v_11;
  char v;
  char result;
  v = (char)p;
  v_13 = (long long)(- ((197 << (-18043195 * (int)p_5[0] & 7)) / ((int)p_5[0] + 984)));
  v_11 = (signed char)((int)p * (int)v);
  v = (char)(! (p_15[0][0][2] / 282415771ULL) / ((unsigned long long)p_7 + 286ULL) + (unsigned long long)v_13);
  result = (char)((double)((((int)p + (int)v) << ((45042ULL + (unsigned long long)p_5[0]) & 31ULL)) % (
                           (int)(-103.f + p_7) + 384)) / ((64572. / (
                                                           p_9 / 845. + 98.) - (double)(
                                                           (long long)(
                                                           (int)v_11 / 930217755) * (
                                                           417143093LL * v_13))) + 486.));
  return result;
}


