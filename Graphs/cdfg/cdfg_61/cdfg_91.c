#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 752977279
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p)
{
  unsigned long v_15;
  long long v_13;
  float v_10;
  unsigned char v_8;
  long v_6;
  unsigned short v_4;
  int v;
  signed char result;
  v_13 = 15343LL;
  v_10 = 672.499633789f;
  v_8 = (unsigned char)124;
  v_6 = -184309555L;
  v_4 = (unsigned short)49229;
  v = (int)p;
  result = (signed char)-109;
  v_15 = (unsigned long)(v_13 % ((long long)((double)v_8 * - p) + 480LL));
  while ((v & 35972) >= ((int)result | (int)v_4)) {
    v = (long)v_8 + v_6 * -13582L;
    v_6 = (long)(- (- (p - (double)v_15)));
    v_4 = (unsigned short)((long long)((p * -779.578186035) * (p + 35.)) + v_13);
    result = (signed char)v_10;
  }
  while_0_break: ;
  return result;
}


