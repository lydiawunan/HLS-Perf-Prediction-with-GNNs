#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1047308372
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned short p_5[4][5],
                unsigned long p_7, long p_13, float p_15)
{
  long long v_11;
  unsigned long v_9;
  unsigned int v;
  signed char result;
  v_11 = -24551LL;
  v_9 = 4096296298UL;
  v = (unsigned int)p_7;
  v = (unsigned int)(1.04972807566e+38f / (((float)((v + (unsigned int)p_5[1][3]) + (unsigned int)p) - (
                                            ((float)v_11 - p_15) - (float)(
                                            (int)p / -54))) + 303.f));
  v_11 = (long long)(((float)((unsigned long)p_13 * (unsigned long)v + 3422459UL) + 3.33766947072e+38f) + 
                     239.f / (- p_15 + 174.f));
  v = (unsigned int)((long long)((unsigned long)(- (! p_5[0][2])) / (
                                 p_7 + 357UL)) - ((long long)v_9 & v_11 / 8LL));
  result = (signed char)((((unsigned long long)((unsigned long)p - 3283022251UL) + (
                           (unsigned long long)v + 59226ULL)) / 18446744073677117433ULL) * 121ULL);
  return result;
}


