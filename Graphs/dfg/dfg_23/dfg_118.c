#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 294806583
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p)
{
  float v_8;
  unsigned long v_6;
  signed char v_4;
  long v;
  double result;
  v_4 = (signed char)82;
  v_8 = (float)v_4;
  v = -225829903L;
  v_6 = 842792814UL + - (- (4294967256UL * p));
  result = (double)((unsigned long)(511548785L * (long)(2731 >> (((long long)v - 63130LL) & 15LL))) * (
                    (unsigned long)v_4 * v_6 - (unsigned long)(- v_8)));
  return result;
}


