#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958900284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[2][3], unsigned int p_9)
{
  double v_7;
  unsigned long long v_5;
  char v;
  unsigned long result;
  v_5 = (unsigned long long)p[0][1];
  v = (char)(! v_5 + (unsigned long long)(- (- p_9)));
  v_7 = (double)p[0][1];
  v_5 = (unsigned long long)(863541624. - v_7);
  result = (unsigned long)((unsigned long long)(((long)v - - p[1][0]) - 
                                                (long)-8464334336.f / (
                                                (p[1][2] | 56956L) + 892L)) + ! (- v_5));
  return result;
}


