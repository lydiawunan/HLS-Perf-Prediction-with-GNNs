#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 743750950
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, long long p_11)
{
  long long v_9;
  char v_7;
  float v_5;
  double v;
  double result;
  v_9 = p_11;
  v_7 = (char)56;
  v_5 = (float)p;
  v = 552.501156302;
  while ((long)v_7 < -59038L) {
    v_5 = v_9 & -110LL;
    v_9 = (long long)(! (char)-72);
    v = (double)(- (- ((long long)p % (p_11 + 874LL))));
    v_7 = (char)(! (! v_9));
  }
  while_0_break: ;
  result = ((double)p / (v + 80.)) / (double)(v_5 + 917.f) + 0.;
  return result;
}


