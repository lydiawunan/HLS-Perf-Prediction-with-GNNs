#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 738630209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, float p_4, signed char p_7,
                   long long p_9, unsigned short p_15)
{
  int v_17;
  unsigned long v_13;
  short v_11;
  double v;
  unsigned short result;
  v_17 = (int)p_4;
  v_11 = (short)p_15;
  result = (unsigned short)56365;
  v = (double)(- ((p_4 - (float)p_15) / ((float)(v_17 * (int)p_15) + 544.f)));
  while (0LL == ! ((long long)((unsigned int)p_7 + 317717347U) - - p_9)) {
    v_13 = (unsigned long)(- ((int)(p_4 - -32222.f) / (-43966 / ((int)v_11 + 940) + 478)));
    v_11 = (short)p_15;
    v = (double)(~ ((unsigned long)(-6212843068.86 * (double)v_13) + (
                    (unsigned long)v_11 + v_13)));
  }
  while_0_break: ;
  return result;
}


