#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794454765
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p[1][5], short p_9)
{
  double v_13;
  short v_11;
  double v_7;
  unsigned long v_4;
  unsigned long long v;
  short result;
  v_13 = (double)p[0][1];
  v_4 = (unsigned long)p_9;
  v = 18446744073366685733ULL;
  v_7 = - (- ((double)(v_4 ^ 4269771988UL) + (v_13 + v_13)));
  v_11 = (short)((double)(- (! v)) * - (-63035. + - v_7));
  v_4 = 51937UL;
  result = (short)((v & (unsigned long long)((double)(! v_4) / ((double)p[0][4] / 2.27878157182e+38 + 147.))) % (unsigned long long)(
                   (int)v_7 % ((int)(- p_9) % ((int)(! v_11) + 390) + 236) + 287));
  return result;
}


