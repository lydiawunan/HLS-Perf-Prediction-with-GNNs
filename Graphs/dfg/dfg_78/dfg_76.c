#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 339379777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, int p_4, long long p_7, signed char p_11)
{
  short v_17;
  int v_15;
  int v_13;
  unsigned int v_9;
  signed char v;
  float result;
  v_17 = (short)32284;
  v_15 = (int)p_7;
  v = p_11;
  result = (float)p_4;
  v_13 = (int)((unsigned long)(! p_4) + ((unsigned long)((int)p_11 / (
                                                         ! p_4 + 40)) - ! (
                                         (unsigned long)v | 4294964952UL)));
  v_9 = (unsigned int)((double)v_17 * (p + (double)p_7));
  v = (signed char)((((result * result) * (float)(~ v_9)) * (float)((
                                                                    579136188L / (long)(
                                                                    (int)p_11 + 960)) * (long)v_13)) / (
                    (float)((4294967191U & (unsigned int)v_13 * 4294960430U) - (unsigned int)(- (! v_15))) + 784.f));
  result = (float)(! ((long long)((23 ^ (int)((unsigned char)p)) & p_4) % (
                      ((long long)v * 36650LL - p_7) + 377LL)));
  return result;
}


