#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 366199462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, float p_5, signed char p_9, double p_11,
          short p_19[5][4][4])
{
  int v_29;
  unsigned long v_27;
  double v_25;
  int v_23;
  unsigned long v_21;
  signed char v_17;
  double v_15;
  unsigned long v_13;
  signed char v_7;
  long v;
  float result;
  v_29 = -301510088;
  v_27 = (unsigned long)p_19[2][1][3];
  v_25 = -521.274708012;
  v_23 = (int)p_19[2][2][2];
  v_21 = 3319842891UL;
  v_15 = 1.33649618154e+37;
  v_7 = (signed char)-68;
  result = -6212517888.f;
  v_17 = (signed char)((long)result / -39826L - ~ ((long)v_29 - 261205925L) / (long)(
                                                (int)p_19[4][2][2] + 736));
  v_13 = (unsigned long)((unsigned long long)(- (- p_11 / ((double)(18446744072792431520ULL - (unsigned long long)v_21) + 303.))) - (
                         (314200517ULL + (unsigned long long)v_23) / (
                         (unsigned long long)(- v_25) + 522ULL) - (unsigned long long)(
                         - v_27 - (unsigned long)v_29)));
  v = (long)((int)((signed char)((p_5 - p) * (float)(v_13 + v_13) + (
                                 (float)((int)((signed char)v_15) / (
                                         (int)v_17 + 496)) + (float)p_19[0][0][0] * p_5))) - (int)p_9);
  result = (float)((double)(v % ((long)(p / (p_5 + 505.f)) + 670L) & (long)v_7) - 
                   ((double)((float)p_9 + p) / ((p_11 - p_11) + 963.)) * (double)(
                   (long long)(- v_13) * -1072834687LL));
  return result;
}


