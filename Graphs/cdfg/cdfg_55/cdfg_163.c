#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 726204989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned long p_7, unsigned char p_9[5][2][5],
          unsigned long p_13, unsigned int p_17)
{
  signed char v_15;
  short v_11;
  signed char v_4;
  double v;
  short result;
  v_11 = (short)p_17;
  v_4 = (signed char)p;
  v_15 = (signed char)(~ (236 % ((int)p_9[4][0][2] + 987)));
  if (((unsigned long)(- v_11) ^ ! (p_13 / (unsigned long)((int)v_15 + 744))) == (unsigned long)(
      (4294967287U % (p_17 + 555U)) % (unsigned int)((int)p + 17) - 8875U)) {
    v = (double)(- p);
    v = - (- ((double)v_4 - v));
    result = (short)v;
  }
  else result = (short)(- (p_7 - 3314425623UL) * (unsigned long)(! p_9[2][1][0]));
  return result;
}


