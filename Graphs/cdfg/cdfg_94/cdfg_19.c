#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 843276871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p)
{
  long v_17;
  int v_14;
  unsigned int v_12;
  double v_10;
  signed char v_8;
  float v_6;
  short v_4;
  char v;
  unsigned long long result;
  v_17 = (long)p;
  v_14 = -49536;
  v_10 = -904.666290311;
  v_8 = (signed char)p;
  v_6 = -4309328896.f;
  v_4 = (short)p;
  v_12 = (unsigned int)(((int)(- v_4) | (int)p / ((int)p + 38)) + ((int)(
                                                                   (double)v_17 + 1428245759.77) + (
                                                                   (int)p + (int)p)));
  if (- (v_10 + (double)v_12) - -15. != - ((double)v_14 - 6.45148103735e+37)) {
    v_4 = (short)(- (1.37309715559e+38 / ((double)(4565 * (int)v_8) + 13.)));
    v = (char)(- (~ ((int)v_4 * (int)((short)v_6))));
    result = (unsigned long long)((int)((float)((unsigned long)v % 4294963164UL) - -1.77683901787f) + 
                                  (6621 % ((int)v + 372)) * (-862345619 * (int)v_4));
  }
  else result = 18446744073320417360ULL;
  return result;
}


