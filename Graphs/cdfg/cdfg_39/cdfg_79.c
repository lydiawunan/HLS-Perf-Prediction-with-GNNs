#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 754294071
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, int p_11, double p_13)
{
  double v_9;
  double v_6;
  float v_4;
  double v;
  double result;
  v_6 = (double)p;
  v_4 = -70.0973205566f;
  v_9 = - v_6 / ((double)(! (-8888 % ((int)((short)p_13) + 177))) + 615.);
  if (1002903242LL >= (long long)((unsigned long)((int)((unsigned char)(
                                                  v_9 + (double)p_11)) / 272) % 6UL)) 
    result = (double)52790UL;
  else {
    v_6 = (double)(- (~ ((long)p / 1050947481L)));
    v = (double)(- (- v_4)) / ((73. + v_6) + 890.);
    result = v;
  }
  return result;
}


