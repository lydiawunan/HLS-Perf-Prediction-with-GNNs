#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 497252671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[5][5], unsigned long long p_4[5][1][2],
         signed char p_11, int p_13[2][1])
{
  int v_15;
  unsigned char v_9;
  unsigned long long v_7;
  char v;
  long result;
  v_15 = (int)p[1][4];
  v_9 = (unsigned char)47;
  v_7 = (unsigned long long)p_11;
  v = (char)(((unsigned long long)(913608408U + (unsigned int)((int)p_11 / 36)) / (
              - ((unsigned long long)p_13[0][0] / (v_7 + 39ULL)) + 785ULL)) % (unsigned long long)(
             v_15 + 1017));
  v_7 = (unsigned long long)v_9;
  result = (long)(~ (! (- (- v_7))));
  result = (long)(- (((unsigned long long)result - 18446744073570134945ULL) - (unsigned long long)(! p[1][1])) * (
                  ((p_4[4][0][0] % (unsigned long long)((int)v + 403)) * 16723ULL) * 18446744073709551502ULL));
  return result;
}


