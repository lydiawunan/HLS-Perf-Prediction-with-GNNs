#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687366039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, signed char p_11[5][3][3], unsigned int p_15)
{
  short v_13;
  short v_9;
  unsigned int v_7;
  double v_5;
  unsigned long v;
  unsigned int result;
  v_13 = (short)p_15;
  v_7 = p_15;
  v_5 = -1.25301138055e+38;
  v = 4294933867UL;
  result = 14540U;
  while ((201UL % ((unsigned long)result / (v + 46UL) + 606UL)) % (unsigned long)(
         ! result + 982U) >= (unsigned long)(p % 339U)) {
    v_9 = v_7 | (unsigned int)v_5 * 3800985251U;
    v_9 = (short)(~ (((unsigned int)-829.103271484f + p_15) + (unsigned int)(
                     (int)v_9 / ((int)p_11[2][0][2] + 140))));
    v_5 = (double)(! 0U);
    result = (unsigned int)((((int)p_11[4][2][1] - (int)p_11[1][1][2]) - (int)v_13) / (
                            (int)p_11[3][1][0] + 472));
  }
  while_0_break: ;
  return result;
}


