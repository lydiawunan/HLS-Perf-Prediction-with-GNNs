#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 47713474
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long p_13, signed char p_15[1][4][3])
{
  int v_11;
  long long v_9;
  long v_7;
  double v_5;
  long long v;
  signed char result;
  v_11 = 44021;
  v_9 = -26255LL;
  v_5 = 1.30698049941e+38;
  v = (long long)p_13;
  result = p_15[0][2][0];
  v_7 = (long)(- ((unsigned int)1.68081201205e+38 / 47091U));
  while ((double)v <= p / ((v_5 - (double)((long)p % (v_7 + 293L))) + 679.)) {
    v_11 = (unsigned int)v_11 % 4149756814U;
    v_5 = (double)(~ ((unsigned long long)(- p_15[0][0][2]) / (652705680ULL % (unsigned long long)(
                                                               p_13 + 89UL) + 530ULL)));
    v = (long long)p;
    v_7 = (long)((v % (v_9 + 48LL) | (long long)(~ p_13)) % (long long)(
                 p_13 + 412UL));
  }
  while_0_break: ;
  return result;
}


