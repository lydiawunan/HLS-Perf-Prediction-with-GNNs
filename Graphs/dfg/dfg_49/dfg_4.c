#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 60525176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_5[1][4], unsigned char p_7,
        unsigned char p_11)
{
  unsigned long v_9;
  long long v;
  int result;
  v = -14295LL;
  result = (int)(- ((long long)((int)p_5[0][0] + (int)p_5[0][1]) / (~ v + 817LL)) % (
                 ((long long)(~ (- p_11)) - (((long long)p + v) + 8189LL)) + 576LL));
  v = (long long)271.757537842f;
  v_9 = (unsigned long)(~ (~ result - (int)p_7));
  result = (int)((((long long)p - v) ^ (long long)p_5[0][1]) % (long long)(
                 (112 + result % ((int)p_7 + 157)) + 46) >> (- (! v_9) & 63UL));
  return result;
}


