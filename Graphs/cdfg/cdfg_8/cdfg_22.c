#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 364597464
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p)
{
  int v_12;
  int v_10;
  char v_8;
  unsigned char v_6;
  unsigned int v_4;
  long v;
  long long result;
  v_10 = (int)p;
  v_8 = (char)122;
  v_6 = (unsigned char)p;
  v = -56044L;
  result = 796049251LL;
  v_4 = (unsigned int)v_10;
  while ((unsigned int)((double)(~ ((unsigned long)v / (unsigned long)(
                                    v_4 + 135U))) - (4186005593.9 + (double)(
                                                     (int)((char)1.98902532704e+38f) + -110))) > 698654065U) {
    v_6 = v_10 & (int)((double)v_8 - (double)v_6 * 8.41463886957e+37);
    v_12 = (int)v;
    result = (long long)p;
    v_4 = (unsigned int)v_12;
  }
  while_0_break: ;
  return result;
}


