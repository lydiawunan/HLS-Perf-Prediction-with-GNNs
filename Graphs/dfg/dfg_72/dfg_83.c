#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 193367924
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[1][5], unsigned long p_9, double p_11[4])
{
  unsigned int v_13;
  int v_7;
  long long v_5;
  char v;
  long result;
  v_13 = (unsigned int)p_9;
  v_7 = -640999142;
  v_5 = (long long)p_9;
  v = (char)(- (p_11[3] + (double)v_13));
  result = (long)(- ((double)((long long)(p[0][0] - 29U) ^ v_5 * -96LL) - 
                     -11. / ((p_11[2] + 20.) + 141.)));
  v = (char)(- ((p_9 - (unsigned long)(~ v)) + (unsigned long)v_7));
  result = (long)(0ULL - 18446744073031467124ULL / (unsigned long long)(
                         (long long)(p[0][2] - (unsigned int)v) * (v_5 % (long long)(
                                                                   v_7 + 673)) + 280LL));
  return result;
}


