#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 492024362
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, short p_11[3])
{
  unsigned long long v_13;
  unsigned char v_8;
  int v_6;
  unsigned short v_4;
  unsigned short v;
  int result;
  v_13 = (unsigned long long)p_11[2];
  v_6 = (int)p;
  result = -160105674;
  v_8 = (unsigned char)v_13;
  v = (unsigned short)(7974833664.f + (float)(~ ((unsigned long)(~ p_11[0]) % (
                                                 (unsigned long)result / 3465992221UL + 133UL))));
  v_4 = (unsigned short)(~ (~ (4120829375UL / (unsigned long)((int)p + 496))) | 22523687UL);
  result = (int)((unsigned long)(~ (((int)v | (int)v) & 1010726382 * (int)v_4)) % (
                 ((4294946531UL * (unsigned long)result >> (v_6 & 31)) + (unsigned long)(
                  233140901 / ((int)v_8 + 573))) + 445UL));
  return result;
}


