#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 710499812
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, double p_9, long p_11, short p_13)
{
  double v_7;
  double v_5;
  char v;
  signed char result;
  v_7 = 369.141825457;
  v_5 = 3.3818231273e+38;
  result = (signed char)28;
  v_5 = ((- v_5 - - p_9) - (double)(- (3822608009UL | (unsigned long)p_11))) / (double)(
        (-5.77909130726e+37f - (float)p_13) + 929.f);
  v = (char)(((int)(3286141592. + v_5) % ((int)p / ((int)result + 105) + 514) << (
              (int)p & 31)) % ((int)v_7 + 86));
  result = (signed char)(! (0 % ((int)v + 176)));
  result = (signed char)((int)result / (- ((int)p * 26) + 318));
  return result;
}


