#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948873497
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, signed char p_4, unsigned long p_6[3][1][3],
                   unsigned char p_9, long long p_11)
{
  unsigned short v_21;
  long v_19;
  long long v_17;
  unsigned char v_15;
  unsigned int v_13;
  short v;
  unsigned short result;
  v_21 = (unsigned short)p_4;
  v_17 = (long long)p_4;
  v_15 = (unsigned char)21;
  v_13 = (unsigned int)p_11;
  v = (short)9957;
  while ((unsigned long long)v_13 == 18446744073709547848ULL) {
    v_19 = (long)((-50LL % (p_11 + 935LL)) * (v_17 / (long long)(p_6[0][0][0] + 376UL)) - 4294940315LL);
    v_17 = (long long)((float)((int)v_21 / ((int)v_21 + 879)) * 362.835327148f) - 
           p_11 * (long long)((int)v_15 * 51);
    v_13 = (unsigned int)v_19;
  }
  while_0_break: ;
  if (-37872LL / (long long)((int)v + 855) - (long long)p_9 > 41378LL % (
                                                              (p_11 / (long long)(
                                                               (int)v + 373) ^ (long long)v) + 686LL)) 
    result = (unsigned short)(~ p);
  else result = (unsigned short)(0LL - (long long)((unsigned long)p_4 + 
                                                   4294951469UL / (p_6[0][0][2] + 55UL)));
  return result;
}


