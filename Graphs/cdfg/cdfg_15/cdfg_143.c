#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 132179475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, char p_7, unsigned int p_9, unsigned long long p_11,
        signed char p_13)
{
  signed char v_17;
  unsigned int v_15;
  int v_5;
  long long v;
  int result;
  v_17 = (signed char)p_11;
  v_15 = (unsigned int)p_13;
  v_5 = -61525;
  result = 44321;
  v = (long long)((unsigned long)(91214549L % (long)(v_5 + 904) - (long)p_7) % (unsigned long)(
                  (v_15 & (unsigned int)((int)v_17 % ((int)p_7 + 382))) + 392U));
  if ((unsigned int)p_13 != - (p_9 | (unsigned int)((double)v + 4858578207.2))) 
    result = (int)(-291519987712.f - (float)((p | 13490UL) + 7083UL));
  else {
    v = (long long)((unsigned int)result * ((unsigned int)v_5 - (unsigned int)p_7 % (
                                                                p_9 + 578U)));
    v = 49590LL & v;
    result = (int)(-2.15558285212e+38f / ((float)(! v % (long long)(- p + 424UL)) + 643.f));
  }
  return result;
}


