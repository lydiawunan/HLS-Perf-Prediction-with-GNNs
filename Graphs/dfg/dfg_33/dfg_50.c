#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205775878
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, double p_7, unsigned int p_9,
                       double p_15, int p_17[1][4][4])
{
  short v_21;
  long v_19;
  unsigned char v_13;
  unsigned long v_11;
  unsigned char v_4;
  unsigned int v;
  unsigned long long result;
  v_21 = (short)p;
  v_13 = (unsigned char)142;
  v_11 = 3556620297UL;
  v = 4294953079U;
  v_19 = (long)(- ((int)p / ((~ p_17[0][0][0] - (int)p_7) + 173)));
  v_4 = (unsigned char)(18664U * (v / (unsigned int)((int)v_13 + 1006)));
  v = (unsigned int)((v_11 - (v_11 - (unsigned long)v_13) / ((unsigned long)(
                                                             p_15 / (
                                                             (double)p_17[0][0][3] + 201.)) + 619UL)) * (unsigned long)(
                     (int)(- (- p_15)) + (int)(-2.67672537642e+38 / (
                                               (double)v_19 + 889.)) / (
                                         (int)v_21 % (p_17[0][0][2] + 773) + 566)));
  result = (unsigned long long)(- (38616U - v % (unsigned int)((int)v_4 + 502)) - (unsigned int)(
                                (double)p + (- p_7 - (double)(4294907611U + p_9))));
  return result;
}


