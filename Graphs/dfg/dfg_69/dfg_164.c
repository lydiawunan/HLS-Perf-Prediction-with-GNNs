#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 420299228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned char p_7, float p_15)
{
  double v_17;
  unsigned long long v_13;
  unsigned long v_11;
  long v_9;
  long long v_5;
  unsigned int v;
  char result;
  v_17 = -6560252003.11;
  v_13 = 18446744073180048277ULL;
  v_11 = (unsigned long)p_15;
  v_5 = 517006670LL;
  result = (char)p;
  v_9 = (long)(((double)((long)(p_15 - -1.66267638733e+38f) - -22587L) * v_17) / (
               ((double)result + - ((double)v_5 + p)) + 218.));
  v_5 = v_5;
  v = (unsigned int)(((unsigned long)v_9 % (- v_11 + 341UL)) % (unsigned long)(
                     ~ (619159276L << (v_13 & 31ULL)) + 45L));
  result = (char)(~ (~ v) % (unsigned int)(((int)((unsigned char)(p + (double)v_5)) - (int)(- p_7)) + 869) & (unsigned int)p_7);
  return result;
}


