#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181763019
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, double p_5, unsigned char p_7[3][1],
           float p_11[3])
{
  unsigned short v_13;
  unsigned int v_9;
  unsigned char v;
  double result;
  v_9 = (unsigned int)p_7[2][0];
  result = -160.821050597;
  v_13 = (unsigned short)result;
  v_13 = v_13;
  v = (unsigned char)((long long)p_7[0][0] * ((long long)(v_9 << ((unsigned int)p_11[1] & 31U)) / (
                                              (21915LL + (long long)v_13) * 100430535LL + 842LL)));
  result = (double)((long long)(! (! (- p))) % (-35809LL % ((43394LL & (long long)(
                                                             (int)v + (int)((unsigned char)p_5))) + 371LL) + 851LL));
  return result;
}


