#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 438967946
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, short p_7, unsigned short p_9,
                  float p_11[2][2][5], unsigned long long p_13)
{
  short v_21;
  double v_19;
  int v_17;
  unsigned char v_15;
  unsigned int v_5;
  char v;
  unsigned long result;
  v_21 = (short)p;
  v_19 = (double)p_11[0][1][0];
  v_15 = (unsigned char)210;
  v_17 = - ((int)(p_11[0][0][4] * - p_11[0][1][3]) + ! ((int)v_21 + (int)((short)v_19)));
  v_5 = (unsigned int)v_19;
  v = (char)((! (v_5 % (unsigned int)((int)p_7 + 199)) - (unsigned int)(
              (int)p_9 / -116)) / ((unsigned int)(- ((p_11[0][0][3] * (float)p_13) / (
                                                     (float)((int)v_15 % (
                                                             v_17 + 305)) + 282.f))) + 182U));
  result = (unsigned long)(! (~ ((unsigned int)v - 43001U) & 206U / (
                                                             ~ p + 363U)));
  return result;
}


