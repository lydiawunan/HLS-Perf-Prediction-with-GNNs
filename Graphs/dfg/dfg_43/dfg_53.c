#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59366173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, short p_11, short p_13[3], short p_19, int p_21)
{
  signed char v_23;
  unsigned int v_17;
  int v_15;
  unsigned char v_9;
  short v_7;
  long long v_5;
  unsigned int v;
  short result;
  v_23 = (signed char)p_11;
  v_17 = (unsigned int)p_11;
  v_15 = (int)p_11;
  v_9 = (unsigned char)p_21;
  v_5 = (long long)p;
  v_5 = (long long)((unsigned long long)((int)p_11 / ((int)p_13[0] + 798) - - v_15) * 18446728085550801910ULL - (unsigned long long)(
                    (long long)((v_17 & (unsigned int)p_19) / (unsigned int)(
                                p_21 + 700)) / ((v_5 % (long long)((int)p_13[1] + 587)) * (long long)(~ v_23) + 867LL)));
  v_7 = (short)(- v_9);
  v = (unsigned int)((((long long)p ^ (v_5 - 89LL)) % 756493278LL) * (long long)v_7);
  result = (short)v;
  return result;
}


