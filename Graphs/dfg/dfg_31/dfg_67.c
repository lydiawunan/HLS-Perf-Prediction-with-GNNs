#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 434054778
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned char p_9[4][3][1], int p_15)
{
  signed char v_13;
  long long v_11;
  unsigned char v_7;
  float v_5;
  signed char v;
  double result;
  v_13 = (signed char)4;
  v_11 = 594973300LL;
  v_7 = (unsigned char)197;
  v = p;
  result = (double)p;
  v_5 = (float)((0LL - v_11) - (long long)(result * (double)((int)(~ v_13) / (
                                                             (19 | p_15) + 233))));
  result = (double)((int)p + (int)v);
  v = (signed char)((int)((unsigned char)v_5) % 154);
  result = ((-18659. / (result + 508.)) / ((double)(~ ((int)p << ((int)v & 7))) + 81.)) / 1.84467440735e+19;
  return result;
}


