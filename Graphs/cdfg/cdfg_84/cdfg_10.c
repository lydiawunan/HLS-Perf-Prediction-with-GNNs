#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 58057123
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, float p_4, long long p_7, char p_9,
           int p_13[5])
{
  unsigned int v_19;
  long v_17;
  unsigned char v_15;
  unsigned int v_11;
  long v;
  double result;
  v_17 = (long)p_4;
  v_15 = (unsigned char)180;
  v_11 = (unsigned int)p;
  v = -37120L;
  result = -2265031146.11;
  while (! (22196LL % (p_7 + 75LL)) != (long long)(((double)(18446744073709551541ULL | p) + 
                                                    result / ((double)p_9 + 355.)) - (double)(
                                                   - v_11 % ((unsigned int)(
                                                             (float)p_13[1] + -6143505408.f) + 834U)))) {
    v_19 = (long long)v_17 + (long long)v_15 % -12607LL;
    v = (long)((unsigned long)(v_19 | 116864014U) ^ 39032UL);
    v_15 = (unsigned char)(-10780138661.7 / ((double)((int)((float)p + p_4) % (
                                                      (int)((char)result) * (int)p_9 + 944)) + 549.));
    result = (double)(-401688454LL * (long long)((p_13[3] / ((int)result + 946)) / (
                                                 (p_13[1] + -13696) + 884)));
  }
  while_0_break: ;
  result = (double)((29415ULL | ! p) / ((unsigned long long)(- (p_4 - (float)v)) + 882ULL));
  return result;
}


