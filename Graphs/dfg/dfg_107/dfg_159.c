#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280846647
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, short p_4, double p_6, short p_8[4][1],
                       int p_15)
{
  unsigned short v_17;
  double v_13;
  long v_11;
  unsigned int v;
  unsigned long long result;
  v_17 = (unsigned short)1785;
  v_11 = 14059L;
  v = 1939U;
  result = 54707ULL;
  v_13 = (double)(! ((result / (unsigned long long)((int)p_4 + 628) - (unsigned long long)(~ v_17)) % (unsigned long long)(
                     v + 727U)));
  v = (unsigned int)((int)(- ((double)v_11 - - v_13)) / (p_15 % 56419 + 448));
  v = v;
  result = (unsigned long long)((unsigned int)p / ((125256734U - (unsigned int)(
                                                    (int)p_4 % ((int)((short)p_6) + 932))) + 764U) ^ 
                                (unsigned int)p_8[0][0] % ((v >> 3) / 38708U + 948U));
  return result;
}


