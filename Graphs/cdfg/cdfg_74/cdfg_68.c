#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641059224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[4][1], float p_4[1][3], long long p_7, double p_17)
{
  unsigned short v_19;
  long long v_15;
  unsigned long v_13;
  unsigned long long v_11;
  double v_9;
  short v;
  int result;
  v_19 = (unsigned short)27231;
  v_15 = 49096LL;
  v_11 = (unsigned long long)p_4[0][2];
  v = (short)-10572;
  result = (int)p_17;
  v_9 = (double)(((long long)-3.19664612435e+38 * p_7 << (p_7 & 63LL)) * (long long)(
                 ((int)((unsigned short)p_17) - (int)v_19) + (int)v_19 / (
                                                             (int)((unsigned short)-2.82490012105e+38) + 104)));
  while ((long long)(! (28426 ^ (int)p[3][0]) * (int)((-860.51739502f + p_4[0][2]) / (
                                                      p_4[0][0] + 403.f))) >= 
         (long long)(~ v) % ((long long)p[1][0] / (p_7 + 375LL) + 756LL) - -5264444LL) {
    v_13 = v_11 - (unsigned long long)(v_9 - 24263.);
    v_9 = (double)(31197LL / (p_7 + 23LL) << (3LL % (! v_15 + 551LL) & 63LL));
    result = (int)v_13;
    v = (short)-2654;
  }
  while_0_break: ;
  return result;
}


