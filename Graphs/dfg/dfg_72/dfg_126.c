#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 437775283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned char p_5, unsigned int p_9[5][4][3], long long p_11,
        signed char p_13)
{
  double v_15;
  char v_7;
  long long v;
  int result;
  v_15 = (double)p_11;
  v = p_11;
  v_7 = (char)-72;
  v = ~ ((long long)(! v_7) / (((long long)p_9[3][3][1] + p_11) + 930LL) >> (
         (long long)((double)v / (((double)p_13 - v_15) + 511.)) & 63LL));
  v = v;
  result = (int)(- ((long long)((int)((signed char)-3089330748.3) - 24) % (
                    v % (long long)((int)p + 627) + 119LL) & (long long)(- (- p_5))));
  return result;
}


