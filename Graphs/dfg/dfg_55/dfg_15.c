#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 615480298
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p[4], unsigned long p_9[1])
{
  float v_15;
  long long v_13;
  float v_11;
  char v_7;
  unsigned int v_4;
  double v;
  unsigned int result;
  v_15 = 4822965760.f;
  v_11 = (float)p_9[0];
  v_7 = (char)118;
  v_4 = p[3];
  v_13 = ((long long)p_9[0] % -11427LL - (long long)(p[2] * (unsigned int)v_15)) * (long long)(
         398715983UL / (~ p_9[0] + 543UL)) ^ (long long)p[2];
  result = (unsigned int)((unsigned long)((p[1] >> (v_13 & 31LL)) + (unsigned int)2.78922401809e+38) + (
                          p_9[0] | (1UL - p_9[0] * 4294939840UL)));
  v = (double)((float)(0UL - ((unsigned long)v_7 % (p_9[0] + 709UL)) * (unsigned long)-405.676147461f) / (
               v_11 + 1020.f));
  result = (unsigned int)(53767UL - (unsigned long)((double)(4294964140U / (
                                                             result + 434U)) * - v + (double)(
                                                    (v_4 & p[2]) / 212749U)));
  return result;
}


