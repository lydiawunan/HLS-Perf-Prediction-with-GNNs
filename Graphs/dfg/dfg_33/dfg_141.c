#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32101241
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[2][5][1], unsigned long long p_5, short p_7, long long p_11,
         double p_13[4][4])
{
  unsigned char v_15;
  int v_9;
  unsigned int v;
  long result;
  v_15 = (unsigned char)(- p_13[2][1]);
  v_9 = -188261401;
  v = (unsigned int)(((unsigned long long)(v_9 - (int)((double)p_11 + p_13[0][3])) + 
                      0ULL % (p_5 + 142ULL)) << (p[1][2][0] & 63));
  result = (long)((unsigned long long)((4218196858UL - (unsigned long)p[0][2][0]) + (
                                       (unsigned long)v + 3338962170UL)) * (
                  p_5 + (unsigned long long)p_7) + 18446744073709551501ULL);
  return result;
}


