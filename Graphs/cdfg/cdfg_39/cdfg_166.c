#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 858943514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[3][3], short p_5, int p_9[2][3], unsigned char p_15,
                double p_19)
{
  short v_21;
  unsigned long v_17;
  int v_13;
  signed char v_11;
  short v_7;
  int v;
  signed char result;
  v_21 = (short)p[0][2];
  v_17 = 569694376UL;
  v_13 = -329209474;
  result = (signed char)75;
  if ((int)((short)p_19) < (int)v_21) {
    v_7 = (short)result;
    v_11 = (signed char)((unsigned long)((v_13 + (int)p_5) - (int)(- p_15)) * (
                         (v_17 - (unsigned long)-3.00691468458e+38f) - 3895567049UL));
    v = - (- (p_9[1][0] % ((int)v_11 + 31)));
  }
  else {
    v = p_9[1][1];
    v_7 = (short)(- (! ((int)p_5 + (int)p[0][0])));
    v = (int)(p_19 + (double)(! (v / ((int)v_7 + 149))));
  }
  if ((double)p[2][1] < - (((double)v - 1.95249194043e+38) * (double)(
                           (int)p_5 - (int)v_7))) result = (signed char)126;
  else result = (signed char)p[2][0];
  return result;
}


