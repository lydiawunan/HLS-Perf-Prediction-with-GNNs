#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403853980
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p[3][1], signed char p_9, char p_13,
          unsigned short p_19)
{
  double v_23;
  unsigned int v_21;
  double v_17;
  unsigned long v_15;
  unsigned char v_11;
  short v_7;
  long long v_5;
  unsigned char v;
  short result;
  v_23 = 2.7686343999e+38;
  v_21 = 5300128U;
  v_17 = (double)p_19;
  v_15 = (unsigned long)p_9;
  v_11 = (unsigned char)163;
  v_7 = (short)-30289;
  v_5 = (long long)p_13;
  v = (unsigned char)p_9;
  result = (short)27899;
  while (- (((int)v_7 << ((int)v_11 & 15)) % 1039641578) != (int)(- (
         (float)(! v_15) / 986909120.f))) {
    v_7 = v_23 * -5886.;
    v_21 = v_21;
    result = (short)p_9;
    v_11 = (unsigned char)(~ (((unsigned long)p_9 % 8042UL) / (unsigned long)(
                              (int)v / ((int)p_19 + 17) + 719)));
  }
  while_0_break: ;
  while ((long long)(! (-461475789 | (int)p[2][0])) % ((long long)v * (
                                                       (long long)v / (
                                                       v_5 + 676LL)) + 335LL) < (long long)(
         (unsigned int)(! ((int)v % ((int)v_7 + 347))) + (165362916U / (unsigned int)(
                                                          (int)p_9 + 935) ^ (unsigned int)(
                                                          (int)v_11 - (int)p_13)))) {
    v_11 = (unsigned char)(~ ((long long)(! result) * ((long long)p_19 / (
                                                       v_5 + 278LL))));
    result = (short)v_17;
    v = (unsigned char)(~ ((unsigned long)((int)v_7 % ((int)p_9 + 524)) / (
                           4118549809UL / (v_15 + 110UL) + 628UL)));
  }
  while_0_break_0: ;
  return result;
}


