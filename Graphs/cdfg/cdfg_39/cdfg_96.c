#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475284018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned long p_9, float p_11)
{
  unsigned int v_15;
  char v_13;
  long v_7;
  unsigned long long v_5;
  double v;
  long long result;
  v_13 = (char)p_11;
  v_7 = p;
  v_5 = (unsigned long long)p_9;
  v = -454.580456179;
  while (- ((v_5 / (unsigned long long)(v_7 + 619L)) * 11199ULL) <= (unsigned long long)(
         - (~ p_9) / 696UL)) {
    v_15 = (int)v_13 & 751158722;
    v_13 = (char)p;
    v = (double)v_5;
    v_5 = (unsigned long long)(- (p_11 + (float)v_15) / ((float)((long)8427449601.14 & ~ p) + 43.f));
  }
  while_0_break: ;
  result = (long long)(! ((int)((unsigned char)((double)p * v)) + 99));
  return result;
}


