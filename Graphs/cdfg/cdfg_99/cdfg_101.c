#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764261976
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p[4][5][1], signed char p_9, double p_11,
           unsigned long p_15[3][5])
{
  char v_21;
  double v_19;
  unsigned short v_17;
  int v_13;
  float v_7;
  unsigned char v_4;
  unsigned int v;
  double result;
  v_21 = (char)-1;
  v_19 = -669.330142379;
  v_17 = (unsigned short)6188;
  v_4 = (unsigned char)p_15[0][2];
  v_13 = (int)(- p_11);
  if ((int)7.75761491982e+37 - (((int)v_21 - (int)v_17) + (int)(-64109. * v_19)) == (
      (int)(-27. - p_11) & p[2][0][0])) {
    v_7 = (float)(- (p_11 * -1.36560977031e+38) / ((double)v_13 + 270.));
    v = ((unsigned int)(p[0][0][0] / -43) & ((unsigned int)-927.882141113f + 751391530U)) % (
        (unsigned int)(- v_7 + (float)p_9) + 88U);
    result = (double)((((unsigned long)v - 49682UL) + (unsigned long)(
                       16 % ((int)v_4 + 561))) * (unsigned long)(~ p[3][1][0] * 359201983));
  }
  else {
    result = v_19;
    v = (unsigned int)(- (- result) + -2876867704.);
    result = (double)((unsigned long)v - (p_15[1][2] - p_15[0][4]) % (unsigned long)(
                                         (int)v_17 + 36));
  }
  return result;
}


