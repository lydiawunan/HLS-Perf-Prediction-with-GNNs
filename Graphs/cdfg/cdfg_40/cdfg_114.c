#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 284402045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned long p_5,
                   unsigned long long p_7, long p_9[5], short p_11[4][2][3])
{
  unsigned short v_19;
  float v_17;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned long v;
  unsigned short result;
  v_19 = (unsigned short)17092;
  v_17 = -2253088000.f;
  v_15 = (unsigned long long)p_9[0];
  v_13 = (unsigned short)p_11[1][0][0];
  v = 3608145985UL;
  result = (unsigned short)p_9[1];
  while (- ((p_7 - (unsigned long long)v) + (unsigned long long)v_13) < 
         (p_7 * (v_15 + 222ULL)) / (unsigned long long)(p_9[2] + 333L)) {
    v_19 = (int)v_19 / 958;
    result = (unsigned short)v_15;
    v_13 = (unsigned short)v_17;
    v_15 = (- v_15 % (~ p_7 + 747ULL)) / (unsigned long long)(! p_9[3] + 490L);
  }
  while_0_break: ;
  result = (unsigned short)(((unsigned long long)v * p) / (3404090348ULL * p + 754ULL) - (unsigned long long)result);
  return result;
}


