#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 25318985
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p[2][4][1], int p_9)
{
  char v_15;
  int v_13;
  short v_11;
  unsigned long long v_7;
  unsigned char v_5;
  double v;
  unsigned long result;
  v_15 = (char)p_9;
  v_13 = p_9;
  v_11 = (short)17364;
  v_7 = (unsigned long long)p[0][2][0];
  v_5 = (unsigned char)214;
  v = (double)p_9;
  result = (unsigned long)((-928965191L - (long)((int)((short)p[0][0][0]) + (int)v_11)) + (long)(
                           (int)((short)(p[0][0][0] - -796.554260254)) - (int)(~ v_11)));
  while (p[0][0][0] - (v + -17014.) / ((double)((int)v_5 % ((int)v_5 + 494)) + 8.) >= 
         (double)((unsigned long long)v - v_7) * p[0][3][0] + (double)(
         4294939551U / (unsigned int)(p_9 % ((int)v_11 + 596) + 687))) {
    v_13 = (int)v_15 * (v_13 / -1269357699);
    v = (double)(! (- ((int)v_5 % ((int)v_11 + 1005))));
    v_15 = (char)p_9;
    v_7 = (unsigned long long)v_5;
  }
  while_0_break: ;
  return result;
}


