#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1022735419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, unsigned long p_9, unsigned short p_11, double p_13,
        short p_17)
{
  short v_21;
  short v_19;
  char v_15;
  unsigned char v_7;
  long v_5;
  int v;
  int result;
  v_21 = p_17;
  v_19 = (short)-28018;
  v_15 = (char)p_17;
  v_7 = (unsigned char)p_9;
  v_5 = (long)p_11;
  result = (int)p_11;
  if (p_9 != (unsigned long)((38449 * (int)v_19 >> 18) ^ ((int)(~ v_21) - -99))) {
    v_7 = (unsigned char)((double)((unsigned long)p_17 - - p_9) + 2.57517026429e-08);
    v_15 = (char)1;
    v = (int)(~ v_15);
  }
  else {
    v_21 = (short)v_15;
    v_5 = (long)((int)v_21 / ((int)((short)p_13) + 812));
    v = (int)(! v_19);
  }
  while ((long)(1.95841937378e+38f - (float)v) != - (! ((long)p + v_5))) {
    result = (long long)v_7 / -63069LL;
    v_7 = (unsigned char)(p_13 - 0.);
    v_5 = (long)p_11;
    v = (int)(((unsigned long)2.34395632947e+38 >> (~ p_9 & 31UL)) * (
              3921329049UL % (p_9 + 990UL)));
  }
  while_0_break: ;
  return result;
}


