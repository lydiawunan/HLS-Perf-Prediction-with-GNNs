#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 650014484
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, short p_4, unsigned long long p_6[3][2],
          unsigned long p_8, short p_11)
{
  signed char v_19;
  unsigned long v_17;
  unsigned char v_15;
  long v_13;
  signed char v;
  float result;
  v_15 = (unsigned char)50;
  v_13 = -680224044L;
  v = (signed char)p_11;
  result = -2.61579113167e+38f;
  while ((float)(- (! ((int)v + (int)p_11))) <= 411.786804199f) {
    v_17 = (int)v_15 ^ 14410;
    v_19 = (signed char)(! 26970LL);
    v_15 = (unsigned char)v_19;
    v = (signed char)(v_17 % ((unsigned long)v_13 * 9UL + 735UL));
  }
  while_0_break: ;
  result = (float)(- ((unsigned long)(- result) % 21687UL));
  return result;
}


