#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 634650148
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned long long p_4[1][2][3], float p_7, long p_11)
{
  long v_13;
  short v_9;
  unsigned long v;
  double result;
  v_13 = -12270L;
  v_9 = (short)p_11;
  v = 830294218UL;
  result = -2.41855579146e+38;
  if (111L > ! (p_11 + v_13) * - (- p_11)) result = (double)(~ (unsigned short)27320);
  else {
    v = (unsigned long)(((result / ((double)v + 637.)) / ((double)(59102L % (long)(
                                                                   (int)v_9 + 210)) + 732.)) / 597.510620117);
    result = (double)4202824957ULL;
    result = (double)((unsigned long long)(~ v) * 18446744073709537479ULL + (unsigned long long)(
                      (long long)((double)p_7 / (result + 344.)) & (long long)-3.92814207466e+37 % 477942043LL));
  }
  if (p_4[0][0][1] != (unsigned long long)result) {
    result = (double)(! (- p));
    result = - (-9479903232. * result);
  }
  else result = (double)(753530216LL / (long long)((50972 + (int)-2.69359661003e+38) + 331));
  return result;
}


