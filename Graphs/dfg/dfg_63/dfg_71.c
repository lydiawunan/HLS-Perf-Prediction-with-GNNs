#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 587738937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned long p_4, signed char p_13)
{
  signed char v_15;
  int v_11;
  unsigned short v_9;
  unsigned long long v_7;
  unsigned short v;
  int result;
  v_15 = (signed char)11;
  v_11 = -24346;
  v_9 = (unsigned short)p_13;
  result = -1019977270;
  result = (int)(- ((long long)(5562 % (((int)v_15 - result) + 127)) + -36635LL));
  v = (unsigned short)(p_4 / (unsigned long)(! (! ((int)p_13 * v_11)) + 731));
  v_7 = ~ (p % (unsigned long long)(((unsigned long)(v_11 / 23) + (p_4 + (unsigned long)v)) + 622UL));
  result = (int)(((p - (unsigned long long)p_4) % (((unsigned long long)v * p + 
                                                    (unsigned long long)result * v_7) + 182ULL)) % (unsigned long long)(
                 (int)v_9 + 965));
  return result;
}


