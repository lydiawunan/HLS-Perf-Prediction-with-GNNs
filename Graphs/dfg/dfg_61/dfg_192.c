#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 484628252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned int p_7, unsigned short p_9[5], unsigned long p_11,
         unsigned long long p_13)
{
  long long v_15;
  char v_5;
  short v;
  char result;
  v_15 = -86852178LL;
  result = (char)55;
  v = (short)((384290215LL / ((long long)p_11 % (v_15 + 979LL) + 999LL) - (long long)(
               (-54511 | (int)result) * 135)) % -14129LL);
  result = (char)(0 - (int)p_9[2]);
  v_5 = (char)((double)((unsigned long long)(! (! p_9[1])) % ((984815626ULL << (
                                                               p_11 & 63UL)) / (unsigned long long)(
                                                              (int)(! p_9[4]) + 668) + 478ULL)) * - (- (
               626.297038807 + (double)p_13)));
  result = (char)((unsigned int)(((int)result + - p) - (int)(- v) * (int)v_5) / (
                  ((unsigned int)((int)1.9440048681e+38f * -1734) ^ p_7) + 665U));
  return result;
}


