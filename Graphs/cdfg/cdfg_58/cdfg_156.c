#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796567840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, long long p_5, unsigned char p_7,
                  unsigned int p_17[1][5])
{
  unsigned long v_15;
  int v_13;
  float v_11;
  signed char v_9;
  short v;
  unsigned long result;
  v_13 = 508029413;
  v_11 = -2.39866935663e+38f;
  v_9 = (signed char)p_7;
  v = (short)p_17[0][3];
  result = (unsigned long)p;
  while ((unsigned long)((int)v_9 / -29498) + ~ (result & (unsigned long)v_9) > 27669UL) {
    v_15 = v_13 / ((int)(v_11 - -5450.f) + 710);
    v_11 = (float)997551364ULL;
    v_13 = (int)((40966UL + (v_15 - 4234253420UL)) / (unsigned long)(
                 - p_17[0][3] + 103U));
    v_9 = (signed char)(! (- p));
  }
  while_0_break: ;
  result = (unsigned long)((long long)(! v) + ((long long)((unsigned long)p + result) & 
                                               p_5 % (long long)((int)p_7 + 1022)));
  return result;
}


