#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 173436318
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, short p_9)
{
  double v_6;
  signed char v_4;
  unsigned char v;
  unsigned int result;
  v_6 = -6648046270.22;
  v_6 = -942451279.896 + (- (- v_6) + v_6);
  v_4 = (signed char)121;
  v = (unsigned char)((double)(~ (~ (p % (unsigned long long)((int)p_9 + 476)))) + v_6);
  result = (unsigned int)(18446744072701599128ULL % (unsigned long long)(
                          - (((int)v - (int)v_4) % ((int)(v_6 * -16826.) + 416)) + 298));
  return result;
}


