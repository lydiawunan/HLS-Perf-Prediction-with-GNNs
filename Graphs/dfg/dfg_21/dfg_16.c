#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 154319506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[5], int p_4, long long p_6, long long p_9[3][3],
         unsigned int p_13[2])
{
  int v_15;
  long v_11;
  double v;
  long result;
  v_15 = 41217;
  result = (long)p_4;
  v_11 = (long)(! ((long long)(! p_13[0] % (p_13[1] + 595U)) - (785673322LL - (long long)(
                                                                v_15 / (
                                                                p_4 + 66)))));
  result = (long)(- ((unsigned long long)result * ((unsigned long long)p_9[2][1] * 116338328ULL - (unsigned long long)(~ v_11))));
  v = (double)(! (-(unsigned char)182));
  result = (long)((long long)((p[4] % (p[2] + 396U)) % (- p[1] + 295U) << (
                              -376771604L * result & 31L)) - ((long long)p_4 - 
                                                              ~ p_6 / (
                                                              p_6 % (
                                                              (long long)v + 251LL) + 561LL)));
  return result;
}


