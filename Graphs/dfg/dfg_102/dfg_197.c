#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249982826
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, long p_5, long p_9, char p_15)
{
  signed char v_13;
  short v_11;
  long v_7;
  unsigned short v;
  int result;
  v_11 = (short)-2431;
  v_7 = (long)p_15;
  v_13 = (signed char)((long long)p_15 * 831171940LL);
  result = (int)(((long long)p_9 % ((-4090LL + (long long)((int)v_11 << (
                                                           p_5 & 15L))) + 156LL)) * (long long)(
                 - (v_7 ^ v_7) - (long)v_13));
  v = (unsigned short)((((long)(- p) ^ (p_5 + (long)result)) * v_7) * - p_5);
  result = (int)(0. - - (- (4113947272.74 - (double)v)));
  return result;
}


