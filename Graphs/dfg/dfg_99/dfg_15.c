#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 782614114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[1][3][4], long long p_7[4], unsigned long long p_15)
{
  short v_17;
  unsigned int v_13;
  signed char v_11;
  double v_9;
  short v_4;
  long v;
  short result;
  v_17 = (short)p[0][1][2];
  v_13 = (unsigned int)p[0][0][0];
  v_11 = (signed char)21;
  v_9 = 3.48305862035e+37;
  v = (long)p_7[1];
  v_4 = (short)(((unsigned long long)(82. / (v_9 + 8.) - p[0][0][3]) - 
                 (unsigned long long)((unsigned int)v_11 / (v_13 + 347U)) / (
                 p_15 + 133ULL)) % (unsigned long long)((int)v_17 + 21));
  v_4 = v_4;
  result = (short)((long long)(v % (long)((int)v_4 + 492) + (long)((int)((short)(- p[0][1][1])) / (
                                                                   (int)v_4 + 954))) | 
                   0LL / ((284347624LL % (p_7[3] + 674LL)) % 4294937252LL + 848LL));
  result = result;
  return result;
}


