#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231264599
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, float p_13)
{
  int v_10;
  unsigned short v_8;
  double v_6;
  long long v_4;
  long long v;
  unsigned char result;
  v_10 = (int)p;
  v_8 = (unsigned short)p_13;
  v_6 = (double)p_13;
  v = 62112LL;
  v_4 = -87LL;
  result = (unsigned char)((float)(((int)((unsigned short)v_6) - (int)v_8) * (int)(
                                   (float)v_10 - p) ^ (int)p_13) - 5.99840652349e+37f);
  v |= 53692LL / (v_4 + 133LL);
  result = (unsigned char)(483600597L / (long)(~ ((int)result >> ((long long)result * v & 7LL)) + 583));
  return result;
}


