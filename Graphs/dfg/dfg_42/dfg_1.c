#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 579254227
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p[1][5][1], unsigned short p_7[1][4], double p_9,
           long long p_11, unsigned long long p_13)
{
  double v_17;
  unsigned long v_15;
  signed char v_4;
  char v;
  double result;
  v_17 = 6826961648.18;
  v_15 = 4294912363UL;
  v_4 = (signed char)v_17;
  result = (double)(- ((unsigned long long)(-44355LL & p_11) * (p_13 - 18446744073709546118ULL)) % (unsigned long long)(
                    (! (! v_15) & (unsigned long)(- (p_9 + p_9))) + 803UL));
  v = (char)((double)(! ((int)(! v_4) - 701)) * ((double)(((int)p[0][1][0] | (int)((signed char)2.17903519952e+38f)) % (
                                                          (int)(~ p_7[0][3]) + 345)) + p_9));
  result = (double)(~ ((unsigned long long)((int)(- result) * 199597994) % (
                       - (710010206ULL - (unsigned long long)v) + 405ULL)));
  return result;
}


