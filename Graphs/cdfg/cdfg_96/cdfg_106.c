#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 758344799
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[4], unsigned long p_9, short p_13, int p_15, int p_19)
{
  int v_21;
  unsigned int v_17;
  char v_11;
  long v_7;
  float v_5;
  unsigned long long v;
  float result;
  v_17 = 4211326329U;
  v_11 = (char)p_15;
  v_7 = (long)p_9;
  v_5 = (float)p_15;
  v = (unsigned long long)p[3];
  result = (float)p_15;
  while ((unsigned long long)((float)(p_9 / (unsigned long)(v_7 + 656L)) - 
                              ((float)p_15 + v_5) * (float)((int)v_11 % (
                                                            p_15 + 523))) == 
         (unsigned long long)-225.224626769 + - (! v)) {
    v_17 *= 12205U;
    v_21 = (int)v_11 * p_15;
    result = (float)v_21;
    v_7 = (long)((v_5 * (float)(18446744073709551587ULL + v)) * (float)(
                 (int)(v_5 - (float)v) + (p_15 + p_19)));
  }
  while_0_break: ;
  while (-98 != (int)((char)(- (- (result + (float)p[3]))))) {
    v_7 = (double)v * 2.10902885862e+38;
    v_11 = (char)(- ((int)v_11 * ((int)((short)v_5) - (int)p_13)));
    v_5 = (float)(! (v_7 + (long)v_11)) * -104907368.f;
    result = (float)((unsigned long)(27 + (int)v_5 % 53851) + (unsigned long)v_7 * (
                                                              p_9 % 61610UL));
  }
  while_0_break_0: ;
  return result;
}


