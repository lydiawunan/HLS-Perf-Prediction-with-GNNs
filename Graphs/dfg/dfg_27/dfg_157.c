#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 817300964
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p)
{
  double v_13;
  unsigned long v_11;
  long long v_9;
  long long v_7;
  unsigned short v_5;
  int v;
  unsigned int result;
  v_9 = 219857643LL;
  v_7 = -431265305LL;
  v_5 = (unsigned short)p;
  v_13 = (double)(! (! 4294955208UL));
  v_11 = (unsigned long)p;
  v = (int)((double)(- (138487ULL + (unsigned long long)(! v_7))) * (
            (double)((v_9 ^ -17279LL) * (v_7 | (long long)v_11)) * - (
            v_13 * 22578.)));
  result = (unsigned int)(! ((int)((unsigned short)((-7579266891.89 / (
                                                     (double)v + 758.)) / (
                                                    (double)(~ p) + 610.))) / (
                             (int)(~ (- v_5)) + 161)));
  return result;
}


