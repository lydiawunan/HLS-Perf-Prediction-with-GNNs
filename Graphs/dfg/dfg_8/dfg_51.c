//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 756124633
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, signed char p_4, unsigned char p_6, float p_13, int p_15)
{
  long long v_11;
  unsigned long long v_9;
  char v;
  short result;
  v = (char)35;
  v_9 = (unsigned long long)(! (! (- p_15 + (int)8624650240.f)));
  v = (char)(~ (- (125 * (int)v) - (int)(25830.f + (float)v / (p + 760.f))));
  v_11 = (long long)(~ p_15);
  result = (short)((- (p + (float)p_4) + 4635839.f) + (float)(((unsigned long long)(
                                                               (int)p_6 - (int)v) | 
                                                               18446744073709551566ULL / (
                                                               v_9 + 670ULL)) % (unsigned long long)(
                                                              (v_11 ^ (long long)(
                                                               -4 * (int)((signed char)p_13))) + 627LL)));
  return result;
}


