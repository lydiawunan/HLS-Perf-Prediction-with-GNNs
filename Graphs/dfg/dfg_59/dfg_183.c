#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1621520
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, double p_13)
{
  unsigned long v_11;
  signed char v_9;
  long v_6;
  unsigned char v_4;
  int v;
  unsigned char result;
  v_11 = 4294926345UL;
  v = 39264;
  v_9 = (signed char)9974196224.f;
  v_4 = (unsigned char)(~ (p / (unsigned long)((int)v_9 + 65)) * (unsigned long)(
                        (float)(p + (v_11 | 38123UL)) / (((float)(149 / (
                                                                  (int)((unsigned char)p_13) + 409)) - -429.419006348f) + 891.f)));
  v_6 = (long)-1.45569642557e+38f;
  result = (unsigned char)(- (((long long)(v + (int)v_4) + (long long)v_6 * -8704079LL) * (long long)(
                              -1968108944.43 + (double)(p - (unsigned long)v_6))));
  return result;
}


