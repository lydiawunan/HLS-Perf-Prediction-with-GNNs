#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 706356254
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, float p_9)
{
  unsigned long long v_11;
  signed char v_7;
  unsigned long long v_5;
  short v;
  unsigned short result;
  v_11 = (unsigned long long)p;
  v_5 = 18446744073709496661ULL;
  result = (unsigned short)((unsigned long long)(- p) - v_11);
  v_7 = (signed char)(! (- ((int)p - (int)p)) % ((-38 - (int)((signed char)(
                                                  (float)((int)result + (int)p) * - p_9))) + 413));
  v = (short)(- (- ((unsigned long long)p | 30066ULL)) / (((unsigned long long)(~ result) / (
                                                           v_5 + 596ULL)) % (unsigned long long)(
                                                          ((int)p * (int)v_7) * (int)-4.80440328713e+37 + 268) + 199ULL));
  result = (unsigned short)((int)p + (int)v);
  return result;
}


