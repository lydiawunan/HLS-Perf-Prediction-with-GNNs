#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 522241551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p[4], unsigned long p_5[1][3], unsigned char p_7,
                   double p_9[4][2], unsigned short p_15[5])
{
  long v_13;
  double v_11;
  int v;
  unsigned short result;
  v_13 = 607898885L;
  if ((double)(18911L + v_13 / (long)((int)p_15[3] + 419)) / ((0. - p_9[0][1]) + 269.) >= (double)(
      (int)p_7 * -16473)) v_11 = (double)-9000265L;
  else v_11 = -9.69670895915e+37;
  if (v_11 <= 5.) result = (unsigned short)p[0];
  else {
    v = -921647992;
    result = (unsigned short)((double)((float)(! v) / 1659.18664551f) / (
                              ((double)(p_5[0][2] * (unsigned long)p_7) + p_9[0][1]) + 777.));
  }
  return result;
}


