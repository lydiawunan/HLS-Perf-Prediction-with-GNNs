#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 215596467
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, long p_4, short p_6, char p_8,
                       long long p_13)
{
  int v_11;
  unsigned short v;
  unsigned long long result;
  v = (unsigned short)30227;
  v_11 = (int)(-179.989746094f * (float)(0LL - ~ p_13));
  result = (! p - (unsigned long long)(- (p_4 + (long)p_6))) - (767655352ULL - (unsigned long long)(- p_8)) / (unsigned long long)(
                                                               ((int)v - v_11) * (int)(
                                                               (double)p_13 * -1.29052262745e+38) + 144);
  return result;
}


