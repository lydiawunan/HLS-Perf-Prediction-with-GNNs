#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1011672603
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, short p_7, float p_9)
{
  unsigned short v_11;
  signed char v_5;
  float v;
  unsigned long long result;
  v_11 = (unsigned short)24305;
  v_5 = (signed char)v_11;
  v = (float)(! (18446744073709502202ULL % (unsigned long long)(-62282 % (
                                                                (int)p + 688) + 538)) / (unsigned long long)(
              ((int)v_5 - (int)((signed char)(- ((float)p_7 * p_9)))) + 402));
  result = (unsigned long long)(- (- ((unsigned int)(3467298816.f + v))));
  return result;
}


