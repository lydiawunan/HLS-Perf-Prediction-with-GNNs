#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 372491153
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, signed char p_4, char p_7, unsigned long p_15,
                  int p_17)
{
  long v_21;
  int v_19;
  unsigned int v_13;
  unsigned long long v_11;
  unsigned int v_9;
  unsigned short v;
  unsigned long result;
  v_21 = 6828L;
  v_13 = (unsigned int)p;
  v_11 = (unsigned long long)p_15;
  v_9 = (unsigned int)p_7;
  v = (unsigned short)p_15;
  result = (unsigned long)4957204733.56;
  while ((int)v == ~ ((int)p_4 / ((int)p_7 + 385)) % ((int)p + 574)) {
    v_19 = (unsigned long long)v_13 + (v_11 - ((unsigned long long)v_9 - 48092ULL));
    v_13 = (unsigned int)(~ ((long)p * v_21) * (long)p_17);
    result = ! (p_15 * (unsigned long)p_7) % (unsigned long)(((int)(-431.840939331 / (
                                                                    (double)p_17 + 146.)) - 
                                                              v_19 * (int)p) + 677);
    v = (unsigned short)p;
  }
  while_0_break: ;
  return result;
}


