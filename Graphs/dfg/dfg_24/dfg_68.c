#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 780660093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p[5], long long p_7, int p_9[2][4][4],
         unsigned short p_11[3][5])
{
  signed char v_13;
  double v_4;
  char v;
  char result;
  v_13 = (signed char)p_7;
  v_4 = (double)(~ (~ ((int)(- v_13) * 21165)));
  v = (char)(((long long)((int)((char)v_4) / ((int)p[2] + 324)) % (p_7 + 32LL)) % (long long)(
             (unsigned int)p_9[1][0][1] % 264U + 1019U) & (long long)p_11[0][2]);
  result = - v;
  result = result;
  return result;
}


