#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 242061855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, long p_9, long long p_13[1][4])
{
  long long v_11;
  unsigned short v_7;
  unsigned short v_4;
  double v;
  double result;
  v_4 = (unsigned short)32820;
  v = (double)p_9;
  result = (double)p;
  v_11 = (long long)(! (((int)v_4 / ((int)((unsigned short)(- result)) + 295)) / (
                        (int)((double)(p_13[0][3] - p_13[0][2]) + - result) + 567)));
  result = (double)(v_11 + (long long)((p_9 / 116L) % ((long)((double)p_9 / (
                                                              v + 302.)) + 298L) - 72L));
  v_7 = (unsigned short)(p_9 - (long)v);
  result = (6128. - (v - v * result)) * (double)(20020L + (long)(- v_4) / (
                                                          p * (long)v_7 + 611L));
  return result;
}


