#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391944534
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[1][1], double p_4, unsigned char p_6[5][1][4],
                unsigned char p_15, char p_19)
{
  double v_17;
  signed char v_13;
  long long v_11;
  int v_9;
  unsigned long v;
  signed char result;
  v_17 = (double)p_15;
  v_13 = (signed char)p[0][0];
  v_11 = (long long)p_15;
  v_9 = (int)p[0][0];
  v = (unsigned long)p[0][0];
  result = (signed char)(-446787276LL + - v_11);
  while (((double)p[0][0] * p_4) / 612. + (double)(985522323UL + (unsigned long)p_6[1][0][0] % (
                                                                 v + 1011UL)) != (double)v) {
    v_9 = (long long)v_13 * (v_11 - (long long)v_9);
    v_13 = (signed char)p_19;
    v_13 = (signed char)((int)(- p_4) % ((11109 % ((int)p_6[1][0][0] + 576) & (int)v_13) + 549));
    v = (unsigned long)(((double)((int)((unsigned char)p_4) + (int)p_6[0][0][1]) - 
                         (double)p_15 * v_17) / -302897.);
  }
  while_0_break: ;
  return result;
}


