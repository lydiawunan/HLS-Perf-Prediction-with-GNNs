#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251296175
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[1][2][3], unsigned long p_7, double p_17)
{
  short v_19;
  unsigned char v_15;
  unsigned long long v_13;
  long v_11;
  char v_9;
  double v_5;
  unsigned long long v;
  double result;
  v_13 = 634580311ULL;
  v_11 = (long)p_7;
  v_9 = (char)33;
  v_5 = (double)p_7;
  v = (unsigned long long)p_17;
  result = -5119945680.56;
  v_19 = (short)(- (0. * (443110554. * p_17)));
  while ((double)(~ p[0][0][1]) * - ((double)v + v_5) != -3.23509148838e+37 + (
                                                         result - (double)(
                                                         p_7 + p_7))) {
    v_9 = (unsigned long)v_9 / 4294927628UL;
    v_15 = (unsigned char)(v_13 % (unsigned long long)(((long)(- p_17) - 
                                                        v_11 / (long)(
                                                        (int)v_19 + 452)) + 413L));
    v_13 = (unsigned long long)(((double)v_15 / 7458673242.03 - (double)(
                                 v + p[0][1][2])) + p_17);
    v = ((unsigned long long)(p_7 / 4294967283UL) | ~ v_13) + 18446744073682170460ULL;
  }
  while_0_break: ;
  return result;
}


