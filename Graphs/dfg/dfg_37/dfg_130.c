#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 172068955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p[2][4][2], float p_9, unsigned long long p_11, double p_15)
{
  unsigned long v_21;
  float v_19;
  int v_17;
  long long v_13;
  double v_7;
  long long v_4;
  long long v;
  char result;
  v_21 = 4294924123UL;
  v_19 = 511.579467773f;
  v_17 = 923619637;
  v_13 = 13228LL;
  v_7 = -2821427881.39;
  v_4 = (long long)((2324. / (((double)(- p_11) + - p_15) + 727.)) * (double)(
                    (unsigned long)(~ (! v_17)) + (unsigned long)(- v_19) * (
                                                  329365935UL / (v_21 + 599UL))));
  v = (long long)(- ((unsigned long long)(! (43673U % ((unsigned int)v_7 + 721U))) + (
                     p_11 - (unsigned long long)v_13)));
  v_7 = (double)(! ((long long)p_9 / (v % -8355LL + 246LL)) - (long long)(- (- (- p[0][1][0]))));
  result = (char)((~ (v + v_4) * (long long)(- (p[1][3][1] - v_7))) / 30947LL);
  return result;
}


