#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556992716
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned char p_9, signed char p_13,
                       short p_17)
{
  double v_15;
  int v_11;
  unsigned long v_6;
  unsigned int v_4;
  unsigned long v;
  unsigned long long result;
  v_15 = (double)p_13;
  v_6 = 958379310UL;
  v_4 = (unsigned int)p;
  v_11 = (int)(~ (- v_4));
  v_4 = (unsigned int)(~ ((int)(- (! p_13)) >> (((int)p - (int)((signed char)v_15)) * (
                                                (int)p_17 & (int)((short)1.86476940391e+38f)) & 7)));
  v = (unsigned long)v_4 + (v_6 / (unsigned long)((int)p + 721) << ((int)(! p_9) * - v_11 & 31));
  result = (unsigned long long)(! (! v));
  return result;
}


